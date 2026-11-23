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
// - app/src/main/cpp/generated/SlotList_selectPrev_0x1f6a80.cpp
// - app/src/main/cpp/generated/func_001F6AF8_0x1f6af8.cpp
// - app/src/main/cpp/generated/MenuInput_stepPad_0x1f6520.cpp
// - app/src/main/cpp/generated/MenuInput_stepPageKeys_0x1f60d8.cpp
// - app/src/main/cpp/generated/func_002B2438_0x2b2438.cpp
// - app/src/main/cpp/generated/func_002B2588_0x2b2588.cpp
// - app/src/main/cpp/generated/func_002B3D70_0x2b3d70.cpp
// - app/src/main/cpp/generated/func_002B3EC8_0x2b3ec8.cpp
// - app/src/main/cpp/generated/Move_0x30eee8.cpp
// - app/src/main/cpp/generated/cMessage_updateAll_0x2aefa8.cpp
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
// Verified in MenuInput_stepPad_0x1f6520.cpp:48, ModeObj_pollInputBits_0x1641b8.cpp:48
constexpr uint32_t kPadTrgAddr          = 0x00747640u;

// Repeat button command word: GameWork + 0x1B0 (0x00747650u)
// Verified in MenuInput_stepPageKeys_0x1f60d8.cpp:40
constexpr uint32_t kPadRepAddr          = 0x00747650u;

// Game state flags5E4: GameWork + 0x5E4 (0x00747A84u)
// Verified in game_layout.h:34, cSubScr_SubScrOn_0x160020.cpp:36
constexpr uint32_t kFlags5E4Addr        = 0x00747A84u;

// Stop flags5D8: GameWork + 0x5D8 (0x00747A78u)
constexpr uint32_t kFlags5D8Addr        = 0x00747A78u;

// Display flagsDsp: GameWork + 0x5E0 (0x00747A80u)
constexpr uint32_t kFlagsDspAddr        = 0x00747A80u;

// Current Room ID: GameWork + 0x5B0 (0x00747A50u)
constexpr uint32_t kRoomAddr            = 0x00747A50u;

// Title state bit: 0x00004000u (Sta::kTitle, game_layout.h:105)
constexpr uint32_t kStaTitleBit         = 0x00004000u;
// Title loop state bit: 0x00000002u (Sta::kTitleLoop, game_layout.h:112)
constexpr uint32_t kStaTitleLoopBit     = 0x00000002u;

// Subscreen state bit: 0x08000000u (Sta::kSubScr, game_layout.h:96)
constexpr uint32_t kStaSubScrBit        = 0x08000000u;

// Event / Cutscene state bit: 0x20000000u (Sta::kEvent, game_layout.h:94)
constexpr uint32_t kStaEventBit         = 0x20000000u;

// Soft event state bit: 0x00000040u (Sta::kSoftEvent, game_layout.h:109)
constexpr uint32_t kStaSoftEventBit     = 0x00000040u;

// -----------------------------------------------------------------------------
// 2. Title Screen Manager Addresses & Offsets
// -----------------------------------------------------------------------------
// Title scene manager global pointer: 0x003C23A4u (verified in func_002B2588_0x2b2588.cpp:49)
constexpr uint32_t kTitleSceneMgrPtr    = 0x003C23A4u;

// Title Manager State offset inside titleObj: +0x0C (uint8_t: 3 = Press Start, 4 = Carousel, 5 = Difficulty)
// Verified in func_002B2438_0x2b2438.cpp:49: lbu $v1, 0xC($s0)
constexpr uint32_t kTitleStateOffset    = 0x0Cu;

// Title Manager Cursor offset inside titleObj: +0x94 (int16_t: 0=New Game, 1=Load Game, 2=Option in State 4; 0=Easy, 1=Normal, 2=Hard in State 5)
// Verified in func_002B3EC8_0x2b3ec8.cpp:88,168: lhu $a1, 0x94($s0) / sh $v0, 0x94($s0)
constexpr uint32_t kTitleCursorOffset   = 0x94u;

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
// Verified in game_layout.h:173, func_00160FF0_0x160ff0.cpp
constexpr uint32_t kSubScrOpenOffset    = 0x50u;

// Phase/open step counter inside cSubScr: +0x52 (int16_t)
// Verified in func_00160FF0_0x160ff0.cpp:64: lh $v1, 0x52($s4)
constexpr uint32_t kSubScrPhaseOffset   = 0x52u;

// Submanager table lookup inside cSubScr:
// cSubScr contains an array of { int32_t kind, uint32_t subManagerPtr } entries at offset 0
// (verified in Obj0000_Call_func_0015FD18_Field_48_161288_0x161288.cpp and func_0015FD18_0x15fd18.cpp)
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
// Verified in func_0016DF38_0x16df38.cpp:118: lb $v1, 0x5A($s1)
constexpr uint32_t kTechSubStateOffset     = 0x5Au;

