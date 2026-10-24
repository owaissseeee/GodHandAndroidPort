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

// Function: PathFinding
// Address: 0x31be58 - 0x31be78
void PathFinding_0x31be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PathFinding_0x31be58");
#endif

    ctx->pc = 0x31be58u;

    // 0x31be58: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31be58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31be5c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x31be5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31be60: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31be60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31be64: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BE64u;
        // 0x31be68: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BE6Cu;
    // 0x31be6c: 0x0  nop
    ctx->pc = 0x31be6cu;
    // NOP
    // 0x31be70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31be74: 0x0  nop
    ctx->pc = 0x31be74u;
    // NOP
    ctx->pc = 0x31be78u;
}
