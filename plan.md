# God Hand Static Recompilation: Ultimate Native Performance & Optimization Plan

**Target Architecture**: Android ARM64-v8a (MediaTek Dimensity 7050 / Mali-G68 MC4, Snapdragon, Exynos)  
**Package**: `com.owaissseeee.godhand` (SLUS-21503)  
**Branch**: `optimization`  
**Primary Goal**: Outperform mature emulators (AetherSX2 / PCSX2) with a rock-solid, fluid framerate in heavy combat, zero micro-stutter, and drastically lower thermals and battery usage.

---

## 1. Architectural Diagnostics & Problem Summary

Profiling and live logcat traces revealed five primary performance bottlenecks holding the static recompilation port back:

1. **Untouched Screen CPU Throttle (ColorOS / MediaTek EAS Scheduler)**:
   - When fingers leave the screen, Android's `BufferQueueProducer` drops the top activity window redraw to ~3.95 FPS.
   - The OS governor (`mtk_fpsgo`) assumes the app is an idle/static UI and drastically downclocks the 2 Big Cortex-A78 cores and reduces VRR display refresh rates. Touching the screen immediately boosts clocks back up.
2. **BLASTBufferQueue `NO_BUFFER_AVAILABLE` Contention**:
   - `GSThread` non-blocking poll with `PS2X_PCSX2_VSYNC=0` on Vulkan mailbox mode spams thousands of buffer acquisition failures per minute when all 4 buffers are queued in SurfaceFlinger.
3. **Four Redundant GIF Memory Copies (~240 MB/s DRAM bandwidth)**:
   - Vertex and texture GIF data is copied across `ps2_memory.cpp` -> `ps2_async_vif.cpp` -> `gs_threaded_backend.cpp` -> `Bridge.cpp` using `std::vector` heap allocations, causing severe memory bus contention on mobile LPDDR4X/5.
4. **VU1 & VU0 Microcode Execution Overhead**:
   - `ps2_vu1_impl.inl` computes per-instruction PS2/IEEE status flags, masks, and `vnorm` clamping on every vector opcode even though God Hand only uses `CLIP` / `FCAND` for frustum culling.
   - `loadVu0Registers` and `storeVu0Registers` copy 512 bytes of registers back and forth between EE and VU0 on every macro call.
5. **Partial AOT VU1 Coverage (Software Interpreter Fallback)**:
   - Currently, only 5 VU1 microprogram hashes are pre-compiled into `generated/vu1/vu1_programs.cpp`. Heavy combat, destructible objects, and special effects fall back to the software interpreter in `ps2_vu1_core.cpp`, consuming up to 80% of a Big CPU core.

---

## 2. Step-by-Step Implementation Plan

### Step 1: Kernel Governor Boost & Display Lock (ADPF & VRR)
* **Target Files**:
  - `app/src/main/kotlin/com/owaissseeee/godhand/NativeBridge.kt`
  - `app/src/main/kotlin/com/owaissseeee/godhand/GameActivity.kt`
  - `app/src/main/kotlin/com/owaissseeee/godhand/TouchControllerOverlay.kt`
  - `app/src/main/cpp/src/godhand/thread_affinity.cpp`
  - `app/src/main/cpp/src/main.cpp`
* **Changes**:
  1. **Android ADPF (`PerformanceHintManager`) Integration**:
     - Expose native Linux thread IDs (TIDs) of `EEThread`, `VUThread`, `GSThread`, and `GIFThread` via JNI.
     - Create an ADPF HintSession in `GameActivity.kt` targeting a `16,666,666 ns` frame budget. Report actual work duration each frame so Android's `schedutil` / `mtk_fpsgo` governor keeps Big cores locked at peak frequency with zero touch events.
  2. **Display & Surface Refresh Lock**:
     - Lock the display window and `SurfaceHolder` to `60.0f Hz` with `FRAME_RATE_COMPATIBILITY_FIXED_SOURCE`.
     - Disable `setFrameRateBoostOnTouchEnabled(false)` on Android 14+ to prevent clock drops when not touching.
  3. **Decouple UI Overlay from HardwareRenderer**:
     - Stop running 250ms full-window canvas invalidations. Only update HUD stats when text changes, eliminating the 3.95 FPS window classification.
  4. **Non-Blocking Haptics**:
     - Replace synchronous Binder IPC `vibrator.vibrate(...)` with non-blocking view haptic feedback (`performHapticFeedback`) rate-limited to 60ms intervals.

---

