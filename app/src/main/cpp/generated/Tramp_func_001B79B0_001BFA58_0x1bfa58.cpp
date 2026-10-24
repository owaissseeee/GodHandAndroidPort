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

// Function: Tramp_func_001B79B0_001BFA58
// Address: 0x1bfa58 - 0x1bfa78
void Tramp_func_001B79B0_001BFA58_0x1bfa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tramp_func_001B79B0_001BFA58_0x1bfa58");
#endif

    switch (ctx->pc) {
        case 0x1bfa68u: goto label_1bfa68;
        default: break;
    }

    ctx->pc = 0x1bfa58u;

    // 0x1bfa58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfa5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfa60: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x1BFA60u;
    SET_GPR_U32(ctx, 31, 0x1BFA68u);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x1BFA60u, 0x1BFA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA68u;
label_1bfa68:
    // 0x1bfa68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA6Cu;
        // 0x1bfa70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFA74u;
    // 0x1bfa74: 0x0  nop
    ctx->pc = 0x1bfa74u;
    // NOP
    ctx->pc = 0x1bfa78u;
}
