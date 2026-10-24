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

// Function: func_0039AE78
// Address: 0x39ae78 - 0x39aea0
void func_0039AE78_0x39ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0039AE78_0x39ae78");
#endif

    switch (ctx->pc) {
        case 0x39ae8cu: goto label_39ae8c;
        default: break;
    }

    ctx->pc = 0x39ae78u;

    // 0x39ae78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ae7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ae80: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x39ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x39ae84: 0xc0eead4  jal         func_3BAB50
    ctx->pc = 0x39AE84u;
    SET_GPR_U32(ctx, 31, 0x39AE8Cu);
    ctx->pc = 0x39AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AE84u;
    // 0x39ae88: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BAB50u, 0x39AE84u, 0x39AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AE8Cu;
label_39ae8c:
    // 0x39ae8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ae8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ae90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ae94: 0x3e00008  jr          $ra
    ctx->pc = 0x39AE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AE94u;
        // 0x39ae98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AE9Cu;
    // 0x39ae9c: 0x0  nop
    ctx->pc = 0x39ae9cu;
    // NOP
    ctx->pc = 0x39aea0u;
}
