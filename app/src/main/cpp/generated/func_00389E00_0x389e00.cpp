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

// Function: func_00389E00
// Address: 0x389e00 - 0x389e20
void func_00389E00_0x389e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00389E00_0x389e00");
#endif

    switch (ctx->pc) {
        case 0x389e10u: goto label_389e10;
        default: break;
    }

    ctx->pc = 0x389e00u;

    // 0x389e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389e08: 0xc0e1ede  jal         func_387B78
    ctx->pc = 0x389E08u;
    SET_GPR_U32(ctx, 31, 0x389E10u);
    ctx->pc = 0x387B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387B78u, 0x389E08u, 0x389E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E10u;
label_389e10:
    // 0x389e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389e14: 0x3e00008  jr          $ra
    ctx->pc = 0x389E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E14u;
        // 0x389e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389E1Cu;
    // 0x389e1c: 0x0  nop
    ctx->pc = 0x389e1cu;
    // NOP
    ctx->pc = 0x389e20u;
}
