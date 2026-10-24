#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r007_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r007
{
// Function: __main
// Address: 0x799c00 - 0x799c20
void ps2___main_0x799c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799c00");
#endif

    ctx->pc = 0x799c00u;

    // 0x799c00: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799c04: 0x8c629e04  lw          $v0, -0x61FC($v1)
    ctx->pc = 0x799c04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x799E04u));
    // 0x799c08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799C08u;
    {
        const bool branch_taken_0x799c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C08u;
        // 0x799c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c08) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799C10u;
    // 0x799c10: 0x81e66d4  j           func_799B50
    ctx->pc = 0x799C10u;
    ctx->pc = 0x799C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C10u;
    // 0x799c14: 0xac629e04  sw          $v0, -0x61FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B50u, 0x799C10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0x3e00008  jr          $ra
    ctx->pc = 0x799C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C20u;
}
} // namespace gh_r007
