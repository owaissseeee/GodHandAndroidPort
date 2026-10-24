#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: __main
// Address: 0x7998d8 - 0x7998f8
void ps2___main_0x7998d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7998d8");
#endif

    ctx->pc = 0x7998d8u;

    // 0x7998d8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7998dc: 0x8c629c04  lw          $v0, -0x63FC($v1)
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799C04u));
    // 0x7998e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7998E0u;
    {
        const bool branch_taken_0x7998e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e0) {
            ctx->pc = 0x7998F0u;
            goto label_7998f0;
        }
    }
    ctx->pc = 0x7998E8u;
    // 0x7998e8: 0x81e660a  j           func_799828
    ctx->pc = 0x7998E8u;
    ctx->pc = 0x7998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E8u;
    // 0x7998ec: 0xac629c04  sw          $v0, -0x63FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941700), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799828u, 0x7998E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x3e00008  jr          $ra
    ctx->pc = 0x7998F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7998F8u;
}
} // namespace gh_r003
