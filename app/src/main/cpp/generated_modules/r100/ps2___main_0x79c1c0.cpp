#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: __main
// Address: 0x79c1c0 - 0x79c1e0
void ps2___main_0x79c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79c1c0");
#endif

    ctx->pc = 0x79c1c0u;

    // 0x79c1c0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79c1c4: 0x8c62c504  lw          $v0, -0x3AFC($v1)
    ctx->pc = 0x79c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79C504u));
    // 0x79c1c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C1C8u;
    {
        const bool branch_taken_0x79c1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C1C8u;
        // 0x79c1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c1c8) {
            ctx->pc = 0x79C1D8u;
            goto label_79c1d8;
        }
    }
    ctx->pc = 0x79C1D0u;
    // 0x79c1d0: 0x81e7044  j           func_79C110
    ctx->pc = 0x79C1D0u;
    ctx->pc = 0x79C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C1D0u;
    // 0x79c1d4: 0xac62c504  sw          $v0, -0x3AFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952196), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C110u, 0x79C1D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79C1D8u;
label_79c1d8:
    // 0x79c1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C1E0u;
}
} // namespace gh_r100
