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

// Function: Adjust_theta_vec
// Address: 0x1f7da0 - 0x1f7df8
void Adjust_theta_vec_0x1f7da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Adjust_theta_vec_0x1f7da0");
#endif

    ctx->pc = 0x1f7da0u;

    // 0x1f7da0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f7da0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7da4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x1f7da8: 0x2529f110  addiu       $t1, $t1, -0xEF0
    ctx->pc = 0x1f7da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963472));
    // 0x1f7dac: 0xd9260000  lqc2        $vf6, 0x0($t1)
    ctx->pc = 0x1f7dacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x3BF110u));
    // 0x1f7db0: 0x792d0010  lq          $t5, 0x10($t1)
    ctx->pc = 0x1f7db0u;
    SET_GPR_VEC(ctx, 13, FAST_READ128(0x3BF120u));
    // 0x1f7db4: 0x4bc621d8  vmulx.xyz   $vf7, $vf4, $vf6x
    ctx->pc = 0x1f7db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7db8: 0x48282000  qmfc2.ni    $t0, $vf4
    ctx->pc = 0x1f7db8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7dbc: 0x792a0020  lq          $t2, 0x20($t1)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1f7dc0: 0x71004088  pcgtw       $t0, $t0, $zero
    ctx->pc = 0x1f7dc0u;
    SET_GPR_VEC(ctx, 8, PS2_PCGTW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1f7dc4: 0x4bc7397c  vftoi0.xyz  $vf7, $vf7
    ctx->pc = 0x1f7dc4u;
    { const __m128 src = _mm_mul_ps(ctx->vu0_vf[7], _mm_set1_ps(1.0f)); const __m128i positiveOverflow = _mm_andnot_si128(_mm_srai_epi32(_mm_castps_si128(src), 31), _mm_castps_si128(_mm_cmpnlt_ps(src, _mm_set1_ps(2147483648.0f)))); const __m128 res = _mm_castsi128_ps(_mm_xor_si128(_mm_cvttps_epi32(src), positiveOverflow)); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1f7dc8: 0x71a84489  pand        $t0, $t5, $t0
    ctx->pc = 0x1f7dc8u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 8)));
    // 0x1f7dcc: 0x482b3800  qmfc2.ni    $t3, $vf7
    ctx->pc = 0x1f7dccu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1f7dd0: 0x71685808  paddw       $t3, $t3, $t0
    ctx->pc = 0x1f7dd0u;
    SET_GPR_VEC(ctx, 11, PS2_PADDW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 8)));
    // 0x1f7dd4: 0x716a5c89  pand        $t3, $t3, $t2
    ctx->pc = 0x1f7dd4u;
    SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1f7dd8: 0x48ab3800  qmtc2.ni    $t3, $vf7
    ctx->pc = 0x1f7dd8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x1f7ddc: 0x4bc7393c  vitof0.xyz  $vf7, $vf7
    ctx->pc = 0x1f7ddcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[7]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7de0: 0x4bc639d9  vmuly.xyz   $vf7, $vf7, $vf6y
    ctx->pc = 0x1f7de0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7de4: 0x4bc7212c  vsub.xyz    $vf4, $vf4, $vf7
    ctx->pc = 0x1f7de4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7de8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7dec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7DF4u;
    // 0x1f7df4: 0x0  nop
    ctx->pc = 0x1f7df4u;
    // NOP
    ctx->pc = 0x1f7df8u;
}
