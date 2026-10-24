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

// Function: func_00133948
// Address: 0x133948 - 0x133968
void func_00133948_0x133948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133948_0x133948");
#endif

    ctx->pc = 0x133948u;

    // 0x133948: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x133948u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13394c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x13394cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133950: 0x4be521af  vmini.xyzw  $vf6, $vf4, $vf5
    ctx->pc = 0x133950u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x133954: 0x4be521eb  vmax.xyzw   $vf7, $vf4, $vf5
    ctx->pc = 0x133954u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x133958: 0xf8a60000  sqc2        $vf6, 0x0($a1)
    ctx->pc = 0x133958u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13395c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x13395cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x133960: 0x3e00008  jr          $ra
    ctx->pc = 0x133960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133968u;
}
