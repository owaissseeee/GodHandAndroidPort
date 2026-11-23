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
static uint16_t s_injectedBtnMask = 0;
static bool     s_singleFrameInject = false;
static int      s_framesSinceInject = 0;
static float    s_accumulatedScrollX = 0.0f;
static float    s_accumulatedScrollY = 0.0f;

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

} // namespace

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
    // If on Title Screen and at root (Press Start: 3 or Carousel: 4),
    // cannot go back further in the PS2 game -> return false so Android shows Quit dialog!
    if (screenId == MENU_TITLE && s_rdram) {
        uint32_t sceneMgr = 0;
        std::memcpy(&sceneMgr, s_rdram + (kTitleSceneMgrPtr & 0x01FFFFFFu), sizeof(sceneMgr));
        if (sceneMgr >= 0x00100000u && sceneMgr < 0x02000000u) {
            uint32_t titleObj = 0;
            std::memcpy(&titleObj, s_rdram + ((sceneMgr + 0x10u) & 0x01FFFFFFu), sizeof(titleObj));
            if (titleObj >= 0x00100000u && titleObj < 0x02000000u) {
                const uint8_t titleState = s_rdram[(titleObj + kTitleStateOffset) & 0x01FFFFFFu];
                if (titleState <= 4) {
                    return false;
                }
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

static uint32_t detectMenuState(uint8_t* rdram, uint32_t& outMenuMgrPtr) {
    outMenuMgrPtr = 0;
    if (!rdram) return MENU_NONE;

    // RULE 1: STRICT EXCLUSION - NEVER touch live combat roulette (R1 during gameplay)
    if (kamite::rouletteUp()) {
        return MENU_NONE | MENU_FLAG_LIVE_ROULETTE;
    }

    uint32_t flags5E4 = 0;
    std::memcpy(&flags5E4, rdram + (kFlags5E4Addr & 0x01FFFFFFu), sizeof(flags5E4));

    // RULE 2: Title Screen State check via flags5E4 (NEVER false trigger in shops or rooms)
    if (flags5E4 & (kStaTitleBit | kStaTitleLoopBit)) {
        uint32_t sceneMgr = 0;
        std::memcpy(&sceneMgr, rdram + (kTitleSceneMgrPtr & 0x01FFFFFFu), sizeof(sceneMgr));
        if (sceneMgr >= 0x00100000u && sceneMgr < 0x02000000u) {
            uint32_t titleObj = 0;
            std::memcpy(&titleObj, rdram + ((sceneMgr + 0x10u) & 0x01FFFFFFu), sizeof(titleObj));
            if (titleObj >= 0x00100000u && titleObj < 0x02000000u) {
                outMenuMgrPtr = titleObj;
                return MENU_TITLE;
            }
        }
        outMenuMgrPtr = 0;
        return MENU_TITLE;
    }

    // RULE 3: Subscreen (pause / techniques / options / shop / stage map) check:
    if (flags5E4 & kStaSubScrBit) {
        uint32_t subScr = 0;
        std::memcpy(&subScr, rdram + (kSubScrSingletonPtr & 0x01FFFFFFu), sizeof(subScr));
        if (subScr >= 0x00100000u && subScr < 0x02000000u) {
            outMenuMgrPtr = subScr;
            int32_t kind = -1;
            int16_t open = 0;
            std::memcpy(&kind, rdram + ((subScr + kSubScrKindOffset) & 0x01FFFFFFu), sizeof(kind));
            std::memcpy(&open, rdram + ((subScr + kSubScrOpenOffset) & 0x01FFFFFFu), sizeof(open));

            // Subscreen is active while open > 0:
            if (open > 0) {
                switch (kind) {
                    case 0: {
                        // Check if a modal confirmation dialog is open inside cSubScrMenu
                        const uint32_t subMgr = getSubManagerPtr(rdram, subScr, 0);
                        if (subMgr != 0) {
                            const uint8_t mode = rdram[(subMgr + kPauseRootDialogOffset) & 0x01FFFFFFu];
                            if (mode != 0) {
                                return MENU_DIALOG;
                            }
                        }
                        return MENU_PAUSE_ROOT;
                    }
                    case 1: return MENU_TECHNIQUES | MENU_FLAG_SCROLLABLE;
                    case 2: return MENU_ROULETTE_EDIT | MENU_FLAG_SCROLLABLE;
                    case 3: return MENU_MAP;
                    case 4: return MENU_OPTIONS;
                    case 5: return MENU_ITEMS;
                    case 6: return MENU_SAVELOAD;
                    case 7: return MENU_SHOP | MENU_FLAG_SCROLLABLE;
                    case 10: return MENU_STAGE_MAP;
                    default: return MENU_PAUSE_ROOT;
                }
            } else {
                return MENU_NONE;
            }
        }
    }

    return MENU_NONE;
}

void frameStart(uint8_t* rdram) {
    if (!rdram) return;
    s_rdram = rdram;

    // Handle auto-release of injected buttons after 3 frames (~50ms)
    if (s_singleFrameInject) {
        s_framesSinceInject++;
        if (s_framesSinceInject >= 3) {
            ps2_pad::setHostTouchInputState(0, 0.0f, 0.0f, 0.0f, 0.0f);
            s_singleFrameInject = false;
            s_framesSinceInject = 0;
            s_injectedBtnMask = 0;
        }
    }

    uint32_t menuMgr = 0;
    const uint32_t activeState = detectMenuState(rdram, menuMgr);
    s_activeMenuState.store(activeState, std::memory_order_relaxed);

    const uint32_t screenId = activeState & 0xFFFFu;
    s_dbgScreenId.store(screenId, std::memory_order_relaxed);

    // Update real-time debug telemetry from RDRAM for Kotlin overlay HUD
    if (screenId == MENU_TITLE) {
        if (menuMgr != 0) {
            uint8_t state = rdram[(menuMgr + kTitleStateOffset) & 0x01FFFFFFu];
            int16_t cur = 0;
            std::memcpy(&cur, rdram + ((menuMgr + kTitleCursorOffset) & 0x01FFFFFFu), sizeof(cur));
            if (state == 0 || state > 6) state = 3;
            s_dbgSubState.store(state, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        } else {
            s_dbgSubState.store(3, std::memory_order_relaxed);
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
            s_dbgSubState.store(subState, std::memory_order_relaxed);
            if (subState == 0) {
                const uint8_t col = rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu];
                const uint8_t slot = rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(col == 0 ? slot : (10 + slot), std::memory_order_relaxed);
                s_dbgScrollTop.store(col, std::memory_order_relaxed);
            } else {
                int16_t row = 0, scroll = 0;
                std::memcpy(&row, rdram + ((subMgr + kTechListCursorOffset) & 0x01FFFFFFu), sizeof(row));
                std::memcpy(&scroll, rdram + ((subMgr + kTechListScrollOffset) & 0x01FFFFFFu), sizeof(scroll));
                s_dbgCurIdx.store(row, std::memory_order_relaxed);
                s_dbgScrollTop.store(scroll, std::memory_order_relaxed);
            }
        }
    } else if (screenId == MENU_ROULETTE_EDIT && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
        if (subMgr != 0) {
            const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(subState, std::memory_order_relaxed);
            if (subState == 0) {
                const uint8_t slot = rdram[(subMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(slot, std::memory_order_relaxed);
                s_dbgScrollTop.store(0, std::memory_order_relaxed);
            } else {
                const uint8_t row = rdram[(subMgr + kRouletteListCursorOffset) & 0x01FFFFFFu];
                const uint8_t scroll = rdram[(subMgr + kRouletteListScrollOffset) & 0x01FFFFFFu];
                s_dbgCurIdx.store(row, std::memory_order_relaxed);
                s_dbgScrollTop.store(scroll, std::memory_order_relaxed);
            }
        }
    } else if (screenId == MENU_OPTIONS && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 4);
        if (subMgr != 0) {
            const uint8_t cur = rdram[(subMgr + kOptionsCursorOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(0, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        }
    } else if (screenId == MENU_STAGE_MAP && menuMgr != 0) {
        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 10);
        if (subMgr != 0) {
            const uint8_t cur = rdram[(subMgr + kStageMapCursorOffset) & 0x01FFFFFFu];
            s_dbgSubState.store(0, std::memory_order_relaxed);
            s_dbgCurIdx.store(cur, std::memory_order_relaxed);
            s_dbgScrollTop.store(0, std::memory_order_relaxed);
        }
    } else if (screenId == MENU_SHOP) {
        s_dbgSubState.store(0, std::memory_order_relaxed);
        s_dbgCurIdx.store(0, std::memory_order_relaxed);
        s_dbgScrollTop.store(0, std::memory_order_relaxed);
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
                        readBackVal = rdram[(s_pendingSubMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu];
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
                s_injectedBtnMask = kPadCross;
                s_singleFrameInject = true;
                s_framesSinceInject = 0;
                ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
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
    // CRITICAL: In God Hand, Triangle is Cancel / Exit. Circle is Confirm.
    if (s_pendingBack.exchange(false, std::memory_order_relaxed)) {
        uint16_t cancelMask = kPadTriangle;
        if (screenId == MENU_PAUSE_ROOT) {
            cancelMask = kPadStart; // Resume gameplay from pause root
        }
        s_injectedBtnMask = cancelMask;
        s_singleFrameInject = true;
        s_framesSinceInject = 0;
        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
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

                if (screenId == MENU_TITLE) {
                    uint8_t titleState = 3;
                    if (menuMgr != 0) {
                        titleState = rdram[(menuMgr + kTitleStateOffset) & 0x01FFFFFFu];
                        if (titleState == 0 || titleState > 6) titleState = 3;
                    }

                    if (titleState <= 3) {
                        // Title screen "Press Start": ANY screen tap triggers START
                        s_pressedButtonId = 99; // kPadStart
                    } else if (titleState == 4) {
                        // Main Title Carousel Menu (New Game: 0, Load Game: 1, Options: 2):
                        if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -1; // Triangle / Back
                        } else if (kTitleLeftArrowHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -10; // Left arrow
                        } else if (kTitleRightArrowHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -11; // Right arrow
                        } else {
                            bool hit = false;
                            for (const auto& btn : kTitleCarouselHitboxes) {
                                if (btn.rect.contains(ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    hit = true;
                                    break;
                                }
                            }
                            if (!hit && kTitleCenterConfirm.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = 10; // Center confirm
                            }
                        }
                    } else if (titleState == 5) {
                        // Difficulty Selection Menu (Easy: 0, Normal: 1, Hard: 2):
                        if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -1; // Triangle / Back
                        } else {
                            for (const auto& btn : kDifficultyHitboxes) {
                                if (btn.rect.contains(ps2X, ps2Y)) {
                                    s_pressedButtonId = btn.id;
                                    break;
                                }
                            }
                        }
                    }
                } else if (screenId == MENU_PAUSE_ROOT) {
                    if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                        s_pressedButtonId = -1; // Resume / Back
                    } else {
                        for (const auto& btn : kPauseRootHitboxes) {
                            if (btn.rect.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_DIALOG) {
                    if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                        s_pressedButtonId = -1; // Cancel
                    } else {
                        for (const auto& btn : kDialogHitboxes) {
                            if (btn.rect.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_STAGE_MAP) {
                    if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                        s_pressedButtonId = -1; // Back
                    } else {
                        for (const auto& btn : kStageMapHitboxes) {
                            if (btn.rect.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_SHOP) {
                    if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                        s_pressedButtonId = -1; // Back
                    } else {
                        for (const auto& btn : kShopHitboxes) {
                            if (btn.rect.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = btn.id;
                                break;
                            }
                        }
                    }
                } else if (screenId == MENU_TECHNIQUES) {
                    const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 1);
                    if (subMgr != 0) {
                        const uint8_t subState = rdram[(subMgr + kTechSubStateOffset) & 0x01FFFFFFu];
                        if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -1; // Triangle / Back
                        } else if (subState == 0) {
                            // Left Column (Combo Slots 0..5):
                            if (kTechLeftColumnArea.contains(ps2X, ps2Y)) {
                                const int slot = static_cast<int>((ps2Y - kTechSlotTopY) / kTechSlotStepY);
                                if (slot >= 0 && slot < 6) {
                                    s_pressedButtonId = slot; // 0..5
                                }
                            }
                            // Right Column (Individual Slots 0..4):
                            else if (kTechRightColumnArea.contains(ps2X, ps2Y)) {
                                const int slot = static_cast<int>((ps2Y - kTechSlotTopY) / kTechSlotStepY);
                                if (slot >= 0 && slot < 5) {
                                    s_pressedButtonId = 10 + slot; // 10..14
                                }
                            }
                        } else if (subState == 1) {
                            // Move List Popup (8 visible rows in center table)
                            if (kTechTabLHitbox.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = -2; // Tab L (L1)
                            } else if (kTechTabRHitbox.contains(ps2X, ps2Y)) {
                                s_pressedButtonId = -3; // Tab R (R1)
                            } else if (kTechListTableArea.contains(ps2X, ps2Y)) {
                                const int row = static_cast<int>((ps2Y - kTechListTopY) / kTechListStepY);
                                if (row >= 0 && row < 8) {
                                    s_pressedButtonId = row; // 0..7
                                }
                            }
                        }
                    }
                } else if (screenId == MENU_ROULETTE_EDIT) {
                    const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
                    if (subMgr != 0) {
                        const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
                        if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                            s_pressedButtonId = -1; // Triangle / Back
                        } else if (subState == 0) {
                            // Roulette Wheel Slots (5 slots on left)
                            if (kRouletteSlotArea.contains(ps2X, ps2Y)) {
                                const int slot = static_cast<int>((ps2Y - 100.0f) / 50.0f);
                                if (slot >= 0 && slot < 5) {
                                    s_pressedButtonId = slot;
                                }
                            }
                        } else if (subState == 1) {
                            // Roulette Move List Popup (6 rows on right)
                            if (kRouletteListArea.contains(ps2X, ps2Y)) {
                                const int row = static_cast<int>((ps2Y - kRouletteListTopY) / kRouletteRowHeight);
                                if (row >= 0 && row < 6) {
                                    s_pressedButtonId = row;
                                }
                            }
                        }
                    }
                } else if (screenId == MENU_OPTIONS) {
                    if (kCommonBackHitbox.contains(ps2X, ps2Y)) {
                        s_pressedButtonId = -1; // Triangle / Back
                    } else if (ps2Y >= kOptionsRowTopY) {
                        const int row = static_cast<int>((ps2Y - kOptionsRowTopY) / kOptionsRowHeight);
                        if (row >= 0 && row < 8) {
                            if (row >= 1 && row <= 3 && ps2X >= 350.0f) {
                                if (ps2X < kOptionsSliderMidX) {
                                    s_pressedButtonId = -10; // Left
                                } else {
                                    s_pressedButtonId = -11; // Right
                                }
                            } else {
                                s_pressedButtonId = row;
                            }
                        }
                    }
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

                // Support horizontal swiping to rotate Title Carousel (state 4)
                if (screenId == MENU_TITLE && menuMgr != 0) {
                    const uint8_t titleState = rdram[(menuMgr + kTitleStateOffset) & 0x01FFFFFFu];
                    if (titleState == 4) {
                        s_accumulatedScrollX += ev.scrollDeltaX;
                        if (s_accumulatedScrollX < -25.0f) {
                            s_accumulatedScrollX = 0.0f;
                            s_injectedBtnMask = kPadRight;
                            s_singleFrameInject = true;
                            s_framesSinceInject = 0;
                            ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                        } else if (s_accumulatedScrollX > 25.0f) {
                            s_accumulatedScrollX = 0.0f;
                            s_injectedBtnMask = kPadLeft;
                            s_singleFrameInject = true;
                            s_framesSinceInject = 0;
                            ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                        }
                    }
                }

                // Vertical finger scrolling for list popups via DPAD inject (Safe against memory corruption)
                if (screenId == MENU_TECHNIQUES || screenId == MENU_ROULETTE_EDIT || screenId == MENU_SHOP) {
                    s_accumulatedScrollY += ev.scrollDeltaY;
                    if (s_accumulatedScrollY <= -30.0f) {
                        s_accumulatedScrollY = 0.0f;
                        s_injectedBtnMask = kPadDown;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_accumulatedScrollY >= 30.0f) {
                        s_accumulatedScrollY = 0.0f;
                        s_injectedBtnMask = kPadUp;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    }
                }
                break;
            }

            case TouchAction::Up: {
                if (!s_isDragging && s_pressedButtonId != -999) {
                    s_dbgLastTapId.store(s_pressedButtonId, std::memory_order_relaxed);

                    // 1. Direct button actions
                    if (s_pressedButtonId == -1) {
                        // Cancel / Back: ALWAYS Triangle (or Start for pause root)
                        uint16_t mask = kPadTriangle;
                        if (screenId == MENU_PAUSE_ROOT) {
                            mask = kPadStart; // Resume gameplay
                        }
                        s_injectedBtnMask = mask;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == -10) {
                        s_injectedBtnMask = kPadLeft;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == -11) {
                        s_injectedBtnMask = kPadRight;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == -2) {
                        s_injectedBtnMask = kPadL1;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == -3) {
                        s_injectedBtnMask = kPadR1;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == 99) {
                        // Title Press Start
                        s_injectedBtnMask = kPadStart;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    } else if (s_pressedButtonId == 10) {
                        // Title Center Confirm
                        s_injectedBtnMask = kPadCross;
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    }
                    // 2. Dialog Actions
                    else if (screenId == MENU_DIALOG) {
                        if (s_pressedButtonId == 0) {
                            // Yes: inject Cross
                            s_injectedBtnMask = kPadCross;
                        } else {
                            // No: inject Triangle
                            s_injectedBtnMask = kPadTriangle;
                        }
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    }
                    // 3. Shop Actions
                    else if (screenId == MENU_SHOP) {
                        if (s_pressedButtonId == 0) {
                            // Buy
                            s_injectedBtnMask = kPadCross;
                        } else if (s_pressedButtonId == 1) {
                            // Sell
                            s_injectedBtnMask = kPadRight; // or Cross if already selected
                        } else if (s_pressedButtonId == 2) {
                            // Leave Shop
                            s_injectedBtnMask = kPadTriangle;
                        }
                        s_singleFrameInject = true;
                        s_framesSinceInject = 0;
                        ps2_pad::setHostTouchInputState(s_injectedBtnMask, 0.0f, 0.0f, 0.0f, 0.0f);
                    }
                    // 4. Stage Map Actions
                    else if (screenId == MENU_STAGE_MAP) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 10);
                        if (subMgr != 0 && s_pressedButtonId >= 0 && s_pressedButtonId <= 3) {
                            uint8_t targetCur = static_cast<uint8_t>(s_pressedButtonId);
                            rdram[(subMgr + kStageMapCursorOffset) & 0x01FFFFFFu] = targetCur;
                            s_pendingVerify = true;
                            s_pendingVerifyType = VerifyType::STAGE_MAP_BTN;
                            s_pendingTargetId = targetCur;
                            s_pendingSubMgr = subMgr;
                            s_verifyWaitFrames = 1;
                            s_dbgPendingTargetId.store(targetCur, std::memory_order_relaxed);
                        }
                    }
                    // 5. Title Screen Options
                    else if (screenId == MENU_TITLE && menuMgr != 0) {
                        const uint8_t titleState = rdram[(menuMgr + kTitleStateOffset) & 0x01FFFFFFu];
                        if (titleState == 4 || titleState == 5) {
                            int16_t targetCur = static_cast<int16_t>(s_pressedButtonId);
                            std::memcpy(rdram + ((menuMgr + kTitleCursorOffset) & 0x01FFFFFFu), &targetCur, sizeof(targetCur));
                            s_pendingVerify = true;
                            s_pendingVerifyType = (titleState == 4) ? VerifyType::TITLE_CAROUSEL : VerifyType::TITLE_DIFFICULTY;
                            s_pendingTargetId = targetCur;
                            s_pendingSubMgr = menuMgr;
                            s_verifyWaitFrames = 1;
                            s_dbgPendingTargetId.store(targetCur, std::memory_order_relaxed);
                        }
                    }
                    // 6. Pause Root Options
                    else if (screenId == MENU_PAUSE_ROOT) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 0);
                        if (subMgr != 0 && s_pressedButtonId >= 0 && s_pressedButtonId <= 4) {
                            uint8_t targetCur = static_cast<uint8_t>(s_pressedButtonId);
                            rdram[(subMgr + kPauseRootCursorOffset) & 0x01FFFFFFu] = targetCur;
                            s_pendingVerify = true;
                            s_pendingVerifyType = VerifyType::PAUSE_ROOT;
                            s_pendingTargetId = targetCur;
                            s_pendingSubMgr = subMgr;
                            s_verifyWaitFrames = 1;
                            s_dbgPendingTargetId.store(targetCur, std::memory_order_relaxed);
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
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId);
                                    rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu] = 0; // Left column
                                    rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    s_pendingVerify = true;
                                    s_pendingVerifyType = VerifyType::TECH_SLOT;
                                    s_pendingTargetId = targetSlot;
                                    s_pendingSubMgr = subMgr;
                                    s_verifyWaitFrames = 1;
                                    s_dbgPendingTargetId.store(targetSlot, std::memory_order_relaxed);
                                } else if (s_pressedButtonId >= 10 && s_pressedButtonId < 15) {
                                    // Right Column: Individual Button Slots (0..4)
                                    uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId - 10);
                                    rdram[(subMgr + kTechColumnOffset) & 0x01FFFFFFu] = 1; // Right column
                                    rdram[(subMgr + kTechSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                    s_pendingVerify = true;
                                    s_pendingVerifyType = VerifyType::TECH_SLOT;
                                    s_pendingTargetId = targetSlot;
                                    s_pendingSubMgr = subMgr;
                                    s_verifyWaitFrames = 1;
                                    s_dbgPendingTargetId.store(10 + targetSlot, std::memory_order_relaxed);
                                }
                            } else if (subState == 1 && s_pressedButtonId >= 0 && s_pressedButtonId < 8) {
                                // Move list row selection
                                int16_t targetRow = static_cast<int16_t>(s_pressedButtonId);
                                std::memcpy(rdram + ((subMgr + kTechListCursorOffset) & 0x01FFFFFFu), &targetRow, sizeof(targetRow));
                                s_pendingVerify = true;
                                s_pendingVerifyType = VerifyType::TECH_ROW;
                                s_pendingTargetId = targetRow;
                                s_pendingSubMgr = subMgr;
                                s_verifyWaitFrames = 1;
                                s_dbgPendingTargetId.store(targetRow, std::memory_order_relaxed);
                            }
                        }
                    }
                    // 8. Roulette Wheel Edit
                    else if (screenId == MENU_ROULETTE_EDIT) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 2);
                        if (subMgr != 0) {
                            const uint8_t subState = rdram[(subMgr + kRouletteSubStateOffset) & 0x01FFFFFFu];
                            if (subState == 0 && s_pressedButtonId >= 0 && s_pressedButtonId < 5) {
                                uint8_t targetSlot = static_cast<uint8_t>(s_pressedButtonId);
                                rdram[(subMgr + kRouletteSlotCursorOffset) & 0x01FFFFFFu] = targetSlot;
                                s_pendingVerify = true;
                                s_pendingVerifyType = VerifyType::ROULETTE_SLOT;
                                s_pendingTargetId = targetSlot;
                                s_pendingSubMgr = subMgr;
                                s_verifyWaitFrames = 1;
                                s_dbgPendingTargetId.store(targetSlot, std::memory_order_relaxed);
                            } else if (subState == 1 && s_pressedButtonId >= 0 && s_pressedButtonId < 6) {
                                uint8_t targetRow = static_cast<uint8_t>(s_pressedButtonId);
                                rdram[(subMgr + kRouletteListCursorOffset) & 0x01FFFFFFu] = targetRow;
                                s_pendingVerify = true;
                                s_pendingVerifyType = VerifyType::ROULETTE_ROW;
                                s_pendingTargetId = targetRow;
                                s_pendingSubMgr = subMgr;
                                s_verifyWaitFrames = 1;
                                s_dbgPendingTargetId.store(targetRow, std::memory_order_relaxed);
                            }
                        }
                    }
                    // 9. Options Screen (8 rows, NO TABS)
                    else if (screenId == MENU_OPTIONS) {
                        const uint32_t subMgr = getSubManagerPtr(rdram, menuMgr, 4);
                        if (subMgr != 0 && s_pressedButtonId >= 0 && s_pressedButtonId < 8) {
                            uint8_t targetRow = static_cast<uint8_t>(s_pressedButtonId);
                            rdram[(subMgr + kOptionsCursorOffset) & 0x01FFFFFFu] = targetRow;
                            s_pendingVerify = true;
                            s_pendingVerifyType = VerifyType::OPTIONS_ROW;
                            s_pendingTargetId = targetRow;
                            s_pendingSubMgr = subMgr;
                            s_verifyWaitFrames = 1;
                            s_dbgPendingTargetId.store(targetRow, std::memory_order_relaxed);
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
