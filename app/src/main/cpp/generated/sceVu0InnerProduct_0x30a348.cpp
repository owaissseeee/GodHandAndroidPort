#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
#include <arm_neon.h>
#endif

// Function: sceVu0InnerProduct
// Address: 0x30a348 - 0x30a370
void sceVu0InnerProduct_0x30a348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0InnerProduct_0x30a348");
#endif

    ctx->pc = 0x30a348u;

#if defined(__aarch64__) || defined(_M_ARM64)
    const uint32_t a0 = GPR_U32(ctx, 4);
    const uint32_t a1 = GPR_U32(ctx, 5);

    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(a0, 0)));
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(a1, 0)));

    float32x4_t vf4 = vld1q_f32(reinterpret_cast<const float*>(&ctx->vu0_vf[4]));
    float32x4_t vf5 = vld1q_f32(reinterpret_cast<const float*>(&ctx->vu0_vf[5]));

    float32x4_t prod = vmulq_f32(vf4, vf5);
    float p0 = vgetq_lane_f32(prod, 0);
    float p1 = vgetq_lane_f32(prod, 1);
    float p2 = vgetq_lane_f32(prod, 2);
    float dot = (p0 + p1) + p2;

    float vf5_out[4] = {dot, p1, p2, vgetq_lane_f32(vf5, 3)};
    float32x4_t res = vld1q_f32(vf5_out);
    vst1q_f32(reinterpret_cast<float*>(&ctx->vu0_vf[5]), res);

    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    uint32_t dotBits;
    std::memcpy(&dotBits, &dot, sizeof(dotBits));
    std::memcpy(&ctx->f[0], &dotBits, sizeof(dotBits));

    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
    #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
    return;
    #else
    ctx->pc = jumpTarget;
    return;
    #endif
#else
    // 0x30a348: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x30a348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a34c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x30a34cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a350: 0x4bc5216a  vmul.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x30a350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a354: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x30a354u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a358: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x30a358u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a35c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x30a35cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30a360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a364: 0x3e00008  jr          $ra
    ctx->pc = 0x30A364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A36Cu;
    // 0x30a36c: 0x0  nop
    ctx->pc = 0x30a36cu;
    // NOP
    ctx->pc = 0x30a370u;
#endif
}
