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

// Function: ClearWordPair_201AD0
// Address: 0x201ad0 - 0x201ae0
void ClearWordPair_201AD0_0x201ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearWordPair_201AD0_0x201ad0");
#endif

    ctx->pc = 0x201ad0u;

    // 0x201ad0: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x201ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x201ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x201AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AD4u;
        // 0x201ad8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201ADCu;
    // 0x201adc: 0x0  nop
    ctx->pc = 0x201adcu;
    // NOP
    ctx->pc = 0x201ae0u;
}
