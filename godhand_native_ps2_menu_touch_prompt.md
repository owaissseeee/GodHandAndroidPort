# Agent Implementation Prompt: True Direct-Touch & Native Scroll System for Original PS2 Menus (`GodHandAndroidPort`)

Copy and paste everything below into your coding agent.

---

## Objective

You are working on `owaissseeee/GodHandAndroidPort`, an Android ARM64 static binary recompilation (AOT) port of *God Hand* (PS2, NTSC-U `SLUS-21503`) built on `ps2xRuntime` + PCSX2 GS OpenGL ES.

Your task is to design and implement a **true, glitch-free, low-overhead direct-touch and native finger-scrolling UI system** for **all original PS2 menus** in *God Hand*:
- Title Screen / Press Start / Main Menu (`New Game`, `Continue`, `Options`, etc.)
- Pause Menu (`Resume`, `Techniques`, `Roulette`, `Map`, `Options`, `Quit`, etc.)
- Techniques Screen (combo slots, move list, equipping/unequipping, scrolling long move lists)
- Roulette Edit Screen (pause-menu / shop roulette loadout editing & move list scrolling)
- In-Game Options Menu (sliders, toggles, tabs, confirm/back)
- Shop / Casino / Stage Select / Map / Save-Load / Continue / Yes-No Confirmation Dialogs

### Strict Scope Exclusions
1. **DO NOT modify the live in-combat Roulette wheel (`R1` during gameplay).** Leave `kamite::rouletteUp()`, `rouletteStepHook`, `rouletteSlideBeginHook`, `rouletteSlideEndHook`, and `cycleRouletteTarget` completely untouched and keep existing combat controls active whenever the live combat roulette wheel is up.
2. **NO controller-emulation "jugaad" (hacks).** Do **NOT** fake D-pad Up/Down pulses to scroll lists or reach tapped buttons. Tapping item #6 must directly select item #6 in the PS2 menu's own EE RAM state machine and trigger its native highlight, sound effect, and confirm action cleanly. Dragging a scrollable list (Techniques, Shop, Roulette Edit) must directly drive the PS2 list's scroll offset / cursor in EE RAM with native finger tracking and fling inertia.
3. **Keep the original PS2 menu visuals and audio.** Do not replace the PS2 menus with an Android Compose/XML menu. The user must feel like they are tapping and scrolling the actual PS2 game buttons directly.

---

## Non-Negotiable Engineering Rules

### Rule 1: NEVER Guess Any Address, Offset, Function, or Bounding Box
- You **MUST NOT** hallucinate or guess any `SLUS-21503` EE RAM address, struct offset, enum value, function name, or 2D screen coordinate.
- Before writing any patch or hook code, you **MUST** inspect the actual repository files and reverse-engineer/verify every address from first principles using:
  1. `recomp/godhand_functions.csv` and `recomp/godhand.toml` (function addresses and names)
  2. `app/src/main/cpp/generated/` and `app/src/main/cpp/generated_modules/` (actual recompiled C++ of the PS2 menu managers, cursor update routines, scroll handlers, and 2D sprite/text draw functions)
  3. `app/src/main/cpp/src/godhand/frame_patches.cpp`, `function_hooks.cpp`, `cheats_engine.cpp`, `button_prompts.cpp` (already-verified EE RAM addresses, state flags, and hook patterns)
  4. If helpful and accessible, cross-reference `God-Hand-Rearmed/God-Hand-Rearmed` (`src/kamite/style_presets.cpp`, `hud_layout.cpp`, `options_screen.cpp`, `button_prompts.cpp`) or `LucasPicoli/god-hand-decomp` symbols—then **confirm every single address in this repo's `generated/` C++** before using it.
- Document every discovered EE RAM address and function hook in a dedicated header (`app/src/main/cpp/src/godhand/menu_touch_addresses.h`) with comments citing the exact `generated/` function and disassembly/line where it was verified.
- If a specific submenu's struct offset cannot be verified statically from `generated/`, build a **temporary lightweight diagnostic trace** (gated behind a compile-time flag) or inspect the exact callee chain in `generated/` until verified—never ship guessed offsets.

