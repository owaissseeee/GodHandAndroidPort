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
// Function: setPlayableNoStopMode__9cEventEnvb
// Address: 0x7ae378 - 0x7ae3a0
void setPlayableNoStopMode__9cEventEnvb_0x7ae378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setPlayableNoStopMode__9cEventEnvb_0x7ae378");
#endif

    ctx->pc = 0x7ae378u;

    // 0x7ae378: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AE378u;
    {
        const bool branch_taken_0x7ae378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE378u;
        // 0x7ae37c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae378) {
            ctx->pc = 0x7AE38Cu;
            goto label_7ae38c;
        }
    }
    ctx->pc = 0x7AE380u;
    // 0x7ae380: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x7ae380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x7ae384: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE384u;
        // 0x7ae388: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE38Cu;
label_7ae38c:
    // 0x7ae38c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x7ae38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x7ae390: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7ae390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7ae394: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE394u;
        // 0x7ae398: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE39Cu;
    // 0x7ae39c: 0x0  nop
    ctx->pc = 0x7ae39cu;
    // NOP
    ctx->pc = 0x7ae3a0u;
}
} // namespace gh_event
