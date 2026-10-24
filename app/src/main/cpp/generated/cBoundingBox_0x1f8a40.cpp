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

// Function: cBoundingBox
// Address: 0x1f8a40 - 0x1f8a60
void cBoundingBox_0x1f8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBoundingBox_0x1f8a40");
#endif

    ctx->pc = 0x1f8a40u;

    // 0x1f8a40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f8a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a44: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f8a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f8a48: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f8a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f8a4c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1f8a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1f8a50: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1f8a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1f8a54: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1f8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1f8a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A58u;
        // 0x1f8a5c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A60u;
}