### Rule 2: Zero-Overhead Performance Budget (Mobile SoC Friendly)
This runs on Snapdragon/MediaTek Android phones where CPU and memory bandwidth are tight:
- **Zero cost during gameplay:** When no menu is active (`MenuScreenId == MENU_NONE`), the gameplay hot path must execute **at most a single relaxed atomic load** (`std::atomic<uint8_t>`).
  - Do **NOT** run 2D hitbox capture hooks during gameplay.
  - Do **NOT** send JNI calls per frame from C++ to Kotlin during gameplay. Only notify Kotlin (or let Kotlin poll a cheap `volatile`/atomic state) on **state transitions** (e.g., `GAMEPLAY -> PAUSE_MAIN`), or poll at a low cadence (~15–30 Hz) with zero object allocations.
  - Do **NOT** allocate heap memory (`std::vector` resizing, `std::string`, JNI `NewObject`/`NewStringUTF`) inside any per-frame hook or touch handler. Use fixed-size POD structs (`MenuButtonRect[32]`, `std::atomic` / lock-free SPSC ring buffer for touch events).
- **Preserve all existing Android performance & GLES fixes:** Do not regress `710bfe7` (Snapdragon adaptive pacing & Qualcomm EAS cluster affinity), `e50ecdc` (particle alpha & swapchain/MTVU pacing), `60ae735` (ARM64 NEON `sceVu0MulMatrix`), or `cd230a2` (`GSDeviceOGL` / `tfx_fs.glsl`).

---

## Phase 1: Reverse-Engineering & Address Discovery (Do This First)

Before modifying any Kotlin or C++ build files, search `recomp/godhand_functions.csv` and `app/src/main/cpp/generated/` to locate and verify the following for `SLUS-21503`:

1. **Active Menu / Overlay State Machine:**
   - Find the global game-mode / menu-manager state variables and overlay/DLL IDs that distinguish:
     - Active gameplay (including live combat roulette `kamite::rouletteUp()`, which MUST map to `MENU_NONE` so combat controls remain untouched)
     - Title Screen / Press Start / Main Menu
     - Pause Menu root
     - Techniques Screen (slot column vs. move-selection list)
     - Roulette Edit Screen (wheel slot selector vs. move-selection list)
     - Options Menu (categories, sliders, toggles)
     - Shop / Casino menu screens
     - Save / Load (Memory Card) & Continue screens
     - Modal Yes/No confirmation dialogs
   - Find the **transition / fade / input-lockout flag** for each menu so taps are strictly ignored during fade-ins, fade-outs, and submenu transitions.

2. **Per-Menu Cursor, Scroll & Action State Structs:**
   - For each menu screen above, locate in `generated/`:
     - `cursorIndex` (current highlighted item index)
     - `scrollTop` / `listOffset` (top visible item index for scrollable lists like Techniques, Roulette Edit, Shop)
     - `itemCount` and `visibleRowCount`
     - `subState` / `activeColumn` (e.g., on the Techniques screen: whether focus is on the equipped combo slots column vs. the scrollable move picker list)
     - `padRepeatTimer` / input-debounce counter (so we can suppress D-pad auto-repeat while a finger is dragging, without breaking physical controllers)
     - Slider value address/bounds (for Options audio/brightness/camera sliders so finger drag sets slider values smoothly)
     - Confirm / Cancel / Tab-Switch (`L1`/`R1` or `L2`/`R2`) handling functions or exact edge-trigger pad-read site inside that menu's tick function.

3. **2D Menu Coordinate System & Hitbox Source:**
   - Inspect how *God Hand* draws 2D menu items, highlight bars, and list rows (virtual resolution—typically 640×448 or normalized coordinates—and how `godhand_patches_mobile.cpp` aspect ratio `0x00586B88` affects 2D menu projection vs. 3D gameplay).
   - Determine whether menu buttons are drawn via a shared 2D sprite/text/window emitter function in `generated/` whose `(x, y, w, h)` parameters can be captured directly during menu frames (preferred: automatically adapts to every screen and aspect ratio), or whether exact virtual-space layout constants from the menu draw functions should be read directly from `generated/`.
   - **Never approximate hitboxes by eye.** Every button rect must be derived directly from the game's own 2D draw coordinates in `generated/`.

Write a short internal discovery summary (addresses, struct offsets, function names, and coordinate space verified from `generated/`) before moving to Phase 2.

---

## Phase 2: Native C++ Architecture (`app/src/main/cpp/`)

