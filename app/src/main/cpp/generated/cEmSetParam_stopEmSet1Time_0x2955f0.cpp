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

// Function: cEmSetParam_stopEmSet1Time
// Address: 0x2955f0 - 0x295600
void cEmSetParam_stopEmSet1Time_0x2955f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_stopEmSet1Time_0x2955f0");
#endif

    ctx->pc = 0x2955f0u;

    // 0x2955f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2955f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2955f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2955F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2955F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2955F4u;
        // 0x2955f8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2955F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2955FCu;
    // 0x2955fc: 0x0  nop
    ctx->pc = 0x2955fcu;
    // NOP
    ctx->pc = 0x295600u;
}
