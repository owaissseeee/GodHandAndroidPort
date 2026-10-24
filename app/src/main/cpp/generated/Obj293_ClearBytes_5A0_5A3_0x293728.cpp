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

// Function: Obj293_ClearBytes_5A0_5A3
// Address: 0x293728 - 0x293738
void Obj293_ClearBytes_5A0_5A3_0x293728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj293_ClearBytes_5A0_5A3_0x293728");
#endif

    ctx->pc = 0x293728u;

    // 0x293728: 0xa08005a0  sb          $zero, 0x5A0($a0)
    ctx->pc = 0x293728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1440), (uint8_t)GPR_U32(ctx, 0));
    // 0x29372c: 0x3e00008  jr          $ra
    ctx->pc = 0x29372Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29372Cu;
        // 0x293730: 0xa08005a3  sb          $zero, 0x5A3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1443), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29372Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293734u;
    // 0x293734: 0x0  nop
    ctx->pc = 0x293734u;
    // NOP
    ctx->pc = 0x293738u;
}
