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

// Function: ClearBytes2F4To2F7_283170
// Address: 0x283170 - 0x283188
void ClearBytes2F4To2F7_283170_0x283170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearBytes2F4To2F7_283170_0x283170");
#endif

    ctx->pc = 0x283170u;

    // 0x283170: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x283170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x283174: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x283174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x283178: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x283178u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x28317c: 0x3e00008  jr          $ra
    ctx->pc = 0x28317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28317Cu;
        // 0x283180: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283184u;
    // 0x283184: 0x0  nop
    ctx->pc = 0x283184u;
    // NOP
    ctx->pc = 0x283188u;
}
