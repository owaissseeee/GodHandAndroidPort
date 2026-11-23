#pragma once
// ==============================================================================
// menu_touch_addresses.h
// God Hand (PS2, SLUS-21503) Verified Menu EE RAM Addresses, Offsets & Hitboxes
//
// All addresses and offsets verified from:
// - recomp/godhand_functions.csv
// - app/src/main/cpp/src/godhand/game_layout.h
// - app/src/main/cpp/generated/cSubScr_SubScrOn_0x160020.cpp
// - app/src/main/cpp/generated/func_001601D8_0x1601d8.cpp
// - app/src/main/cpp/generated/func_00161D08_0x161d08.cpp
// - app/src/main/cpp/generated/func_00165EB8_0x165eb8.cpp
// - app/src/main/cpp/generated/func_00166BB8_0x166bb8.cpp
// - app/src/main/cpp/generated/func_00168560_0x168560.cpp
// - app/src/main/cpp/generated/func_0016C260_0x16c260.cpp
// - app/src/main/cpp/generated/func_0016DF38_0x16df38.cpp
// - app/src/main/cpp/generated/func_002B2400_0x2b2400.cpp
// - app/src/main/cpp/generated/func_002B2438_0x2b2438.cpp
// - app/src/main/cpp/generated/func_002B3D70_0x2b3d70.cpp
// - app/src/main/cpp/generated/func_002B3EC8_0x2b3ec8.cpp
// - app/src/main/cpp/generated/cCoreSave_getStateBit0_0x1fc708.cpp
// - app/src/main/cpp/generated/cCoreSave_setStateBit0_0x1fc6e8.cpp
// ==============================================================================

#include <cstdint>
#include <cstring>
#include <algorithm>

