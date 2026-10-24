#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: GetInfoDataAddr__6cMcSysi
// Address: 0x7c8f48 - 0x7c8f58
void GetInfoDataAddr__6cMcSysi_0x7c8f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoDataAddr__6cMcSysi_0x7c8f48");
#endif

    ctx->pc = 0x7c8f48u;

    // 0x7c8f48: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x7c8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x7c8f4c: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x7c8f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x7c8f50: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8F50u;
        // 0x7c8f54: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8F58u;
}
} // namespace gh_mcport
