#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: __main
// Address: 0x799928 - 0x799948
void ps2___main_0x799928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799928");
#endif

    ctx->pc = 0x799928u;

    // 0x799928: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79992c: 0x8c629b04  lw          $v0, -0x64FC($v1)
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799B04u));
    // 0x799930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799930u;
    {
        const bool branch_taken_0x799930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799930) {
            ctx->pc = 0x799940u;
            goto label_799940;
        }
    }
    ctx->pc = 0x799938u;
    // 0x799938: 0x81e661e  j           func_799878
    ctx->pc = 0x799938u;
    ctx->pc = 0x79993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799938u;
    // 0x79993c: 0xac629b04  sw          $v0, -0x64FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941444), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799878u, 0x799938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799940u;
label_799940:
    // 0x799940: 0x3e00008  jr          $ra
    ctx->pc = 0x799940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799948u;
}
} // namespace gh_r104
