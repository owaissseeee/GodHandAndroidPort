#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "sdk_arm64_fast.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceVu0FTOI4Vector
// Address: 0x30a570 - 0x30a5a0
void sceVu0FTOI4Vector_0x30a570(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0FTOI4Vector_0x30a570");
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    {
        uint8_t* const d = ps2TryFastSpan(rdram, GPR_U32(ctx, 4) & ~0xFu, 16u);
        const uint8_t* const s = ps2TryFastSpan(rdram, GPR_U32(ctx, 5) & ~0xFu, 16u);
        if (__builtin_expect(d != nullptr && s != nullptr, 1)) {
            ps2StoreVec4I(d, vcvtq_s32_f32(vmulq_n_f32(ps2LoadVec4(s), 16.0f)));
            ps2FastReturn(rdram, ctx, runtime, 0x30A57Cu);
            return;
        }
    }
#endif


    // 0x30a570: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a570u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a574: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    { const __m128 src = _mm_mul_ps(ctx->vu0_vf[4], _mm_set1_ps(16.0f)); const __m128i positiveOverflow = _mm_andnot_si128(_mm_srai_epi32(_mm_castps_si128(src), 31), _mm_castps_si128(_mm_cmpnlt_ps(src, _mm_set1_ps(2147483648.0f)))); const __m128 res = _mm_castsi128_ps(_mm_xor_si128(_mm_cvttps_epi32(src), positiveOverflow)); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a578: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x30a578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a57c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x30a584: 0x0  nop
    // NOP
    // 0x30a588: 0x0  nop
    // NOP
    // 0x30a58c: 0x0  nop
    // NOP
    // 0x30a590: 0x0  nop
    // NOP
    // 0x30a594: 0x0  nop
    // NOP
    // 0x30a598: 0x0  nop
    // NOP
    // 0x30a59c: 0x0  nop
    // NOP
    ctx->pc = 0x30a5a0u;
}