// In Sub-state 0 (Slot grid):
// Column selection is uint8_t at +0x284 (0 = Left combo slots, 1 = Right button slots)
constexpr uint32_t kTechColumnOffset       = 0x284u;
// Slot index within column is uint8_t at +0x25C (range 0..5 for Left, 0..4 for Right)
// Verified in func_0016DF38_0x16df38.cpp:246,330,648: lbu $v1, 0x25C($s1) / sb $v1, 0x25C($s1)
constexpr uint32_t kTechSlotCursorOffset   = 0x25Cu;

// In Sub-state 1 (Move list popup):
// Visible row cursor is int16_t at +0x25E (range 0..7 within visible 8 rows)
// Verified in func_0016DF38_0x16df38.cpp:1252,2514: lhu $v0, 0x25E($s1) / sh $v0, 0x25E($s1)
constexpr uint32_t kTechListCursorOffset   = 0x25Eu;

// Scroll top is int16_t at +0x260 (first visible move in category)
// Verified in func_0016DF38_0x16df38.cpp:1242,2574: lhu $v0, 0x260($s1) / sh $v0, 0x260($s1)
constexpr uint32_t kTechListScrollOffset   = 0x260u;

// C. Roulette Wheel (cSubScrGodReel, kind=2, update=func_00162298):
// Sub-state is uint8_t at +0x5A (0=Wheel slots, 1=Roulette move list popup)
// Verified in func_00162298_0x162298.cpp:440: sb $v0, 0x5A($s0)
constexpr uint32_t kRouletteSubStateOffset   = 0x5Au;

// In Sub-state 0 (Wheel slots):
// Wheel slot cursor is uint8_t at +0xEC (range 0..4)
// Verified in func_00162298_0x162298.cpp:186,263,432: lbu $v1, 0xEC($s0) / sb $v1, 0xEC($s0)
constexpr uint32_t kRouletteSlotCursorOffset = 0xECu;

// In Sub-state 1 (Roulette move list popup):
// Visible row cursor is uint8_t at +0xEE (range 0..5)
// Verified in func_00162298_0x162298.cpp:720,779,921: lbu $v1, 0xEE($s0) / sb $a0, 0xEE($s0)
constexpr uint32_t kRouletteListCursorOffset = 0xEEu;

// Scroll top is uint8_t at +0xEF
// Verified in func_00162298_0x162298.cpp:748,943: sb $v0, 0xEF($s0)
constexpr uint32_t kRouletteListScrollOffset = 0xEFu;

// D. Options Screen (cSubScrOption, kind=4, update=func_00166BB8):
// Row cursor is uint8_t at +0x130 (range 0..7, exactly 8 rows, NO TABS)
// Verified in func_00166BB8_0x166bb8.cpp:1673,1680,1744: lbu $v1, 0x130($s1) / sb $v1, 0x130($s1)
constexpr uint32_t kOptionsCursorOffset     = 0x130u;

// E. Stage Clear Map Screen (kind=10, update=func_00168560):
// Cursor is uint8_t at +0x5A (0=Save, 1=Continue, 2=Enter Shop, 3=Enter Casino)
constexpr uint32_t kStageMapCursorOffset    = 0x5Au;

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
// 5. Sound Effect IDs
// -----------------------------------------------------------------------------
constexpr uint32_t kSfxCursorMove = 0x15Fu;
constexpr uint32_t kSfxConfirm    = 0x160u;
constexpr uint32_t kSfxCancel     = 0x15Eu;

// -----------------------------------------------------------------------------
// 6. Menu Screen Enums & Packed Bitflags
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
// 7. 2D Virtual Coordinate Hitbox Structures (640 x 448 Virtual Space)
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
    { 0, { 230.0f, 360.0f, 410.0f, 420.0f } }, // NEW GAME (center)
    { 1, { 420.0f, 360.0f, 600.0f, 420.0f } }, // LOAD GAME (right)
    { 2, { 40.0f,  360.0f, 220.0f, 420.0f } }, // OPTIONS (left)
};

// Title Screen Carousel Navigation Arrows & Confirm area:
constexpr Rect2D kTitleLeftArrowHitbox  = { 20.0f,  250.0f, 140.0f, 360.0f };
constexpr Rect2D kTitleRightArrowHitbox = { 500.0f, 250.0f, 620.0f, 360.0f };
constexpr Rect2D kTitleCenterConfirm    = { 220.0f, 250.0f, 420.0f, 360.0f };

