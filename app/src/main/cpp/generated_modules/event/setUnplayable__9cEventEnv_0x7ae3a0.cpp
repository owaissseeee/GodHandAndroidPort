#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setUnplayable__9cEventEnv
// Address: 0x7ae3a0 - 0x7ae3f8
void setUnplayable__9cEventEnv_0x7ae3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setUnplayable__9cEventEnv_0x7ae3a0");
#endif

    switch (ctx->pc) {
        case 0x7ae3b4u: goto label_7ae3b4;
        case 0x7ae3d8u: goto label_7ae3d8;
        default: break;
    }

    ctx->pc = 0x7ae3a0u;

    // 0x7ae3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ae3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ae3a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ae3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ae3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae3ac: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE3ACu;
    SET_GPR_U32(ctx, 31, 0x7AE3B4u);
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE3ACu, 0x7AE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE3B4u;
label_7ae3b4:
    // 0x7ae3b4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7AE3B4u;
    {
        const bool branch_taken_0x7ae3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE3B4u;
        // 0x7ae3b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae3b4) {
            ctx->pc = 0x7AE3ECu;
            goto label_7ae3ec;
        }
    }
    ctx->pc = 0x7AE3BCu;
    // 0x7ae3bc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x7ae3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x7ae3c0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7ae3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7ae3c4: 0x8c627a84  lw          $v0, 0x7A84($v1)
    ctx->pc = 0x7ae3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x7ae3c8: 0x24707a84  addiu       $s0, $v1, 0x7A84
    ctx->pc = 0x7ae3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
    // 0x7ae3cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7ae3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7ae3d0: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x7AE3D0u;
    SET_GPR_U32(ctx, 31, 0x7AE3D8u);
    ctx->pc = 0x7AE3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE3D0u;
    // 0x7ae3d4: 0xac627a84  sw          $v0, 0x7A84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31364), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x7AE3D0u, 0x7AE3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE3D8u;
label_7ae3d8:
    // 0x7ae3d8: 0x8e02fff4  lw          $v0, -0xC($s0)
    ctx->pc = 0x7ae3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967284)));
    // 0x7ae3dc: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x7ae3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x7ae3e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae3e4: 0xae02fff4  sw          $v0, -0xC($s0)
    ctx->pc = 0x7ae3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967284), GPR_U32(ctx, 2));
    // 0x7ae3e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ae3e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7ae3ec:
    // 0x7ae3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ae3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE3F0u;
        // 0x7ae3f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE3F8u;
}
} // namespace gh_event
