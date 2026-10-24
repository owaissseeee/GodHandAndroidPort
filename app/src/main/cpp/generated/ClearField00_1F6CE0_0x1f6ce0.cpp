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

// Function: ClearField00_1F6CE0
// Address: 0x1f6ce0 - 0x1f6cf8
void ClearField00_1F6CE0_0x1f6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearField00_1F6CE0_0x1f6ce0");
#endif

    ctx->pc = 0x1f6ce0u;

    // 0x1f6ce0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f6ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CE4u;
        // 0x1f6ce8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6CECu;
    // 0x1f6cec: 0x0  nop
    ctx->pc = 0x1f6cecu;
    // NOP
    // 0x1f6cf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f6cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f6cf4: 0x0  nop
    ctx->pc = 0x1f6cf4u;
    // NOP
    ctx->pc = 0x1f6cf8u;
}
