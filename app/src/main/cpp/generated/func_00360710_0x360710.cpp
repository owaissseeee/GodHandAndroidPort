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

// Function: func_00360710
// Address: 0x360710 - 0x360720
void func_00360710_0x360710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360710_0x360710");
#endif

    ctx->pc = 0x360710u;

    // 0x360710: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x360710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x360714: 0x3e00008  jr          $ra
    ctx->pc = 0x360714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360714u;
        // 0x360718: 0xac44e804  sw          $a0, -0x17FC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961156), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36071Cu;
    // 0x36071c: 0x0  nop
    ctx->pc = 0x36071cu;
    // NOP
    ctx->pc = 0x360720u;
}
