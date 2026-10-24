#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: __main
// Address: 0x79ad68 - 0x79ad88
void ps2___main_0x79ad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79ad68");
#endif

    ctx->pc = 0x79ad68u;

    // 0x79ad68: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ad6c: 0x8c62b004  lw          $v0, -0x4FFC($v1)
    ctx->pc = 0x79ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B004u));
    // 0x79ad70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AD70u;
    {
        const bool branch_taken_0x79ad70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD70u;
        // 0x79ad74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad70) {
            ctx->pc = 0x79AD80u;
            goto label_79ad80;
        }
    }
    ctx->pc = 0x79AD78u;
    // 0x79ad78: 0x81e6b2e  j           func_79ACB8
    ctx->pc = 0x79AD78u;
    ctx->pc = 0x79AD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD78u;
    // 0x79ad7c: 0xac62b004  sw          $v0, -0x4FFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79ACB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79ACB8u, 0x79AD78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79AD80u;
label_79ad80:
    // 0x79ad80: 0x3e00008  jr          $ra
    ctx->pc = 0x79AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AD88u;
}
} // namespace gh_r204
