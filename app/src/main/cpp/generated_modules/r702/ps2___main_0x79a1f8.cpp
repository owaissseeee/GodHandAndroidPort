#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: __main
// Address: 0x79a1f8 - 0x79a218
void ps2___main_0x79a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a1f8");
#endif

    ctx->pc = 0x79a1f8u;

    // 0x79a1f8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a1fc: 0x8c62a3b0  lw          $v0, -0x5C50($v1)
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A3B0u));
    // 0x79a200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A210u;
            goto label_79a210;
        }
    }
    ctx->pc = 0x79A208u;
    // 0x79a208: 0x81e6852  j           func_79A148
    ctx->pc = 0x79A208u;
    ctx->pc = 0x79A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A208u;
    // 0x79a20c: 0xac62a3b0  sw          $v0, -0x5C50($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A148u, 0x79A208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A210u;
label_79a210:
    // 0x79a210: 0x3e00008  jr          $ra
    ctx->pc = 0x79A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A218u;
}
} // namespace gh_r702