namespace godhand::menu_touch {

// -----------------------------------------------------------------------------
// 1. Core Global State Addresses in EE RAM
// -----------------------------------------------------------------------------
// Global GameWork base address: D_007474A0 (verified in game_layout.h:16)
constexpr uint32_t kGameWorkBaseAddr    = 0x007474A0u;

// Edge-triggered button command word: GameWork + 0x1A0 (0x00747640u)
constexpr uint32_t kPadTrgAddr          = 0x00747640u;

// Repeat button command word: GameWork + 0x1B0 (0x00747650u)
constexpr uint32_t kPadRepAddr          = 0x00747650u;

// Game state flags5E4: GameWork + 0x5E4 (0x00747A84u)
constexpr uint32_t kFlags5E4Addr        = 0x00747A84u;

// Stop flags5D8: GameWork + 0x5D8 (0x00747A78u)
constexpr uint32_t kFlags5D8Addr        = 0x00747A78u;

// Display flagsDsp: GameWork + 0x5E0 (0x00747A80u)
constexpr uint32_t kFlagsDspAddr        = 0x00747A80u;

// Current Room ID: GameWork + 0x5B0 (0x00747A50u)
constexpr uint32_t kRoomAddr            = 0x00747A50u;

// Title state bit: 0x00004000u (Sta::kTitle, game_layout.h:105)
constexpr uint32_t kStaTitleBit         = 0x00004000u;

// Subscreen state bit: 0x08000000u (Sta::kSubScr, game_layout.h:96)
constexpr uint32_t kStaSubScrBit        = 0x08000000u;

// Event / Cutscene state bit: 0x20000000u (Sta::kEvent, game_layout.h:94)
constexpr uint32_t kStaEventBit         = 0x20000000u;

// Soft event state bit: 0x00000040u (Sta::kSoftEvent, game_layout.h:109)
constexpr uint32_t kStaSoftEventBit     = 0x00000040u;

// cCoreSave global pointer in RDRAM: 0x00569B70u
// Verified in func_00166BB8_0x166bb8.cpp:348-353, cCoreSave_getStateBit0_0x1fc708.cpp:23
constexpr uint32_t kCoreSavePtrAddr     = 0x00569B70u;
// Memory card save/load active state bit in cCoreSave: +0xBBA (uint16_t, bit 0)
constexpr uint32_t kCoreSaveStateOffset = 0x0BBAu;

// -----------------------------------------------------------------------------
// 2. Title Screen Manager Addresses & Offsets
// -----------------------------------------------------------------------------
// cMessage singleton pointer: 0x003C23A4u (verified in func_002AEDF0_0x2aedf0.cpp:41)
constexpr uint32_t kMessageSingletonPtr = 0x003C23A4u;

// Title Manager State offset inside titleObj: +0x0C (uint8_t: 3 = Press Start, 4 = Carousel, 5 = Difficulty, 6 = Options)
// Verified in func_002B2438_0x2b2438.cpp:49: lbu $v1, 0xC($s0)
constexpr uint32_t kTitleStateOffset    = 0x0Cu;

// Title Manager Cursor offset inside titleObj: +0x94 (int16_t: 0=New Game, 1=Load Game, 2=Option in State 4; 0=Easy, 1=Normal, 2=Hard in State 5)
// Verified in func_002B3EC8_0x2b3ec8.cpp:88,168: lhu $a1, 0x94($s0) / sh $v0, 0x94($s0)
constexpr uint32_t kTitleCursorOffset   = 0x94u;

// Find Title Screen Object by walking cMessage list
inline uint32_t findTitleObj(const uint8_t* rdram) {
    if (!rdram) return 0;
    uint32_t cMsg = 0;
    std::memcpy(&cMsg, rdram + (kMessageSingletonPtr & 0x01FFFFFFu), sizeof(cMsg));
    if (cMsg < 0x00100000u || cMsg >= 0x02000000u) return 0;

    uint32_t bestObj = 0;

    uint32_t curr = 0;
    std::memcpy(&curr, rdram + ((cMsg + 0x10u) & 0x01FFFFFFu), sizeof(curr));
    for (int i = 0; i < 32 && curr >= 0x00100000u && curr < 0x02000000u; ++i) {
        const uint8_t state = rdram[(curr + kTitleStateOffset) & 0x01FFFFFFu];
        // Title states: 2 = Transition, 3 = Press Start, 4 = Carousel, 5 = Difficulty, 6 = Options
        if (state >= 4 && state <= 6) {
            // Prioritize Carousel, Difficulty, and Options over Press Start
            return curr;
        }
        if (state == 2 || state == 3) {
            if (bestObj == 0) {
                bestObj = curr;
            }
        }
        uint32_t next = 0;
        std::memcpy(&next, rdram + ((curr + 0x08u) & 0x01FFFFFFu), sizeof(next));
        curr = next;
    }
    return bestObj;
}

// -----------------------------------------------------------------------------
// 3. cSubScr Singleton & Subscreen Manager Offsets
// -----------------------------------------------------------------------------
// cSubScr singleton pointer in RDRAM: 0x003BD930u
// Verified in cSubScr_SubScrOn_0x160020.cpp, cGame_gameLoop_0x2a6690.cpp:308, game_layout.h:171
constexpr uint32_t kSubScrSingletonPtr  = 0x003BD930u;

// Active subscreen ID offset inside cSubScr: +0x48 (int32_t, -1 when closed)
// Verified in cSubScr_SubScrOn_0x160020.cpp:210: sw $s1, 0x48($s0), game_layout.h:172
constexpr uint32_t kSubScrKindOffset    = 0x48u;

// Open/transition state offset inside cSubScr: +0x50 (int16_t, 1 = fully open)
constexpr uint32_t kSubScrOpenOffset    = 0x50u;

// Submanager table lookup inside cSubScr:
inline uint32_t getSubManagerPtr(const uint8_t* rdram, uint32_t subScr, int32_t targetKind) {
    if (!rdram || subScr < 0x00100000u || subScr >= 0x02000000u) return 0;
    for (uint32_t i = 0; i < 16; ++i) {
        int32_t k = -1;
        uint32_t mgr = 0;
        std::memcpy(&k, rdram + ((subScr + i * 8u) & 0x01FFFFFFu), sizeof(k));
        std::memcpy(&mgr, rdram + ((subScr + i * 8u + 4u) & 0x01FFFFFFu), sizeof(mgr));
        if (k == targetKind) {
            if (mgr >= 0x00100000u && mgr < 0x02000000u) {
                return mgr;
            }
            return 0;
        }
    }
    return 0;
}

// -----------------------------------------------------------------------------
// EXACT Ground Truth Offsets Per Submanager (MIPS Verified - ZERO Guesswork)
// -----------------------------------------------------------------------------
// A. Pause Root (cSubScrMenu, kind=0, update=func_00165EB8):
// Cursor index is uint8_t at +0x5A (0=Techniques, 1=Roulette, 2=Map, 3=Options, 4=Exit)
// Verified in func_00165EB8_0x165eb8.cpp:124,250: lbu $v1, 0x5A($s0) / sb $v1, 0x5A($s0)
constexpr uint32_t kPauseRootCursorOffset = 0x5Au;
// Dialog / Confirm mode in cSubScrMenu: uint8_t at +0x2A0 (0=normal, !=0 dialog active)
constexpr uint32_t kPauseRootDialogOffset = 0x2A0u;

// B. Techniques (cSubScrWaza, kind=1, update=func_0016DF38):
// Sub-state is uint8_t at +0x5A (0=Slot grid selection, 1=Move list popup open, 2=Closing)
constexpr uint32_t kTechSubStateOffset     = 0x5Au;

// In Sub-state 0 (Slot grid):
// Column selection is uint8_t at +0x284 (0 = Left combo slots, 1 = Right button slots)
constexpr uint32_t kTechColumnOffset       = 0x284u;
// Slot index within column is uint8_t at +0x25C (range 0..5 for Left, 0..4 for Right)
constexpr uint32_t kTechSlotCursorOffset   = 0x25Cu;

// In Sub-state 1 (Move list popup):
// Visible row cursor is int16_t at +0x25E (range 0..7 within visible 8 rows)
constexpr uint32_t kTechListCursorOffset   = 0x25Eu;
// Scroll top is int16_t at +0x260 (first visible move in category)
constexpr uint32_t kTechListScrollOffset   = 0x260u;

// C. Roulette Wheel (cSubScrGodReel, kind=2, update=func_00162298):
// Sub-state is uint8_t at +0x5A (0=Wheel slots, 1=Roulette move list popup)
constexpr uint32_t kRouletteSubStateOffset   = 0x5Au;

// In Sub-state 0 (Wheel slots):
// Wheel slot cursor row is uint8_t at +0xEC (range 0..4, or -1 for return)
constexpr uint32_t kRouletteSlotCursorOffset = 0xECu;
// Wheel slot column is uint8_t at +0xED (0 = Left 5 slots, 1 = Right 5 slots)
// Verified in func_00162298_0x162298.cpp:360-368: lbu $v1, 0xED($s0) / xori $v1, $v1, 1 / sb $v1, 0xED($s0)
constexpr uint32_t kRouletteColumnOffset     = 0xEDu;

// In Sub-state 1 (Roulette move list popup):
// Visible row cursor is uint8_t at +0xEE (range 0..5)
constexpr uint32_t kRouletteListCursorOffset = 0xEEu;
// Scroll top is uint8_t at +0xEF
constexpr uint32_t kRouletteListScrollOffset = 0xEFu;

// D. Options Screen (cSubScrOption, kind=4, update=func_00166BB8):
// Row cursor is uint8_t at +0x130 (range 0..7, exactly 8 rows, NO TABS)
constexpr uint32_t kOptionsCursorOffset     = 0x130u;

// E. Stage Clear Map Screen (kind=3 or 10, update=func_00168560):
// Verified in func_00167908_0x167908.cpp:1416: lbu $v1, 0x110($s1)
constexpr uint32_t kStageMapCursorOffset    = 0x110u;

// F. Shop Screen (cSubScrShop, kind=7, update=func_0016AE38 & func_0016B1F8):
// Sub-state is uint8_t at +0x5A (0=Category select BUY/SELL/LEAVE, 1=Item/Technique list)
constexpr uint32_t kShopSubStateOffset        = 0x5Au;
// Category cursor in Sub-state 0: uint8_t at +0x1B4 (0=BUY, 1=SELL, 2=LEAVE SHOP)
constexpr uint32_t kShopCategoryCursorOffset  = 0x1B4u;
// Item list row cursor in Sub-state 1: uint16_t at +0x1D2 (range 0..5)
constexpr uint32_t kShopCursorOffset          = 0x1D2u;
// Item list scroll top in Sub-state 1: uint16_t at +0x1D0
constexpr uint32_t kShopScrollOffset          = 0x1D0u;
// Active tab/column in Sub-state 1: uint8_t at +0x1D4 (0=TECHNIQUES, 1=ROULETTE, 2=POWER UP, 3=EXIT)
constexpr uint32_t kShopColumnOffset          = 0x1D4u;

// G. Save / Load Screen:
// Current selected slot index (0..2 visible, up to 20 total): int32_t at 0x00747A0Cu
constexpr uint32_t kSaveLoadCurSlotAddr       = 0x00747A0Cu;
// cSaveLoad instance singleton pointer in RDRAM: 0x003C264Cu
constexpr uint32_t kSaveLoadInstancePtr       = 0x003C264Cu;

// -----------------------------------------------------------------------------
// 4. PS2 Controller Button Bitmasks
// -----------------------------------------------------------------------------
constexpr uint16_t kPadSelect   = 1u << 0u;   // 0x0001
constexpr uint16_t kPadL3       = 1u << 1u;   // 0x0002
constexpr uint16_t kPadR3       = 1u << 2u;   // 0x0004
constexpr uint16_t kPadStart    = 1u << 3u;   // 0x0008
constexpr uint16_t kPadUp       = 1u << 4u;   // 0x0010
constexpr uint16_t kPadRight    = 1u << 5u;   // 0x0020
constexpr uint16_t kPadDown     = 1u << 6u;   // 0x0040
constexpr uint16_t kPadLeft     = 1u << 7u;   // 0x0080
constexpr uint16_t kPadL2       = 1u << 8u;   // 0x0100
constexpr uint16_t kPadR2       = 1u << 9u;   // 0x0200
constexpr uint16_t kPadL1       = 1u << 10u;  // 0x0400
constexpr uint16_t kPadR1       = 1u << 11u;  // 0x0800
constexpr uint16_t kPadTriangle = 1u << 12u;  // 0x1000 (Cancel / Exit in menus)
constexpr uint16_t kPadCircle   = 1u << 13u;  // 0x2000 (Confirm / Select)
constexpr uint16_t kPadCross    = 1u << 14u;  // 0x4000 (Confirm / Select)
constexpr uint16_t kPadSquare   = 1u << 15u;  // 0x8000

// -----------------------------------------------------------------------------
// 5. Menu Screen Enums & Packed Bitflags
// -----------------------------------------------------------------------------
enum MenuScreenId : uint32_t {
    MENU_NONE          = 0,
    MENU_TITLE         = 1,
    MENU_PAUSE_ROOT    = 2,
    MENU_TECHNIQUES    = 3,
    MENU_ROULETTE_EDIT = 4,
    MENU_OPTIONS       = 5,
    MENU_ITEMS         = 6,
    MENU_SAVELOAD      = 7,
    MENU_SHOP          = 8,
    MENU_STAGE_MAP     = 9,
    MENU_DIALOG        = 10,
    MENU_MAP           = 11,
};

// Flags packed into the upper bits of getActiveMenuState():
constexpr uint32_t MENU_FLAG_SCROLLABLE    = 1u << 16;
constexpr uint32_t MENU_FLAG_LIVE_ROULETTE = 1u << 17;

// -----------------------------------------------------------------------------
// 6. 2D Virtual Coordinate Hitbox Structures (640 x 448 Virtual Space)
// -----------------------------------------------------------------------------
struct Rect2D {
    float x0, y0, x1, y1;

