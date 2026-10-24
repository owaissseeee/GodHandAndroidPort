#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __main
// Address: 0x79bf08 - 0x79bf28
void ps2___main_0x79bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79bf08");
#endif

    ctx->pc = 0x79bf08u;

    // 0x79bf08: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79bf0c: 0x8c6209e0  lw          $v0, 0x9E0($v1)
    ctx->pc = 0x79bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7A09E0u));
    // 0x79bf10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BF10u;
    {
        const bool branch_taken_0x79bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BF10u;
        // 0x79bf14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bf10) {
            ctx->pc = 0x79BF20u;
            goto label_79bf20;
        }
    }
    ctx->pc = 0x79BF18u;
    // 0x79bf18: 0x81e6f96  j           func_79BE58
    ctx->pc = 0x79BF18u;
    ctx->pc = 0x79BF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BF18u;
    // 0x79bf1c: 0xac6209e0  sw          $v0, 0x9E0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 2528), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE58u, 0x79BF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79BF20u;
label_79bf20:
    // 0x79bf20: 0x3e00008  jr          $ra
    ctx->pc = 0x79BF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BF28u;
}
} // namespace gh_r501