Create a clean, self-contained module:
- `app/src/main/cpp/src/godhand/menu_touch_addresses.h` — verified `SLUS-21503` addresses, offsets, and source citations
- `app/src/main/cpp/src/godhand/menu_touch_controller.h` / `.cpp` — state detector, coordinate unprojector, hitbox table, direct EE RAM cursor/scroll driver, and synchronized confirm/cancel trigger
- Register the new `.cpp` in `app/src/main/cpp/CMakeLists.txt` and hook initialization in `app/src/main/cpp/src/godhand/function_hooks.cpp`.

### Core C++ Design Requirements

1. **Lock-Free Touch Event Queue (UI Thread → EE Thread):**
   - Kotlin touch events arrive on Android's UI thread; EE RAM must **only** be mutated on the EE emulation thread at a deterministic hook point (inside the menu's pre-input or frame-tick hook).
   - Use a fixed-size, lock-free SPSC ring buffer (e.g., 32 slots, zero heap allocation) storing:
     ```cpp
     enum class TouchAction : uint8_t { Down, Move, Up, Cancel, ScrollDelta };
     struct MenuTouchEvent {
         TouchAction action;
         float screenX;      // Android surface pixels
         float screenY;
         float scrollDeltaY; // For smooth finger drag / OverScroller fling in pixels
         float scrollDeltaX; // For horizontal Options sliders / tabs
     };
     ```

2. **Exact Aspect-Aware Coordinate Unprojection:**
   - Read `s_screenWidth`, `s_screenHeight`, and `aspectIdx` from `godhand_patches_mobile.cpp` (and the active GS display viewport rect from `gs_pcsx2_backend.cpp` if pillarboxed).
   - Convert `(screenX, screenY)` → PS2 virtual 2D coordinates `(ps2X, ps2Y)` accurately for **all three aspect modes**:
     - `4:3` (pillarboxed — touches in black sidebars return out-of-bounds and do nothing)
     - `16:9`
     - `Full Screen` (19.5:9 / 20:9 / 21:9+ Android phones)
   - Account for any menu-specific 4:3 centering vs. stretched HUD rendering used by `gs_pcsx2_backend.cpp`.

