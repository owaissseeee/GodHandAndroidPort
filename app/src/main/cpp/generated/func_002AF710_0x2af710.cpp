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

// Function: func_002AF710
// Address: 0x2af710 - 0x2af720
void func_002AF710_0x2af710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF710_0x2af710");
#endif

    ctx->pc = 0x2af710u;

    // 0x2af710: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2af710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
    // 0x2af714: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF714u;
        // 0x2af718: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF71Cu;
    // 0x2af71c: 0x0  nop
    ctx->pc = 0x2af71cu;
    // NOP
    ctx->pc = 0x2af720u;
}
