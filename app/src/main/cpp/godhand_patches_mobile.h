#pragma once
#include <cstdint>

namespace godhand {
namespace mobile {

void applyPatches(uint8_t* rdram, int fpsIdx, int aspectIdx, float customScale);
void updateFrameTiming(uint8_t* rdram, int fpsIdx);
void updateProjectionMatrix(uint8_t* rdram, int aspectIdx, float viewportW, float viewportH);

} // namespace mobile
} // namespace godhand
