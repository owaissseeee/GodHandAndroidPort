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

// Function: MtxInitRotY
// Address: 0x147988 - 0x1479c8
void MtxInitRotY_0x147988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitRotY_0x147988");
#endif

    switch (ctx->pc) {
        case 0x1479b8u: goto label_1479b8;
        default: break;
    }

    ctx->pc = 0x147988u;

    // 0x147988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14798c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147990: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x147990u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x147994: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x147994u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x147998: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x147998u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14799c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x14799cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1479a0: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1479a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1479a4: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x1479a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1479a8: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x1479a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1479ac: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1479acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1479b0: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x1479B0u;
    SET_GPR_U32(ctx, 31, 0x1479B8u);
    ctx->pc = 0x1479B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1479B0u;
    // 0x1479b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x1479B0u, 0x1479B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479B8u;
label_1479b8:
    // 0x1479b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1479b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1479bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1479BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1479C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479BCu;
        // 0x1479c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1479C4u;
    // 0x1479c4: 0x0  nop
    ctx->pc = 0x1479c4u;
    // NOP
    ctx->pc = 0x1479c8u;
}
