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

// Function: func_0038F120
// Address: 0x38f120 - 0x38f140
void func_0038F120_0x38f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F120_0x38f120");
#endif

    switch (ctx->pc) {
        case 0x38f130u: goto label_38f130;
        default: break;
    }

    ctx->pc = 0x38f120u;

    // 0x38f120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38f124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38f128: 0xc0e2c4e  jal         func_38B138
    ctx->pc = 0x38F128u;
    SET_GPR_U32(ctx, 31, 0x38F130u);
    ctx->pc = 0x38B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B138u, 0x38F128u, 0x38F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F130u;
label_38f130:
    // 0x38f130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f134: 0x3e00008  jr          $ra
    ctx->pc = 0x38F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F134u;
        // 0x38f138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F13Cu;
    // 0x38f13c: 0x0  nop
    ctx->pc = 0x38f13cu;
    // NOP
    ctx->pc = 0x38f140u;
}
