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

// Function: func_0036D7E0
// Address: 0x36d7e0 - 0x36d7f8
void func_0036D7E0_0x36d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036D7E0_0x36d7e0");
#endif

    ctx->pc = 0x36d7e0u;

    // 0x36d7e0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x36d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x36d7e4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36d7e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36d7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36d7ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x36d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x36d7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36D7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D7F0u;
        // 0x36d7f4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D7F8u;
}
