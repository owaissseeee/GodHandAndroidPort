#include "godhand_patches_mobile.h"
#include "godhand/frame_patches.h"
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

static std::atomic<int> s_fpsIdx{0}; // 0 = 30 FPS (Default), 1 = 60 FPS (Experimental)
static std::atomic<int> s_aspectIdx{2}; // 0 = 16:9, 1 = 4:3, 2 = Full Screen
static std::atomic<int> s_hudLayoutIdx{0}; // 0 = 16:9 Widescreen (Default), 1 = 4:3 Original
static std::atomic<uint32_t> s_screenWidth{1600u};
static std::atomic<uint32_t> s_screenHeight{720u};

void setFpsMode(int fpsIdx) {
    s_fpsIdx.store(fpsIdx, std::memory_order_relaxed);
    kamite::requestFps60(fpsIdx == 1);
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

void setHudLayout(int mode) {
    s_hudLayoutIdx.store(mode, std::memory_order_relaxed);
}

int getHudLayout() {
    return s_hudLayoutIdx.load(std::memory_order_relaxed);
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
    // fpsIdx == 0: 30 FPS console lock (2 VBlanks = 0x02) - DEFAULT
    // fpsIdx == 1: 60 FPS experimental (1 VBlank = 0x01)
    const uint8_t vblanks = (fpsIdx == 1) ? 0x01 : 0x02;
    rdram[kFrameLimiterAddr] = vblanks;
    // Speed rate remains 1.0f in both 60 FPS and 30 FPS per DevSeville 60 FPS specification.
    const float speedRate = 1.0f;
    std::memcpy(rdram + 0x00747A14u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00741DC0u, &speedRate, sizeof(speedRate));
    std::memcpy(rdram + 0x00754C48u, &speedRate, sizeof(speedRate));

    // Widescreen patch:
    applyWidescreenPatch(rdram, aspectIdx);
    applyWidescreenHudAndConePatches(rdram, aspectIdx, s_hudLayoutIdx.load(std::memory_order_relaxed));
}

void applyWidescreenHudAndConePatches(uint8_t* rdram, int aspectIdx, int hudLayout) {
    if (!rdram) return;

    // 1. Minigame aspect ratio guard (Fighting ring, Casino Blackjack, Slots):
    // Reassert widescreen FOV so minigame entry functions do not force 4:3
    applyWidescreenPatch(rdram, aspectIdx);

    // 2. 21:9+ Screen-Fade Coverage Fix:
    // When a fade is active at 0x00160C48 / 0x00747A28, ensure full viewport coverage
    // so ultrawide 19.5:9 / 20:9 / 21:9 phone displays never leave the top or sides bright
    if (aspectIdx != 1) { // 16:9 or Full Screen
        uint32_t fadeFlags = 0;
        std::memcpy(&fadeFlags, rdram + 0x00747A28u, sizeof(fadeFlags));
        if (fadeFlags & 0x01u) {
            const float fullCover = 2.0f;
            std::memcpy(rdram + 0x0079B0E0u, &fullCover, sizeof(fullCover));
        }
    }

    // 3. Widescreen HUD Layout (Boss portraits & Throw Prompt):
    if (hudLayout == 0 && aspectIdx != 1) {
        // Shift boss portrait alignment offset so it stays centered inside the circular health bar ring
        const float bossPortraitXOffset = 0.0f; // Centered inside circular HUD ring
        std::memcpy(rdram + 0x005CB040u, &bossPortraitXOffset, sizeof(bossPortraitXOffset));

        // Adjust top-left action prompt ("Throw") positioning to widescreen safe-zone:
        const float throwPromptX = 48.0f;
        std::memcpy(rdram + 0x005CB060u, &throwPromptX, sizeof(throwPromptX));
    }

    // 4. "Enemies Follow the View" - Attack Cone Widening:
    // At 16:9 and 20:9 ultrawide FOV, widen the enemy view frustum threshold in cEmManage
    // from 0.819f (4:3 70 deg) to 0.642f (wide 100 deg) so visible edge enemies remain active!
    if (aspectIdx != 1) {
        const float wideConeCos = 0.642f; // cos(50 degrees)
        std::memcpy(rdram + 0x005864F0u + 0x550u, &wideConeCos, sizeof(wideConeCos));
    } else {
        const float standardConeCos = 0.819f; // cos(35 degrees)
        std::memcpy(rdram + 0x005864F0u + 0x550u, &standardConeCos, sizeof(standardConeCos));
    }
}

void updateFrameTiming(uint8_t* rdram, int fpsIdx) {
    if (!rdram) return;
    setFpsMode(fpsIdx);
    const uint8_t vblanks = (fpsIdx == 1) ? 0x01 : 0x02;
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
