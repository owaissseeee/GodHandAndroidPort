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

// Function: func_003567B8
// Address: 0x3567b8 - 0x3567e0
void func_003567B8_0x3567b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003567B8_0x3567b8");
#endif

    switch (ctx->pc) {
        case 0x3567ccu: goto label_3567cc;
        default: break;
    }

    ctx->pc = 0x3567b8u;

    // 0x3567b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3567b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3567bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3567bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3567c0: 0x8cc41fc0  lw          $a0, 0x1FC0($a2)
    ctx->pc = 0x3567c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8128)));
    // 0x3567c4: 0xc0d57e2  jal         func_355F88
    ctx->pc = 0x3567C4u;
    SET_GPR_U32(ctx, 31, 0x3567CCu);
    ctx->pc = 0x3567C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3567C4u;
    // 0x3567c8: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355F88u, 0x3567C4u, 0x3567CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567CCu;
label_3567cc:
    // 0x3567cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3567ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3567d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3567d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3567d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3567D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3567D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567D4u;
        // 0x3567d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3567D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3567DCu;
    // 0x3567dc: 0x0  nop
    ctx->pc = 0x3567dcu;
    // NOP
    ctx->pc = 0x3567e0u;
}
