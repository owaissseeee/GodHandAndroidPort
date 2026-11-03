#include "godhand_patches_mobile.h"
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <atomic>

namespace godhand {
namespace mobile {

// Frame limiter at guest EE RAM address 0x00747A09
static constexpr uint32_t kFrameLimiterAddr = 0x00747A09;

// Camera aspect ratio register at guest EE RAM address 0x00586B88:
// Read by Trans_Clipmatrix_set (0x1538f0) and func_0015C928 (0x15c928)
// 0x3F6EEEEF = 0.93333334f (Standard PS2 4:3 FOV)
// 0x3F9F49F1 = 1.2444438f  (True 16:9 Hor+ Widescreen FOV: 0.93333334f * 16/9 / (4/3))
static constexpr uint32_t kCameraAspectAddr = 0x00586B88;
static constexpr float kAspect16x9 = 1.2444438f;
static constexpr float kAspect4x3  = 0.93333334f;

static std::atomic<int> s_fpsIdx{0}; // 0 = 60 FPS, 1 = 30 FPS
static std::atomic<int> s_aspectIdx{2}; // 0 = 16:9, 1 = 4:3, 2 = Full Screen
static std::atomic<uint32_t> s_screenWidth{1600u};
static std::atomic<uint32_t> s_screenHeight{720u};

void setFpsMode(int fpsIdx) {
    s_fpsIdx.store(fpsIdx, std::memory_order_relaxed);
}

int getFpsMode() {
    return s_fpsIdx.load(std::memory_order_relaxed);
}

void setAspectMode(int aspectIdx) {
    s_aspectIdx.store(aspectIdx, std::memory_order_relaxed);
}

int getAspectMode() {
    return s_aspectIdx.load(std::memory_order_relaxed);
}

void setScreenDimensions(uint32_t width, uint32_t height) {
    if (width > 0) s_screenWidth.store(width, std::memory_order_relaxed);
    if (height > 0) s_screenHeight.store(height, std::memory_order_relaxed);
}

void getScreenDimensions(uint32_t* width, uint32_t* height) {
    if (width) *width = s_screenWidth.load(std::memory_order_relaxed);
    if (height) *height = s_screenHeight.load(std::memory_order_relaxed);
}

void applyWidescreenPatch(uint8_t* rdram, int aspectIdx) {
    if (!rdram) return;
    float fovScale = kAspect16x9;
    if (aspectIdx == 1) {
        // 4:3 Standard PS2
        fovScale = kAspect4x3;
    } else if (aspectIdx == 2) {
        // Full Screen: Hor+ Ultrawide projection to prevent stretching across full screen
        uint32_t w = s_screenWidth.load(std::memory_order_relaxed);
        uint32_t h = s_screenHeight.load(std::memory_order_relaxed);
        if (w > 0 && h > 0) {
            float aspect = static_cast<float>(w) / static_cast<float>(h);
            fovScale = 0.700000005f * aspect;
        } else {
            fovScale = 1.5555556f;
        }
    } else {
        // 16:9 Standard Widescreen
        fovScale = kAspect16x9;
    }
    std::memcpy(rdram + kCameraAspectAddr, &fovScale, sizeof(fovScale));
}

void applyPatches(uint8_t* rdram, int fpsIdx, int aspectIdx, float /*customScale*/) {
    if (!rdram) return;
    
    setFpsMode(fpsIdx);
    setAspectMode(aspectIdx);

    // FPS configuration:
    // fpsIdx == 0: 60 FPS (1 VBlank = 0x01)
    // fpsIdx == 1: 30 FPS console lock (2 VBlanks = 0x02)
    const uint8_t vblanks = (fpsIdx == 0) ? 0x01 : 0x02;
    rdram[kFrameLimiterAddr] = vblanks;
    // Speed rate remains 1.0f in both 60 FPS and 30 FPS per DevSeville 60 FPS specification.
    const float speedRate = 1.0f;
    std::memcpy(rdram + 0x00747A14u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00741DC0u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00754C48u, &speedRate, sizeof(speedRate));

    // Widescreen patch:
    applyWidescreenPatch(rdram, aspectIdx);
}

void updateFrameTiming(uint8_t* rdram, int fpsIdx) {
    if (!rdram) return;
    setFpsMode(fpsIdx);
    const uint8_t vblanks = (fpsIdx == 0) ? 0x01 : 0x02;
    rdram[kFrameLimiterAddr] = vblanks;
    const float speedRate = 1.0f;
    std::memcpy(rdram + 0x00747A14u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00741DC0u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00754C48u, &speedRate, sizeof(speedRate));
}

void updateProjectionMatrix(uint8_t* rdram, int aspectIdx, float viewportW, float viewportH) {
    if (viewportW > 0.0f && viewportH > 0.0f) {
        setScreenDimensions(static_cast<uint32_t>(viewportW), static_cast<uint32_t>(viewportH));
    }
    setAspectMode(aspectIdx);
    applyWidescreenPatch(rdram, aspectIdx);
}

} // namespace mobile
} // namespace godhand
