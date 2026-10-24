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

// Function: SetField_9E0_1AA500
// Address: 0x1aa500 - 0x1aa510
void SetField_9E0_1AA500_0x1aa500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_9E0_1AA500_0x1aa500");
#endif

    ctx->pc = 0x1aa500u;

    // 0x1aa500: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1aa500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1aa504: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA504u;
        // 0x1aa508: 0xac8209e0  sw          $v0, 0x9E0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA50Cu;
    // 0x1aa50c: 0x0  nop
    ctx->pc = 0x1aa50cu;
    // NOP
    ctx->pc = 0x1aa510u;
}
