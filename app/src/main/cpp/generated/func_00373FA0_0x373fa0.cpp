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

// Function: func_00373FA0
// Address: 0x373fa0 - 0x373fc8
void func_00373FA0_0x373fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373FA0_0x373fa0");
#endif

    switch (ctx->pc) {
        case 0x373fbcu: goto label_373fbc;
        default: break;
    }

    ctx->pc = 0x373fa0u;

    // 0x373fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373fa8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x373fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x373fac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373FACu;
    {
        const bool branch_taken_0x373fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x373FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FACu;
        // 0x373fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373fac) {
            ctx->pc = 0x373FC0u;
            goto label_373fc0;
        }
    }
    ctx->pc = 0x373FB4u;
    // 0x373fb4: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x373FB4u;
    SET_GPR_U32(ctx, 31, 0x373FBCu);
    ctx->pc = 0x373FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FB4u;
    // 0x373fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x373FB4u, 0x373FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FBCu;
label_373fbc:
    // 0x373fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_373fc0:
    // 0x373fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x373FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FC0u;
        // 0x373fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373FC8u;
}
