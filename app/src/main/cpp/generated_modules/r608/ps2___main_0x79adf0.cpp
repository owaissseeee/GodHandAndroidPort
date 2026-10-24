#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: __main
// Address: 0x79adf0 - 0x79ae10
void ps2___main_0x79adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79adf0");
#endif

    ctx->pc = 0x79adf0u;

    // 0x79adf0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79adf4: 0x8c62b1d0  lw          $v0, -0x4E30($v1)
    ctx->pc = 0x79adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79B1D0u));
    // 0x79adf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ADF8u;
    {
        const bool branch_taken_0x79adf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF8u;
        // 0x79adfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79adf8) {
            ctx->pc = 0x79AE08u;
            goto label_79ae08;
        }
    }
    ctx->pc = 0x79AE00u;
    // 0x79ae00: 0x81e6b50  j           func_79AD40
    ctx->pc = 0x79AE00u;
    ctx->pc = 0x79AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE00u;
    // 0x79ae04: 0xac62b1d0  sw          $v0, -0x4E30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947280), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AD40u, 0x79AE00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79AE08u;
label_79ae08:
    // 0x79ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x79AE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AE10u;
}
} // namespace gh_r608
