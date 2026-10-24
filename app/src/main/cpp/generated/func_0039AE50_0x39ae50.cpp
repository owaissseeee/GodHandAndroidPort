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

// Function: func_0039AE50
// Address: 0x39ae50 - 0x39ae78
void func_0039AE50_0x39ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039AE50_0x39ae50");
#endif

    switch (ctx->pc) {
        case 0x39ae64u: goto label_39ae64;
        default: break;
    }

    ctx->pc = 0x39ae50u;

    // 0x39ae50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ae54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ae58: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x39ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39ae5c: 0xc0eea9a  jal         func_3BAA68
    ctx->pc = 0x39AE5Cu;
    SET_GPR_U32(ctx, 31, 0x39AE64u);
    ctx->pc = 0x39AE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE5Cu;
    // 0x39ae60: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAA68u, 0x39AE5Cu, 0x39AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE64u;
label_39ae64:
    // 0x39ae64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ae64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ae68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ae6c: 0x3e00008  jr          $ra
    ctx->pc = 0x39AE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE6Cu;
        // 0x39ae70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AE74u;
    // 0x39ae74: 0x0  nop
    ctx->pc = 0x39ae74u;
    // NOP
    ctx->pc = 0x39ae78u;
}
