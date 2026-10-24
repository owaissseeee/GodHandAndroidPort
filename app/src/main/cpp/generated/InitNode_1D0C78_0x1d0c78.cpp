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

// Function: InitNode_1D0C78
// Address: 0x1d0c78 - 0x1d0c98
void InitNode_1D0C78_0x1d0c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitNode_1D0C78_0x1d0c78");
#endif

    ctx->pc = 0x1d0c78u;

    // 0x1d0c78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0c7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d0c80: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1d0c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C84u;
        // 0x1d0c88: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C8Cu;
    // 0x1d0c8c: 0x0  nop
    ctx->pc = 0x1d0c8cu;
    // NOP
    // 0x1d0c90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d0c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d0c94: 0x0  nop
    ctx->pc = 0x1d0c94u;
    // NOP
    ctx->pc = 0x1d0c98u;
}
