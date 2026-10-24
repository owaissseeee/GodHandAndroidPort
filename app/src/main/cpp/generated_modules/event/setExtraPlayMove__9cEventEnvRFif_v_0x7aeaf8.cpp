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
// Function: setExtraPlayMove__9cEventEnvRFif_v
// Address: 0x7aeaf8 - 0x7aeb00
void setExtraPlayMove__9cEventEnvRFif_v_0x7aeaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setExtraPlayMove__9cEventEnvRFif_v_0x7aeaf8");
#endif

    ctx->pc = 0x7aeaf8u;

    // 0x7aeaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEAF8u;
        // 0x7aeafc: 0xac850030  sw          $a1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEB00u;
}
} // namespace gh_event
