#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r803_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r803
{
// Function: __main
// Address: 0x799888 - 0x7998a8
void ps2___main_0x799888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799888");
#endif

    ctx->pc = 0x799888u;

    // 0x799888: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79988c: 0x8c629a84  lw          $v0, -0x657C($v1)
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799A84u));
    // 0x799890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799890u;
    {
        const bool branch_taken_0x799890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799890u;
        // 0x799894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799890) {
            ctx->pc = 0x7998A0u;
            goto label_7998a0;
        }
    }
    ctx->pc = 0x799898u;
    // 0x799898: 0x81e65f6  j           func_7997D8
    ctx->pc = 0x799898u;
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0xac629a84  sw          $v0, -0x657C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7997D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7997D8u, 0x799898u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998A8u;
}
} // namespace gh_r803
