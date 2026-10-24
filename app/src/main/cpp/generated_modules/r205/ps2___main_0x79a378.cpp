#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: __main
// Address: 0x79a378 - 0x79a398
void ps2___main_0x79a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a378");
#endif

    ctx->pc = 0x79a378u;

    // 0x79a378: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a37c: 0x8c62a684  lw          $v0, -0x597C($v1)
    ctx->pc = 0x79a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A684u));
    // 0x79a380: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A380u;
    {
        const bool branch_taken_0x79a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A380u;
        // 0x79a384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a380) {
            ctx->pc = 0x79A390u;
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A388u;
    // 0x79a388: 0x81e68b2  j           func_79A2C8
    ctx->pc = 0x79A388u;
    ctx->pc = 0x79A38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A388u;
    // 0x79a38c: 0xac62a684  sw          $v0, -0x597C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A2C8u, 0x79A388u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A390u;
label_79a390:
    // 0x79a390: 0x3e00008  jr          $ra
    ctx->pc = 0x79A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A398u;
}
} // namespace gh_r205
