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

// Function: sceVu0FTOI4Vector
// Address: 0x30a570 - 0x30a5a0
void sceVu0FTOI4Vector_0x30a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0FTOI4Vector_0x30a570");
#endif

    ctx->pc = 0x30a570u;

    // 0x30a570: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a570u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a574: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    ctx->pc = 0x30a574u;
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
    ctx->pc = 0x30A584u;
    // 0x30a584: 0x0  nop
    ctx->pc = 0x30a584u;
    // NOP
    // 0x30a588: 0x0  nop
    ctx->pc = 0x30a588u;
    // NOP
    // 0x30a58c: 0x0  nop
    ctx->pc = 0x30a58cu;
    // NOP
    // 0x30a590: 0x0  nop
    ctx->pc = 0x30a590u;
    // NOP
    // 0x30a594: 0x0  nop
    ctx->pc = 0x30a594u;
    // NOP
    // 0x30a598: 0x0  nop
    ctx->pc = 0x30a598u;
    // NOP
    // 0x30a59c: 0x0  nop
    ctx->pc = 0x30a59cu;
    // NOP
    ctx->pc = 0x30a5a0u;
}
