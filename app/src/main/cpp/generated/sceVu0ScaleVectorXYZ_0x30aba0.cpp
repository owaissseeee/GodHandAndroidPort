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

// Function: sceVu0ScaleVectorXYZ
// Address: 0x30aba0 - 0x30abd8
void sceVu0ScaleVectorXYZ_0x30aba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0ScaleVectorXYZ_0x30aba0");
#endif

    ctx->pc = 0x30aba0u;

    // 0x30aba0: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30aba0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30aba4: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x30aba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30aba8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x30aba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30abac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x30abacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30abb0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x30abb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30abb4: 0x3e00008  jr          $ra
    ctx->pc = 0x30ABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ABB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ABBCu;
    // 0x30abbc: 0x0  nop
    ctx->pc = 0x30abbcu;
    // NOP
    // 0x30abc0: 0x0  nop
    ctx->pc = 0x30abc0u;
    // NOP
    // 0x30abc4: 0x0  nop
    ctx->pc = 0x30abc4u;
    // NOP
    // 0x30abc8: 0x0  nop
    ctx->pc = 0x30abc8u;
    // NOP
    // 0x30abcc: 0x0  nop
    ctx->pc = 0x30abccu;
    // NOP
    // 0x30abd0: 0x0  nop
    ctx->pc = 0x30abd0u;
    // NOP
    // 0x30abd4: 0x0  nop
    ctx->pc = 0x30abd4u;
    // NOP
    ctx->pc = 0x30abd8u;
}
