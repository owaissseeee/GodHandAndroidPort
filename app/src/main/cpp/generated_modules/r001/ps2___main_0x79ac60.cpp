#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: __main
// Address: 0x79ac60 - 0x79ac80
void ps2___main_0x79ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79ac60");
#endif

    ctx->pc = 0x79ac60u;

    // 0x79ac60: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ac64: 0x8c62af04  lw          $v0, -0x50FC($v1)
    ctx->pc = 0x79ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AF04u));
    // 0x79ac68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC68u;
    {
        const bool branch_taken_0x79ac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC68u;
        // 0x79ac6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac68) {
            ctx->pc = 0x79AC78u;
            goto label_79ac78;
        }
    }
    ctx->pc = 0x79AC70u;
    // 0x79ac70: 0x81e6aec  j           func_79ABB0
    ctx->pc = 0x79AC70u;
    ctx->pc = 0x79AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC70u;
    // 0x79ac74: 0xac62af04  sw          $v0, -0x50FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ABB0u, 0x79AC70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79AC78u;
label_79ac78:
    // 0x79ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC80u;
}
} // namespace gh_r001
