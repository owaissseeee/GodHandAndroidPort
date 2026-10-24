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

// Function: func_0035AA40
// Address: 0x35aa40 - 0x35aa50
void func_0035AA40_0x35aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035AA40_0x35aa40");
#endif

    ctx->pc = 0x35aa40u;

    // 0x35aa40: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x35aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x35aa44: 0x3e00008  jr          $ra
    ctx->pc = 0x35AA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA44u;
        // 0x35aa48: 0xac850144  sw          $a1, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AA4Cu;
    // 0x35aa4c: 0x0  nop
    ctx->pc = 0x35aa4cu;
    // NOP
    ctx->pc = 0x35aa50u;
}
