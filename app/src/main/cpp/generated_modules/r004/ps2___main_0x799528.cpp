#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r004_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r004
{
// Function: __main
// Address: 0x799528 - 0x799548
void ps2___main_0x799528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799528");
#endif

    ctx->pc = 0x799528u;

    // 0x799528: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79952c: 0x8c629784  lw          $v0, -0x687C($v1)
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799784u));
    // 0x799530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799530u;
    {
        const bool branch_taken_0x799530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799530) {
            ctx->pc = 0x799540u;
            goto label_799540;
        }
    }
    ctx->pc = 0x799538u;
    // 0x799538: 0x81e651e  j           func_799478
    ctx->pc = 0x799538u;
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0xac629784  sw          $v0, -0x687C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940548), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799478u, 0x799538u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x3e00008  jr          $ra
    ctx->pc = 0x799540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799548u;
}
} // namespace gh_r004
