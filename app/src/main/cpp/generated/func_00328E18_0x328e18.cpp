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

// Function: func_00328E18
// Address: 0x328e18 - 0x328e38
void func_00328E18_0x328e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328E18_0x328e18");
#endif

    ctx->pc = 0x328e18u;

    // 0x328e18: 0x3e00008  jr          $ra
    ctx->pc = 0x328E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E18u;
        // 0x328e1c: 0xa0850044  sb          $a1, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328E20u;
    // 0x328e20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x328e24: 0x0  nop
    ctx->pc = 0x328e24u;
    // NOP
    // 0x328e28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328e2c: 0x0  nop
    ctx->pc = 0x328e2cu;
    // NOP
    // 0x328e30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x328e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x328e34: 0x0  nop
    ctx->pc = 0x328e34u;
    // NOP
    ctx->pc = 0x328e38u;
}
