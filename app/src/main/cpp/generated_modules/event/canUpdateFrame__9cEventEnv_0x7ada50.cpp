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
// Function: canUpdateFrame__9cEventEnv
// Address: 0x7ada50 - 0x7ada60
void canUpdateFrame__9cEventEnv_0x7ada50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("canUpdateFrame__9cEventEnv_0x7ada50");
#endif

    ctx->pc = 0x7ada50u;

    // 0x7ada50: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x7ada50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x7ada54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ada54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ada58: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADA58u;
        // 0x7ada5c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADA60u;
}
} // namespace gh_event
