#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: __main
// Address: 0x79ca20 - 0x79ca40
void ps2___main_0x79ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79ca20");
#endif

    ctx->pc = 0x79ca20u;

    // 0x79ca20: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ca24: 0x8c62ce84  lw          $v0, -0x317C($v1)
    ctx->pc = 0x79ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79CE84u));
    // 0x79ca28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CA28u;
    {
        const bool branch_taken_0x79ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CA28u;
        // 0x79ca2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ca28) {
            ctx->pc = 0x79CA38u;
            goto label_79ca38;
        }
    }
    ctx->pc = 0x79CA30u;
    // 0x79ca30: 0x81e725c  j           func_79C970
    ctx->pc = 0x79CA30u;
    ctx->pc = 0x79CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CA30u;
    // 0x79ca34: 0xac62ce84  sw          $v0, -0x317C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C970u, 0x79CA30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79CA38u;
label_79ca38:
    // 0x79ca38: 0x3e00008  jr          $ra
    ctx->pc = 0x79CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CA40u;
}
} // namespace gh_r020
