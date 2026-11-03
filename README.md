# God Hand (PS2) - Native Android Static Recompilation Port

[![Platform](https://img.shields.io/badge/Platform-Android%208.0%2B%20(API%2026%2B)-brightgreen.svg)](https://developer.android.com)
[![Architecture](https://img.shields.io/badge/Architecture-ARM64--v8a-blue.svg)](https://developer.android.com/ndk)
[![Graphics](https://img.shields.io/badge/Graphics-Vulkan%20%7C%20OpenGL%20ES%203.2-orange.svg)](https://www.khronos.org/vulkan/)
[![Port Author](https://img.shields.io/badge/Port%20by-owaissseeee-red.svg)](https://github.com/owaissseeee)
[![License](https://img.shields.io/badge/License-GPL--3.0-blue.svg)](LICENSE)

An authentic **ARM64 Android port** of the PlayStation 2 masterpiece **God Hand (USA, SLUS-21503)**, achieved through complete **Static Binary Recompilation (AOT)**. **Port by owaissseeee**.

Unlike traditional emulators that translate MIPS CPU and VU instructions at runtime with heavy JIT interpretation overhead, this project recompiled all **10,553 Emotion Engine functions** and **81 SNR2 overlay modules** directly into native C++20 and compiled them ahead-of-time with Clang ThinLTO, delivering console-accurate gameplay up to **60 FPS** on Android hardware.

---

## ⚡ Key Features

* **Native ARM64 Execution**: Zero CPU JIT recompilation overhead; PS2 machine instructions execute directly as native ARM64 machine code compiled via Clang ThinLTO.
* **Vulkan PCSX2-GS Backend**: Hardware-accelerated graphics rendering via modern Vulkan with multi-threaded GIF packet submission and quad-buffered swapchains.
* **AOT Vector Unit 1 (VU1) Acceleration**: Heavy microprograms recompiled ahead-of-time with ARM64 NEON bitwise vector normalization.
* **Multi-Threaded VU1 (MTVU)**: Asynchronous parallel dispatch for VIF1 unpacking, VU1 execution, and GS rendering across dedicated CPU cores.
* **Authentic DevSeville 60 FPS Patch**: Unlocks GS progressive 60Hz display mode (`SCE_GS_DTV480P`) while preserving true 1.0f internal game physics rate, eliminating slow-motion animations, desynced particles, and rushed roulette countdowns. Authentic 30 FPS console lock remains fully available.
* **True Fullscreen Hor+ Dynamic Widescreen**: Replaces distorted 2D image stretching with real-time 3D camera projection FOV expansion (`0.7f * aspect`), accompanied by dynamic font scaling for modern 19.5:9, 20:9, and ultrawide screens.
* **Comprehensive In-Game Cheats Engine**: Action Replay / Codebreaker / ASM cheats toggleable mid-game with persistent saving:
  * **Health & Defense**: Infinite Health, True Super-Armor Invulnerability (zero flinch/stagger from enemy attacks while Gene deals 100% full attack damage with all moves and launchers), and Screen-Aligned Max Health Capacity.
  * **Resources & Meters**: Infinite Gold, Infinite Roulette Orbs, Max Roulette Orbs, Infinite / Max Tension Gauge.
  * **Combat Mastery**: Enable Double God Hand (dual God Hands ASM), Have All Techniques & Roulettes, Freeze Roulette Timer, Damage Multipliers (1x–5x), Always Run Forward, and Dynamic Difficulty Lock (Die Meter).
  * **Cosmetics & Unlockables**: Gene Costume Switcher (Normal, Karate Gi, Business Suit, Carnival), Olivia Costume Switcher (Normal, Bunny Girl, Cowgirl), Casino Slots Cheats, and Full Jukebox Unlocks.
* **Integrated Memory Card / Saves Manager**: Dedicated Saves tab allows one-click export of `Mcd001.ps2` (compatible with PCSX2 / AetherSX2 / NetherSX2), timestamped card backups, and compressed ZIP archives via the Android Share sheet, plus instant save file restoration.
* **Dual-Mode Zero-Overhead FPS HUD**:
  * **Compact HUD**: Displays real-time **Game EE FPS** and emulation execution speed with lockstep color indicator.
  * **Detailed Debug View**: Tap to reveal **Screen Present FPS**, frame duration, worst frame spike, and an interactive 64-frame frametime micro-histogram.
* **Modernized UI & Asset System**:
  * Seamless custom artwork support: automatically loads high-resolution `main_bg.png` and `title_logo.png` directly from `assets/`.
  * Streamlined Settings dialog featuring a top-right close button (`✕`) and full screen-width layout.
  * Clean analog joysticks with all visual clutter and redundant subtext removed.
  * Cross-process JSON synchronization (`SettingsRepository`) ensuring seamless settings persistence between `MainActivity` and the `:game` execution process.
* **3 God Hand Dodge Modes**:
  1. **Right Thumbstick**: Authentic dual-analog stick dodging.
  2. **Swipe Gestures**: Quick directional swipes on the right half of the screen trigger rapid 160ms duck, backflip, and side sways.
  3. **Dedicated Dodge Buttons**: 4 on-screen directional buttons (`▲ DUCK`, `▼ FLIP`, `◀ SWAY L`, `▶ SWAY R`).
* **Interactive Controls Layout Editor**: Drag, reposition, scale (`[-]` / `[+]`), and adjust opacity of every button and thumbstick with persistent JSON saving.
* **Controller Auto-Detection**: Plug-and-play support for Bluetooth, USB, and OTG gamepads (Xbox, DualShock 4, DualSense, standard HID) with automatic touch overlay hiding.
* **Adaptive Audio Engine**: Powered by Oboe / OpenSL ES with customizable buffer sizes (128, 256, 512 frames) and real-time thread scheduling.

---

## 📱 Hardware Performance & Compatibility Tiers

| Tier | Chipset Examples | Recommended Resolution | Frameskip | Target FPS |
| :--- | :--- | :--- | :--- | :--- |
| **Flagship Elite** | Snapdragon 8 Gen 2 / Gen 3, Dimensity 9200 / 9300 | **2.0x – 4.0x (1080p - 2K)** | Off | **60 FPS Solid** |
| **Upper Mid-Range**| Snapdragon 778G / 870 / 865, Dimensity 7050 / 8200 | **1.0x – 2.0x (Native - HD)**| Auto / Off | **45 – 60 FPS** |
| **Mid-Range**      | Snapdragon 680 / 695, Helio G99 / G95 | **1.0x (512x448 Native)** | Auto | **30 – 50 FPS** |
| **Potato / Low-End**| MediaTek Helio G35 / P35, Unisoc T606, SD 480 | **0.5x (Super Ultra Low)** | Skip 2 or Skip 3 | **Playable 30 FPS** |

> [!TIP]
> On devices with unified Cortex-A53 cores (like **Helio G35**), select **0.5x (Super Ultra Low Potato Mode)** and **Safe Audio Buffer (512 frames)** under Audio Settings for smooth, glitch-free performance.

---

## ⚖️ Legal Disclaimer

* This repository contains **NO copyrighted game assets, ROMs, ISOs, BIOS files, 3D models, textures, or audio streams**.
* **God Hand** is a registered trademark of Capcom Co., Ltd. and Clover Studio. This project is an independent open-source static recompilation wrapper developed for educational and preservation purposes.
* To play the game, users **MUST** provide their own legally acquired copy of the original PlayStation 2 disc (**God Hand - USA, SLUS-21503**).
* The application extracts and caches required disc data locally on the user's device during initial setup.

---

## 🛠️ How to Build from Source

### Prerequisites
1. **Windows 10/11**, **Linux**, or **macOS**.
2. **Java Development Kit (JDK)**: Version 17 or higher.
3. **Android Studio**: Iguana (2023.2.1) or newer.
4. **Android SDK & NDK**:
   * Android SDK Platform: **API 35 (VanillaIceCream)**.
   * Android NDK: **28.2.13676358** (installed via SDK Manager -> SDK Tools -> NDK).
   * CMake: **3.22.1+**.

### One-Click Windows Build
Simply double-click [`build_release.bat`](file:///c:/GodHandPort/build_release.bat) or run in terminal:
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
4. The output APK will be generated at:
   ```
   app/build/outputs/apk/release/app-release.apk
   ```

---

## 🚀 Installation & First Launch (Bring Your Own ISO)

> [!IMPORTANT]
> **BRING YOUR OWN ISO (REQUIRED)**: This application does not ship with any game data. You **must** provide your own legally dumped **God Hand (USA)** PS2 game disc image (`SLUS-21503`).

1. Install the APK to your Android device:
   ```bash
   adb install -r app/build/outputs/apk/release/app-release.apk
   ```
2. Launch **God Hand**:
   ```bash
   adb shell am start -n com.owaissseeee.godhand/.MainActivity
   ```
3. On first launch, tap **SELECT GOD HAND (USA) ISO**:
   * Use the system file picker to select your `God Hand (USA).iso` (or transfer it to your device's `Download/` folder).
   * The app will verify the `SLUS-21503` SHA-256 hash (`1742f95bef...`), extract required game assets, unpack the `IRX.IMS` sound modules, and generate fast sector index caches.
4. Tap **BOOT GOD HAND (NATIVE RECOMP)** and enjoy!

---

## ⚠️ 60 FPS vs 30 FPS Experience

* **DevSeville 60 FPS Patch**:
  * The project incorporates the authentic **DevSeville 60 FPS GS progressive display patch** (`SCE_GS_DTV480P`), unlocking 60Hz presentation while maintaining a clean 1.0f internal game speed rate. This eliminates slow-motion movement, desynced particle effects, and rapid roulette timer countdowns.
  * **Recommendation**: If you prefer the 100% pure authentic PlayStation 2 console combat physics, switch **Target Frame Rate** to **`30 FPS (Console Native Lock)`** in the Graphics settings tab.

---

## 🎨 How to Customize App Artwork & Identity

Before building your own release APK, you can easily personalize the application's appearance:

1. **Custom Main Menu Background & Logo**:
   * Simply place your custom images in `app/src/main/assets/`:
     * `app/src/main/assets/main_bg.png`: Fullscreen background image (e.g., 2752x1536 or 1920x1080).
     * `app/src/main/assets/title_logo.png`: Game title logo banner.
   * The app automatically loads and renders these assets with aspect-ratio preservation and hardware memory optimization.

2. **Changing App Name**:
   * Open [`app/src/main/res/values/strings.xml`](file:///app/src/main/res/values/strings.xml) and edit:
     ```xml
     <string name="app_name">Your Custom Name</string>
     ```
   * Open [`app/src/main/AndroidManifest.xml`](file:///app/src/main/AndroidManifest.xml) and update the application label:
     ```xml
     android:label="@string/app_name"
     ```

3. **Changing App Icon**:
   * **In Android Studio (Recommended)**:
     1. Right-click the `app/src/main/res` folder in the project tree.
     2. Select **New $\to$ Image Asset**.
     3. Under **Foreground Layer**, select **Path** and choose your desired custom PNG image/logo.
     4. Adjust the resize/trim slider, click **Next**, and then **Finish**. Android Studio will automatically generate all adaptive icon densities (`hdpi`, `xhdpi`, `xxhdpi`, `xxxhdpi`).
   * **Manual Replacement**:
     * Replace the PNG files in `app/src/main/res/mipmap-*` (`ic_launcher.png` and `ic_launcher_round.png`) with your own square and round icon images.

---

## 🎮 In-Game Controls & Customization

* **Header Controls**:
  * `EXIT`: Prompt clean exit to main menu without background memory leaks.
  * `⚙`: Open the In-Game Categorized Settings modal dialog.
  * `✕`: Top-right close button for instant dialog dismissal.
* **Settings Tabs**:
  * **GRAPHICS**: 
    * Renderer: Vulkan / OpenGL ES 3.2.
    * Internal Resolution: 0.5x Potato Mode (256x224) up to 4.0x 4K UHD.
    * Aspect Ratio: Original 4:3, Standard 16:9, or **True Fullscreen Hor+ Widescreen** (expanded 3D camera FOV without 2D stretching).
    * Target FPS: 30 FPS Console Native Lock / 60 FPS DevSeville Progressive Patch.
    * Frameskip: Off, Auto (>34ms trigger), Skip 1 Frame, Skip 2 Frames, or Skip 3 Frames (Potato Mode).
  * **CONTROLS**: 
    * Controller Mode: Auto, Touch Only, or Gamepad Only.
    * Auto-Hide Touch Controls on Gamepad Connection.
    * 3 Dodge Modes: Right Thumbstick, Swipe Gestures, or Dedicated Dodge Buttons.
    * Touch Opacity slider and **Interactive Controls Layout Editor**.
  * **AUDIO & SYSTEM**: 
    * Audio Scheduling: Real-time, Balanced, or Safe Mode.
    * Buffer Size: 128, 256, or 512 frames (Oboe / AAudio).
    * Master Volume & Dual-Mode Performance FPS HUD.
  * **CHEATS**: 
    * Health & Protection: Infinite Health, True Super-Armor Invulnerability, Max Capacity Health Bar (screen-aligned).
    * Resources & Currency: Infinite Gold, Infinite Roulette Orbs, Max Roulette Orbs.
    * Combat & Meters: Infinite / Max Tension, Double God Hand ASM, Have All Techniques & Roulettes, Freeze Roulette Timer, Damage Multipliers (1x–5x), Always Run Forward, Die Difficulty Lock.
    * Cosmetics & Unlockables: Gene Costumes (Karate Gi, Business Suit, Carnival), Olivia Costumes (Bunny Girl, Cowgirl), Casino Mods, and Full Jukebox Unlocks.
  * **SAVES**: 
    * One-click **Export Saves** to `/sdcard/Download/GodHand_Saves/` (`Mcd001.ps2`, timestamped backups, and compressed ZIP archives ready for sharing or transferring to PCSX2 / AetherSX2 / NetherSX2).
    * One-click **Import Saves** from local device storage.

---

## 👏 Credits & Acknowledgments

* **Port by owaissseeee**: Android native static recompilation port, Vulkan backend integration, touch HUD, controls layout editor, cheats engine, Hor+ widescreen projection, and mobile performance optimization.
* **Capcom & Clover Studio**: For creating *God Hand*, one of the greatest beat-'em-up masterpieces of all time.
* **GodHandRecomp / GodHandRecompile Community**: For the foundational PlayStation 2 static recompilation work, reverse-engineered function symbol maps, and God Hand recompiler pipeline research.
* **DevSeville**: For the authentic *God Hand* 60 FPS progressive display patch research and implementation.
* **PS2Recomp & MrBroccoli**: Static binary recompilation pipeline architecture and toolchain.
* **PCSX2 Team**: Industry-standard PlayStation 2 GS graphics emulation backend and Vulkan renderer.
* **Raylib**: Lightweight windowing and input abstractions.
* **Google Oboe Team**: High-performance, low-latency mobile audio engine for Android.
* **Adrenotools**: Custom GPU driver loader hooks for Qualcomm Adreno devices.
