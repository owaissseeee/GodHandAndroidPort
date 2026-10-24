#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: __main
// Address: 0x79a408 - 0x79a428
void ps2___main_0x79a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___main_0x79a408");
#endif

    ctx->pc = 0x79a408u;

    // 0x79a408: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x79a40c: 0x8c62a804  lw          $v0, -0x57FC($v1)
    ctx->pc = 0x79a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x79A804u));
    // 0x79a410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A410u;
    {
        const bool branch_taken_0x79a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A410u;
        // 0x79a414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a410) {
            ctx->pc = 0x79A420u;
            goto label_79a420;
        }
    }
    ctx->pc = 0x79A418u;
    // 0x79a418: 0x81e68d6  j           func_79A358
    ctx->pc = 0x79A418u;
    ctx->pc = 0x79A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A418u;
    // 0x79a41c: 0xac62a804  sw          $v0, -0x57FC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A358u, 0x79A418u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x79A420u;
label_79a420:
    // 0x79a420: 0x3e00008  jr          $ra
    ctx->pc = 0x79A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A428u;
}
} // namespace gh_r405
