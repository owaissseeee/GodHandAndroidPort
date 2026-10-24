#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r401_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r401
{
// Function: __main
// Address: 0x799658 - 0x799678
void ps2___main_0x799658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799658");
#endif

    ctx->pc = 0x799658u;

    // 0x799658: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79965c: 0x8c629804  lw          $v0, -0x67FC($v1)
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799804u));
    // 0x799660: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799660u;
    {
        const bool branch_taken_0x799660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799660u;
        // 0x799664: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799660) {
            ctx->pc = 0x799670u;
            goto label_799670;
        }
    }
    ctx->pc = 0x799668u;
    // 0x799668: 0x81e656a  j           func_7995A8
    ctx->pc = 0x799668u;
    ctx->pc = 0x79966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799668u;
    // 0x79966c: 0xac629804  sw          $v0, -0x67FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7995A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7995A8u, 0x799668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0x3e00008  jr          $ra
    ctx->pc = 0x799670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799678u;
}
} // namespace gh_r401
