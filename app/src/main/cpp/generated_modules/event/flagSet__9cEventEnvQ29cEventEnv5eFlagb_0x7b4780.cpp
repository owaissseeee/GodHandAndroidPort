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
// Function: flagSet__9cEventEnvQ29cEventEnv5eFlagb
// Address: 0x7b4780 - 0x7b47a8
void flagSet__9cEventEnvQ29cEventEnv5eFlagb_0x7b4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("flagSet__9cEventEnvQ29cEventEnv5eFlagb_0x7b4780");
#endif

    ctx->pc = 0x7b4780u;

    // 0x7b4780: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x7B4780u;
    {
        const bool branch_taken_0x7b4780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4780u;
        // 0x7b4784: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4780) {
            ctx->pc = 0x7B4794u;
            goto label_7b4794;
        }
    }
    ctx->pc = 0x7B4788u;
    // 0x7b4788: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7b4788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7b478c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B478Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B478Cu;
        // 0x7b4790: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B478Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4794u;
label_7b4794:
    // 0x7b4794: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x7b4794u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x7b4798: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7b4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7b479c: 0x3e00008  jr          $ra
    ctx->pc = 0x7B479Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B479Cu;
        // 0x7b47a0: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B479Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B47A4u;
    // 0x7b47a4: 0x0  nop
    ctx->pc = 0x7b47a4u;
    // NOP
    ctx->pc = 0x7b47a8u;
}
} // namespace gh_event
