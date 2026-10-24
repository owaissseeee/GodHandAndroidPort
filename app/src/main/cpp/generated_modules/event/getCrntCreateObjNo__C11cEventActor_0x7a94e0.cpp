#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: getCrntCreateObjNo__C11cEventActor
// Address: 0x7a94e0 - 0x7a94e8
void getCrntCreateObjNo__C11cEventActor_0x7a94e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getCrntCreateObjNo__C11cEventActor_0x7a94e0");
#endif

    ctx->pc = 0x7a94e0u;

    // 0x7a94e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7A94E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A94E0u;
        // 0x7a94e4: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A94E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A94E8u;
}
} // namespace gh_event
