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

// Function: cNowLoading_exitTask
// Address: 0x2b65f0 - 0x2b6600
void cNowLoading_exitTask_0x2b65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNowLoading_exitTask_0x2b65f0");
#endif

    ctx->pc = 0x2b65f0u;

    // 0x2b65f0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2b65f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2b65f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b65f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65F8u;
        // 0x2b65fc: 0xa0622555  sb          $v0, 0x2555($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9557), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6600u;
}
