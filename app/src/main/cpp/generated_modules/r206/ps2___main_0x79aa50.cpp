#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: __main
// Address: 0x79aa50 - 0x79aa70
void ps2___main_0x79aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79aa50");
#endif

    ctx->pc = 0x79aa50u;

    // 0x79aa50: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79aa54: 0x8c62acb0  lw          $v0, -0x5350($v1)
    ctx->pc = 0x79aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79ACB0u));
    // 0x79aa58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AA58u;
    {
        const bool branch_taken_0x79aa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA58u;
        // 0x79aa5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa58) {
            ctx->pc = 0x79AA68u;
            goto label_79aa68;
        }
    }
    ctx->pc = 0x79AA60u;
    // 0x79aa60: 0x81e6a68  j           func_79A9A0
    ctx->pc = 0x79AA60u;
    ctx->pc = 0x79AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA60u;
    // 0x79aa64: 0xac62acb0  sw          $v0, -0x5350($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945968), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A9A0u, 0x79AA60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79AA68u;
label_79aa68:
    // 0x79aa68: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA70u;
}
} // namespace gh_r206
