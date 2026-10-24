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
// Function: registEffData__12cEventEffectPv
// Address: 0x7ad060 - 0x7ad080
void registEffData__12cEventEffectPv_0x7ad060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("registEffData__12cEventEffectPv_0x7ad060");
#endif

    switch (ctx->pc) {
        case 0x7ad070u: goto label_7ad070;
        default: break;
    }

    ctx->pc = 0x7ad060u;

    // 0x7ad060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ad060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ad064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad068: 0xc0be82c  jal         func_2FA0B0
    ctx->pc = 0x7AD068u;
    SET_GPR_U32(ctx, 31, 0x7AD070u);
    ctx->pc = 0x7AD06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD068u;
    // 0x7ad06c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA0B0u, 0x7AD068u, 0x7AD070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD070u;
label_7ad070:
    // 0x7ad070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad074: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD074u;
        // 0x7ad078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD07Cu;
    // 0x7ad07c: 0x0  nop
    ctx->pc = 0x7ad07cu;
    // NOP
    ctx->pc = 0x7ad080u;
}
} // namespace gh_event
