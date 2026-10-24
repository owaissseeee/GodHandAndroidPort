#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: __main
// Address: 0x79c7a0 - 0x79c7c0
void ps2___main_0x79c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79c7a0");
#endif

    ctx->pc = 0x79c7a0u;

    // 0x79c7a0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c7a4: 0x8c62ca74  lw          $v0, -0x358C($v1)
    ctx->pc = 0x79c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79CA74u));
    // 0x79c7a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C7A8u;
    {
        const bool branch_taken_0x79c7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7A8u;
        // 0x79c7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c7a8) {
            ctx->pc = 0x79C7B8u;
            goto label_79c7b8;
        }
    }
    ctx->pc = 0x79C7B0u;
    // 0x79c7b0: 0x81e71bc  j           func_79C6F0
    ctx->pc = 0x79C7B0u;
    ctx->pc = 0x79C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C7B0u;
    // 0x79c7b4: 0xac62ca74  sw          $v0, -0x358C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C6F0u, 0x79C7B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79C7B8u;
label_79c7b8:
    // 0x79c7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7C0u;
}
} // namespace gh_r000
