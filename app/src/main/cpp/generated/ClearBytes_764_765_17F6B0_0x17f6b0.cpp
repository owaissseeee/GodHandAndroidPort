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

// Function: ClearBytes_764_765_17F6B0
// Address: 0x17f6b0 - 0x17f6c0
void ClearBytes_764_765_17F6B0_0x17f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearBytes_764_765_17F6B0_0x17f6b0");
#endif

    ctx->pc = 0x17f6b0u;

    // 0x17f6b0: 0xa0800764  sb          $zero, 0x764($a0)
    ctx->pc = 0x17f6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1892), (uint8_t)GPR_U32(ctx, 0));
    // 0x17f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6B4u;
        // 0x17f6b8: 0xa0800765  sb          $zero, 0x765($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1893), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6BCu;
    // 0x17f6bc: 0x0  nop
    ctx->pc = 0x17f6bcu;
    // NOP
    ctx->pc = 0x17f6c0u;
}
