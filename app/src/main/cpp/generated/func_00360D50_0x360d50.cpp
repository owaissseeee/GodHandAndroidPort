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

// Function: func_00360D50
// Address: 0x360d50 - 0x360d78
void func_00360D50_0x360d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360D50_0x360d50");
#endif

    switch (ctx->pc) {
        case 0x360d60u: goto label_360d60;
        default: break;
    }

    ctx->pc = 0x360d50u;

    // 0x360d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x360d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x360d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x360d58: 0xc0d8346  jal         func_360D18
    ctx->pc = 0x360D58u;
    SET_GPR_U32(ctx, 31, 0x360D60u);
    ctx->pc = 0x360D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D18u, 0x360D58u, 0x360D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D60u;
label_360d60:
    // 0x360d60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x360d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360d68: 0x3e00008  jr          $ra
    ctx->pc = 0x360D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360D68u;
        // 0x360d6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360D70u;
    // 0x360d70: 0x0  nop
    ctx->pc = 0x360d70u;
    // NOP
    // 0x360d74: 0x0  nop
    ctx->pc = 0x360d74u;
    // NOP
    ctx->pc = 0x360d78u;
}
