#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r403_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r403
{
// Function: __main
// Address: 0x799820 - 0x799840
void ps2___main_0x799820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799820");
#endif

    ctx->pc = 0x799820u;

    // 0x799820: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799824: 0x8c629a04  lw          $v0, -0x65FC($v1)
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799A04u));
    // 0x799828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799828u;
    {
        const bool branch_taken_0x799828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799828u;
        // 0x79982c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799828) {
            ctx->pc = 0x799838u;
            goto label_799838;
        }
    }
    ctx->pc = 0x799830u;
    // 0x799830: 0x81e65dc  j           func_799770
    ctx->pc = 0x799830u;
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0xac629a04  sw          $v0, -0x65FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941188), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799770u, 0x799830u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x3e00008  jr          $ra
    ctx->pc = 0x799838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799840u;
}
} // namespace gh_r403
