#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PokerId_Move
// Address: 0x1df988 - 0x1df9b8
void PokerId_Move_0x1df988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PokerId_Move_0x1df988");
#endif

    switch (ctx->pc) {
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a4u: goto label_1df9a4;
        default: break;
    }

    ctx->pc = 0x1df988u;

    // 0x1df988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1df98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1df990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df994: 0xc077468  jal         func_1DD1A0
    ctx->pc = 0x1DF994u;
    SET_GPR_U32(ctx, 31, 0x1DF99Cu);
    ctx->pc = 0x1DF998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF994u;
    // 0x1df998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1A0u, 0x1DF994u, 0x1DF99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF99Cu;
label_1df99c:
    // 0x1df99c: 0xc077b72  jal         func_1DEDC8
    ctx->pc = 0x1DF99Cu;
    SET_GPR_U32(ctx, 31, 0x1DF9A4u);
    ctx->pc = 0x1DF9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF99Cu;
    // 0x1df9a0: 0x260425b0  addiu       $a0, $s0, 0x25B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEDC8u, 0x1DF99Cu, 0x1DF9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9A4u;
label_1df9a4:
    // 0x1df9a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9ACu;
        // 0x1df9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF9B4u;
    // 0x1df9b4: 0x0  nop
    ctx->pc = 0x1df9b4u;
    // NOP
    ctx->pc = 0x1df9b8u;
}
