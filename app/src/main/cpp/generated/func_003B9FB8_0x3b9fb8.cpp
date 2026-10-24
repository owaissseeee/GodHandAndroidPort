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

// Function: func_003B9FB8
// Address: 0x3b9fb8 - 0x3b9fd0
void func_003B9FB8_0x3b9fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003B9FB8_0x3b9fb8");
#endif

    ctx->pc = 0x3b9fb8u;

    // 0x3b9fb8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3b9fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3b9fbc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3b9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3b9fc0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3b9fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3b9fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9FC4u;
        // 0x3b9fc8: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9FCCu;
    // 0x3b9fcc: 0x0  nop
    ctx->pc = 0x3b9fccu;
    // NOP
    ctx->pc = 0x3b9fd0u;
}
