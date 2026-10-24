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

// Function: func_002FEBE0
// Address: 0x2febe0 - 0x2febe8
void func_002FEBE0_0x2febe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FEBE0_0x2febe0");
#endif

    ctx->pc = 0x2febe0u;

    // 0x2febe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBE0u;
        // 0x2febe4: 0xa085024c  sb          $a1, 0x24C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEBE8u;
}
