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
// Function: __main
// Address: 0x7b29c0 - 0x7b29e0
void ps2___main_0x7b29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7b29c0");
#endif

    ctx->pc = 0x7b29c0u;

    // 0x7b29c0: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7b29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7b29c4: 0x8c625ad8  lw          $v0, 0x5AD8($v1)
    ctx->pc = 0x7b29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7B5AD8u));
    // 0x7b29c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7B29C8u;
    {
        const bool branch_taken_0x7b29c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B29C8u;
        // 0x7b29cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b29c8) {
            ctx->pc = 0x7B29D8u;
            goto label_7b29d8;
        }
    }
    ctx->pc = 0x7B29D0u;
    // 0x7b29d0: 0x81eca44  j           func_7B2910
    ctx->pc = 0x7B29D0u;
    ctx->pc = 0x7B29D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B29D0u;
    // 0x7b29d4: 0xac625ad8  sw          $v0, 0x5AD8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 23256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2910u, 0x7B29D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7B29D8u;
label_7b29d8:
    // 0x7b29d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B29D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B29E0u;
}
} // namespace gh_event
