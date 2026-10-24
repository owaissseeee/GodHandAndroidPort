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
// Function: setActorInfo__11cEventActorP15cEventActorInfoi
// Address: 0x7a88e0 - 0x7a88f0
void setActorInfo__11cEventActorP15cEventActorInfoi_0x7a88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setActorInfo__11cEventActorP15cEventActorInfoi_0x7a88e0");
#endif

    ctx->pc = 0x7a88e0u;

    // 0x7a88e0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x7a88e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x7a88e4: 0x3e00008  jr          $ra
    ctx->pc = 0x7A88E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A88E4u;
        // 0x7a88e8: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A88E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A88ECu;
    // 0x7a88ec: 0x0  nop
    ctx->pc = 0x7a88ecu;
    // NOP
    ctx->pc = 0x7a88f0u;
}
} // namespace gh_event
