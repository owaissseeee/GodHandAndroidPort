#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: __main
// Address: 0x79bd38 - 0x79bd58
void ps2___main_0x79bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79bd38");
#endif

    ctx->pc = 0x79bd38u;

    // 0x79bd38: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79bd3c: 0x8c62c004  lw          $v0, -0x3FFC($v1)
    ctx->pc = 0x79bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C004u));
    // 0x79bd40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BD40u;
    {
        const bool branch_taken_0x79bd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD40u;
        // 0x79bd44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd40) {
            ctx->pc = 0x79BD50u;
            goto label_79bd50;
        }
    }
    ctx->pc = 0x79BD48u;
    // 0x79bd48: 0x81e6f22  j           func_79BC88
    ctx->pc = 0x79BD48u;
    ctx->pc = 0x79BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BD48u;
    // 0x79bd4c: 0xac62c004  sw          $v0, -0x3FFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950916), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC88u, 0x79BD48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79BD50u;
label_79bd50:
    // 0x79bd50: 0x3e00008  jr          $ra
    ctx->pc = 0x79BD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BD58u;
}
} // namespace gh_r102
