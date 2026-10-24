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

// Function: CustomIDWork
// Address: 0x2d5d60 - 0x2d5d80
void CustomIDWork_0x2d5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_0x2d5d60");
#endif

    ctx->pc = 0x2d5d60u;

    // 0x2d5d60: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d5d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d64: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d5d68: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2d5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2d5d6c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2d5d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2d5d70: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2d5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2d5d74: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2d5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2d5d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D78u;
        // 0x2d5d7c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5D80u;
}
