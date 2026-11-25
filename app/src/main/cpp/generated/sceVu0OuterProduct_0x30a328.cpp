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

// Function: sceVu0OuterProduct
// Address: 0x30a328 - 0x30a348
void sceVu0OuterProduct_0x30a328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0OuterProduct_0x30a328");
#endif

    ctx->pc = 0x30a328u;

#if defined(__aarch64__) || defined(_M_ARM64)
    const uint32_t a0 = GPR_U32(ctx, 4);
    const uint32_t a1 = GPR_U32(ctx, 5);
    const uint32_t a2 = GPR_U32(ctx, 6);

    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(a1, 0)));
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(a2, 0)));

    float32x4_t vf4 = vld1q_f32(reinterpret_cast<const float*>(&ctx->vu0_vf[4]));
    float32x4_t vf5 = vld1q_f32(reinterpret_cast<const float*>(&ctx->vu0_vf[5]));

    float u0 = vgetq_lane_f32(vf4, 0);
    float u1 = vgetq_lane_f32(vf4, 1);
    float u2 = vgetq_lane_f32(vf4, 2);

    float v0 = vgetq_lane_f32(vf5, 0);
    float v1 = vgetq_lane_f32(vf5, 1);
    float v2 = vgetq_lane_f32(vf5, 2);

    float acc_arr[4] = {u1 * v2, u2 * v0, u0 * v1, 0.0f};
    vst1q_f32(reinterpret_cast<float*>(&ctx->vu0_acc), vld1q_f32(acc_arr));

    float c0 = acc_arr[0] - (v1 * u2);
    float c1 = acc_arr[1] - (v2 * u0);
    float c2 = acc_arr[2] - (v0 * u1);
    float vf6_arr[4] = {c0, c1, c2, 0.0f};

    float32x4_t vf6 = vld1q_f32(vf6_arr);
    vst1q_f32(reinterpret_cast<float*>(&ctx->vu0_vf[6]), vf6);

    WRITE128(ADD32(a0, 0), _mm_castps_si128(ctx->vu0_vf[6]));

    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
    #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
    return;
    #else
    ctx->pc = jumpTarget;
    return;
    #endif
#else
    // 0x30a328: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a32c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x30a32cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30a330: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30a334: 0x4bc429ae  vopmsub.xyz $vf6, $vf5, $vf4
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a338: 0x4a2631ac  vsub.w      $vf6, $vf6, $vf6
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a33c: 0xf8860000  sqc2        $vf6, 0x0($a0)
    ctx->pc = 0x30a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x30a340: 0x3e00008  jr          $ra
    ctx->pc = 0x30A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A348u;
#endif
}