    constexpr bool contains(float x, float y) const {
        return x >= x0 && x <= x1 && y >= y0 && y <= y1;
    }
};

struct MenuButtonHitbox {
    int32_t id;         // Corresponding cursorIndex or action ID (-1 = Back, -2 = TabL, -3 = TabR)
    Rect2D  rect;       // Virtual PS2 coordinate bounds (640 x 448)
};

// Common on-screen Back / Cancel button touch target (bottom-right prompt)
constexpr Rect2D kCommonBackHitbox = { 490.0f, 395.0f, 635.0f, 445.0f };

// Title Screen (640x448 space, bottom horizontal options):
// New Game (0), Load Game (1), Options (2)
constexpr MenuButtonHitbox kTitleCarouselHitboxes[] = {
    { 0, { 220.0f, 360.0f, 420.0f, 420.0f } }, // NEW GAME (center)
    { 1, { 430.0f, 360.0f, 620.0f, 420.0f } }, // LOAD GAME (right)
    { 2, { 20.0f,  360.0f, 210.0f, 420.0f } }, // OPTIONS (left)
};

// Title Screen Carousel Navigation Arrows & Confirm area:
constexpr Rect2D kTitleLeftArrowHitbox  = { 15.0f,  220.0f,  95.0f, 300.0f };
constexpr Rect2D kTitleRightArrowHitbox = { 545.0f, 220.0f, 625.0f, 300.0f };
constexpr Rect2D kTitleCenterConfirm    = { 220.0f, 250.0f, 420.0f, 370.0f };

// Difficulty Selection (State 5):
// Easy (0), Normal (1), Hard (2)
constexpr MenuButtonHitbox kDifficultyHitboxes[] = {
    { 0, { 40.0f,  360.0f, 200.0f, 420.0f } }, // Easy (left)
    { 1, { 220.0f, 360.0f, 420.0f, 420.0f } }, // Normal (center)
    { 2, { 440.0f, 360.0f, 600.0f, 420.0f } }, // Hard / ??? (right)
    { -1, kCommonBackHitbox                  }, // Cancel / Back (Triangle)
};

// Pause Menu Root (640x448 space):
// Row hitboxes span from left carved buttons (X=20) through status display (X=510)
// Techniques (0), Roulette (1), Map (2), Options (3), Exit (4)
constexpr MenuButtonHitbox kPauseRootHitboxes[] = {
    { 0, { 20.0f, 100.0f, 510.0f, 155.0f } }, // Techniques
    { 1, { 20.0f, 155.0f, 510.0f, 208.0f } }, // Roulette
    { 2, { 20.0f, 208.0f, 510.0f, 258.0f } }, // Map
    { 3, { 20.0f, 258.0f, 510.0f, 308.0f } }, // Options
    { 4, { 20.0f, 308.0f, 510.0f, 365.0f } }, // Exit / Resume
};

// Techniques Screen Layout Constants:
// Left Column: Combo Slots (0..5) starting at Y: 106
constexpr Rect2D kTechLeftColumnArea   = { 35.0f, 106.0f, 245.0f, 358.0f };
// Right Column: Individual Button Slots (0..4) starting at Y: 148 (aligned with L1)
constexpr Rect2D kTechRightColumnArea  = { 275.0f, 148.0f, 435.0f, 360.0f };
constexpr float  kTechSlotTopY         = 106.0f;
constexpr float  kTechRightSlotTopY    = 148.0f;
constexpr float  kTechSlotStepY        = 42.0f;
constexpr float  kTechSlotHeight       = 34.0f;

// Techniques Move List Popup is ALWAYS on the LEFT (Gene character preview is on the right):
constexpr Rect2D kTechLeftTableArea    = { 18.0f,  98.0f, 330.0f, 326.0f };
constexpr Rect2D kTechLeftTabLHitbox   = { 18.0f,  50.0f,  90.0f,  85.0f };
constexpr Rect2D kTechLeftTabRHitbox   = { 240.0f, 50.0f, 315.0f,  85.0f };

// Techniques Move List Popup on RIGHT (fallback):
constexpr Rect2D kTechRightTableArea   = { 235.0f, 114.0f, 435.0f, 338.0f };
constexpr Rect2D kTechRightTabLHitbox  = { 235.0f,  60.0f, 282.0f,  88.0f };
constexpr Rect2D kTechRightTabRHitbox  = { 388.0f,  60.0f, 435.0f,  88.0f };

constexpr float  kTechListTopY         = 98.0f;
constexpr float  kTechListStepY        = 28.0f;
constexpr float  kTechListRowHeight    = 26.0f;

// Roulette Edit Layout Constants (5 equipped slots on the left, RETURN at bottom left):
constexpr Rect2D kRouletteLeftSlotArea  = { 25.0f,  95.0f, 235.0f, 335.0f };
constexpr Rect2D kRouletteReturnHitbox  = { 20.0f, 385.0f, 215.0f, 435.0f };
constexpr Rect2D kRouletteListArea      = { 275.0f, 85.0f, 500.0f, 335.0f };
constexpr float  kRouletteSlotTopY      = 95.0f;
constexpr float  kRouletteSlotStepY     = 48.0f;
constexpr float  kRouletteSlotHeight    = 44.0f;
constexpr float  kRouletteListTopY      = 85.0f;
constexpr float  kRouletteListStepY     = 38.0f;
constexpr float  kRouletteListRowHeight = 34.0f;

// Options Menu Layout Constants (Exactly 8 rows, NO TABS):
constexpr float kOptionsRowTopY        = 88.0f;
constexpr float kOptionsRowHeight      = 30.0f;
constexpr float kOptionsRowStepY       = 34.0f;
constexpr float kOptionsRowLeftX       = 40.0f;
constexpr float kOptionsRowRightX      = 600.0f;
constexpr float kOptionsSliderMidX     = 470.0f;

// Stage Clear Map (Kind 3 or 9 or 11) Buttons (Right column):
constexpr MenuButtonHitbox kStageMapHitboxes[] = {
    { 0, { 385.0f, 155.0f, 580.0f, 195.0f } }, // SAVE
    { 1, { 385.0f, 200.0f, 580.0f, 240.0f } }, // CONTINUE
    { 2, { 385.0f, 245.0f, 580.0f, 285.0f } }, // ENTER SHOP
    { 3, { 385.0f, 290.0f, 580.0f, 330.0f } }, // ENTER CASINO
    { -1, kCommonBackHitbox                 }, // Back
};

// Memory Card Save / Load (Kind 7 / MENU_SAVELOAD):
constexpr MenuButtonHitbox kSaveLoadHitboxes[] = {
    { 0, { 38.0f,  65.0f, 602.0f, 130.0f } }, // Slot 1
    { 1, { 38.0f, 135.0f, 602.0f, 200.0f } }, // Slot 2
    { 2, { 38.0f, 205.0f, 602.0f, 270.0f } }, // Slot 3
    { 10, { 370.0f, 395.0f, 450.0f, 435.0f } }, // YES (Confirm dialog)
    { 11, { 480.0f, 395.0f, 560.0f, 435.0f } }, // NO (Cancel dialog)
    { -1, kCommonBackHitbox                  }, // Back
};

// Shop Screen (Kind 7 / MENU_SHOP) Category Selection Buttons:
constexpr MenuButtonHitbox kShopHitboxes[] = {
    { 0, { 120.0f, 160.0f, 280.0f, 230.0f } }, // BUY
    { 1, { 340.0f, 160.0f, 500.0f, 230.0f } }, // SELL
    { 2, {  20.0f, 250.0f, 220.0f, 310.0f } }, // LEAVE SHOP
    { -1, kCommonBackHitbox                 }, // Back
};

// Shop Subscreen (Kind 7) Category Tabs:
constexpr MenuButtonHitbox kShopTabsHitboxes[] = {
    { 0, {  20.0f, 18.0f, 160.0f, 55.0f } }, // TECHNIQUES
    { 1, { 170.0f, 18.0f, 330.0f, 55.0f } }, // ROULETTE
    { 2, { 340.0f, 18.0f, 490.0f, 55.0f } }, // POWER UP
    { 3, { 500.0f, 18.0f, 620.0f, 55.0f } }, // EXIT
};

// Modal Yes/No Confirmation Dialog (Kind 10 / MENU_DIALOG):
constexpr MenuButtonHitbox kDialogHitboxes[] = {
    { 0, { 340.0f, 390.0f, 430.0f, 435.0f } }, // Yes (Index 0)
    { 1, { 470.0f, 390.0f, 560.0f, 435.0f } }, // No (Index 1)
    { -1, kCommonBackHitbox                 }, // Cancel
};

} // namespace godhand::menu_touch
