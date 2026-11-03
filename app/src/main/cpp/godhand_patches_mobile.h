#pragma once
#include <cstdint>

namespace godhand {
namespace mobile {

void applyPatches(uint8_t* rdram, int fpsIdx, int aspectIdx, float customScale);
void updateFrameTiming(uint8_t* rdram, int fpsIdx);
void updateProjectionMatrix(uint8_t* rdram, int aspectIdx, float viewportW, float viewportH);
void applyWidescreenPatch(uint8_t* rdram, int aspectIdx);

void setFpsMode(int fpsIdx);
int getFpsMode();
void setAspectMode(int aspectIdx);
int getAspectMode();
void setScreenDimensions(uint32_t width, uint32_t height);
void getScreenDimensions(uint32_t* width, uint32_t* height);

} // namespace mobile
} // namespace godhand
