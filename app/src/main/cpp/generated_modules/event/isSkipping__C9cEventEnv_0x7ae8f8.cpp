#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isSkipping__C9cEventEnv
// Address: 0x7ae8f8 - 0x7ae920
void isSkipping__C9cEventEnv_0x7ae8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isSkipping__C9cEventEnv_0x7ae8f8");
#endif

    ctx->pc = 0x7ae8f8u;

    // 0x7ae8f8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x7ae8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x7ae8fc: 0x3117a  dsrl        $v0, $v1, 5
    ctx->pc = 0x7ae8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 5);
    // 0x7ae900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7AE904u;
    {
        const bool branch_taken_0x7ae904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE904u;
        // 0x7ae908: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae904) {
            ctx->pc = 0x7AE914u;
            goto label_7ae914;
        }
    }
    ctx->pc = 0x7AE90Cu;
    // 0x7ae90c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE90Cu;
        // 0x7ae910: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE914u;
label_7ae914:
    // 0x7ae914: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE914u;
        // 0x7ae918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE91Cu;
    // 0x7ae91c: 0x0  nop
    ctx->pc = 0x7ae91cu;
    // NOP
    ctx->pc = 0x7ae920u;
}
} // namespace gh_event
