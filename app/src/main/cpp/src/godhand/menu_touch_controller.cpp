#include "menu_touch_controller.h"
#include "menu_touch_addresses.h"
#include "godhand/frame_patches.h"
#include "godhand_patches_mobile.h"
#include <cstring>
#include <cmath>
#include <algorithm>
#include <android/log.h>

#define LOG_TAG "GodHandMenuTouch"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)

namespace ps2_pad {
    void setHostTouchInputState(uint32_t buttonMask, float lx, float ly, float rx, float ry);
    uint32_t getButtons();
}

namespace godhand::menu_touch {

namespace {

constexpr size_t kTouchQueueCapacity = 32;

struct TouchRingBuffer {
    MenuTouchEvent events[kTouchQueueCapacity];
    std::atomic<uint32_t> head{0};
    std::atomic<uint32_t> tail{0};

    bool push(const MenuTouchEvent& ev) {
        const uint32_t h = head.load(std::memory_order_relaxed);
        const uint32_t t = tail.load(std::memory_order_acquire);
        if (((h + 1) % kTouchQueueCapacity) == t) {
            return false;
        }
        events[h] = ev;
        head.store((h + 1) % kTouchQueueCapacity, std::memory_order_release);
        return true;
    }

    bool pop(MenuTouchEvent& ev) {
        const uint32_t t = tail.load(std::memory_order_relaxed);
        const uint32_t h = head.load(std::memory_order_acquire);
        if (t == h) {
            return false;
        }
        ev = events[t];
        tail.store((t + 1) % kTouchQueueCapacity, std::memory_order_release);
        return true;
    }

