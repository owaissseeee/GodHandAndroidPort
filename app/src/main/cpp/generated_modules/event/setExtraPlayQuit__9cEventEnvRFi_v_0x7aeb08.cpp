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
// Function: setExtraPlayQuit__9cEventEnvRFi_v
// Address: 0x7aeb08 - 0x7aeb10
void setExtraPlayQuit__9cEventEnvRFi_v_0x7aeb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setExtraPlayQuit__9cEventEnvRFi_v_0x7aeb08");
#endif

    ctx->pc = 0x7aeb08u;

    // 0x7aeb08: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEB08u;
        // 0x7aeb0c: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEB10u;
}
} // namespace gh_event
