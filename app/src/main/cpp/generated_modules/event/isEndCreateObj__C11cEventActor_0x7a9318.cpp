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
// Function: isEndCreateObj__C11cEventActor
// Address: 0x7a9318 - 0x7a9328
void isEndCreateObj__C11cEventActor_0x7a9318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isEndCreateObj__C11cEventActor_0x7a9318");
#endif

    ctx->pc = 0x7a9318u;

    // 0x7a9318: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x7a9318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a931c: 0x3e00008  jr          $ra
    ctx->pc = 0x7A931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A931Cu;
        // 0x7a9320: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A9324u;
    // 0x7a9324: 0x0  nop
    ctx->pc = 0x7a9324u;
    // NOP
    ctx->pc = 0x7a9328u;
}
} // namespace gh_event
