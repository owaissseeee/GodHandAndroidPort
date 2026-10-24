#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: __main
// Address: 0x79abc0 - 0x79abe0
void ps2___main_0x79abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79abc0");
#endif

    ctx->pc = 0x79abc0u;

    // 0x79abc0: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79abc4: 0x8c62ae84  lw          $v0, -0x517C($v1)
    ctx->pc = 0x79abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79AE84u));
    // 0x79abc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79ABC8u;
    {
        const bool branch_taken_0x79abc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc8) {
            ctx->pc = 0x79ABD8u;
            goto label_79abd8;
        }
    }
    ctx->pc = 0x79ABD0u;
    // 0x79abd0: 0x81e6ac4  j           func_79AB10
    ctx->pc = 0x79ABD0u;
    ctx->pc = 0x79ABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABD0u;
    // 0x79abd4: 0xac62ae84  sw          $v0, -0x517C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294946436), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AB10u, 0x79ABD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79ABD8u;
label_79abd8:
    // 0x79abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x79ABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ABE0u;
}
} // namespace gh_r300
