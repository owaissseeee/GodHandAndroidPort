#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __main
// Address: 0x79b198 - 0x79b1b8
void ps2___main_0x79b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79b198");
#endif

    ctx->pc = 0x79b198u;

    // 0x79b198: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79b19c: 0x8c62cd98  lw          $v0, -0x3268($v1)
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79CD98u));
    // 0x79b1a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B1A0u;
    {
        const bool branch_taken_0x79b1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1A0u;
        // 0x79b1a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1a0) {
            ctx->pc = 0x79B1B0u;
            goto label_79b1b0;
        }
    }
    ctx->pc = 0x79B1A8u;
    // 0x79b1a8: 0x81e6c3a  j           func_79B0E8
    ctx->pc = 0x79B1A8u;
    ctx->pc = 0x79B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A8u;
    // 0x79b1ac: 0xac62cd98  sw          $v0, -0x3268($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954392), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B0E8u, 0x79B1A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B1B8u;
}
} // namespace gh_r022
