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

// Function: MtxInitRotZ
// Address: 0x1479c8 - 0x147a08
void MtxInitRotZ_0x1479c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitRotZ_0x1479c8");
#endif

    switch (ctx->pc) {
        case 0x1479f8u: goto label_1479f8;
        default: break;
    }

    ctx->pc = 0x1479c8u;

    // 0x1479c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1479cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1479ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1479d0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1479d0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1479d4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1479d4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1479d8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1479d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1479dc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1479dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1479e0: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1479e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1479e4: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x1479e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1479e8: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x1479e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1479ec: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x1479ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1479f0: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x1479F0u;
    SET_GPR_U32(ctx, 31, 0x1479F8u);
    ctx->pc = 0x1479F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1479F0u;
    // 0x1479f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x1479F0u, 0x1479F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1479F8u;
label_1479f8:
    // 0x1479f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1479fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1479FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479FCu;
        // 0x147a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1479FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147A04u;
    // 0x147a04: 0x0  nop
    ctx->pc = 0x147a04u;
    // NOP
    ctx->pc = 0x147a08u;
}
