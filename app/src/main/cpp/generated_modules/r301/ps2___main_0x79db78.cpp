#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __main
// Address: 0x79db78 - 0x79db98
void ps2___main_0x79db78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79db78");
#endif

    ctx->pc = 0x79db78u;

    // 0x79db78: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79db7c: 0x8c62e030  lw          $v0, -0x1FD0($v1)
    ctx->pc = 0x79db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79E030u));
    // 0x79db80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79DB80u;
    {
        const bool branch_taken_0x79db80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB80u;
        // 0x79db84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79db80) {
            ctx->pc = 0x79DB90u;
            goto label_79db90;
        }
    }
    ctx->pc = 0x79DB88u;
    // 0x79db88: 0x81e76b2  j           func_79DAC8
    ctx->pc = 0x79DB88u;
    ctx->pc = 0x79DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79DB88u;
    // 0x79db8c: 0xac62e030  sw          $v0, -0x1FD0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79DAC8u, 0x79DB88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79DB90u;
label_79db90:
    // 0x79db90: 0x3e00008  jr          $ra
    ctx->pc = 0x79DB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79DB98u;
}
} // namespace gh_r301
