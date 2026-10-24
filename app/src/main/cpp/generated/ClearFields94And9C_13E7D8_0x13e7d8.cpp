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

// Function: ClearFields94And9C_13E7D8
// Address: 0x13e7d8 - 0x13e7e8
void ClearFields94And9C_13E7D8_0x13e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearFields94And9C_13E7D8_0x13e7d8");
#endif

    ctx->pc = 0x13e7d8u;

    // 0x13e7d8: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x13e7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x13e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E7DCu;
        // 0x13e7e0: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E7E4u;
    // 0x13e7e4: 0x0  nop
    ctx->pc = 0x13e7e4u;
    // NOP
    ctx->pc = 0x13e7e8u;
}