// Difficulty Selection (State 5):
// Easy (0), Normal (1), Hard (2)
constexpr MenuButtonHitbox kDifficultyHitboxes[] = {
    { 0, { 180.0f, 210.0f, 460.0f, 255.0f } }, // Easy
    { 1, { 180.0f, 260.0f, 460.0f, 305.0f } }, // Normal
    { 2, { 180.0f, 310.0f, 460.0f, 355.0f } }, // Hard
    { -1, kCommonBackHitbox                  }, // Cancel / Back (Triangle)
};

// Pause Menu Root (640x448 space, LEFT-ALIGNED text column):
// Techniques (0), Roulette (1), Map (2), Options (3), Exit (4)
constexpr MenuButtonHitbox kPauseRootHitboxes[] = {
    { 0, { 20.0f,  60.0f, 195.0f, 105.0f } }, // Techniques
    { 1, { 20.0f, 105.0f, 195.0f, 150.0f } }, // Roulette
    { 2, { 20.0f, 150.0f, 195.0f, 195.0f } }, // Map
    { 3, { 20.0f, 195.0f, 195.0f, 240.0f } }, // Options
    { 4, { 20.0f, 240.0f, 195.0f, 285.0f } }, // Exit / Resume
    { -1, kCommonBackHitbox                 }, // Cancel / Back
};

// Techniques Screen Layout Constants:
// Left Column: Combo Slots (0..5)
constexpr Rect2D kTechLeftColumnArea   = { 25.0f, 110.0f, 255.0f, 350.0f };
// Right Column: Individual Button Slots (0..4)
constexpr Rect2D kTechRightColumnArea  = { 270.0f, 110.0f, 440.0f, 350.0f };
constexpr float  kTechSlotTopY         = 110.0f;
constexpr float  kTechSlotStepY        = 40.0f;
constexpr float  kTechSlotHeight       = 36.0f;

// Techniques Move List Popup (8 visible rows):
constexpr Rect2D kTechListTableArea    = { 215.0f, 98.0f, 435.0f, 338.0f };
constexpr float  kTechListTopY         = 98.0f;
constexpr float  kTechListStepY        = 30.0f;
constexpr float  kTechListRowHeight    = 28.0f;
constexpr Rect2D kTechTabLHitbox       = { 215.0f, 55.0f, 265.0f, 90.0f };
constexpr Rect2D kTechTabRHitbox       = { 385.0f, 55.0f, 435.0f, 90.0f };

// Roulette Edit Layout Constants:
constexpr Rect2D kRouletteSlotArea     = { 50.0f, 100.0f, 260.0f, 360.0f };
constexpr Rect2D kRouletteListArea     = { 280.0f, 80.0f, 580.0f, 380.0f };
constexpr float  kRouletteRowHeight    = 44.0f;
constexpr float  kRouletteListTopY     = 80.0f;

// Options Menu Layout Constants (Exactly 8 rows, NO TABS):
constexpr float kOptionsRowTopY        = 95.0f;
constexpr float kOptionsRowHeight      = 30.0f;
constexpr float kOptionsRowLeftX       = 20.0f;
constexpr float kOptionsRowRightX      = 620.0f;
constexpr float kOptionsSliderMidX     = 470.0f;

// Stage Clear Map (Kind 10) Buttons (Right column):
constexpr MenuButtonHitbox kStageMapHitboxes[] = {
    { 0, { 385.0f, 170.0f, 495.0f, 210.0f } }, // SAVE
    { 1, { 385.0f, 213.0f, 495.0f, 253.0f } }, // CONTINUE
    { 2, { 385.0f, 256.0f, 495.0f, 296.0f } }, // ENTER SHOP
    { 3, { 385.0f, 299.0f, 495.0f, 339.0f } }, // ENTER CASINO
    { -1, kCommonBackHitbox                 }, // Back
};

// Shop Screen (Kind 7) Buttons:
constexpr MenuButtonHitbox kShopHitboxes[] = {
    { 0, { 160.0f, 180.0f, 300.0f, 240.0f } }, // BUY
    { 1, { 330.0f, 180.0f, 470.0f, 240.0f } }, // SELL
    { 2, { 120.0f, 255.0f, 240.0f, 300.0f } }, // LEAVE SHOP
    { -1, kCommonBackHitbox                 }, // Back
};

// Modal Yes/No Confirmation Dialog:
constexpr MenuButtonHitbox kDialogHitboxes[] = {
    { 0, { 340.0f, 390.0f, 430.0f, 435.0f } }, // Yes (Index 0)
    { 1, { 470.0f, 390.0f, 560.0f, 435.0f } }, // No (Index 1)
    { -1, kCommonBackHitbox                 }, // Cancel
};

} // namespace godhand::menu_touch
