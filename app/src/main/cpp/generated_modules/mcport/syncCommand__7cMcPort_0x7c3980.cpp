#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: syncCommand__7cMcPort
// Address: 0x7c3980 - 0x7c39b8
void syncCommand__7cMcPort_0x7c3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("syncCommand__7cMcPort_0x7c3980");
#endif

    switch (ctx->pc) {
        case 0x7c39a0u: goto label_7c39a0;
        default: break;
    }

    ctx->pc = 0x7c3980u;

    // 0x7c3980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c3984: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c3984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c3988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c3988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c398c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c398cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3990: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x7c3990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x7c3994: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x7c3994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x7c3998: 0xc1f377e  jal         func_7CDDF8
    ctx->pc = 0x7C3998u;
    SET_GPR_U32(ctx, 31, 0x7C39A0u);
    ctx->pc = 0x7C399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3998u;
    // 0x7c399c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDDF8u, 0x7C3998u, 0x7C39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C39A0u;
label_7c39a0:
    // 0x7c39a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7c39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7c39a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c39a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c39a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c39a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c39ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7C39ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C39ACu;
        // 0x7c39b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C39ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C39B4u;
    // 0x7c39b4: 0x0  nop
    ctx->pc = 0x7c39b4u;
    // NOP
    ctx->pc = 0x7c39b8u;
}
} // namespace gh_mcport
