#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: __main
// Address: 0x79ac48 - 0x79ac68
void ps2___main_0x79ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79ac48");
#endif

    ctx->pc = 0x79ac48u;

    // 0x79ac48: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79ac4c: 0x8c62af84  lw          $v0, -0x507C($v1)
    ctx->pc = 0x79ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AF84u));
    // 0x79ac50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC50u;
    {
        const bool branch_taken_0x79ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC50u;
        // 0x79ac54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac50) {
            ctx->pc = 0x79AC60u;
            goto label_79ac60;
        }
    }
    ctx->pc = 0x79AC58u;
    // 0x79ac58: 0x81e6ae6  j           func_79AB98
    ctx->pc = 0x79AC58u;
    ctx->pc = 0x79AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC58u;
    // 0x79ac5c: 0xac62af84  sw          $v0, -0x507C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946692), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB98u, 0x79AC58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79AC60u;
label_79ac60:
    // 0x79ac60: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC68u;
}
} // namespace gh_r802
