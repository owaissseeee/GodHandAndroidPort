#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: __main
// Address: 0x799c88 - 0x799ca8
void ps2___main_0x799c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799c88");
#endif

    ctx->pc = 0x799c88u;

    // 0x799c88: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799c8c: 0x8c629f04  lw          $v0, -0x60FC($v1)
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799F04u));
    // 0x799c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C90u;
    {
        const bool branch_taken_0x799c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C90u;
        // 0x799c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c90) {
            ctx->pc = 0x799CA0u;
            goto label_799ca0;
        }
    }
    ctx->pc = 0x799C98u;
    // 0x799c98: 0x81e66f6  j           func_799BD8
    ctx->pc = 0x799C98u;
    ctx->pc = 0x799C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C98u;
    // 0x799c9c: 0xac629f04  sw          $v0, -0x60FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942468), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799BD8u, 0x799C98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x799CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CA8u;
}
} // namespace gh_r602
