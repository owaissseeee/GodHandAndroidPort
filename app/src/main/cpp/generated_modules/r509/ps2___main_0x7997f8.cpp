#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r509_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r509
{
// Function: __main
// Address: 0x7997f8 - 0x799818
void ps2___main_0x7997f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7997f8");
#endif

    ctx->pc = 0x7997f8u;

    // 0x7997f8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7997fc: 0x8c629a84  lw          $v0, -0x657C($v1)
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799A84u));
    // 0x799800: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799800u;
    {
        const bool branch_taken_0x799800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799800) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x799808u;
    // 0x799808: 0x81e65d2  j           func_799748
    ctx->pc = 0x799808u;
    ctx->pc = 0x79980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799808u;
    // 0x79980c: 0xac629a84  sw          $v0, -0x657C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799748u, 0x799808u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x3e00008  jr          $ra
    ctx->pc = 0x799810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799818u;
}
} // namespace gh_r509
