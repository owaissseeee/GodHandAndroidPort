#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r503_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r503
{
// Function: __main
// Address: 0x799df8 - 0x799e18
void ps2___main_0x799df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x799df8");
#endif

    ctx->pc = 0x799df8u;

    // 0x799df8: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799dfc: 0x8c62a050  lw          $v0, -0x5FB0($v1)
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A050u));
    // 0x799e00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799E00u;
    {
        const bool branch_taken_0x799e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e00) {
            ctx->pc = 0x799E10u;
            goto label_799e10;
        }
    }
    ctx->pc = 0x799E08u;
    // 0x799e08: 0x81e6752  j           func_799D48
    ctx->pc = 0x799E08u;
    ctx->pc = 0x799E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E08u;
    // 0x799e0c: 0xac62a050  sw          $v0, -0x5FB0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799D48u, 0x799E08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x799E10u;
label_799e10:
    // 0x799e10: 0x3e00008  jr          $ra
    ctx->pc = 0x799E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799E18u;
}
} // namespace gh_r503
