#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: __main
// Address: 0x79b610 - 0x79b630
void ps2___main_0x79b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79b610");
#endif

    ctx->pc = 0x79b610u;

    // 0x79b610: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b614: 0x8c62b904  lw          $v0, -0x46FC($v1)
    ctx->pc = 0x79b614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B904u));
    // 0x79b618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B618u;
    {
        const bool branch_taken_0x79b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B618u;
        // 0x79b61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b618) {
            ctx->pc = 0x79B628u;
            goto label_79b628;
        }
    }
    ctx->pc = 0x79B620u;
    // 0x79b620: 0x81e6d58  j           func_79B560
    ctx->pc = 0x79B620u;
    ctx->pc = 0x79B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B620u;
    // 0x79b624: 0xac62b904  sw          $v0, -0x46FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B560u, 0x79B620u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79B628u;
label_79b628:
    // 0x79b628: 0x3e00008  jr          $ra
    ctx->pc = 0x79B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B630u;
}
} // namespace gh_r600
