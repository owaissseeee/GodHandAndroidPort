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

// Function: cOm4f_setLock
// Address: 0x1a4f28 - 0x1a4f30
void cOm4f_setLock_0x1a4f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm4f_setLock_0x1a4f28");
#endif

    ctx->pc = 0x1a4f28u;

    // 0x1a4f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F28u;
        // 0x1a4f2c: 0xa0850762  sb          $a1, 0x762($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1890), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4F30u;
}
