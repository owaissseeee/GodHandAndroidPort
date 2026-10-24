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

// Function: cOm53_setRiseWaitTime
// Address: 0x1a80f0 - 0x1a80f8
void cOm53_setRiseWaitTime_0x1a80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOm53_setRiseWaitTime_0x1a80f0");
#endif

    ctx->pc = 0x1a80f0u;

    // 0x1a80f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A80F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A80F0u;
        // 0x1a80f4: 0xac850628  sw          $a1, 0x628($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A80F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A80F8u;
}
