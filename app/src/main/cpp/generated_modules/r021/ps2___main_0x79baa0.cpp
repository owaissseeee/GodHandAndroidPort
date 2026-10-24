#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: __main
// Address: 0x79baa0 - 0x79bac0
void ps2___main_0x79baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79baa0");
#endif

    ctx->pc = 0x79baa0u;

    // 0x79baa0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79baa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79baa4: 0x8c62c2e0  lw          $v0, -0x3D20($v1)
    ctx->pc = 0x79baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C2E0u));
    // 0x79baa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BAA8u;
    {
        const bool branch_taken_0x79baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAA8u;
        // 0x79baac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baa8) {
            ctx->pc = 0x79BAB8u;
            goto label_79bab8;
        }
    }
    ctx->pc = 0x79BAB0u;
    // 0x79bab0: 0x81e6e7c  j           func_79B9F0
    ctx->pc = 0x79BAB0u;
    ctx->pc = 0x79BAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAB0u;
    // 0x79bab4: 0xac62c2e0  sw          $v0, -0x3D20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9F0u, 0x79BAB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79BAB8u;
label_79bab8:
    // 0x79bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAC0u;
}
} // namespace gh_r021
