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

// Function: cObjSimple_SetBustFlag
// Address: 0x2b8500 - 0x2b8508
void cObjSimple_SetBustFlag_0x2b8500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjSimple_SetBustFlag_0x2b8500");
#endif

    ctx->pc = 0x2b8500u;

    // 0x2b8500: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8500u;
        // 0x2b8504: 0xa0852fa0  sb          $a1, 0x2FA0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12192), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8508u;
}
