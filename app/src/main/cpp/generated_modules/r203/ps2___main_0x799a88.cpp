#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: __main
// Address: 0x799a88 - 0x799aa8
void ps2___main_0x799a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799a88");
#endif

    ctx->pc = 0x799a88u;

    // 0x799a88: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799a8c: 0x8c629d04  lw          $v0, -0x62FC($v1)
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799D04u));
    // 0x799a90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799A90u;
    {
        const bool branch_taken_0x799a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a90) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A98u;
    // 0x799a98: 0x81e6676  j           func_7999D8
    ctx->pc = 0x799A98u;
    ctx->pc = 0x799A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A98u;
    // 0x799a9c: 0xac629d04  sw          $v0, -0x62FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941956), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7999D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7999D8u, 0x799A98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x799AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799AA8u;
}
} // namespace gh_r203
