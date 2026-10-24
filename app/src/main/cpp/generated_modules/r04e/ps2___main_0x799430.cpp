#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04e_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04e
{
// Function: __main
// Address: 0x799430 - 0x799450
void ps2___main_0x799430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799430");
#endif

    ctx->pc = 0x799430u;

    // 0x799430: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799434: 0x8c629604  lw          $v0, -0x69FC($v1)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799604u));
    // 0x799438: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799448u;
            goto label_799448;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x81e64e0  j           func_799380
    ctx->pc = 0x799440u;
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0xac629604  sw          $v0, -0x69FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799380u, 0x799440u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x3e00008  jr          $ra
    ctx->pc = 0x799448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799450u;
}
} // namespace gh_r04e
