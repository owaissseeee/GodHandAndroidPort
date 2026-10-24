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

// Function: func_002AF6A8
// Address: 0x2af6a8 - 0x2af6b8
void func_002AF6A8_0x2af6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF6A8_0x2af6a8");
#endif

    ctx->pc = 0x2af6a8u;

    // 0x2af6a8: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x2af6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x2af6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6ACu;
        // 0x2af6b0: 0xac85004c  sw          $a1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6B4u;
    // 0x2af6b4: 0x0  nop
    ctx->pc = 0x2af6b4u;
    // NOP
    ctx->pc = 0x2af6b8u;
}
