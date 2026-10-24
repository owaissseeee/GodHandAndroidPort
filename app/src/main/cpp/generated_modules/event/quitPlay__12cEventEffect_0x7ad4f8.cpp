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
// Function: quitPlay__12cEventEffect
// Address: 0x7ad4f8 - 0x7ad538
void quitPlay__12cEventEffect_0x7ad4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quitPlay__12cEventEffect_0x7ad4f8");
#endif

    switch (ctx->pc) {
        case 0x7ad508u: goto label_7ad508;
        case 0x7ad510u: goto label_7ad510;
        default: break;
    }

    ctx->pc = 0x7ad4f8u;

    // 0x7ad4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ad4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ad4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad500: 0xc0be8c4  jal         func_2FA310
    ctx->pc = 0x7AD500u;
    SET_GPR_U32(ctx, 31, 0x7AD508u);
    ctx->pc = 0x2FA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA310u, 0x7AD500u, 0x7AD508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD508u;
label_7ad508:
    // 0x7ad508: 0xc0be83a  jal         func_2FA0E8
    ctx->pc = 0x7AD508u;
    SET_GPR_U32(ctx, 31, 0x7AD510u);
    ctx->pc = 0x2FA0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA0E8u, 0x7AD508u, 0x7AD510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD510u;
label_7ad510:
    // 0x7ad510: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7ad514: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x7ad514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x7ad518: 0x8c447a84  lw          $a0, 0x7A84($v0)
    ctx->pc = 0x7ad518u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A84u));
    // 0x7ad51c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7ad51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7ad520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad524: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x7ad524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x7ad528: 0xac447a84  sw          $a0, 0x7A84($v0)
    ctx->pc = 0x7ad528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31364), GPR_U32(ctx, 4));
    // 0x7ad52c: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD52Cu;
        // 0x7ad530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD534u;
    // 0x7ad534: 0x0  nop
    ctx->pc = 0x7ad534u;
    // NOP
    ctx->pc = 0x7ad538u;
}
} // namespace gh_event
