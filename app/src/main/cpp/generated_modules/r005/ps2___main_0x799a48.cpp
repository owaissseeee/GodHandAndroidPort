#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: __main
// Address: 0x799a48 - 0x799a68
void ps2___main_0x799a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799a48");
#endif

    ctx->pc = 0x799a48u;

    // 0x799a48: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799a4c: 0x8c629e84  lw          $v0, -0x617C($v1)
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799E84u));
    // 0x799a50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A50u;
    {
        const bool branch_taken_0x799a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A50u;
        // 0x799a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a50) {
            ctx->pc = 0x799A60u;
            goto label_799a60;
        }
    }
    ctx->pc = 0x799A58u;
    // 0x799a58: 0x81e6666  j           func_799998
    ctx->pc = 0x799A58u;
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0xac629e84  sw          $v0, -0x617C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942340), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799998u, 0x799A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x3e00008  jr          $ra
    ctx->pc = 0x799A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A68u;
}
} // namespace gh_r005
