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
// Function: __rtti_user
// Address: 0x7c9850 - 0x7c9870
void ps2___rtti_user_0x7c9850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rtti_user_0x7c9850");
#endif

    ctx->pc = 0x7c9850u;

    // 0x7c9850: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C9850u;
    {
        const bool branch_taken_0x7c9850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C9850u;
        // 0x7c9854: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c9850) {
            ctx->pc = 0x7C9864u;
            goto label_7c9864;
        }
    }
    ctx->pc = 0x7C9858u;
    // 0x7c9858: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x7c9858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x7c985c: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x7c985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x7c9860: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c9860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7c9864:
    // 0x7c9864: 0x3e00008  jr          $ra
    ctx->pc = 0x7C9864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C9864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C986Cu;
    // 0x7c986c: 0x0  nop
    ctx->pc = 0x7c986cu;
    // NOP
    ctx->pc = 0x7c9870u;
}
} // namespace gh_mcport
