#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r502_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r502
{
// Function: __main
// Address: 0x799360 - 0x799380
void ps2___main_0x799360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799360");
#endif

    ctx->pc = 0x799360u;

    // 0x799360: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799364: 0x8c629504  lw          $v0, -0x6AFC($v1)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799504u));
    // 0x799368: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799368u;
    {
        const bool branch_taken_0x799368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799368u;
        // 0x79936c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799368) {
            ctx->pc = 0x799378u;
            goto label_799378;
        }
    }
    ctx->pc = 0x799370u;
    // 0x799370: 0x81e64ac  j           func_7992B0
    ctx->pc = 0x799370u;
    ctx->pc = 0x799374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799370u;
    // 0x799374: 0xac629504  sw          $v0, -0x6AFC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939908), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7992B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7992B0u, 0x799370u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x3e00008  jr          $ra
    ctx->pc = 0x799378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799380u;
}
} // namespace gh_r502
