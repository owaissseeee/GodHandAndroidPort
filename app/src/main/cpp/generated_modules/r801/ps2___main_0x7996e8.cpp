#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r801_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r801
{
// Function: __main
// Address: 0x7996e8 - 0x799708
void ps2___main_0x7996e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7996e8");
#endif

    ctx->pc = 0x7996e8u;

    // 0x7996e8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7996ec: 0x8c629904  lw          $v0, -0x66FC($v1)
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799904u));
    // 0x7996f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799700u;
            goto label_799700;
        }
    }
    ctx->pc = 0x7996F8u;
    // 0x7996f8: 0x81e658e  j           func_799638
    ctx->pc = 0x7996F8u;
    ctx->pc = 0x7996FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F8u;
    // 0x7996fc: 0xac629904  sw          $v0, -0x66FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940932), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799638u, 0x7996F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799700u;
label_799700:
    // 0x799700: 0x3e00008  jr          $ra
    ctx->pc = 0x799700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799708u;
}
} // namespace gh_r801