### Step 2: Swapchain Pacing & BLASTBufferQueue Contention Fix
* **Target Files**:
  - `app/src/main/cpp/thirdparty/psx2_android_ref/pcsx2/GS/Renderers/Vulkan/VKSwapChain.cpp`
  - `app/src/main/cpp/thirdparty/pcsx2-gs-android/compat/Bridge.cpp`
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/gs/gs_pcsx2_backend.cpp`
* **Changes**:
  1. **Android FIFO Presentation Mode**:
     - On Android `ANativeWindow`, use `VK_PRESENT_MODE_FIFO_KHR` with a clean 100ms timeout for `vkAcquireNextImageKHR` on `GSThread`.
     - Eliminate the `NO_BUFFER_AVAILABLE` error flood over `/dev/socket/logdw`.
  2. **Interlaced Field Suppression**:
     - Prevent duplicate presentations on sub-fields if no actual geometry was drawn during that field.

---

### Step 3: Zero-Alloc 16 MB SPSC GIF Ring Slab
* **Target Files**:
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/ps2_memory.cpp`
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/ps2_async_vif.cpp`
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/gs/gs_threaded_backend.cpp`
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/gs/gs_pcsx2_backend.cpp`
* **Changes**:
  1. **Pre-allocated 16 MB Ring Slab (`g_gifRingSlab`)**:
     - Replace dynamic `std::vector<uint8_t>` allocations and `std::deque` queues with a lock-free single-producer single-consumer (SPSC) ring slab.
     - DMA2 chain walker in `ps2_memory.cpp` writes RDRAM QWs directly into the slab slice with zero intermediate buffer copies.
  2. **Coalesced GIF Submissions**:
     - In `gs_threaded_backend.cpp`, merge consecutive contiguous GIF packets into a single `g_api->gif(basePtr, totalQwc)` call, slashing JNI and `GSState` transition overhead by up to 5x.

---

### Step 4: Ultra-Fast Flagless ARM64 NEON VU1 & Zero-Copy VU0
* **Target Files**:
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/vu/ps2_vu1_impl.inl`
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp`
  - `app/src/main/cpp/runtime/ps2xRuntime/include/runtime/ps2_vu1.h`
* **Changes**:
  1. **Flagless NEON Fast Path for `fmacF`, `fmacV`, and `fmacFastImpl`**:
     - Implement 1-instruction ARM64 NEON lane write-masks (`vbslq_f32` / `blendMasked`).
     - Bypass `vnorm` and MAC/Status sticky flag calculations on standard vector operations (`VMUL`, `VMADD`, `VADD`, `VSUB`). Drops per-vector instruction cost from ~28 ARM64 ops to 2–3 NEON ops.
  2. **Vectorized `CLIP` Routine**:
     - Replace scalar float comparisons with branchless 4-lane NEON comparisons (`vcgtq_f32` / `vcltq_f32`).
  3. **Zero-Copy VU0 Macro Mode**:
     - In `loadVu0Registers` / `storeVu0Registers`, operate directly on `cpu->vu0_vf` pointers in-place instead of copying 512 bytes on every macro invocation.

---

### Step 5: Vectorized VIF1 SIMD Unpacking
* **Target Files**:
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/vif/ps2_vif1_interpreter.cpp`
* **Changes**:
  1. Accelerate standard VIF1 `UNPACK` modes using NEON intrinsics:
     - `V4_32`: Direct 128-bit load/store (`vld1q_u32` / `vst1q_u32`).
     - `V4_16`: 64-bit load with single-instruction widening to 32-bit (`vmovl_s16`).
     - `V4_8`: 32-bit load with widening to 32-bit ints.

---

### Step 6: Full AOT VU1 Microprogram Pipeline
* **Target Files**:
  - `app/src/main/cpp/runtime/ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp`
  - `app/src/main/cpp/runtime/ps2xTest/tools/vu1_recomp.cpp`
  - `app/src/main/cpp/generated/vu1/vu1_programs.cpp`
* **Changes**:
  1. **Microprogram Hash Logging & Dump**:
     - Update `reportUncompiledVu1Image` in `ps2_vu1_core.cpp` to log all missing VU1 hashes to Android logcat without blocking I/O.
  2. **Batch AOT Compilation**:
     - Run `vu1_recomp` across captured microprogram dumps from God Hand's full stage progression.
     - Register all generated programs in `registerGeneratedVu1Programs()` to achieve 100% AOT coverage and eliminate the software interpreter fallback completely.

---

### Step 7: Build, Hardware Testing & Performance Validation
* **Verification Targets**:
  1. Build Release APK via `./gradlew.bat assembleRelease` and install on OPPO CPH2763IN.
  2. Measure frame pacing and frametimes across:
     - Untouched screen (verifying ADPF keeps clocks locked at 60 FPS).
     - Heavy multi-enemy 3D combat in Stage 1 & 2.
     - God Reel activation and particle explosions.
  3. Verify logcat shows:
     - Zero `BLASTBufferQueue: NO_BUFFER_AVAILABLE` errors.
     - Zero uncompiled VU1 interpreter warnings.
     - Solid 60.0 FPS present rate with flat green frametime histogram.

---

## 3. Execution Phases

| Phase | Tasks | Expected Gain |
| :--- | :--- | :--- |
| **Phase 1** | ADPF Governor Boost, 60Hz display lock, non-blocking haptics, UI timer fix | +25–30 FPS boost when screen is not being touched; eliminates VRR downclocking |
| **Phase 2** | BLASTBufferQueue FIFO fix & swapchain pacing | Eliminates 1,000+ error logs/min and swapchain presentation hitches |
| **Phase 3** | Zero-alloc 16 MB GIF Ring Slab & packet coalescing | Saves ~240 MB/s memory bandwidth; reduces CPU-to-GS latency |
| **Phase 4** | Ultra-fast NEON VU1 flagless fast paths, vectorized `CLIP`, zero-copy VU0 | 3x–5x faster VU1 geometry transformation; smooth crate shattering/particles |
| **Phase 5** | Vectorized VIF1 NEON unpack routines | 2x faster vertex unpacking |
| **Phase 6** | Full AOT VU1 capture and registration | Drops `VUThread` CPU usage from 80% to <5% |
| **Phase 7** | Release build, installation, hardware logcat & FPS verification | Full verification on physical hardware |
