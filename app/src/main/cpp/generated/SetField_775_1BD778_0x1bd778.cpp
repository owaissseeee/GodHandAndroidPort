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

// Function: SetField_775_1BD778
// Address: 0x1bd778 - 0x1bd780
void SetField_775_1BD778_0x1bd778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField_775_1BD778_0x1bd778");
#endif

    ctx->pc = 0x1bd778u;

    // 0x1bd778: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD778u;
        // 0x1bd77c: 0xa0800775  sb          $zero, 0x775($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1909), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD780u;
}
