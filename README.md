# God Hand (PS2) - Native Android Static Recompilation Port

[![Platform](https://img.shields.io/badge/Platform-Android%208.0%2B%20(API%2026%2B)-brightgreen.svg)](https://developer.android.com)
[![Architecture](https://img.shields.io/badge/Architecture-ARM64--v8a-blue.svg)](https://developer.android.com/ndk)
[![Graphics](https://img.shields.io/badge/Graphics-Vulkan%20%7C%20OpenGL%20ES%203.2-orange.svg)](https://www.khronos.org/vulkan/)
[![License](https://img.shields.io/badge/License-GPL--3.0-blue.svg)](LICENSE)

An native **ARM64 Android port** of the PlayStation 2 classic **God Hand (USA, SLUS-21503)**, achieved through complete **Static Binary Recompilation (AOT)**. 

Unlike traditional emulators that translate MIPS CPU and VU instructions at runtime with heavy JIT interpretation overhead, this project recompiled all **10,553 Emotion Engine functions** and **81 SNR2 overlay modules** directly into native C++20 and compiled them ahead-of-time with Clang ThinLTO, delivering console-accurate gameplay up to **60 FPS** on Android hardware.

---

## ⚡ Key Features

* **Native ARM64 Execution**: Zero CPU JIT recompilation overhead; PS2 machine instructions execute directly as native ARM64 machine code.
* **Vulkan PCSX2-GS Backend**: Hardware-accelerated graphics rendering via modern Vulkan with multi-threaded GIF packet submission and quad-buffered swapchains.
* **AOT Vector Unit 1 (VU1) Acceleration**: Heavy microprograms recompiled ahead-of-time with ARM64 NEON bitwise vector normalization.
* **Multi-Threaded VU1 (MTVU)**: Asynchronous parallel dispatch for VIF1 unpacking, VU1 execution, and GS rendering across dedicated CPU cores.
* **Dynamic Mid-Game Settings (⚙)**: In-game settings icon beside `EXIT` allows real-time adjustments to resolution, frameskip, aspect ratio, and audio at the VSync boundary without crashes or restarts.
* **Universal Device Compatibility**: Tuned CPU affinity and performance presets scaling from low-end octacore devices (Helio G35 / Mali-G52) up to flagship processors (Snapdragon 8 Gen 1/2/3, Dimensity 9000+).
* **3 God Hand Dodge Modes**:
  1. **Right Thumbstick**: Authentic dual-analog stick dodging.
  2. **Swipe Gestures**: Quick directional swipes on the right half of the screen trigger rapid 160ms duck, backflip, and side sways.
  3. **Dedicated Dodge Buttons**: 4 on-screen directional buttons (`▲ DUCK`, `▼ FLIP`, `◀ SWAY L`, `▶ SWAY R`).
* **Interactive Controls Layout Editor**: Drag, reposition, scale (`[-]` / `[+]`), and adjust opacity of every button and thumbstick with persistent JSON saving.
* **Controller Auto-Detection**: Plug-and-play support for Bluetooth, USB, and OTG gamepads (Xbox, DualShock 4, DualSense, standard HID) with automatic touch overlay hiding.
* **Adaptive Audio Engine**: Powered by Oboe / OpenSL ES with customizable buffer sizes (128, 256, 512 frames) and real-time thread scheduling.
* **Zero-Overhead FPS HUD**: Compact pill, detailed frametime histogram (with 16.7ms and 33.3ms guides), and hidden watermark modes.

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

## ⚠️ Known Issues & Workarounds

* **60 FPS Physics & Particle Timing**:
  * God Hand was originally programmed with hard-coded physics and animation update loops locked to 30 FPS on the PlayStation 2 console.
  * When running in **60 FPS Mode (Dynamic Delta-Time Sync)**, certain enemy knockback distances, grapple timings, and particle effect decay rates may behave slightly faster or desynchronize.
  * **Workaround**: Switch **Target Frame Rate** to **`30 FPS (Console Native Lock - Recommended)`** in the Graphics settings tab for 100% console-accurate physics, authentic particle timing, and rock-solid stability.

---

## 🎨 How to Customize App Name & Icon

Before building your own release APK, you can easily personalize the application's display name and app icon:

1. **Changing App Name**:
   * Open [`app/src/main/res/values/strings.xml`](file:///app/src/main/res/values/strings.xml) and edit:
     ```xml
     <string name="app_name">Your Custom Name</string>
     ```
   * Open [`app/src/main/AndroidManifest.xml`](file:///app/src/main/AndroidManifest.xml) and update the application label:
     ```xml
     android:label="@string/app_name"
     ```

2. **Changing App Icon**:
   * **In Android Studio (Recommended)**:
     1. Right-click the `app/src/main/res` folder in the project tree.
     2. Select **New $\to$ Image Asset**.
     3. Under **Foreground Layer**, select **Path** and choose your desired custom PNG image/logo.
     4. Adjust the resize/trim slider, click **Next**, and then **Finish**. Android Studio will automatically generate all adaptive icon densities (`hdpi`, `xhdpi`, `xxhdpi`, `xxxhdpi`).
   * **Manual Replacement**:
     * Replace the PNG files in `app/src/main/res/mipmap-*` (`ic_launcher.png` and `ic_launcher_round.png`) with your own square and round icon images.

---

## 🎮 In-Game Controls & Customization

* **Header Buttons**:
  * `EXIT`: Prompt clean exit to main menu without background memory leaks.
  * `⚙`: Open the In-Game Categorized Settings modal dialog.
* **Settings Tabs**:
  * **GRAPHICS**: Renderer (Vulkan / GLES), Internal Resolution (0.5x Potato to 8.0x 4K), Aspect Ratio (16:9 / 4:3), Target FPS, Frameskip.
  * **CONTROLS**: Controller Mode (Auto / Touch / Gamepad), Auto-Hide on Gamepad, Sticky Thumbsticks, 3 Dodge Modes, Touch Opacity, and the **Interactive Layout Editor**.
  * **AUDIO & SYSTEM**: Audio Scheduling Mode (Real-time / Balanced / Safe), Buffer Size (128 / 256 / 512 frames), Master Volume, and Performance HUD modes.

---

## 👏 Credits & Acknowledgments

* **Capcom & Clover Studio**: For creating *God Hand*, one of the greatest beat-'em-up masterpieces of all time.
* **GodHandRecomp / GodHandRecompile Community**: For the foundational PlayStation 2 static recompilation work, reverse-engineered function symbol maps, and God Hand recompiler pipeline research.
* **PS2Recomp & MrBroccoli**: Static binary recompilation pipeline architecture and toolchain.
* **PCSX2 Team**: Industry-standard PlayStation 2 GS graphics emulation backend and Vulkan renderer.
* **Raylib**: Lightweight windowing and input abstractions.
* **Google Oboe Team**: High-performance, low-latency mobile audio engine for Android.
* **Adrenotools**: Custom GPU driver loader hooks for Qualcomm Adreno devices.
