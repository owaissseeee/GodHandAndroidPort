#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: __main
// Address: 0x799f08 - 0x799f28
void ps2___main_0x799f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799f08");
#endif

    ctx->pc = 0x799f08u;

    // 0x799f08: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799f0c: 0x8c62a184  lw          $v0, -0x5E7C($v1)
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A184u));
    // 0x799f10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799F20u;
            goto label_799f20;
        }
    }
    ctx->pc = 0x799F18u;
    // 0x799f18: 0x81e6796  j           func_799E58
    ctx->pc = 0x799F18u;
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0xac62a184  sw          $v0, -0x5E7C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E58u, 0x799F18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0x3e00008  jr          $ra
    ctx->pc = 0x799F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F28u;
}
} // namespace gh_r605
