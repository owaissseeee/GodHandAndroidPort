#include "godhand_patches_mobile.h"
#include <cstring>
#include <cmath>

namespace godhand {
namespace mobile {

// Frame limiter at guest EE RAM address 0x00747A09
static constexpr uint32_t kFrameLimiterAddr = 0x00747A09;

void applyPatches(uint8_t* rdram, int fpsIdx, int /*aspectIdx*/, float /*customScale*/) {
    if (!rdram) return;
    
    // FPS configuration:
    // 0 = 60 FPS (recommended)
    // 1 = 120 FPS
    // 2 = 30 FPS (original console)
    if (fpsIdx == 2) {
        rdram[kFrameLimiterAddr] = 0x02; // 2 VBlanks per frame
    } else {
        rdram[kFrameLimiterAddr] = 0x00; // 1 VBlank per frame (60/120 FPS unlock)
    }
}

void updateFrameTiming(uint8_t* rdram, int fpsIdx) {
    if (!rdram) return;
    if (fpsIdx == 2) {
        rdram[kFrameLimiterAddr] = 0x02;
    } else {
        rdram[kFrameLimiterAddr] = 0x00;
    }
}

void updateProjectionMatrix(uint8_t* rdram, int aspectIdx, float viewportW, float viewportH) {
    if (!rdram || viewportH <= 0.0f) return;
    float targetAspect = 16.0f / 9.0f;
    if (aspectIdx == 1) targetAspect = 20.0f / 9.0f;
    else if (aspectIdx == 2) targetAspect = 21.0f / 9.0f;
    else if (aspectIdx == 3) targetAspect = 4.0f / 3.0f;
    else if (viewportW > 0) targetAspect = viewportW / viewportH;
}

} // namespace mobile
} // namespace godhand
