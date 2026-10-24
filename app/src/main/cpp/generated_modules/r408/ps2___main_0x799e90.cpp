#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r408_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r408
{
// Function: __main
// Address: 0x799e90 - 0x799eb0
void ps2___main_0x799e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799e90");
#endif

    ctx->pc = 0x799e90u;

    // 0x799e90: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799e94: 0x8c62a104  lw          $v0, -0x5EFC($v1)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A104u));
    // 0x799e98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799E98u;
    {
        const bool branch_taken_0x799e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E98u;
        // 0x799e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e98) {
            ctx->pc = 0x799EA8u;
            goto label_799ea8;
        }
    }
    ctx->pc = 0x799EA0u;
    // 0x799ea0: 0x81e6778  j           func_799DE0
    ctx->pc = 0x799EA0u;
    ctx->pc = 0x799EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA0u;
    // 0x799ea4: 0xac62a104  sw          $v0, -0x5EFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799DE0u, 0x799EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799EA8u;
label_799ea8:
    // 0x799ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x799EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EB0u;
}
} // namespace gh_r408
