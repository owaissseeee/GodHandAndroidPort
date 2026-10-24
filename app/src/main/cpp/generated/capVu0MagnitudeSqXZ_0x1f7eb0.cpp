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

// Function: capVu0MagnitudeSqXZ
// Address: 0x1f7eb0 - 0x1f7ed8
void capVu0MagnitudeSqXZ_0x1f7eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0MagnitudeSqXZ_0x1f7eb0");
#endif

    ctx->pc = 0x1f7eb0u;

    // 0x1f7eb0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f7eb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7eb4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1f7eb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f7eb8: 0x4b45212c  vsub.xz     $vf4, $vf4, $vf5
    ctx->pc = 0x1f7eb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7ebc: 0x4b44212a  vmul.xz     $vf4, $vf4, $vf4
    ctx->pc = 0x1f7ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7ec0: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z
    ctx->pc = 0x1f7ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7ec4: 0x48222000  qmfc2.ni    $v0, $vf4
    ctx->pc = 0x1f7ec4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7ED4u;
    // 0x1f7ed4: 0x0  nop
    ctx->pc = 0x1f7ed4u;
    // NOP
    ctx->pc = 0x1f7ed8u;
}
