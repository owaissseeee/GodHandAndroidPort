# God Hand (PS2) — Native Android Static Recompilation Port (v2.3)

[![Platform](https://img.shields.io/badge/Platform-Android%208.0%2B%20(API%2026%2B)-brightgreen.svg)](https://developer.android.com)
[![Architecture](https://img.shields.io/badge/Architecture-ARM64--v8a-blue.svg)](https://developer.android.com/ndk)
[![Graphics](https://img.shields.io/badge/Graphics-Vulkan%20%2F%20OpenGL%20ES-orange.svg)](https://www.khronos.org/vulkan/)
[![Port Author](https://img.shields.io/badge/Port%20by-owaissseeee-red.svg)](https://github.com/owaissseeee)
[![License](https://img.shields.io/badge/License-GPL--3.0-blue.svg)](LICENSE)

An authentic **ARM64 Android port** of the PlayStation 2 classic **God Hand (USA, SLUS-21503)** built through complete **Static Binary Recompilation (AOT)**. **Port by owaissseeee**.

Instead of translating MIPS CPU and VU instructions at runtime with JIT overhead, this project statically recompiles all **10,553 Emotion Engine functions** and **81 SNR2 overlay modules** directly into native C++20 compiled ahead-of-time with Clang ThinLTO—delivering smooth, console-accurate gameplay up to **60 FPS** on Android devices.

---

## 📑 Table of Contents

- [Key Features](#-key-features)
- [Direct Touchscreen Menus & Hold-to-Skip Cutscenes](#-direct-touchscreen-menus--hold-to-skip-cutscenes)
- [HD Custom Texture Packs & Touch Button Skinning](#️-hd-custom-texture-packs--touch-button-skinning)
- [Hardware Performance & Compatibility Tiers](#-hardware-performance--compatibility-tiers)
- [Installation & First Launch (Bring Your Own ISO)](#-installation--first-launch-bring-your-own-iso)
- [In-Game Controls, Quick Saves & Settings Guide](#-in-game-controls-quick-saves--settings-guide)
- [60 FPS vs 30 FPS Modes](#️-60-fps-vs-30-fps-modes)
- [How to Customize App Artwork & Identity](#-how-to-customize-app-artwork--identity)
- [How to Build from Source](#️-how-to-build-from-source)
- [Legal Disclaimer](#️-legal-disclaimer)
- [Credits & Acknowledgments](#-credits--acknowledgments)

---

## ⚡ Key Features

### Core Engine & Performance
* **Native ARM64 Static Recompilation**: Zero CPU JIT overhead; Emotion Engine code runs directly as native ARM64 machine code compiled with Clang ThinLTO.
* **Vulkan & OpenGL ES PCSX2-GS Backends**: Hardware-accelerated graphics via modern Vulkan (default) or safe OpenGL ES fallback, with multi-threaded GIF submission and quad-buffered swapchains.
* **AOT Vector Unit 1 (VU1) & Multi-Threaded VU1 (MTVU)**: Heavy VU1 microprograms compiled ahead-of-time with ARM64 NEON vector math and asynchronous parallel dispatch across CPU cores.
* **Low-Latency Async VIF Queue (16 Jobs / 512 KB)**: Cuts queued command latency for immediate touch and gamepad response in fast combat.
* **60 FPS Suite & Frame Pacing Engine**: Decouples display refresh from internal timing with accurate 1-cycle animation steps, cloth/physics pacing, natural roulette timers, and zero speed warping (plus optional **30 FPS Console Native Lock**).
* **Ultra Potato Mode (Opt-In Max FPS)**: CPU-focused performance toggle (`Default: OFF`) that unlocks `0.5x` (`256x224`) resolution, skips shadow/cloth/heavy emitter particle passes and audio reverb, switches to nearest filtering, and trims the texture cache for low-end SoCs.

### Visual Clarity & Mobile UX
* **Direct Touchscreen Menus**: Tap, swipe, and fling-scroll directly on original PS2 game menus (Title Screen, Pause, Techniques, Roulette Edit, Options, Save/Load, Shop, Stage Map, and Dialogs) with zero-overhead native state tracking.
* **Hold-to-Skip Cutscenes**: Touch controls automatically clear during in-engine cutscenes; press and hold anywhere on screen for **1.5 seconds** to skip via an animated progress ring.
* **HD Custom Texture Injection**: Runtime **PCSX2 format (`DDS` & `PNG`)** replacement texture pack support with folder picker, path editor, and zero overhead when textures are not replaced.
* **Hardware Feedback Pass Culling & Cutscene Fast-Path**: Discards framebuffer feedback quads (`HasSharedBits(FRAME, TEX0)`) to remove heat shimmer, pole/wire ghosting, vertical smears, and white halos while keeping `classFADE` transitions smooth. `sceGsExecStoreImage` bypasses unused 50–90 ms VRAM handshake stalls for instant cutscene startup.
* **Edge-to-Edge Fullscreen & Hor+ Widescreen**: Immersive fullscreen `MainActivity` and `GameActivity` hiding status/navigation bars, guard-band wrap artifact filtering, and expanded 3D camera FOV (`0.7f * aspect`).
* **Minimalist God Hand UI (v2.3)**: Obsidian, gold, and crimson fullscreen Settings sidebar (`GRAPHICS`, `CONTROLS`, `SOUND`, `SAVES`, `CHEATS`, `LOGS`) with a top-right `✕` close button and clean virtual sticks.

### Saves, Audio, Haptics & Cheats
* **5-Slot Instant Save States + Memory Card Manager**: Capture full RDRAM, VRAM, and EE state into 5 quick-save slots (with `Select + L1` / `Select + R1` gamepad shortcuts), plus 1-tap `Mcd001.ps2` Memory Card export, local snapshots, ZIP sharing, and import (compatible with PCSX2 / AetherSX2 / NetherSX2).
* **Separated Audio Mixer & Oboe Engine**: Independent **Master**, **BGM**, **SFX**, and **Voice** volume sliders alongside **Real-time**, **Balanced**, and **Safe** SPU2 scheduling and **1024 / 2048 / 4096** frame buffers.
* **Tuned Mobile Vibrations & Haptics**: Master toggle, soft UI/menu **Touch Vibrations**, DualShock-synced **In-Game Vibration**, and a **10%–100%** strength slider.
* **Built-In Cheats & USA Uncensor Patch**: Live-toggleable gameplay, resource, damage, difficulty, costume, casino, jukebox, and **Uncensor Patch (USA)** mods with cross-process persistence.
* **Deep Performance Profiler, FPS HUD & GS Dump Capture**: Lock-free frame spike logger (`>= 100 ms` freeze detector), transparent 2-mode minimal FPS overlay, OS Logcat viewer, and 1-tap `.gs` frame dump capture for PC debugging.

---

## 👆 Direct Touchscreen Menus & Hold-to-Skip Cutscenes

### Direct Touchscreen Menus
By default (**Settings → Controls → Direct Menu Touch**), you don't need to mash virtual D-pad buttons to get through menus:
* **Tap to Select & Confirm**: Tap menu entries directly on screen; native read-back verification confirms cursor alignment before triggering selection.
* **Swipe & Fling Scrolling**: Swipe up/down with inertia in scrollable lists (such as **Techniques**) and swipe left/right on the **Title Screen** carousel to rotate options.
* **Supported PS2 Screens**:
  * **Title Screen** (Start, Left/Right carousel, Difficulty select, Load slots)
  * **Pause Menu** (`Techniques`, `Roulette`, `Map`, `Options`, `Exit`)
  * **Techniques & Roulette Edit** (slot grid, move lists, `L1`/`R1` tab switching)
  * **Options & Save/Load** (rows, Memory Card Slots 1–3, Yes/No prompts)
  * **Shop, Stage Map & Modal Dialogs** (Buy/Sell/Leave, Continue/Save/Enter Shop/Enter Casino, Yes/No confirmations)
* **Always-Accessible Back & Overlay Controls**: Submenus display a floating circular **Back / Return** button in the bottom-right corner (and respond to Android's system Back gesture), while **`EXIT`** and **`⚙`** stay tappable at the top.
* **Menu Debug Hitboxes & Live Editor**: Enable **Show Menu Debug Boxes** under **Controls** to see active screen telemetry (`SCREEN | S | C | Scr | Tap`) and tap targets, or press **`✏️ EDIT`** in the debug HUD to drag, resize, save, and export custom hitbox overrides.

### Hold-to-Skip Cutscenes
* Whenever an in-engine cutscene starts, virtual sticks and combat buttons hide automatically to keep the screen clean, displaying **`Hold to skip`** at the bottom-right.
* **Press and hold anywhere on the screen for 1.5 seconds** to fill the circular skip ring and advance past the cutscene. Releasing early cancels cleanly, and **`EXIT`** / **`⚙`** remain active if you need to pause or open settings.

---

## 🖼️ HD Custom Texture Packs & Touch Button Skinning

### HD Custom Texture Packs (PCSX2 Format)
You can load community **God Hand (`SLUS-21503`)** HD texture packs directly on Android in **`DDS`** or **`PNG`** format with zero overhead on non-replaced textures:

1. Extract your PCSX2-compatible replacement pack (containing the `replacements/` folder or texture hash files) to your device, for example:
   ```text
   /storage/emulated/0/Download/GodHand_Textures/SLUS-21503/
   ```
   *(Paths starting with `/sdcard/` are automatically normalized to `/storage/emulated/0/`.)*
2. Open **Settings → Graphics → HD CUSTOM TEXTURE INJECTION** and turn on **Enable HD Custom Textures**.
3. Use **`📁 BROWSE`** to select your folder, **`✏️ EDIT PATH`** to type/paste an absolute path, or **`RESET`** to restore the default directory.
4. On Android 11+, grant **All Files Access** when prompted so the native C++ GS backend can read `.dds`/`.png` replacement files directly from storage.

### Custom Touch Control Button Skinning (Optional)
You can also replace the on-screen touch button and analog stick graphics with custom PNG images (such as `btn_cross.png`, `btn_triangle.png`, `btn_circle.png`, `btn_square.png`, `btn_l1.png`–`btn_r2.png`, `btn_start.png`, `btn_settings.png`, `btn_exit.png`, `dpad_up/down/left/right.png`, `dodge_up/down/left/right.png`, `stick_base.png`, `stick_knob.png`, `dodge_stick_base.png`, `dodge_stick_knob.png`):
* Place matching `.png` files in `<App External Files>/touch_textures/` (for example `/storage/emulated/0/Android/data/com.owaissseeee.godhand/files/touch_textures/`).

---

## 📱 Hardware Performance & Compatibility Tiers

Defaults are tuned automatically on first launch based on your device's SoC tier:

| Tier | Chipset Examples | Auto Default Resolution | Default Target FPS | Notes |
| :--- | :--- | :--- | :--- | :--- |
| **Flagship Elite** | Snapdragon 8 Gen 2 / Gen 3, Dimensity 9200 / 9300 | **2.0x HD (1024x896)** | **60 FPS** | Scalable up to `4.0x` |
| **Mid-Range** | Snapdragon 778G / 870 / 695, Dimensity 7050 / 8200, Helio G99 | **1.0x Native (512x448)** | **60 FPS** | Balanced visual clarity |
| **Potato / Low-End** | MediaTek Helio G35 / P35, Unisoc T606, SD 480 | **0.75x Performance** | **30 FPS** | `0.5x` available via Ultra Potato Mode |

---

## 🚀 Installation & First Launch (Bring Your Own ISO)

> [!IMPORTANT]
> **BRING YOUR OWN ISO (REQUIRED)**: This application does not ship with any copyrighted game data. You **must** provide your own legally dumped **God Hand (USA)** PS2 disc image (`SLUS-21503`).

1. Install the APK on your Android device:
   ```cmd
   adb install -r app/build/outputs/apk/release/app-release.apk
   ```
2. Launch **God Hand**:
   ```cmd
   adb shell am start -n com.owaissseeee.godhand/.MainActivity
   ```
3. On first launch, tap **`SELECT .ISO FILE`**:
   * Pick your `God Hand (USA).iso` using the Android file picker.
   * The app verifies the `SLUS-21503` disc, extracts required game assets, unpacks the `IRX.IMS` sound modules, and prepares local caches.
4. Configure any preferences in **Settings** if desired, then boot the game!

---

## 🎮 In-Game Controls, Quick Saves & Settings Guide

### HUD Header & Hardware Controller Shortcuts
* **`EXIT`**: Prompts a clean return to the Main Menu without leaving background state behind.
* **`⚙` (Settings)**: Opens the fullscreen 6-tab Settings overlay mid-game (always accessible, even during cutscenes, direct-touch menus, or when touch controls are auto-hidden).
* **`✕`**: Top-right button to close Settings immediately.
* **Gamepad Quick Save / Load**: Press **`Select + L1`** to Quick Save and **`Select + R1`** to Quick Load using the active slot (`1–5`).
* **Controller Auto-Detection**: Plug-and-play support for Xbox, DualShock 4, DualSense, and standard Bluetooth/USB HID controllers with optional touch overlay auto-hide.

### Settings Tabs Overview

| Tab | Available Options & Features |
| :--- | :--- |
| **GRAPHICS** | • **Renderer** *(Main Menu)*: Vulkan (PCSX2-GS Default) or OpenGL ES.<br>• **Internal Resolution**: `0.75x`, `1.0x Native (512x448)`, `2.0x HD`, `3.0x FHD+`, `4.0x QHD` (`0.5x` unlocked when **Ultra Potato Mode** is ON).<br>• **Aspect Ratio** *(Main Menu)*: `16:9 Widescreen`, `4:3 Original`, or **Full Screen** (default edge-to-edge).<br>• **Target Frame Rate**: `30 FPS (Authentic PS2)` or `60 FPS (Smooth 60 Hz)`.<br>• **Frameskip Engine**: `Off` or `Skip 1 Frame`.<br>• **Ultra Potato Mode (Max FPS)**: CPU-focused low-end mode (`Default: OFF`).<br>• **HD Custom Textures**: Toggle + Folder Picker (`📁 BROWSE`), Path Editor (`✏️ EDIT PATH`), and `RESET`. |
| **CONTROLS** | • **Controller Mode**: Auto-Detect (Touch + Gamepad), Touchscreen Only, or Physical Gamepad Only.<br>• **Auto-Hide Touch Controls**: Hide virtual buttons when a physical gamepad connects.<br>• **Direct Menu Touch** (`Default: ON`) & **Show Menu Debug Boxes** (`Default: OFF`).<br>• **Sticky Analog Sticks**: Sticky Left Stick (Walk/Run) & Sticky Right Stick (Dodge/Weave).<br>• **Dodge Input Style**: Right Analog Stick, Screen Swipe Gestures, or Dedicated Dodge D-Pad Buttons (`▲ DUCK`, `▼ FLIP`, `◀ SWAY`, `▶ SWAY`).<br>• **On-Screen Controls Opacity**: `10%` to `100%`.<br>• **FPS & Performance HUD**: Compact, Detailed Debug, or Hidden (`Default`).<br>• **Vibrations**: Master toggle, Touch Vibrations, In-Game Vibration, and Strength (`10%–100%`).<br>• **Reposition On-Screen Buttons** *(Mid-Game)*: Drag buttons/sticks, scale `[-]` / `[+]`, `RESET`, or `SAVE & EXIT`. |
| **SOUND** | • **Separated Volume Sliders**: Master, BGM & Music, Sound Effects (SFX), and Character Voice (`0%–100%`).<br>• **Audio Scheduling**: Real-time (Lowest Latency), Balanced (Recommended), or Safe Headroom Buffer.<br>• **Stream Buffer Size**: `1024 frames (~21.3 ms)`, `2048 frames (~42.6 ms)`, or `4096 frames (~85.3 ms)`. |
| **SAVES** | • **Instant Save States (Slots 1–5)**: Displays Stage location, Gene HP %, and timestamp (`state_slot_<1..5>.ghstate`, ~36 MB) with **Save** and **Load** buttons.<br>• **PS2 Memory Card Status**: Shows `Mcd001.ps2` status, size, and timestamp.<br>• **Export / Import / Snapshots**: Export backups to `/sdcard/Download/GodHand_Saves/`, share ZIP archives, import saves, or 1-tap restore local snapshots. |
| **CHEATS** | • **Health & Protection**: Infinite Health (clamped to current/Max HP with zero overflow), Invulnerability (God Hand attack whiff + grab immunity), Max Health Capacity (`VitalMax = 360`).<br>• **Resources & Currency**: Infinite Gold (`999,999`), Infinite Roulette Orbs, Max Roulette Orbs (`6`).<br>• **Combat, Techniques & Mods**: Infinite Tension Gauge, Enable Double God Hand (Dwinash ASM), All Techniques & Roulettes, **Always Run Forward** (starts running directly from forward tilt without dash entry), **Freeze Roulette Timer** (infinite countdown), **Uncensor Patch (USA)** (Gledson999 runtime overlay restoring *Dead Pan*, *Chihuahua Curry*, & uncensored disc textures), Damage Multiplier (`1x` / `2x` / `999`), Difficulty Level Lock (`Normal` / `DIE` / `Level 1`).<br>• **Cosmetics, Casino & Unlocks**: Gene Costumes (*Default*, *Devil Hand*, *Karate Gi*, *Carnival*), Olivia Costumes (*Default*, *Bunny Girl*), Casino Gift Tickets (x99), Casino Slots Always Win, Unlock Complete Jukebox. |
| **LOGS** | • **Automatic Freeze & Frame Drop Logger**: Captures hardware/EE/VU1/Vulkan telemetry on engine freezes (`>= 100 ms`) or stutters (zero overhead when disabled).<br>• **Session Log & OS Logcat**: `REFRESH`, `COPY`, `CLEAR`, and filtered `OS LOGCAT` viewer.<br>• **1-Tap Capture GS Dump (`.gs`)**: Saves frame dumps to `/storage/emulated/0/Download/GodHand_GSDumps/` for inspection in the PC PCSX2 Debugger. |

---

## ⏱️ 60 FPS vs 30 FPS Modes

* **60 FPS (Smooth 60 Hz — Recommended)**: Decouples 60 Hz presentation from internal game systems by advancing animation step flags cleanly every cycle, keeping cloth physics, roulette countdowns, and combat timing synchronized without speed-ups or slowdowns.
* **30 FPS (Authentic PS2)**: Locks execution strictly to original PlayStation 2 console timing if you want 100% original frame cadence or extra battery/thermal headroom.

---

## 🎨 How to Customize App Artwork & Identity

Before building your own release APK, you can personalize the app:

1. **Custom Main Menu Background & Logo**:
   * Place custom images in `app/src/main/assets/`:
     * `app/src/main/assets/main_bg.png`: Fullscreen background image (e.g., `2752x1536` or `1920x1080`).
     * `app/src/main/assets/title_logo.png`: Title logo banner.
   * Loaded automatically with aspect-ratio preservation.
2. **Changing App Name**:
   * Edit `<string name="app_name">` in [app/src/main/res/values/strings.xml](app/src/main/res/values/strings.xml) and ensure [app/src/main/AndroidManifest.xml](app/src/main/AndroidManifest.xml) uses `android:label="@string/app_name"`.
3. **Changing App Icon**:
   * In Android Studio, right-click `app/src/main/res` → **New → Image Asset**, pick your foreground PNG, and generate adaptive icons (`hdpi`–`xxxhdpi`), or manually replace `ic_launcher.png` / `ic_launcher_round.png` under `app/src/main/res/mipmap-*`.

---

## 🛠️ How to Build from Source

### Prerequisites
1. **Windows 10/11**, **Linux**, or **macOS**.
2. **Java Development Kit (JDK)**: Version 17 or higher.
3. **Android Studio**: Iguana (2023.2.1) or newer.
4. **Android SDK & NDK**:
   * Android SDK Platform: **API 35 (VanillaIceCream)**.
   * Android NDK: **28.2.13676358** (via SDK Manager → SDK Tools → NDK).
   * CMake: **3.22.1+**.

### One-Click Windows Build
Double-click [`build_release.bat`](build_release.bat) or run:
```cmd
build_release.bat
```

### Manual Command Line Build
1. Clone this repository:
   ```bash
   git clone https://github.com/owaissseeee/GodHand-Android-Static-Recomp.git
   cd GodHand-Android-Static-Recomp
   ```
2. Verify `local.properties` points to your Android SDK:
   ```properties
   sdk.dir=C\:\\Android\\Sdk
   ```
3. Compile the release APK:
   * **Windows**:
     ```cmd
     gradlew.bat assembleRelease
     ```
   * **Linux / macOS**:
     ```bash
     chmod +x gradlew
     ./gradlew assembleRelease
     ```
4. Output APK location:
   ```text
   app/build/outputs/apk/release/app-release.apk
   ```

---

## ⚖️ Legal Disclaimer

* This repository contains **NO copyrighted game assets, ROMs, ISOs, BIOS files, 3D models, textures, or audio streams**.
* **God Hand** is a registered trademark of Capcom Co., Ltd. and Clover Studio. This project is an independent open-source static recompilation wrapper developed for educational and preservation purposes.
* Users **MUST** supply their own legally acquired PlayStation 2 disc image (**God Hand - USA, SLUS-21503**). Required disc data is extracted and cached locally on the device during first setup.

---

## 👏 Credits & Acknowledgments

* **Port by owaissseeee**: Native Android static recompilation port, Vulkan/OpenGL ES integration, Direct Touchscreen Menus, Hold-to-Skip Cutscenes, HD Texture directory hook, touch HUD & layout editor, cheats & USA Uncensor integration, save-state manager, Hor+ widescreen, feedback pass culling, performance spike profiler, and mobile optimization.
* **God-Hand-Rearmed (Kamite, LasVola, and contributors)**: Foundational reverse engineering, ordered depth-shuffle research, and the **60 FPS suite**.
* **Capcom & Clover Studio**: Creators of *God Hand*.
* **GodHandRecomp / GodHandRecompile Community**: Foundational PS2 static recompilation research and symbol maps.
* **PS2Recomp & MrBroccoli**: Static binary recompilation architecture and toolchain.
* **PCSX2 Team**: PS2 GS graphics backend, Vulkan renderer, and replacement texture loader.
* **Raylib**: Lightweight windowing and input abstractions.
* **Google Oboe Team**: Low-latency mobile audio engine for Android.
* **Adrenotools**: Custom GPU driver loader hooks for Qualcomm Adreno devices.
