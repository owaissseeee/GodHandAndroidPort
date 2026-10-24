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
// Function: movePlay__9cEventEnv
// Address: 0x7ada20 - 0x7ada50
void movePlay__9cEventEnv_0x7ada20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__9cEventEnv_0x7ada20");
#endif

    switch (ctx->pc) {
        case 0x7ada40u: goto label_7ada40;
        default: break;
    }

    ctx->pc = 0x7ada20u;

    // 0x7ada20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ada20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ada24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7ada24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ada28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ada28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ada2c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x7ada2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x7ada30: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x7ada30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x7ada34: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x7ada34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x7ada38: 0xc1eb8e8  jal         func_7AE3A0
    ctx->pc = 0x7ADA38u;
    SET_GPR_U32(ctx, 31, 0x7ADA40u);
    ctx->pc = 0x7ADA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ADA38u;
    // 0x7ada3c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE3A0u, 0x7ADA38u, 0x7ADA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ADA40u;
label_7ada40:
    // 0x7ada40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ada40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ada44: 0x3e00008  jr          $ra
    ctx->pc = 0x7ADA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ADA44u;
        // 0x7ada48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ADA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ADA4Cu;
    // 0x7ada4c: 0x0  nop
    ctx->pc = 0x7ada4cu;
    // NOP
    ctx->pc = 0x7ada50u;
}
} // namespace gh_event
