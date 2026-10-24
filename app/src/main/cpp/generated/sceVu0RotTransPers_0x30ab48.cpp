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

// Function: sceVu0RotTransPers
// Address: 0x30ab48 - 0x30aba0
void sceVu0RotTransPers_0x30ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotTransPers_0x30ab48");
#endif

    ctx->pc = 0x30ab48u;

    // 0x30ab48: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30ab48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30ab4c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x30ab4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30ab50: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x30ab50u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30ab54: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x30ab54u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x30ab58: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x30ab58u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30ab5c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x30ab5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30ab60: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x30ab60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30ab64: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x30ab64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30ab68: 0x4be83a4b  vmaddw.xyzw $vf9, $vf7, $vf8w
    ctx->pc = 0x30ab68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30ab6c: 0x4be903bc  vdiv        $Q, $vf0w, $vf9w
    ctx->pc = 0x30ab6cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2VuDivide(ctx->vu0_status, fs, ft); }
    // 0x30ab70: 0x4a0003bf  vwaitq
    ctx->pc = 0x30ab70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30ab74: 0x4bc04a5c  vmulq.xyz   $vf9, $vf9, $Q
    ctx->pc = 0x30ab74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30ab78: 0x4bea497d  vftoi4.xyzw $vf10, $vf9
    ctx->pc = 0x30ab78u;
    { const __m128 src = _mm_mul_ps(ctx->vu0_vf[9], _mm_set1_ps(16.0f)); const __m128i positiveOverflow = _mm_andnot_si128(_mm_srai_epi32(_mm_castps_si128(src), 31), _mm_castps_si128(_mm_cmpnlt_ps(src, _mm_set1_ps(2147483648.0f)))); const __m128 res = _mm_castsi128_ps(_mm_xor_si128(_mm_cvttps_epi32(src), positiveOverflow)); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30ab7c: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x30AB7Cu;
    {
        const bool branch_taken_0x30ab7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ab7c) {
            ctx->pc = 0x30AB88u;
            goto label_30ab88;
        }
    }
    ctx->pc = 0x30AB84u;
    // 0x30ab84: 0x4a6a497c  vftoi0.zw   $vf10, $vf9
    ctx->pc = 0x30ab84u;
    { const __m128 src = _mm_mul_ps(ctx->vu0_vf[9], _mm_set1_ps(1.0f)); const __m128i positiveOverflow = _mm_andnot_si128(_mm_srai_epi32(_mm_castps_si128(src), 31), _mm_castps_si128(_mm_cmpnlt_ps(src, _mm_set1_ps(2147483648.0f)))); const __m128 res = _mm_castsi128_ps(_mm_xor_si128(_mm_cvttps_epi32(src), positiveOverflow)); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, 0, 0))); }
label_30ab88:
    // 0x30ab88: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x30ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x30ab8c: 0x3e00008  jr          $ra
    ctx->pc = 0x30AB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AB94u;
    // 0x30ab94: 0x0  nop
    ctx->pc = 0x30ab94u;
    // NOP
    // 0x30ab98: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x30ab98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x30ab9c: 0x0  nop
    ctx->pc = 0x30ab9cu;
    // NOP
    ctx->pc = 0x30aba0u;
}