    void clear() {
        head.store(0, std::memory_order_relaxed);
        tail.store(0, std::memory_order_relaxed);
    }
};

static TouchRingBuffer s_queue;
static std::atomic<bool> s_enabled{true};
static std::atomic<uint32_t> s_activeMenuState{MENU_NONE};
static std::atomic<bool> s_pendingBack{false};

// Shared debug state for Kotlin overlay
static std::atomic<int32_t> s_dbgScreenId{0};
static std::atomic<int32_t> s_dbgSubState{0};
static std::atomic<int32_t> s_dbgCurIdx{0};
static std::atomic<int32_t> s_dbgScrollTop{0};
static std::atomic<int32_t> s_dbgLastTapId{-999};
static std::atomic<int32_t> s_dbgPendingTargetId{-999};

// EE main-thread tracking state
static uint8_t* s_rdram = nullptr;
static int32_t  s_pressedButtonId = -999;
static float    s_downPs2X = 0.0f;
static float    s_downPs2Y = 0.0f;
static bool     s_isDragging = false;
static float    s_accumulatedScrollX = 0.0f;
static float    s_accumulatedScrollY = 0.0f;
static uint32_t s_lastActiveMenuState = MENU_NONE;

// Frame-accurate multi-step button sequence engine
struct ButtonStep {
    uint16_t mask;
    int durationFrames;
};
static std::vector<ButtonStep> s_buttonQueue;
static int s_currentStepFrame = 0;

inline void queueButtonSequence(const std::vector<ButtonStep>& steps) {
    s_buttonQueue = steps;
    s_currentStepFrame = 0;
    if (!s_buttonQueue.empty()) {
        ps2_pad::setHostTouchInputState(s_buttonQueue[0].mask, 0.0f, 0.0f, 0.0f, 0.0f);
    }
}

inline void queueSingleButton(uint16_t mask, int durationFrames = 2) {
    queueButtonSequence({ {mask, durationFrames}, {0, 1} });
}

// Read-back verification state machine
enum class VerifyType : uint8_t {
    NONE = 0,
    TITLE_CAROUSEL,
    TITLE_DIFFICULTY,
    PAUSE_ROOT,
    TECH_SLOT,
    TECH_ROW,
    ROULETTE_SLOT,
    ROULETTE_ROW,
    OPTIONS_ROW,
    STAGE_MAP_BTN
};

static bool        s_pendingVerify = false;
static VerifyType  s_pendingVerifyType = VerifyType::NONE;
static int32_t     s_pendingTargetId = -999;
static uint32_t    s_pendingSubMgr = 0;
static int         s_verifyWaitFrames = 0;
static int         s_saveLoadSlot = 0;
static int32_t     s_stageMapCursor = 0;
static int32_t     s_lastTechSlotTapped = 0;
static int32_t     s_dialogArrowState = 1; // 0 = YES, 1 = NO (God Hand confirmation dialogs default to NO)

// Hitbox overrides from real-time crop editor
struct HitboxOverride {
    int32_t screenId;
    int32_t subState;
    int32_t buttonId;
    Rect2D rect;
};
static std::vector<HitboxOverride> s_hitboxOverrides;
static std::mutex s_overrideMutex;

bool checkHitbox(int32_t screenId, int32_t subState, int32_t buttonId, const Rect2D& defRect, float ps2X, float ps2Y) {
    Rect2D r = defRect;
    {
        std::lock_guard<std::mutex> lock(s_overrideMutex);
        for (const auto& item : s_hitboxOverrides) {
            if (item.screenId == screenId && item.subState == subState && item.buttonId == buttonId) {
                r = item.rect;
                break;
            }
        }
    }
    return r.contains(ps2X, ps2Y);
}

} // namespace

void setHitboxOverride(int32_t screenId, int32_t subState, int32_t buttonId, float x0, float y0, float x1, float y1) {
    std::lock_guard<std::mutex> lock(s_overrideMutex);
    for (auto& item : s_hitboxOverrides) {
        if (item.screenId == screenId && item.subState == subState && item.buttonId == buttonId) {
            item.rect = {x0, y0, x1, y1};
            return;
        }
    }
    s_hitboxOverrides.push_back({screenId, subState, buttonId, {x0, y0, x1, y1}});
}

void clearHitboxOverrides() {
    std::lock_guard<std::mutex> lock(s_overrideMutex);
    s_hitboxOverrides.clear();
}

void setEnabled(bool enabled) {
    s_enabled.store(enabled, std::memory_order_relaxed);
}

bool isEnabled() {
    return s_enabled.load(std::memory_order_relaxed);
}

uint32_t getActiveMenuState() {
    return s_activeMenuState.load(std::memory_order_relaxed);
}

void getMenuDebugInfo(MenuDebugInfo* outInfo) {
    if (!outInfo) return;
    outInfo->screenId = s_dbgScreenId.load(std::memory_order_relaxed);
    outInfo->subState = s_dbgSubState.load(std::memory_order_relaxed);
    outInfo->curIdx = s_dbgCurIdx.load(std::memory_order_relaxed);
    outInfo->scrollTop = s_dbgScrollTop.load(std::memory_order_relaxed);
    outInfo->lastTapId = s_dbgLastTapId.load(std::memory_order_relaxed);
    outInfo->pendingTargetId = s_dbgPendingTargetId.load(std::memory_order_relaxed);
}

bool handleBackPressed() {
    const uint32_t state = s_activeMenuState.load(std::memory_order_relaxed);
    const uint32_t screenId = state & 0xFFFFu;
    if (screenId == MENU_NONE || (state & MENU_FLAG_LIVE_ROULETTE)) {
        return false;
    }
    // If on Title Screen and at root (Press Start: 1 or Main Menu: 2),
    // cannot go back further in the PS2 game -> return false so Android shows Quit dialog!
    if (screenId == MENU_TITLE && s_rdram) {
        uint32_t titleObj = findTitleObj(s_rdram);
        if (titleObj != 0) {
            const uint8_t titlePhase = s_rdram[(titleObj + kTitlePhaseOffset) & 0x01FFFFFFu];
            if (titlePhase <= 2) {
                return false;
            }
        } else {
            return false;
        }
    }
    s_pendingBack.store(true, std::memory_order_release);
    return true;
}

void queueTouchEvent(TouchAction action, float screenX, float screenY, float dx, float dy) {
    if (!s_enabled.load(std::memory_order_relaxed)) {
        return;
    }
    MenuTouchEvent ev;
    ev.action = action;
    ev.screenX = screenX;
    ev.screenY = screenY;
    ev.scrollDeltaX = dx;
    ev.scrollDeltaY = dy;
    s_queue.push(ev);
}

bool screenToPs2(float screenX, float screenY, float& outPs2X, float& outPs2Y) {
    uint32_t screenW = 1600u, screenH = 720u;
    godhand::mobile::getScreenDimensions(&screenW, &screenH);
    const int aspectMode = godhand::mobile::getAspectMode();

    const float W = static_cast<float>(screenW);
    const float H = static_cast<float>(screenH);
    if (W <= 0.0f || H <= 0.0f) {
        return false;
    }

    if (aspectMode == 2) {
        // Full Screen Stretch
        outPs2X = std::clamp(screenX * (640.0f / W), 0.0f, 640.0f);
        outPs2Y = std::clamp(screenY * (448.0f / H), 0.0f, 448.0f);
        return true;
    } else if (aspectMode == 0) {
        // 16:9 Standard Widescreen box
        constexpr float targetAspect = 16.0f / 9.0f;
        const float deviceAspect = W / H;
        if (deviceAspect >= targetAspect) {
            const float vpHeight = H;
            const float vpWidth = H * targetAspect;
            const float vpLeft = (W - vpWidth) * 0.5f;
            if (screenX < vpLeft || screenX > vpLeft + vpWidth) {
                return false;
            }
            outPs2X = std::clamp((screenX - vpLeft) * (640.0f / vpWidth), 0.0f, 640.0f);
            outPs2Y = std::clamp(screenY * (448.0f / vpHeight), 0.0f, 448.0f);
            return true;
        } else {
            const float vpWidth = W;
            const float vpHeight = W / targetAspect;
            const float vpTop = (H - vpHeight) * 0.5f;
            if (screenY < vpTop || screenY > vpTop + vpHeight) {
                return false;
            }
            outPs2X = std::clamp(screenX * (640.0f / vpWidth), 0.0f, 640.0f);
            outPs2Y = std::clamp((screenY - vpTop) * (448.0f / vpHeight), 0.0f, 448.0f);
            return true;
        }
    } else {
        // 4:3 Standard PS2 Pillarbox
        constexpr float targetAspect = 4.0f / 3.0f;
        const float deviceAspect = W / H;
        if (deviceAspect >= targetAspect) {
            const float vpHeight = H;
            const float vpWidth = H * targetAspect;
            const float vpLeft = (W - vpWidth) * 0.5f;
            if (screenX < vpLeft || screenX > vpLeft + vpWidth) {
                return false;
            }
            outPs2X = std::clamp((screenX - vpLeft) * (640.0f / vpWidth), 0.0f, 640.0f);
            outPs2Y = std::clamp(screenY * (448.0f / vpHeight), 0.0f, 448.0f);
            return true;
        } else {
            const float vpWidth = W;
            const float vpHeight = W / targetAspect;
            const float vpTop = (H - vpHeight) * 0.5f;
            if (screenY < vpTop || screenY > vpTop + vpHeight) {
                return false;
            }
            outPs2X = std::clamp(screenX * (640.0f / vpWidth), 0.0f, 640.0f);
            outPs2Y = std::clamp((screenY - vpTop) * (448.0f / vpHeight), 0.0f, 448.0f);
            return true;
        }
    }
}

static uint32_t resolveActiveMcBase(const uint8_t* rdram, uint32_t menuMgr) {
    if (!rdram) return kMcLoadBaseAddr;

    // Primary: cSaveLoad instance mode (+0x00: 1/3 = Save, 2/4 = Load)
    uint32_t saveInst = 0;
    std::memcpy(&saveInst, rdram + (kSaveLoadInstancePtr & 0x01FFFFFFu), sizeof(saveInst));
    if (saveInst >= 0x00100000u && saveInst < 0x02000000u) {
        const uint8_t mode = rdram[saveInst & 0x01FFFFFFu];
        if (mode == 1u || mode == 3u) return kMcSaveBaseAddr;
        if (mode == 2u || mode == 4u) return kMcLoadBaseAddr;
    }
    if (menuMgr >= 0x00100000u && menuMgr < 0x02000000u && menuMgr != kMcBaseAddr) {
        const uint8_t mode = rdram[menuMgr & 0x01FFFFFFu];
        if (mode == 1u || mode == 3u) return kMcSaveBaseAddr;
        if (mode == 2u || mode == 4u) return kMcLoadBaseAddr;
    }

    // Secondary: non-zero subStep (+0xF4) in cMcSave vs cMcLoad
    int32_t saveStep = 0;
    int32_t loadStep = 0;
    std::memcpy(&saveStep, rdram + ((kMcSaveBaseAddr + kMcSubStepOffset) & 0x01FFFFFFu), sizeof(saveStep));
    std::memcpy(&loadStep, rdram + ((kMcLoadBaseAddr + kMcSubStepOffset) & 0x01FFFFFFu), sizeof(loadStep));
    if (saveStep != 0 && loadStep == 0) return kMcSaveBaseAddr;
    if (loadStep != 0 && saveStep == 0) return kMcLoadBaseAddr;

    // Tertiary: initialized cMcSys backpointer at +0xEC (0x007D18EC / 0x007D16EC)
    uint32_t saveBackPtr = 0;
    uint32_t loadBackPtr = 0;
    std::memcpy(&saveBackPtr, rdram + (kMcSavePtrAddr & 0x01FFFFFFu), sizeof(saveBackPtr));
    std::memcpy(&loadBackPtr, rdram + (kMcLoadPtrAddr & 0x01FFFFFFu), sizeof(loadBackPtr));
    if (saveBackPtr == kMcBaseAddr && loadBackPtr != kMcBaseAddr) return kMcSaveBaseAddr;
    return kMcLoadBaseAddr;
}

static uint32_t detectMenuState(uint8_t* rdram, uint32_t& outMenuMgrPtr) {
    outMenuMgrPtr = 0;
    if (!rdram) return MENU_NONE;

    // RULE 1: STRICT EXCLUSION - NEVER touch live combat roulette (R2 during gameplay)
    // Only active during normal gameplay when subscreen is NOT active!
    uint32_t flags5E4 = 0;
    std::memcpy(&flags5E4, rdram + (kFlags5E4Addr & 0x01FFFFFFu), sizeof(flags5E4));
    if (!(flags5E4 & kStaSubScrBit) && kamite::rouletteUp()) {
        return MENU_NONE | MENU_FLAG_LIVE_ROULETTE;
    }

    // Room ID
    uint16_t room = 0;
    std::memcpy(&room, rdram + (kRoomAddr & 0x01FFFFFFu), sizeof(room));
    const bool isTitleRoom = (room == 20 || room == 0x14);
    const bool hasTitleFlag = ((flags5E4 & kStaTitleBit) != 0);

    // RULE 2: CASINO & SHOP EXCLUSION - User requested regular virtual controller in casino and shop
    // (Never exclude the Title screen via kStaSoftEventBit)
    if (room == 22 || room == 23 || room == 0x16 || room == 0x17 ||
        (!isTitleRoom && !hasTitleFlag && (flags5E4 & kStaSoftEventBit))) {
        return MENU_NONE;
    }

    // RULE 3: Check Memory Card Save/Load screen active
    // Priority check BEFORE Title: Active Save/Load flag bit in RDRAM (0x00747A88u bit 30/31) OR active cSaveLoad
    uint32_t flags7A88 = 0;
    std::memcpy(&flags7A88, rdram + (kSaveLoadActiveFlagAddr & 0x01FFFFFFu), sizeof(flags7A88));
    uint32_t saveInst = 0;
    std::memcpy(&saveInst, rdram + (kSaveLoadInstancePtr & 0x01FFFFFFu), sizeof(saveInst));
    const bool saveInstValid = (saveInst >= 0x00100000u && saveInst < 0x02000000u);
    const uint8_t saveMode = saveInstValid ? rdram[saveInst & 0x01FFFFFFu] : 0;
    int32_t loadSubStep = 0;
    int32_t saveSubStep = 0;
    std::memcpy(&loadSubStep, rdram + ((kMcLoadBaseAddr + kMcSubStepOffset) & 0x01FFFFFFu), sizeof(loadSubStep));
    std::memcpy(&saveSubStep, rdram + ((kMcSaveBaseAddr + kMcSubStepOffset) & 0x01FFFFFFu), sizeof(saveSubStep));

    if ((flags7A88 & kSaveLoadActiveBit) || (saveInstValid && saveMode != 0) || loadSubStep != 0 || saveSubStep != 0) {
        outMenuMgrPtr = saveInstValid ? saveInst : 0;
        return MENU_SAVELOAD | MENU_FLAG_SCROLLABLE;
    }

    uint32_t coreSavePtr = 0;
    std::memcpy(&coreSavePtr, rdram + (kCoreSavePtrAddr & 0x01FFFFFFu), sizeof(coreSavePtr));
    if (coreSavePtr >= 0x00100000u && coreSavePtr < 0x02000000u) {
        uint16_t stateBit = 0;
        std::memcpy(&stateBit, rdram + ((coreSavePtr + kCoreSaveStateOffset) & 0x01FFFFFFu), sizeof(stateBit));
        if (stateBit & 1u) {
            outMenuMgrPtr = coreSavePtr;
            return MENU_SAVELOAD | MENU_FLAG_SCROLLABLE;
        }
    }

    uint32_t flags584 = 0;
    std::memcpy(&flags584, rdram + (0x00747A24u & 0x01FFFFFFu), sizeof(flags584));
    if (flags584 & 0x04000000u) {
        outMenuMgrPtr = saveInst;
        return MENU_SAVELOAD | MENU_FLAG_SCROLLABLE;
    }

    // RULE 4: Subscreen (pause / techniques / options / shop / stage map) check:
    if (flags5E4 & kStaSubScrBit) {
        uint32_t subScr = 0;
        std::memcpy(&subScr, rdram + (kSubScrSingletonPtr & 0x01FFFFFFu), sizeof(subScr));
        if (subScr >= 0x00100000u && subScr < 0x02000000u) {
            outMenuMgrPtr = subScr;
            int32_t kind = -1;
            int16_t open = 0;
            std::memcpy(&kind, rdram + ((subScr + kSubScrKindOffset) & 0x01FFFFFFu), sizeof(kind));
            std::memcpy(&open, rdram + ((subScr + kSubScrOpenOffset) & 0x01FFFFFFu), sizeof(open));

            if (open > 0) {
                switch (kind) {
                    case 0: {
                        // Pause Root (subMgr + 0x2A0 is L1/R1 Status panel page, NOT a Yes/No dialog)
                        const uint32_t subMgr = getSubManagerPtr(rdram, subScr, 0);
                        if (subMgr == 0) return MENU_NONE;
                        return MENU_PAUSE_ROOT;
                    }
                    case 1: return MENU_TECHNIQUES | MENU_FLAG_SCROLLABLE;
                    case 2: return MENU_ROULETTE_EDIT | MENU_FLAG_SCROLLABLE;
                    case 3: return MENU_STAGE_MAP; // Stage map & Pause map
                    case 4: return MENU_OPTIONS;
                    case 5: return MENU_OPTIONS; // Title Options uses the same Options layout
                    case 6: return MENU_SAVELOAD | MENU_FLAG_SCROLLABLE;
                    case 7: return MENU_NONE; // SHOP EXCLUSION: User requested regular virtual controller in shop
                    default: break;
                }
            }
            if (!isTitleRoom && !hasTitleFlag) {
                return MENU_NONE;
            }
        }
    }

    // RULE 5: Title Screen State check via cR020 or flags5E4 kStaTitleBit
    uint32_t r020 = findTitleObj(rdram);
    if ((isTitleRoom || hasTitleFlag) && (r020 != 0 || hasTitleFlag)) {
        outMenuMgrPtr = r020;
        return MENU_TITLE;
    }

    return MENU_NONE;
}

void frameStart(uint8_t* rdram) {
    if (!rdram) return;
    s_rdram = rdram;

    // Step through the active button sequence frame-by-frame
    if (!s_buttonQueue.empty()) {
        s_currentStepFrame++;
        if (s_currentStepFrame >= s_buttonQueue[0].durationFrames) {
            s_buttonQueue.erase(s_buttonQueue.begin());
            s_currentStepFrame = 0;
            if (!s_buttonQueue.empty()) {
                ps2_pad::setHostTouchInputState(s_buttonQueue[0].mask, 0.0f, 0.0f, 0.0f, 0.0f);
            } else {
                ps2_pad::setHostTouchInputState(0, 0.0f, 0.0f, 0.0f, 0.0f);
            }
        }
    }

    uint32_t menuMgr = 0;
    const uint32_t activeState = detectMenuState(rdram, menuMgr);
    s_activeMenuState.store(activeState, std::memory_order_relaxed);

    const uint32_t screenId = activeState & 0xFFFFu;
    s_dbgScreenId.store(screenId, std::memory_order_relaxed);

    // If state changed or exited to gameplay, reset all host touch inputs immediately
    if (activeState != s_lastActiveMenuState) {
        ps2_pad::setHostTouchInputState(0, 0.0f, 0.0f, 0.0f, 0.0f);
        s_buttonQueue.clear();
        s_currentStepFrame = 0;
        s_pendingVerify = false;
        s_pendingVerifyType = VerifyType::NONE;
        s_pendingTargetId = -999;
        s_pendingSubMgr = 0;
        if (screenId == MENU_SAVELOAD) {
            s_saveLoadSlot = 0;
        }
        if (screenId == MENU_STAGE_MAP || screenId == MENU_MAP) {
            s_stageMapCursor = 0;
        }
        s_lastActiveMenuState = activeState;
    }

    // Update real-time debug telemetry from RDRAM for Kotlin overlay HUD
    if (screenId == MENU_TITLE) {
        if (menuMgr != 0) {
            const uint8_t phase = rdram[(menuMgr + kTitlePhaseOffset) & 0x01FFFFFFu];
            int32_t effSubState = 0;
            int32_t cur = 0;
            if (phase <= 1) {
                effSubState = 0; // Press Start screen (SubState 0)
                cur = 0;
            } else if (phase == 2) {
                effSubState = 4; // Main Carousel (SubState 4: 0=New Game, 1=Load Game, 2=Options)
                std::memcpy(&cur, rdram + ((menuMgr + kTitleCarouselOffset) & 0x01FFFFFFu), sizeof(cur));
            } else if (phase == 3) {
                effSubState = 5; // Difficulty (SubState 5: 0=Easy, 1=Normal, 2=Hard)
                std::memcpy(&cur, rdram + ((menuMgr + kTitleLevelOffset) & 0x01FFFFFFu), sizeof(cur));
            } else {
                effSubState = 0;
                cur = 0;
            }
            s_dbgSubState.store(effSubState, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        } else {
            s_dbgSubState.store(0, std::memory_order_relaxed);
            s_dbgCurIdx.store(0, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        }
    } else if (screenId == MENU_PAUSE_ROOT && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 0);
        if (subMgr != 0) {
            const uint8_t cur = rdram[(subMgr + kPauseRootCursorOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(0, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        }
    } else if (screenId == MENU_DIALOG && menuMgr != 0) {
        s_dbgSubState.store(0, std::memory_order_relaxed);
        s_dbgCurIdx.store(0, std::memory_order_relaxed);
        s_dbgScrollTop.store(0, std::memory_order_relaxed);
    } else if (screenId == MENU_TECHNIQUES && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 1);
        if (subMgr != 0) {
            const uint8_t subState = rdram[(subMgr + kTechSubStateOffset) & 0x01FFFFFFu];
            const uint8_t col = rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu];
            // If right-column slot was tapped (10..14) or col == 1: popup appears on LEFT (effectiveSubState = 2)
            // If left-column slot was tapped (0..5): popup appears on RIGHT (effectiveSubState = 1)
            const bool isRightColumn = (col == 1) || (s_lastTechSlotTapped >= 10);
            const int32_t effectiveSubState = (subState == 0) ? 0 : (isRightColumn ? 2 : 1);
            s_dbgSubState.store(effectiveSubState, std::memory_order_relaxed);
            s_dbgScrollTop.store(isRightColumn ? 1 : 0, std::memory_order_relaxed);
            if (subState == 0) {
                const uint8_t slot = rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(col == 0 ? slot : (10 + slot), std::memory_order_relaxed);
            } else {
                int16_t row = 0;
                std::memcpy(&row, rdram + ((subMgr + kTechListCursorOffset) & 0x01FFFFFFu), sizeof(row));
                s_dbgCurIdx.store(row, std::memory_order_relaxed);
            }
        }
    } else if (screenId == MENU_ROULETTE_EDIT && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
        if (subMgr != 0) {
            const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(subState, std::memory_order_relaxed);
            if (subState == 0) {
                const uint8_t row = rdram[(subMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu];
                const uint8_t col = rdram[(subMgr + kRouletteColumnOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(static_cast<int32_t>((col * 5) + row), std::memory_order_relaxed);
                s_dbgScrollTop.store(0, std::memory_order_relaxed);
            } else {
                const uint8_t row = rdram[(subMgr + kRouletteListCursorOffset) & 0x01FFFFFFu];
                const uint8_t scroll = rdram[(subMgr + kRouletteListScrollOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(row, std::memory_order_relaxed);
                s_dbgScrollTop.store(scroll, std::memory_order_relaxed);
            }
        }
    } else if (screenId == MENU_OPTIONS && menuMgr != 0) {
        uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 4);
        if (subMgr == 0) subMgr = getSubManagerPtr(rdram, menuMgr, 5);
        if (subMgr != 0) {
            const uint8_t cur = rdram[(subMgr + kOptionsCursorOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(0, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        }
    } else if (screenId == MENU_STAGE_MAP || screenId == MENU_MAP) {
        if (menuMgr != 0) {
            const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 3);
            if (subMgr != 0) {
                const uint8_t mapCur = rdram[(subMgr + kStageMapCursorOffset) & 0x01FFFFFFu];
                const bool isSaveHidden = (rdram[(menuMgr + kSubScrMapNoSaveOffset) & 0x01FFFFFFu] != 0);
                const int32_t effSubState = isSaveHidden ? 1 : 0;
                s_dbgSubState.store(effSubState, std::memory_order_relaxed);
                s_dbgCurIdx.store(mapCur, std::memory_order_relaxed);
                s_dbgScrollTop.store(0, std::memory_order_relaxed);
                s_stageMapCursor = mapCur;
            }
        }
    } else if (screenId == MENU_SAVELOAD) {
        uint8_t saveMode = 0;
        if (menuMgr != 0) {
            saveMode = rdram[menuMgr & 0x01FFFFFFu];
        }
        const uint32_t mcBase = resolveActiveMcBase(rdram, menuMgr);
        int32_t liveRow = 0;
        int32_t liveScroll = 0;
        std::memcpy(&liveRow, rdram + ((mcBase + kMcSlotRowOffset) & 0x01FFFFFFu), sizeof(liveRow));
        std::memcpy(&liveScroll, rdram + ((mcBase + kMcSlotBaseOffset) & 0x01FFFFFFu), sizeof(liveScroll));
        const uint8_t liveChoice = rdram[(mcBase + kMcChoiceOffset) & 0x01FFFFFFu];
        s_dbgSubState.store(saveMode, std::memory_order_relaxed);
        s_dbgCurIdx.store(liveRow, std::memory_order_relaxed);
        s_dbgScrollTop.store(liveScroll, std::memory_order_relaxed);
        s_saveLoadSlot = liveRow;
        s_dialogArrowState = liveChoice;
    }

    // -------------------------------------------------------------------------
    // MANDATORY READ-BACK SAFETY VERIFICATION (Frame N+1 Execution)
    // -------------------------------------------------------------------------
    if (s_pendingVerify) {
        if (s_verifyWaitFrames > 0) {
            s_verifyWaitFrames--;
        } else {
            s_pendingVerify = false;
            int32_t readBackVal = -999;

            switch (s_pendingVerifyType) {
                case VerifyType::TITLE_CAROUSEL:
                case VerifyType::TITLE_DIFFICULTY: {
                    if (s_pendingSubMgr != 0) {
                        int16_t v = 0;
                        std::memcpy(&v, rdram + ((s_pendingSubMgr + kTitleCursorOffset) & 0x01FFFFFFu), sizeof(v));
                        readBackVal = v;
                    }
                    break;
                }
                case VerifyType::PAUSE_ROOT: {
                    if (s_pendingSubMgr != 0) {
                        readBackVal = rdram[(s_pendingSubMgr + kPauseRootCursorOffset) & 0x01FFFFFFu];
                    }
                    break;
                }
                case VerifyType::STAGE_MAP_BTN: {
                    if (s_pendingSubMgr != 0) {
                        readBackVal = rdram[(s_pendingSubMgr + kStageMapCursorOffset) & 0x01FFFFFFu];
                    }
                    break;
                }
                case VerifyType::TECH_SLOT: {
                    if (s_pendingSubMgr != 0) {
                        readBackVal = rdram[(s_pendingSubMgr + kTechSlotCursorOffset) & 0x01FFFFFFu];
                    }
                    break;
                }
                case VerifyType::TECH_ROW: {
                    if (s_pendingSubMgr != 0) {
                        int16_t v = 0;
                        std::memcpy(&v, rdram + ((s_pendingSubMgr + kTechListCursorOffset) & 0x01FFFFFFu), sizeof(v));
                        readBackVal = v;
                    }
                    break;
                }
                case VerifyType::ROULETTE_SLOT: {
                    if (s_pendingSubMgr != 0) {
                        const uint8_t row = rdram[(s_pendingSubMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu];
                        const uint8_t col = rdram[(s_pendingSubMgr + kRouletteColumnOffset) & 0x01FFFFFFu];
                        readBackVal = (col * 5) + row;
                    }
                    break;
                }
                case VerifyType::ROULETTE_ROW: {
                    if (s_pendingSubMgr != 0) {
                        readBackVal = rdram[(s_pendingSubMgr + kRouletteListCursorOffset) & 0x01FFFFFFu];
                    }
                    break;
                }
                case VerifyType::OPTIONS_ROW: {
                    if (s_pendingSubMgr != 0) {
                        readBackVal = rdram[(s_pendingSubMgr + kOptionsCursorOffset) & 0x01FFFFFFu];
                    }
                    break;
                }
                default: break;
            }

            if (readBackVal == s_pendingTargetId) {
                LOGI("Read-back VERIFIED: Target %d == RDRAM %d (Type %d) -> Injecting Cross",
                     s_pendingTargetId, readBackVal, static_cast<int>(s_pendingVerifyType));
                queueSingleButton(kPadCross, 2);
            } else {
                LOGW("Read-back ABORT: Target %d != RDRAM %d (Type %d) -> Skipping Cross injection",
                     s_pendingTargetId, readBackVal, static_cast<int>(s_pendingVerifyType));
            }

            s_dbgPendingTargetId.store(-999, std::memory_order_relaxed);
            s_pendingVerifyType = VerifyType::NONE;
            s_pendingTargetId = -999;
            s_pendingSubMgr = 0;
        }
    }

    // Zero-overhead during normal gameplay:
    if (screenId == MENU_NONE || (activeState & MENU_FLAG_LIVE_ROULETTE)) {
        s_queue.clear();
        s_pressedButtonId = -999;
        s_isDragging = false;
        s_accumulatedScrollX = 0.0f;
        s_accumulatedScrollY = 0.0f;
        return;
    }

    // Check system Back request:
    // CRITICAL: In God Hand, Triangle is Cancel / Exit. Start resumes from pause root.
    if (s_pendingBack.exchange(false, std::memory_order_relaxed)) {
        uint16_t cancelMask = (screenId == MENU_PAUSE_ROOT) ? kPadStart : kPadTriangle;
        queueSingleButton(cancelMask, 5);
    }

    // Process queued touch events on EE emulation thread:
    MenuTouchEvent ev;
    while (s_queue.pop(ev)) {
        float ps2X = 0.0f, ps2Y = 0.0f;
        const bool validCoords = screenToPs2(ev.screenX, ev.screenY, ps2X, ps2Y);

        switch (ev.action) {
            case TouchAction::Down: {
                if (!validCoords) {
                    s_pressedButtonId = -999;
                    break;
                }
                s_downPs2X = ps2X;
                s_downPs2Y = ps2Y;
                s_isDragging = false;
                s_pressedButtonId = -999;
                s_accumulatedScrollX = 0.0f;
                s_accumulatedScrollY = 0.0f;

                // Screen-specific hitboxes FIRST (so [NO] is never hijacked by kCommonBackHitbox!)
                const int32_t curSubState = s_dbgSubState.load(std::memory_order_relaxed);
                if (screenId == MENU_TITLE) {
                    if (curSubState <= 1) {
                        // Title screen "Press Start": 3 buttons (Middle START: 99, Left ◀: -10, Right ▶: -11)
                        constexpr Rect2D kTitleMiddleStart = { 60.0f, 160.0f, 580.0f, 380.0f };
                        constexpr Rect2D kTitleLeftBtn     = { 15.0f, 220.0f,  95.0f, 300.0f };
                        constexpr Rect2D kTitleRightBtn    = { 545.0f, 220.0f, 625.0f, 300.0f };
                        if (checkHitbox(screenId, curSubState, -10, kTitleLeftBtn, ps2X, ps2Y)) {
                            s_pressedButtonId = -10;
                        } else if (checkHitbox(screenId, curSubState, -11, kTitleRightBtn, ps2X, ps2Y)) {
                            s_pressedButtonId = -11;
                        } else {
                            s_pressedButtonId = 99; // Anywhere on screen taps START
                        }
                    } else if (curSubState == 4) {
                        // Main Title Carousel Menu:
                        constexpr Rect2D kTitleLeftBtn     = { 15.0f, 220.0f,  95.0f, 300.0f };
                        constexpr Rect2D kTitleRightBtn    = { 545.0f, 220.0f, 625.0f, 300.0f };
                        constexpr MenuButtonHitbox kTitleOptBoxes[] = {
                            { 2, {  20.0f, 360.0f, 210.0f, 420.0f } }, // Options
                            { 0, { 220.0f, 360.0f, 420.0f, 420.0f } }, // New Game
                            { 1, { 430.0f, 360.0f, 620.0f, 420.0f } }, // Load Game
                        };
                        if (checkHitbox(screenId, 4, -10, kTitleLeftBtn, ps2X, ps2Y)) {
                            s_pressedButtonId = -10;
                        } else if (checkHitbox(screenId, 4, -11, kTitleRightBtn, ps2X, ps2Y)) {
                            s_pressedButtonId = -11;
                        } else {
                            for (const auto& btn : kTitleOptBoxes) {
                                if (checkHitbox(screenId, 4, btn.id, btn.rect, ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    break;
                                }
                            }
                        }
                    } else if (curSubState == 5) {
                        // Difficulty Selection Menu (Easy: 0, Normal: 1, Hard: 2):
                        constexpr MenuButtonHitbox kDiffBoxes[] = {
                            { 0, {  40.0f, 360.0f, 200.0f, 420.0f } }, // Easy
                            { 1, { 220.0f, 360.0f, 420.0f, 420.0f } }, // Normal
                            { 2, { 440.0f, 360.0f, 600.0f, 420.0f } }, // Hard
                        };
                        for (const auto& btn : kDiffBoxes) {
                            if (checkHitbox(screenId, 5, btn.id, btn.rect, ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_PAUSE_ROOT) {
                    for (const auto& btn : kPauseRootHitboxes) {
                        if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                            s_pressedButtonId = btn.id;
                            break;
                        }
                    }
                } else if (screenId == MENU_SAVELOAD) {
                    for (const auto& btn : kSaveLoadHitboxes) {
                        if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                            s_pressedButtonId = btn.id;
                            break;
                        }
                    }
                } else if (screenId == MENU_DIALOG) {
                    for (const auto& btn : kDialogHitboxes) {
                        if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                            s_pressedButtonId = btn.id;
                            break;
                        }
                    }
                } else if (screenId == MENU_STAGE_MAP || screenId == MENU_MAP) {
                    if (curSubState == 1) {
                        for (const auto& btn : kStageMapHiddenSaveHitboxes) {
                            if (checkHitbox(screenId, 1, btn.id, btn.rect, ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    } else {
                        for (const auto& btn : kStageMapHitboxes) {
                            if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_TECHNIQUES) {
                    const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 1);
                    if (subMgr != 0) {
                        const uint8_t subState = rdram[(subMgr + kTechSubStateOffset) & 0x01FFFFFFu];
                        if (subState == 0) {
                            for (const auto& btn : kTechSlotsHitboxes) {
                                if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    if (btn.id >= 0) {
                                        s_lastTechSlotTapped = btn.id;
                                    }
                                    break;
                                }
                            }
                        } else if (subState == 1) {
                            const uint8_t col = rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu];
                            const bool isRightColumn = (col == 1) || (s_lastTechSlotTapped >= 10);
                            const int32_t effSub = isRightColumn ? 2 : 1;
                            if (effSub == 2) {
                                for (const auto& btn : kTechMoveListLeftHitboxes) {
                                    if (checkHitbox(screenId, 2, btn.id, btn.rect, ps2X, ps2Y)) {
                                        s_pressedButtonId = btn.id;
                                        break;
                                    }
                                }
                            } else {
                                for (const auto& btn : kTechMoveListRightHitboxes) {
                                    if (checkHitbox(screenId, 1, btn.id, btn.rect, ps2X, ps2Y)) {
                                        s_pressedButtonId = btn.id;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                } else if (screenId == MENU_ROULETTE_EDIT) {
                    const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
                    if (subMgr != 0) {
                        const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
                        if (subState == 0) {
                            for (const auto& btn : kRouletteSlotsHitboxes) {
                                if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    break;
                                }
                            }
                        } else if (subState == 1) {
                            for (const auto& btn : kRouletteMoveListHitboxes) {
                                if (checkHitbox(screenId, 1, btn.id, btn.rect, ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    break;
                                }
                            }
                        }
                    }
                } else if (screenId == MENU_OPTIONS) {
                    for (const auto& btn : kOptionsHitboxes) {
                        if (checkHitbox(screenId, 0, btn.id, btn.rect, ps2X, ps2Y)) {
                            s_pressedButtonId = btn.id;
                            break;
                        }
                    }
                }

                // Common Back Touch Target fallback (only when no screen-specific button matched)
                if (s_pressedButtonId == -999 &&
                    screenId != MENU_PAUSE_ROOT && screenId != MENU_TECHNIQUES &&
                    checkHitbox(screenId, curSubState, -1, kCommonBackHitbox, ps2X, ps2Y)) {
                    s_pressedButtonId = -1;
                }

                s_dbgLastTapId.store(s_pressedButtonId, std::memory_order_relaxed);
                break;
            }

            case TouchAction::Move: {
                if (!validCoords) break;
                const float dist = std::hypot(ps2X - s_downPs2X, ps2Y - s_downPs2Y);
                if (dist > 30.0f) {
                    s_isDragging = true;
                    s_pressedButtonId = -999;
                }
                break;
            }

            case TouchAction::ScrollDelta: {
                s_isDragging = true;
                s_pressedButtonId = -999;

                // Support horizontal swiping to rotate Title Carousel (phase 2)
                if (screenId == MENU_TITLE && menuMgr != 0) {
                    const uint8_t titlePhase = rdram[(menuMgr + kTitlePhaseOffset) & 0x01FFFFFFu];
                    if (titlePhase == 2) {
                        s_accumulatedScrollX += ev.scrollDeltaX;
                        if (s_accumulatedScrollX < -25.0f) {
                            s_accumulatedScrollX = 0.0f;
                            queueSingleButton(kPadRight, 5);
                        } else if (s_accumulatedScrollX > 25.0f) {
                            s_accumulatedScrollX = 0.0f;
                            queueSingleButton(kPadLeft, 5);
                        }
                    }
                }

                // Vertical finger scrolling for list popups via DPAD inject
                if (screenId == MENU_TECHNIQUES || screenId == MENU_ROULETTE_EDIT || screenId == MENU_SAVELOAD) {
                    s_accumulatedScrollY += ev.scrollDeltaY;
                    if (s_accumulatedScrollY <= -30.0f) {
                        s_accumulatedScrollY = 0.0f;
                        queueSingleButton(kPadDown, 5);
                    } else if (s_accumulatedScrollY >= 30.0f) {
                        s_accumulatedScrollY = 0.0f;
                        queueSingleButton(kPadUp, 5);
                    }
                }
                break;
            }

            case TouchAction::Up: {
                if (!s_isDragging && s_pressedButtonId != -999) {
                    s_dbgLastTapId.store(s_pressedButtonId, std::memory_order_relaxed);

                    // 0. Cancel / Back button (-1):
                    if (s_pressedButtonId == -1) {
                        uint16_t cancelMask = (screenId == MENU_PAUSE_ROOT) ? kPadStart : kPadTriangle;
                        queueSingleButton(cancelMask, 5);
                    }
                    // 1. Direct button actions
                    else if (s_pressedButtonId == -10) {
                        queueSingleButton(kPadLeft, 5);
                    } else if (s_pressedButtonId == -11) {
                        queueSingleButton(kPadRight, 5);
                    } else if (s_pressedButtonId == -2) {
                        queueSingleButton(kPadL1, 5);
                    } else if (s_pressedButtonId == -3) {
                        queueSingleButton(kPadR1, 5);
                    } else if (s_pressedButtonId == 99) {
                        // Title Press Start
                        queueSingleButton(kPadStart, 5);
                    } else if (s_pressedButtonId == -100) {
                        // Title Center Confirm
                        queueSingleButton(kPadCross, 5);
                    }
                    // 2. Save / Load Screen
                    else if (screenId == MENU_SAVELOAD) {
                        const uint32_t mcBase = resolveActiveMcBase(rdram, menuMgr);
                        if (s_pressedButtonId >= 0 && s_pressedButtonId <= 2) {
                            int32_t targetSlot = s_pressedButtonId;
                            std::memcpy(rdram + ((mcBase + kMcSlotRowOffset) & 0x01FFFFFFu), &targetSlot, sizeof(targetSlot));
                            s_saveLoadSlot = targetSlot;
                            queueSingleButton(kPadCross, 6);
                        } else if (s_pressedButtonId == 10) {
                            // YES: check live choice in active cMc (0 = YES, 1 = NO)
                            const uint8_t curChoice = rdram[(mcBase + kMcChoiceOffset) & 0x01FFFFFFu];
                            if (curChoice != 0) {
                                queueButtonSequence({ {kPadLeft, 5}, {0, 4}, {kPadCross, 6} });
                            } else {
                                queueSingleButton(kPadCross, 6);
                            }
                        } else if (s_pressedButtonId == 11) {
                            // NO: check live choice in active cMc (0 = YES, 1 = NO)
                            const uint8_t curChoice = rdram[(mcBase + kMcChoiceOffset) & 0x01FFFFFFu];
                            if (curChoice == 0) {
                                queueButtonSequence({ {kPadRight, 5}, {0, 4}, {kPadCross, 6} });
                            } else {
                                queueSingleButton(kPadCross, 6);
                            }
                        }
                    }
                    // 3. Dialog Actions
                    else if (screenId == MENU_DIALOG) {
                        if (s_pressedButtonId == 0) {
                            // Yes: Move Left to Yes, neutral release, then Confirm Cross
                            queueButtonSequence({ {kPadLeft, 5}, {0, 4}, {kPadCross, 6} });
                        } else {
                            // No: Triangle cancels dialog immediately
                            queueSingleButton(kPadTriangle, 6);
                        }
                    }
                    // 4. Stage Map Actions (0-based cursor at subMgr + 0x1B4)
                    else if (screenId == MENU_STAGE_MAP || screenId == MENU_MAP) {
                        if (s_pressedButtonId >= 0 && s_pressedButtonId <= 3) {
                            const uint32_t subMgr = (menuMgr != 0) ? getSubManagerPtr(rdram, menuMgr, 3) : 0;
                            const uint8_t targetAction = static_cast<uint8_t>(s_pressedButtonId);
                            if (subMgr != 0) {
                                rdram[(subMgr + kStageMapCursorOffset) & 0x01FFFFFFu] = targetAction;
                            }
                            s_stageMapCursor = targetAction;
                            queueSingleButton(kPadCross, 6);
                        }
                    }
                    // 5. Title Screen Options
                    else if (screenId == MENU_TITLE) {
                        const int32_t curSubState = s_dbgSubState.load(std::memory_order_relaxed);
                        if (curSubState <= 1) {
                            if (s_pressedButtonId == 99) {
                                queueSingleButton(kPadStart, 5);
                            }
                        } else if (curSubState == 4) {
                            int32_t curCarousel = 0;
                            if (menuMgr != 0) {
                                std::memcpy(&curCarousel, rdram + ((menuMgr + kTitleCarouselOffset) & 0x01FFFFFFu), sizeof(curCarousel));
                            }
                            int32_t targetCur = s_pressedButtonId;
                            if (targetCur == curCarousel || targetCur < 0 || targetCur > 2) {
                                queueSingleButton(kPadCross, 5);
                            } else {
                                int32_t diff = (targetCur - curCarousel + 3) % 3;
                                uint16_t dir = (diff == 1) ? kPadRight : kPadLeft;
                                queueButtonSequence({ {dir, 5}, {0, 4}, {kPadCross, 5} });
                            }
                        } else if (curSubState == 5) {
                            int32_t curLevel = 1;
                            if (menuMgr != 0) {
                                std::memcpy(&curLevel, rdram + ((menuMgr + kTitleLevelOffset) & 0x01FFFFFFu), sizeof(curLevel));
                            }
                            int32_t targetCur = s_pressedButtonId;
                            if (targetCur == curLevel) {
                                queueSingleButton(kPadCross, 5);
                            } else if (targetCur >= 0 && targetCur <= 2) {
                                int32_t diff = targetCur - curLevel;
                                uint16_t dir = (diff > 0) ? kPadRight : kPadLeft;
                                int steps = std::abs(diff);
                                std::vector<ButtonStep> seq;
                                for (int s = 0; s < steps; ++s) {
                                    seq.push_back({dir, 5});
                                    seq.push_back({0, 4});
                                }
                                seq.push_back({kPadCross, 5});
                                queueButtonSequence(seq);
                            }
                        }
                    }
                    // 6. Pause Root Options
                    else if (screenId == MENU_PAUSE_ROOT) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 0);
                        if (subMgr != 0 && s_pressedButtonId >= 0 && s_pressedButtonId <= 4) {
                            int32_t targetCur = s_pressedButtonId;
                            rdram[(subMgr + kPauseRootCursorOffset) & 0x01FFFFFFu] = static_cast<uint8_t>(targetCur);
                            queueSingleButton(kPadCross, 6);
                        }
                    }
                    // 7. Techniques Screen (Both Left and Right Columns + Move List Popup)
                    else if (screenId == MENU_TECHNIQUES) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 1);
                        if (subMgr != 0) {
                            const uint8_t subState = rdram[(subMgr + kTechSubStateOffset) & 0x01FFFFFFu];
                            if (subState == 0) {
                                if (s_pressedButtonId >= 0 && s_pressedButtonId < 6) {
                                    // Left Column: Combo Slots (0..5)
                                    s_lastTechSlotTapped = s_pressedButtonId;
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId);
                                    rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu] = 0;
                                    rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    queueSingleButton(kPadCross, 6);
                                } else if (s_pressedButtonId >= 10 && s_pressedButtonId < 15) {
                                    // Right Column: Individual Button Slots (0..4)
                                    s_lastTechSlotTapped = s_pressedButtonId;
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId - 10);
                                    rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu] = 1;
                                    rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    queueSingleButton(kPadCross, 6);
                                }
                            } else if (subState == 1 && s_pressedButtonId >= 0 && s_pressedButtonId < 8) {
                                int16_t targetRow = static_cast<int16_t>(s_pressedButtonId);
                                std::memcpy(rdram + ((subMgr + kTechListCursorOffset) & 0x01FFFFFFu), &targetRow, sizeof(targetRow));
                                queueSingleButton(kPadCross, 6);
                            }
                        }
                    }
                    // 8. Roulette Wheel Edit (10 equipped slots + RETURN)
                    else if (screenId == MENU_ROULETTE_EDIT) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
                        if (subMgr != 0) {
                            const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
                            if (subState == 0) {
                                if (s_pressedButtonId >= 0 && s_pressedButtonId < 5) {
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId);
                                    rdram[(subMgr + kRouletteColumnOffset) & 0x01FFFFFFu] = 0;
                                    rdram[(subMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    queueSingleButton(kPadCross, 5);
                                } else if (s_pressedButtonId >= 5 && s_pressedButtonId < 10) {
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId - 5);
                                    rdram[(subMgr + kRouletteColumnOffset) & 0x01FFFFFFu] = 1;
                                    rdram[(subMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    queueSingleButton(kPadCross, 5);
                                }
                            } else if (subState == 1 && s_pressedButtonId >= 0 && s_pressedButtonId < 6) {
                                uint8_t targetRow = static_cast<uint8_t>(s_pressedButtonId);
                                rdram[(subMgr + kRouletteListCursorOffset) & 0x01FFFFFFu] = targetRow;
                                queueSingleButton(kPadCross, 5);
                            }
                        }
                    }
                    // 9. Options Screen (8 rows, NO TABS)
                    else if (screenId == MENU_OPTIONS) {
                        uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 4);
                        if (subMgr == 0) subMgr = getSubManagerPtr(rdram, menuMgr, 5);
                        if (s_pressedButtonId == 10) {
                            // YES (Reset Game confirm: 0=YES, 1=NO at subMgr + 0x131)
                            const uint8_t curChoice = (subMgr != 0) ? rdram[(subMgr + kOptionsResetChoiceOffset) & 0x01FFFFFFu] : 1u;
                            if (curChoice != 0) {
                                queueButtonSequence({ {kPadLeft, 6}, {0, 5}, {kPadCross, 6} });
                            } else {
                                queueSingleButton(kPadCross, 6);
                            }
                        } else if (s_pressedButtonId == 11) {
                            // NO (Reset Game cancel: 0=YES, 1=NO at subMgr + 0x131)
                            const uint8_t curChoice = (subMgr != 0) ? rdram[(subMgr + kOptionsResetChoiceOffset) & 0x01FFFFFFu] : 1u;
                            if (curChoice == 0) {
                                queueButtonSequence({ {kPadRight, 6}, {0, 5}, {kPadCross, 6} });
                            } else {
                                queueSingleButton(kPadCross, 6);
                            }
                        } else {
                            if (subMgr != 0 && s_pressedButtonId >= 0 && s_pressedButtonId < 8) {
                                int32_t targetRow = s_pressedButtonId;
                                rdram[(subMgr + kOptionsCursorOffset) & 0x01FFFFFFu] = static_cast<uint8_t>(targetRow);
                                queueSingleButton(kPadCross, 8);
                            }
                        }
                    }
                }

                s_pressedButtonId = -999;
                s_isDragging = false;
                break;
            }

            case TouchAction::Cancel: {
                s_pressedButtonId = -999;
                s_isDragging = false;
                break;
            }
        }
    }
}

} // namespace godhand::menu_touch