3. **Direct EE RAM State Mutation (Zero Jugaad):**
   - **On `Down` inside a valid button hitbox:**
     - Immediately write that button's exact `cursorIndex` (and `activeColumn` if applicable) into the menu's EE RAM struct.
     - Trigger/allow the game's native cursor-move highlight & SFX if the index changed.
     - Record `pressedButtonId` and `downPs2Pos`.
   - **On `Move`:**
     - If the user is on a **slider** (Options screen): map horizontal finger position directly to the slider's min..max value in EE RAM in real time.
     - If the user is on a **scrollable list** (Techniques, Roulette Edit, Shop) and vertical movement exceeds touch slop: enter `DraggingScroll` mode, cancel any pending tap confirm, accumulate fractional row delta (`accumulatedPx / rowHeightPs2`), and write the updated `scrollTop` (and keep `cursorIndex` clamped inside `[scrollTop, scrollTop + visibleRows - 1]`) directly into EE RAM. Suppress the PS2 menu's D-pad repeat timer while dragging.
     - If the user is on a **non-scrollable menu** and slides off `pressedButtonId`: update hover highlight or clear `pressedButtonId` so lifting outside the button cancels the tap cleanly (just like real native buttons).
   - **On `Up`:**
     - If **not** in `DraggingScroll` mode AND finger is still inside `pressedButtonId` AND the menu's transition/fade/lockout flag is idle:
       - Ensure EE RAM `cursorIndex == pressedButtonId`.
       - Execute the menu's confirm action cleanly on this exact tick (either by invoking the verified confirm handler or injecting a single-tick, menu-hook-synchronized Confirm bit that auto-clears immediately after the menu's input poll consumes it—never a multi-frame blind button hold).
     - Provide a clean on-screen **Back / Cancel** touch target (hitting the game's own "Back" / Circle prompt rect, plus Android system Back gesture support) that triggers Cancel cleanly when the menu is not locked out.
   - **Sub-Row Smoothness & Fling Inertia:**
     - Feed Kotlin `OverScroller` fling deltas into `ScrollDelta` events so flicking the Techniques or Shop list glides smoothly with natural deceleration and stops cleanly at list top/bottom bounds without wrapping glitchily.

4. **Physical Controller Coexistence:**
   - Never overwrite `cursorIndex` or `scrollTop` on frames where no touch gesture is active. If a user picks up a Bluetooth/USB gamepad while in a menu, D-pad/stick navigation works identically to stock with zero interference.

---

## Phase 3: JNI & Kotlin Android Layer (`NativeBridge.kt`, `jni_bridge.cpp`, `GameActivity.kt`)

1. **JNI Methods (`NativeBridge.kt` & `jni_bridge.cpp`):**
   - `external fun getActiveMenuState(): Int` — returns packed bitfield / enum (`MENU_NONE = 0`, `MENU_TITLE`, `MENU_PAUSE`, `MENU_TECHNIQUES`, `MENU_ROULETTE_EDIT`, `MENU_OPTIONS`, `MENU_SHOP`, `MENU_SAVE_LOAD`, `MENU_DIALOG`, plus a bit flag `FLAG_SCROLLABLE` and `FLAG_LIVE_COMBAT_ROULETTE`).
   - `external fun onMenuTouchEvent(action: Int, x: Float, y: Float, dx: Float, dy: Float)` — pushes into the lock-free C++ ring buffer (zero allocations).
   - `external fun onMenuBackPressed()` — triggers a single clean Cancel/Back action when in any non-gameplay menu.
   - Keep `isRouletteUp()` working identically for live combat roulette.

2. **Seamless Touch Overlay Switching (`GameActivity.kt` & `TouchControllerOverlay`):**
   - When `activeMenuState != MENU_NONE` (and live combat roulette is NOT active):
     - Smoothly hide `TouchControllerOverlay` (combat sticks/buttons) so they do not intercept touches or clutter the menu.
     - Route `SurfaceView` touch events to a lightweight `MenuTouchOverlay` / `MenuTouchHandler` (using `ViewConfiguration.get(context).scaledTouchSlop`, `VelocityTracker`, and `OverScroller` driven by `Choreographer` **only while a fling is active**).
     - Wire Android's system Back button/gesture (`OnBackPressedCallback`) to call `NativeBridge.onMenuBackPressed()` when inside a PS2 submenu instead of immediately triggering the exit dialog.
   - When returning to `MENU_NONE` (gameplay resumes) or when `isRouletteUp()` is true (live combat roulette):
     - Immediately stop any active `OverScroller` fling, clear touch state, and restore `TouchControllerOverlay` (respecting `controllerMode` and `autoHideTouchOnGamepad` in `SettingsRepository.kt`).
   - Add a toggle in `SettingsRepository.kt` and `SettingsDialog.kt` (`menuDirectTouchEnabled`, default `true`) so users can disable direct menu touch if they ever prefer virtual D-pad navigation.

---

## Phase 4: Build, Anti-Glitch Hardening & Verification Checklist

1. **Compile & Static Verification:**
   - Build the ARM64 native library and Android APK cleanly using the repo's build script (`build.py` / Gradle) with zero compiler warnings in new files.
   - Verify no heap allocations occur in the per-frame menu hooks or JNI touch path.
   - Verify gameplay frame time overhead is effectively 0 µs when `MenuScreenId == MENU_NONE`.

2. **Edge-Case Audit (Fix Every One Before Finishing):**
   - **Rapid double-tap on Pause / New Game / Buy:** Must NOT double-confirm into the next screen or corrupt the menu stack (gated by fade/transition lockout flag).
   - **Scroll-then-lift in Techniques / Shop:** Lifting finger after dragging `> touchSlop` must NEVER accidentally equip or purchase the item under the finger.
   - **Live combat Roulette (`R1`):** Must stay 100% unchanged; `TouchControllerOverlay` must NOT disappear during live combat roulette.
   - **4:3 vs. 16:9 vs. 20:9+ Full Screen:** Tapping the exact visual center of every button in all three aspect modes must hit that exact button with zero offset.
   - **60 FPS vs. 30 FPS mode:** Confirm/cancel single-tick sync and scroll speeds must behave identically in both 30 FPS and 60 FPS modes.
   - **Gamepad + Touch switching:** Using a Bluetooth controller in menus must never fight the touch layer.

3. **Final Report:**
   - List every verified `SLUS-21503` EE RAM address, function hook, and source location in `generated/` that you used.
   - List all modified/created files and summarize the coordinate unprojection math and menu state machine.
   - Provide a concise on-device test checklist covering Title, Pause, Techniques scroll + equip, Roulette Edit, Options sliders, Shop, Yes/No dialogs, and live combat Roulette.
