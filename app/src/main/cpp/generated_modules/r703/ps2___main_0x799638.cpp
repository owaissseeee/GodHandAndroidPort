#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r703_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r703
{
// Function: __main
// Address: 0x799638 - 0x799658
void ps2___main_0x799638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799638");
#endif

    ctx->pc = 0x799638u;

    // 0x799638: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79963c: 0x8c629804  lw          $v0, -0x67FC($v1)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799804u));
    // 0x799640: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799640u;
    {
        const bool branch_taken_0x799640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799640u;
        // 0x799644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799640) {
            ctx->pc = 0x799650u;
            goto label_799650;
        }
    }
    ctx->pc = 0x799648u;
    // 0x799648: 0x81e6562  j           func_799588
    ctx->pc = 0x799648u;
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0xac629804  sw          $v0, -0x67FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799588u, 0x799648u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x3e00008  jr          $ra
    ctx->pc = 0x799650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799658u;
}
} // namespace gh_r703
