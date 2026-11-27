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

// Pre-rendered FMV / Movie state bit: 0x00002000u (Sta::kMovie, game_layout.h:106)
constexpr uint32_t kStaMovieBit         = 0x00002000u;

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
// cR020 Title Singleton Pointer in RDRAM (initialized in R020Init__Fv_0x799220)
constexpr uint32_t kR020SingletonPtr     = 0x0079CE80u;
// Inside cR020:
// +0x00: uint8_t mode (0..2 = Logos/Demo, 3 = MoveTitle)
// +0x01: uint8_t phase (0 = Init, 1 = titlePressWait, 2 = titleGameSel, 3 = titleLevelSel, 4 = titleExit, 5 = titleLoop)
// +0x14: int32_t carouselCursor (0 = New Game, 1 = Load Game, 2 = Option)
// +0x1C: int32_t difficultyCursor (0 = Easy, 1 = Normal, 2 = Hard)
constexpr uint32_t kTitleModeOffset      = 0x00u;
constexpr uint32_t kTitlePhaseOffset     = 0x01u;
constexpr uint32_t kTitleCarouselOffset  = 0x14u;
constexpr uint32_t kTitleLevelOffset     = 0x1Cu;

// Legacy cMessage pointer kept for compatibility
constexpr uint32_t kMessageSingletonPtr  = 0x003C23A4u;
constexpr uint32_t kTitleStateOffset     = 0x0Cu;
constexpr uint32_t kTitleCursorOffset    = 0x94u;

