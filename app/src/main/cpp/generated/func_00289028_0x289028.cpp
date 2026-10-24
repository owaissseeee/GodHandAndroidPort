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

// Function: func_00289028
// Address: 0x289028 - 0x289038
void func_00289028_0x289028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00289028_0x289028");
#endif

    ctx->pc = 0x289028u;

    // 0x289028: 0x8c8215b0  lw          $v0, 0x15B0($a0)
    ctx->pc = 0x289028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5552)));
    // 0x28902c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x289030: 0x3e00008  jr          $ra
    ctx->pc = 0x289030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289030u;
        // 0x289034: 0xac8215b0  sw          $v0, 0x15B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289038u;
}
