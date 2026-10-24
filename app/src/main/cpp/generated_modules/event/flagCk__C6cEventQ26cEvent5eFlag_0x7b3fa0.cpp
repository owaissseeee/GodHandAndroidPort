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
// Function: flagCk__C6cEventQ26cEvent5eFlag
// Address: 0x7b3fa0 - 0x7b3fb0
void flagCk__C6cEventQ26cEvent5eFlag_0x7b3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("flagCk__C6cEventQ26cEvent5eFlag_0x7b3fa0");
#endif

    ctx->pc = 0x7b3fa0u;

    // 0x7b3fa0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7b3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7b3fa4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x7b3fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x7b3fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3FA8u;
        // 0x7b3fac: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3FB0u;
}
} // namespace gh_event
