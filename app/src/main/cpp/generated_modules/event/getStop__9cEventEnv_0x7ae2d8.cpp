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
// Function: getStop__9cEventEnv
// Address: 0x7ae2d8 - 0x7ae2e8
void getStop__9cEventEnv_0x7ae2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getStop__9cEventEnv_0x7ae2d8");
#endif

    ctx->pc = 0x7ae2d8u;

    // 0x7ae2d8: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x7ae2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x7ae2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE2DCu;
        // 0x7ae2e0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE2E4u;
    // 0x7ae2e4: 0x0  nop
    ctx->pc = 0x7ae2e4u;
    // NOP
    ctx->pc = 0x7ae2e8u;
}
} // namespace gh_event
