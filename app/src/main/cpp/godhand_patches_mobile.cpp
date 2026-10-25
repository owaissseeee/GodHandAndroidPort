#include "godhand_patches_mobile.h"
#include <cstring>
#include <cmath>
#include <cstdlib>

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

void applyWidescreenPatch(uint8_t* rdram, int aspectIdx) {
    if (!rdram) return;
    float fovScale = kAspect16x9;
    if (aspectIdx == 1) {
        fovScale = kAspect4x3;
    } else if (aspectIdx == 2) {
        // Full screen: compute horizontal FOV multiplier matching physical screen aspect ratio
        float screenAspect = 16.0f / 9.0f;
        const char* aspectEnv = std::getenv("GODHAND_SCREEN_ASPECT");
        if (aspectEnv && *aspectEnv) {
            float val = std::strtof(aspectEnv, nullptr);
            if (val > 1.0f && val < 4.0f) {
                screenAspect = val;
            }
        }
        // 0.700000005f * screenAspect ensures 3D geometry is undistorted when stretched full screen
        fovScale = 0.700000005f * screenAspect;
    }
    std::memcpy(rdram + kCameraAspectAddr, &fovScale, sizeof(fovScale));
}

void applyPatches(uint8_t* rdram, int fpsIdx, int aspectIdx, float /*customScale*/) {
    if (!rdram) return;
    
    // FPS configuration:
    // fpsIdx == 0: 60 FPS (1 VBlank = 0x01)
    // fpsIdx != 0: 30 FPS console lock (2 VBlanks = 0x02)
    const uint8_t vblanks = (fpsIdx == 0) ? 0x01 : 0x02;
    rdram[kFrameLimiterAddr] = vblanks;
    const float normalRate = 1.0f;
    std::memcpy(rdram + 0x00747A14u, &normalRate, sizeof(normalRate));

    // Widescreen patch:
    applyWidescreenPatch(rdram, aspectIdx);
}

void updateFrameTiming(uint8_t* rdram, int fpsIdx) {
    if (!rdram) return;
    const uint8_t vblanks = (fpsIdx == 0) ? 0x01 : 0x02;
    rdram[kFrameLimiterAddr] = vblanks;
    const float normalRate = 1.0f;
    std::memcpy(rdram + 0x00747A14u, &normalRate, sizeof(normalRate));
}

void updateProjectionMatrix(uint8_t* rdram, int aspectIdx, float viewportW, float viewportH) {
    if (!rdram) return;
    if (aspectIdx == 2 && viewportW > 0.0f && viewportH > 0.0f) {
        const float screenAspect = viewportW / viewportH;
        const float fovScale = 0.700000005f * screenAspect;
        std::memcpy(rdram + kCameraAspectAddr, &fovScale, sizeof(fovScale));
        return;
    }
    applyWidescreenPatch(rdram, aspectIdx);
}

} // namespace mobile
} // namespace godhand
