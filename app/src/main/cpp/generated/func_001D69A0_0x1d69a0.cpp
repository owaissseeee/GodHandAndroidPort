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

// Function: func_001D69A0
// Address: 0x1d69a0 - 0x1d69e8
void func_001D69A0_0x1d69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D69A0_0x1d69a0");
#endif

    switch (ctx->pc) {
        case 0x1d69c4u: goto label_1d69c4;
        case 0x1d69d4u: goto label_1d69d4;
        default: break;
    }

    ctx->pc = 0x1d69a0u;

    // 0x1d69a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d69a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d69a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d69a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d69ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d69acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d69b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d69b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d69b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d69b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69bc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D69BCu;
    SET_GPR_U32(ctx, 31, 0x1D69C4u);
    ctx->pc = 0x1D69C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69BCu;
    // 0x1d69c0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D69BCu, 0x1D69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69C4u;
label_1d69c4:
    // 0x1d69c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d69c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d69c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d69cc: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D69CCu;
    SET_GPR_U32(ctx, 31, 0x1D69D4u);
    ctx->pc = 0x1D69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69CCu;
    // 0x1d69d0: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D69CCu, 0x1D69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69D4u;
label_1d69d4:
    // 0x1d69d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d69d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d69d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d69d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d69dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d69dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d69e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D69E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69E0u;
        // 0x1d69e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D69E8u;
}
