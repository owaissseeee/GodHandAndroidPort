#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <cstring>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"

#if defined(__aarch64__) || defined(_M_ARM64)
#include <arm_neon.h>
#endif

static inline uint8_t* ps2TryFastSpan(uint8_t* rdram, uint32_t addr, uint32_t len, uint32_t* outAvail = nullptr)
{
    uint8_t* const ptr = ps2TryResolveFastPtr(rdram, addr);
    if (__builtin_expect(ptr == nullptr, 0))
        return nullptr;

    if (__builtin_expect(ptr >= rdram && ptr < rdram + PS2_RAM_SIZE, 1))
    {
        const uint32_t avail = static_cast<uint32_t>((rdram + PS2_RAM_SIZE) - ptr);
        if (outAvail)
            *outAvail = avail;
        return (len <= avail) ? ptr : nullptr;
    }

    uint8_t* const sp = ps2GetScratchpadHostPtr();
    if (sp && ptr >= sp && ptr < sp + PS2_SCRATCHPAD_SIZE)
    {
        const uint32_t avail = static_cast<uint32_t>((sp + PS2_SCRATCHPAD_SIZE) - ptr);
        if (outAvail)
            *outAvail = avail;
        return (len <= avail) ? ptr : nullptr;
    }
    return nullptr;
}

static inline const char* ps2TryFastCStr(const uint8_t* rdram, uint32_t addr, uint32_t& outAvail)
{
    uint8_t* const p = ps2TryFastSpan(const_cast<uint8_t*>(rdram), addr, 1u, &outAvail);
    return reinterpret_cast<const char*>(p);
}

static inline void ps2FastReturn(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime, uint32_t retPc)
{
    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
#if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, retPc, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
#else
    (void)rdram;
    (void)runtime;
    (void)retPc;
#endif
}

#if defined(__aarch64__) || defined(_M_ARM64)
static inline float32x4_t ps2LoadVec4(const uint8_t* p)
{
    float32x4_t v;
    std::memcpy(&v, p, 16);
    return v;
}

static inline void ps2StoreVec4(uint8_t* p, float32x4_t v)
{
    std::memcpy(p, &v, 16);
}

static inline int32x4_t ps2LoadVec4I(const uint8_t* p)
{
    int32x4_t v;
    std::memcpy(&v, p, 16);
    return v;
}

static inline void ps2StoreVec4I(uint8_t* p, int32x4_t v)
{
    std::memcpy(p, &v, 16);
}

static inline float32x4_t ps2RotVecZ(float32x4_t v, float s, float c)
{
    const float x = vgetq_lane_f32(v, 0);
    const float y = vgetq_lane_f32(v, 1);
    float32x4_t out = v;
    out = vsetq_lane_f32(c * x - s * y, out, 0);
    out = vsetq_lane_f32(s * x + c * y, out, 1);
    return out;
}

static inline float32x4_t ps2RotVecX(float32x4_t v, float s, float c)
{
    const float y = vgetq_lane_f32(v, 1);
    const float z = vgetq_lane_f32(v, 2);
    float32x4_t out = v;
    out = vsetq_lane_f32(c * y - s * z, out, 1);
    out = vsetq_lane_f32(s * y + c * z, out, 2);
    return out;
}

static inline float32x4_t ps2RotVecY(float32x4_t v, float s, float c)
{
    const float x = vgetq_lane_f32(v, 0);
    const float z = vgetq_lane_f32(v, 2);
    float32x4_t out = v;
    out = vsetq_lane_f32(c * x + s * z, out, 0);
    out = vsetq_lane_f32(-s * x + c * z, out, 2);
    return out;
}
#endif
