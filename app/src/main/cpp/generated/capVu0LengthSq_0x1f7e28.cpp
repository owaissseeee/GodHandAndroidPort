#include <cstring>
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

// Function: capVu0LengthSq
// Address: 0x1f7e28 - 0x1f7e48
void capVu0LengthSq_0x1f7e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0LengthSq_0x1f7e28");
#endif

    ctx->pc = 0x1f7e28u;

#if defined(__aarch64__) || defined(_M_ARM64)
    const uint32_t a0 = GPR_U32(ctx, 4);
    float32x4_t vf4 = vld1q_f32(reinterpret_cast<const float*>(&ctx->vu0_vf[4]));
    (void)vf4;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(a0, 0)));
    const float* p = reinterpret_cast<const float*>(&ctx->vu0_vf[4]);
    const float res = (p[0] * p[0] + p[1] * p[1]) + p[2] * p[2];
    ctx->f[0] = res;
    uint32_t bits = 0;
    std::memcpy(&bits, &res, sizeof(bits));
    SET_GPR_S32(ctx, 2, static_cast<int32_t>(bits));

    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
    #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
    return;
    #else
    return;
    #endif
#else

    // 0x1f7e28: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f7e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7e2c: 0x4bc4212a  vmul.xyz    $vf4, $vf4, $vf4
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e30: 0x4b042101  vaddy.x     $vf4, $vf4, $vf4y
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e34: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7e38: 0x48222000  qmfc2.ni    $v0, $vf4
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7e3c: 0x44820000  mtc1        $v0, $f0
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7E48u;
#endif
}