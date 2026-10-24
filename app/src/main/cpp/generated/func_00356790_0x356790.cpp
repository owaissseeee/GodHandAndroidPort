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

// Function: func_00356790
// Address: 0x356790 - 0x3567b8
void func_00356790_0x356790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356790_0x356790");
#endif

    switch (ctx->pc) {
        case 0x3567a4u: goto label_3567a4;
        default: break;
    }

    ctx->pc = 0x356790u;

    // 0x356790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356798: 0x8cc41fc0  lw          $a0, 0x1FC0($a2)
    ctx->pc = 0x356798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x35679c: 0xc0d57a2  jal         func_355E88
    ctx->pc = 0x35679Cu;
    SET_GPR_U32(ctx, 31, 0x3567A4u);
    ctx->pc = 0x3567A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35679Cu;
    // 0x3567a0: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355E88u, 0x35679Cu, 0x3567A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567A4u;
label_3567a4:
    // 0x3567a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3567a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3567a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3567a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3567ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3567ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3567B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567ACu;
        // 0x3567b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3567ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3567B4u;
    // 0x3567b4: 0x0  nop
    ctx->pc = 0x3567b4u;
    // NOP
    ctx->pc = 0x3567b8u;
}
