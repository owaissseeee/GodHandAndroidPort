#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r506_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r506
{
// Function: __main
// Address: 0x799b70 - 0x799b90
void ps2___main_0x799b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799b70");
#endif

    ctx->pc = 0x799b70u;

    // 0x799b70: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799b74: 0x8c629d84  lw          $v0, -0x627C($v1)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799D84u));
    // 0x799b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799B78u;
    {
        const bool branch_taken_0x799b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B78u;
        // 0x799b7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799b78) {
            ctx->pc = 0x799B88u;
            goto label_799b88;
        }
    }
    ctx->pc = 0x799B80u;
    // 0x799b80: 0x81e66b0  j           func_799AC0
    ctx->pc = 0x799B80u;
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0xac629d84  sw          $v0, -0x627C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799AC0u, 0x799B80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x3e00008  jr          $ra
    ctx->pc = 0x799B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B90u;
}
} // namespace gh_r506