// Find Title Screen Object by inspecting cR020 singleton
inline uint32_t findTitleObj(const uint8_t* rdram) {
    if (!rdram) return 0;
    uint32_t r020 = 0;
    std::memcpy(&r020, rdram + (kR020SingletonPtr & 0x01FFFFFFu), sizeof(r020));
    if (r020 >= 0x00100000u && r020 < 0x02000000u) {
        return r020;
    }
    return 0;
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
constexpr uint32_t kOptionsCursorOffset       = 0x130u;
// Sub-state in cSubScrOption: uint8_t at +0x5A (3 = Reset Game Yes/No dialog)
constexpr uint32_t kOptionsStateOffset        = 0x5Au;
// Reset Game Yes/No choice in cSubScrOption: uint8_t at +0x131 (0 = YES, 1 = NO)
constexpr uint32_t kOptionsResetChoiceOffset  = 0x131u;

// E. Stage Clear Map Screen (cSubScrMap, kind=3, init=func_001627D8, move=func_00163840, ctrl=func_00164140):
// Cursor index is int16_t at +0x130 (0=Save, 1=Continue, 2=Enter Shop, 3=Enter Casino)
// Verified in func_001627D8:813, func_00163840:474, func_00164238:253, func_001643F8:228: lh/sh 0x130($s0)
constexpr uint32_t kStageMapCursorOffset    = 0x130u;
// Save-hidden / pause-map flag inside cSubScr: uint8_t at +0xEDD (0 = 4 options with Save, 1 = Save hidden)
constexpr uint32_t kSubScrMapNoSaveOffset   = 0x0EDDu;

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
// cSaveLoad instance singleton pointer in RDRAM: 0x003C2648u (verified in func_00160E78_0x160e78.cpp:182 and func_00160F38_0x160f38.cpp:179)
constexpr uint32_t kSaveLoadInstancePtr       = 0x003C2648u;
// Active Save/Load flag in RDRAM: 0x00747A88u, bit 30 (0x40000000u) set in cSaveLoad and bit 31 (0x80000000u) set in cMc
constexpr uint32_t kSaveLoadActiveFlagAddr    = 0x00747A88u;
constexpr uint32_t kSaveLoadActiveBit         = (0x40000000u | 0x80000000u);

// cMcLoad and cMcSave objects and pointers in RDRAM:
constexpr uint32_t kMcLoadPtrAddr             = 0x007D16ECu;
constexpr uint32_t kMcSavePtrAddr             = 0x007D18ECu;
constexpr uint32_t kMcBaseAddr                = 0x007D14B0u; // cMcSys
constexpr uint32_t kMcLoadBaseAddr            = 0x007D1600u; // cMcLoad (loadMenu / readChoise / errorProc)
constexpr uint32_t kMcSaveBaseAddr            = 0x007D1800u; // cMcSave (saveMenu / writeChoise / overWriteChoise)
constexpr uint32_t kMcLoadModeInitOffset      = 0x100u;
constexpr uint32_t kMcSaveModeInitOffset      = 0x118u;
// Inside cMc (cMcLoad / cMcSave):
constexpr uint32_t kMcChoiceOffset            = 0x0Cu; // uint8_t: 1 = YES, 0 = NO (readChoise/overWriteChoise)
constexpr uint32_t kMcDispModeOffset          = 0x78u; // int32_t: cMcSys SetDisp mode (0=slots, 6/7/8/9/16/17/21/22=YES/NO)
constexpr uint32_t kMcSlotBaseOffset          = 0xD4u; // int32_t: slot scroll base (0..19)
constexpr uint32_t kMcSlotRowOffset           = 0xD8u; // int32_t: highlighted visible row (0..2)
constexpr uint32_t kMcStepOffset              = 0xF0u; // int32_t: main step (Load: 3=menu,4=readChoise,7=err; Save: 3=fmt,6=menu,7=writeChoise,8=overWriteChoise,15=err)
constexpr uint32_t kMcSubStepOffset           = 0xF4u; // int32_t: subStep

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
constexpr uint32_t MENU_FLAG_SCROLLABLE      = 1u << 16;
constexpr uint32_t MENU_FLAG_LIVE_ROULETTE   = 1u << 17;
constexpr uint32_t MENU_FLAG_CUTSCENE_ACTIVE = 1u << 18;

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

// Title Screen Main Menu (640x448 space, bottom horizontal controls):
// Left D-Pad (-10), Start (99), Right D-Pad (-11)
constexpr MenuButtonHitbox kTitleCarouselHitboxes[] = {
    { 99,  { 220.0f, 360.0f, 420.0f, 420.0f } }, // START (center)
    { -11, { 430.0f, 360.0f, 620.0f, 420.0f } }, // RIGHT D-PAD (right)
    { -10, { 20.0f,  360.0f, 210.0f, 420.0f } }, // LEFT D-PAD (left)
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
// Techniques (0), Roulette (1), Map (2), Options (3), Exit (4), Status Page Left (-2), Status Page Right (-3)
constexpr MenuButtonHitbox kPauseRootHitboxes[] = {
    { 0,  { 17.740303f, 20.977776f, 200.79257f, 75.977776f } }, // [0] TECHNIQUES
    { 1,  { 16.627320f, 80.177770f, 200.62396f, 129.444430f } }, // [1] ROULETTE
    { 2,  { 15.885330f, 129.91112f, 200.62396f, 178.096310f } }, // [2] MAP
    { 3,  { 15.851593f, 181.00000f, 200.99496f, 231.259260f } }, // [3] OPTIONS
    { 4,  { 18.043839f, 232.14073f, 201.26477f, 282.814820f } }, // [4] EXIT
    { -2, { 495.0f,     320.0f,     545.0f,     375.0f } },      // [-2] [L1] STATUS PREV
    { -3, { 585.0f,     320.0f,     638.0f,     375.0f } },      // [-3] [R1] STATUS NEXT
};

// Techniques Screen Hitbox Definitions (Exported Custom Verified Bounds):
// SubState 0: 6 Left Combo Slots (0..5) + 5 Right Individual Slots (10..14) + Return (-1)
constexpr MenuButtonHitbox kTechSlotsHitboxes[] = {
    { 0,  { 8.119743f, 118.91112f, 218.11975f, 152.91112f } }, // [L0]
    { 1,  { 8.996628f, 158.94075f, 218.99663f, 192.94075f } }, // [L1]
    { 2,  { 7.883644f, 200.73332f, 217.88364f, 234.21481f } }, // [L2]
    { 3,  { 8.794262f, 240.39998f, 218.79427f, 269.94073f } }, // [L3]
    { 4,  { 8.625633f, 274.31110f, 218.62564f, 306.80740f } }, // [L4]
    { 5,  { 8.794281f, 312.57780f, 218.79428f, 341.60000f } }, // [L5]
    { 10, { 258.63140f, 118.59999f, 446.08505f, 153.53333f } }, // [R0: △]
    { 11, { 257.76562f, 157.54074f, 445.42160f, 191.74817f } }, // [R1: ✕]
    { 12, { 258.64252f, 199.15184f, 445.48904f, 234.24074f } }, // [R2: ↓+□]
    { 13, { 257.79930f, 238.48146f, 445.01685f, 274.45184f } }, // [R3: ↓+△]
    { 14, { 259.08093f, 279.44446f, 444.44350f, 314.58520f } }, // [R4: ↓+✕]
    { -1, { 13.085999f, 379.86667f, 140.59865f, 423.95557f } }, // [RETURN]
};

// SubState 1: Move List Popup on RIGHT (editing Left combo slots):
constexpr MenuButtonHitbox kTechMoveListRightHitboxes[] = {
    { -2, { 209.50253f, 47.56296f, 266.18042f, 81.888885f } }, // [L1] TAB L
    { -3, { 387.63070f, 44.71111f, 452.09950f, 83.807400f } }, // [R1] TAB R
    { 0,  { 219.99155f, 110.59999f, 420.49744f, 141.83702f } }, // [ROW 0]
    { 1,  { 219.38449f, 143.45555f, 421.13828f, 175.93703f } }, // [ROW 1]
    { 2,  { 218.94604f, 175.58519f, 422.48737f, 206.71852f } }, // [ROW 2]
    { 3,  { 220.19391f, 209.73703f, 421.10452f, 242.06296f } }, // [ROW 3]
    { 4,  { 220.12650f, 242.02222f, 421.91403f, 274.55557f } }, // [ROW 4]
    { 5,  { 217.93423f, 276.74445f, 421.27320f, 306.06296f } }, // [ROW 5]
    { 6,  { 217.49576f, 311.25928f, 423.19556f, 339.22964f } }, // [ROW 6]
    { 7,  { 218.47388f, 345.33334f, 423.93762f, 375.22223f } }, // [ROW 7]
    { -1, { 13.085999f, 379.86667f, 140.59865f, 423.95557f } }, // [RETURN]
};

// SubState 2: Move List Popup on LEFT (editing Right button slots):
constexpr MenuButtonHitbox kTechMoveListLeftHitboxes[] = {
    { -2, { 8.927486f, 46.68148f, 51.88870f, 84.94812f } },  // [L1] TAB L
    { -3, { 188.76897f, 45.95555f, 239.72176f, 85.15554f } }, // [R1] TAB R
    { 0,  { 14.190567f, 109.21482f, 216.39967f, 142.43703f } }, // [ROW 0]
    { 1,  { 12.435059f, 145.01111f, 217.99326f, 176.50742f } }, // [ROW 1]
    { 2,  { 12.165283f, 175.94815f, 217.04893f, 210.60740f } }, // [ROW 2]
    { 3,  { 11.861725f, 211.13704f, 218.09444f, 241.95926f } }, // [ROW 3]
    { 4,  { 11.254639f, 243.05928f, 216.40811f, 276.16296f } }, // [ROW 4]
    { 5,  { 11.220917f, 277.36667f, 218.36426f, 307.87778f } }, // [ROW 5]
    { 6,  { 12.502518f, 309.08148f, 216.94770f, 342.28888f } }, // [ROW 6]
    { 7,  { 13.514328f, 343.18146f, 220.55652f, 374.78146f } }, // [ROW 7]
    { -1, { 13.085999f, 379.86667f, 140.59865f, 423.95557f } }, // [RETURN]
};

// Legacy constants kept for compilation compatibility:
constexpr Rect2D kTechLeftColumnArea   = { 35.0f, 106.0f, 245.0f, 358.0f };
constexpr Rect2D kTechRightColumnArea  = { 275.0f, 148.0f, 435.0f, 360.0f };
constexpr float  kTechSlotTopY         = 106.0f;
constexpr float  kTechRightSlotTopY    = 148.0f;
constexpr float  kTechSlotStepY        = 42.0f;
constexpr float  kTechSlotHeight       = 34.0f;
constexpr Rect2D kTechLeftTableArea    = { 18.0f,  98.0f, 330.0f, 326.0f };
constexpr Rect2D kTechLeftTabLHitbox   = { 8.927486f, 46.68148f, 51.88870f, 84.94812f };
constexpr Rect2D kTechLeftTabRHitbox   = { 188.76897f, 45.95555f, 239.72176f, 85.15554f };
constexpr Rect2D kTechRightTableArea   = { 235.0f, 98.0f, 435.0f, 326.0f };
constexpr Rect2D kTechRightTabLHitbox  = { 209.50253f, 47.56296f, 266.18042f, 81.888885f };
constexpr Rect2D kTechRightTabRHitbox  = { 387.63070f, 44.71111f, 452.09950f, 83.807400f };
constexpr float  kTechListTopY         = 98.0f;
constexpr float  kTechListStepY        = 28.5f;
constexpr float  kTechListRowHeight    = 26.0f;

// Roulette Edit Layout Constants (Exported Custom Verified Bounds):
// SubState 0: 10 equipped slots (5 left, 5 right) + RETURN at bottom left
constexpr MenuButtonHitbox kRouletteSlotsHitboxes[] = {
    { 0,  { 18.490723f, 105.21481f, 219.89040f, 153.25926f } }, // [SLOT 0 Left]
    { 1,  { 18.760544f, 156.68889f, 217.93423f, 199.49629f } }, // [SLOT 1 Left]
    { 2,  { 19.603714f, 203.28890f, 217.05736f, 246.45926f } }, // [SLOT 2 Left]
    { 3,  { 20.143326f, 248.22964f, 220.69983f, 293.05930f } }, // [SLOT 3 Left]
    { 4,  { 20.075882f, 296.28146f, 219.89038f, 343.80737f } }, // [SLOT 4 Left]
    { 5,  { 219.40134f, 107.34074f, 420.36252f, 151.49628f } }, // [SLOT 5 Right]
    { 6,  { 222.03204f, 154.87408f, 418.10284f, 199.02965f } }, // [SLOT 6 Right]
    { 7,  { 219.56998f, 200.43704f, 419.41820f, 247.13335f } }, // [SLOT 7 Right]
    { 8,  { 219.23270f, 248.95557f, 418.17032f, 295.02966f } }, // [SLOT 8 Right]
    { 9,  { 219.87354f, 295.50370f, 418.98135f, 343.49628f } }, // [SLOT 9 Right]
    { -1, { 13.085999f, 379.86667f, 140.59865f, 423.95557f } }, // [RETURN]
};

// SubState 1: Move List Popup (6 rows)
constexpr MenuButtonHitbox kRouletteMoveListHitboxes[] = {
    { 0, { 430.07587f, 106.20740f, 612.34400f, 141.50371f } }, // [ROULETTE 0]
    { 1, { 427.88367f, 146.22963f, 612.17540f, 182.71852f } }, // [ROULETTE 1]
    { 2, { 428.28836f, 188.48148f, 612.81616f, 223.31111f } }, // [ROULETTE 2]
    { 3, { 428.05228f, 229.74654f, 610.99493f, 262.76135f } }, // [ROULETTE 3]
    { 4, { 428.18720f, 270.18518f, 608.97130f, 302.52590f } }, // [ROULETTE 4]
    { 5, { 427.04047f, 310.05185f, 610.96120f, 342.96295f } }, // [ROULETTE 5]
};

constexpr Rect2D kRouletteLeftSlotArea   = { 18.0f,  105.0f, 220.0f, 344.0f };
constexpr Rect2D kRouletteRightSlotArea  = { 219.0f, 107.0f, 421.0f, 344.0f };
constexpr Rect2D kRouletteReturnHitbox   = { 13.085999f, 379.86667f, 140.59865f, 423.95557f };
constexpr Rect2D kRouletteListArea       = { 427.0f, 106.0f, 613.0f, 343.0f };
constexpr float  kRouletteSlotTopY       = 105.0f;
constexpr float  kRouletteSlotStepY      = 48.0f;
constexpr float  kRouletteSlotHeight     = 48.0f;
constexpr float  kRouletteListTopY       = 106.0f;
constexpr float  kRouletteListStepY      = 40.0f;
constexpr float  kRouletteListRowHeight  = 36.0f;

// Options Menu Layout Constants (SubState 0: 8 rows; SubState 1: Yes/No confirmation):
constexpr MenuButtonHitbox kOptionsHitboxes[] = {
    { 0, { 41.214172f, 90.488884f, 601.21420f, 120.488884f } }, // [OPT 0: CONTROLS]
    { 1, { 39.460390f, 123.399994f, 599.46040f, 153.400000f } }, // [OPT 1: LIFE GAUGE]
    { 2, { 40.101196f, 158.800000f, 600.10120f, 188.800000f } }, // [OPT 2: SOUND]
    { 3, { 39.797638f, 193.214810f, 599.79760f, 223.214810f } }, // [OPT 3: VIBRATION]
    { 4, { 39.123108f, 227.474080f, 599.12310f, 257.474060f } }, // [OPT 4: LOAD GAME]
    { 5, { 39.359190f, 261.162960f, 599.35920f, 291.162960f } }, // [OPT 5: RESET GAME]
    { 6, { 40.033722f, 295.422240f, 600.03370f, 325.422240f } }, // [OPT 6: RESTORE DEFAULTS]
    { 7, { 39.325470f, 331.600000f, 599.32544f, 361.600000f } }, // [OPT 7: EXIT]
};

constexpr MenuButtonHitbox kOptionsDialogHitboxes[] = {
    { 10, {  47.0f, 397.0f, 111.0f, 439.0f } }, // [YES]
    { 11, { 154.0f, 397.0f, 211.0f, 441.0f } }, // [NO]
};

// Stage Clear Map (Kind 3 or 9 or 11) Buttons (Exported Custom Verified Bounds):
// SubState 0: 4 options (Save visible)
constexpr MenuButtonHitbox kStageMapHitboxes[] = {
    { 0, { 432.35242f, 177.55557f, 604.92410f, 217.19261f } }, // [0] SAVE
    { 1, { 432.25125f, 224.94072f, 602.09106f, 262.60742f } }, // [1] CONTINUE
    { 2, { 432.72340f, 267.29630f, 601.85500f, 305.58520f } }, // [2] ENTER SHOP
    { 3, { 431.27320f, 312.03705f, 603.00165f, 348.77040f } }, // [3] ENTER CASINO
};

// SubState 1: 3 options (Save hidden - Continue is at top)
constexpr MenuButtonHitbox kStageMapHiddenSaveHitboxes[] = {
    { 0, { 429.0f, 224.0f, 602.0f, 263.0f } }, // [0] CONTINUE
    { 1, { 432.0f, 266.0f, 602.0f, 303.0f } }, // [1] ENTER SHOP
    { 2, { 432.0f, 312.0f, 601.0f, 350.0f } }, // [2] ENTER CASINO
};

// Memory Card Save / Load (Kind 7 / MENU_SAVELOAD - Exported Custom Verified Bounds):
// SubState 0: Slot Selection (Slots 1..3)
constexpr MenuButtonHitbox kSaveLoadHitboxes[] = {
    { 0, { 36.583496f,  97.511116f, 600.58350f, 162.51111f } }, // [SLOT 1]
    { 1, { 38.741974f, 176.429630f, 602.74194f, 241.42963f } }, // [SLOT 2]
    { 2, { 39.315340f, 257.162960f, 603.31530f, 322.16296f } }, // [SLOT 3]
};

// SubState 1: Conditional Confirmation Dialog (YES/NO only when confirmation active)
constexpr MenuButtonHitbox kSaveLoadDialogHitboxes[] = {
    { 10, { 340.0f, 385.0f, 460.0f, 445.0f } }, // [YES]
    { 11, { 460.0f, 385.0f, 580.0f, 445.0f } }, // [NO]
};

// Modal Yes/No Confirmation Dialog (Kind 10 / MENU_DIALOG):
constexpr MenuButtonHitbox kDialogHitboxes[] = {
    { 0, { 340.0f, 385.0f, 460.0f, 445.0f } }, // Yes (Index 0)
    { 1, { 460.0f, 385.0f, 580.0f, 445.0f } }, // No (Index 1)
};

// Shop Screen (Kind 7 / MENU_SHOP - Exported Custom Verified Bounds):
// SubState 0: Category Select (BUY, SELL, LEAVE SHOP)
constexpr MenuButtonHitbox kShopCategoryHitboxes[] = {
    { 0, {  75.00000f, 210.000000f, 295.00000f, 275.00000f } }, // [0] BUY
    { 1, { 345.00000f, 210.000000f, 565.00000f, 275.00000f } }, // [1] SELL
    { 2, {  15.00000f, 295.000000f, 205.00000f, 350.00000f } }, // [2] LEAVE SHOP
};

// SubState 1: Buy/Sell Item/Technique List (6 rows + Yes/No confirmation)
constexpr MenuButtonHitbox kShopItemListHitboxes[] = {
    { 0,  { 20.0f, 148.0f, 395.0f, 179.0f } }, // [ROW 0]
    { 1,  { 20.0f, 183.0f, 395.0f, 213.0f } }, // [ROW 1]
    { 2,  { 20.0f, 216.0f, 395.0f, 246.0f } }, // [ROW 2]
    { 3,  { 20.0f, 251.0f, 395.0f, 279.0f } }, // [ROW 3]
    { 4,  { 20.0f, 285.0f, 395.0f, 312.0f } }, // [ROW 4]
    { 5,  { 20.0f, 319.0f, 395.0f, 346.0f } }, // [ROW 5]
    { 10, { 60.0f, 396.0f, 157.0f, 433.0f } }, // [YES]
    { 11, { 212.0f, 395.0f, 291.0f, 437.0f } }, // [NO]
};

} // namespace godhand::menu_touch
