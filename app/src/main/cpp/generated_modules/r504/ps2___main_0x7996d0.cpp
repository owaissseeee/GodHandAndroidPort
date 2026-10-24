#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r504_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r504
{
// Function: __main
// Address: 0x7996d0 - 0x7996f0
void ps2___main_0x7996d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7996d0");
#endif

    ctx->pc = 0x7996d0u;

    // 0x7996d0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7996d4: 0x8c629904  lw          $v0, -0x66FC($v1)
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799904u));
    // 0x7996d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7996D8u;
    {
        const bool branch_taken_0x7996d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D8u;
        // 0x7996dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d8) {
            ctx->pc = 0x7996E8u;
            goto label_7996e8;
        }
    }
    ctx->pc = 0x7996E0u;
    // 0x7996e0: 0x81e6588  j           func_799620
    ctx->pc = 0x7996E0u;
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0xac629904  sw          $v0, -0x66FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940932), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799620u, 0x7996E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7996E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996F0u;
}
} // namespace gh_r504
