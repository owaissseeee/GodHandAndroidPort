#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: __main
// Address: 0x7999e0 - 0x799a00
void ps2___main_0x7999e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x7999e0");
#endif

    ctx->pc = 0x7999e0u;

    // 0x7999e0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x7999e4: 0x8c629c84  lw          $v0, -0x637C($v1)
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799C84u));
    // 0x7999e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999E8u;
    {
        const bool branch_taken_0x7999e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E8u;
        // 0x7999ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e8) {
            ctx->pc = 0x7999F8u;
            goto label_7999f8;
        }
    }
    ctx->pc = 0x7999F0u;
    // 0x7999f0: 0x81e664c  j           func_799930
    ctx->pc = 0x7999F0u;
    ctx->pc = 0x7999F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999F0u;
    // 0x7999f4: 0xac629c84  sw          $v0, -0x637C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941828), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799930u, 0x7999F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7999F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A00u;
}
} // namespace gh_r406
