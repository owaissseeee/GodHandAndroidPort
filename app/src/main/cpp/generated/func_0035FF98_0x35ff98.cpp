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

// Function: func_0035FF98
// Address: 0x35ff98 - 0x35ffb0
void func_0035FF98_0x35ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FF98_0x35ff98");
#endif

    ctx->pc = 0x35ff98u;

    // 0x35ff98: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x35ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x35ff9c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x35ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x35ffa0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x35ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x35ffa4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x35ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x35ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x35FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FFA8u;
        // 0x35ffac: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FFB0u;
}
