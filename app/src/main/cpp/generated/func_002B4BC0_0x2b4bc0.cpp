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

// Function: func_002B4BC0
// Address: 0x2b4bc0 - 0x2b4be8
void func_002B4BC0_0x2b4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4BC0_0x2b4bc0");
#endif

    switch (ctx->pc) {
        case 0x2b4bdcu: goto label_2b4bdc;
        default: break;
    }

    ctx->pc = 0x2b4bc0u;

    // 0x2b4bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4bc8: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2b4bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b4bcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4BCCu;
    {
        const bool branch_taken_0x2b4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BCCu;
        // 0x2b4bd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4bcc) {
            ctx->pc = 0x2B4BE0u;
            goto label_2b4be0;
        }
    }
    ctx->pc = 0x2B4BD4u;
    // 0x2b4bd4: 0xc0d19aa  jal         func_3466A8
    ctx->pc = 0x2B4BD4u;
    SET_GPR_U32(ctx, 31, 0x2B4BDCu);
    ctx->pc = 0x3466A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466A8u, 0x2B4BD4u, 0x2B4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BDCu;
label_2b4bdc:
    // 0x2b4bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4be0:
    // 0x2b4be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4BE0u;
        // 0x2b4be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BE8u;
}
