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

// Function: func_0016FEA0
// Address: 0x16fea0 - 0x16ff18
void func_0016FEA0_0x16fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0016FEA0_0x16fea0");
#endif

    switch (ctx->pc) {
        case 0x16fee0u: goto label_16fee0;
        case 0x16ff04u: goto label_16ff04;
        default: break;
    }

    ctx->pc = 0x16fea0u;

    // 0x16fea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fea4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fea8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16feac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16feacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16feb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16feb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16feb4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x16feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x16feb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16feb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16febc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x16fec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fec8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16fec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16feccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16fed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fed4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16fed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fed8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x16FED8u;
    SET_GPR_U32(ctx, 31, 0x16FEE0u);
    ctx->pc = 0x16FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FED8u;
    // 0x16fedc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x16FED8u, 0x16FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEE0u;
label_16fee0:
    // 0x16fee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fee4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x16fee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fee8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16feec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fef0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16fef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fef4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16fef4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fef8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x16fef8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fefc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x16FEFCu;
    SET_GPR_U32(ctx, 31, 0x16FF04u);
    ctx->pc = 0x16FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FEFCu;
    // 0x16ff00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x16FEFCu, 0x16FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF04u;
label_16ff04:
    // 0x16ff04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16ff04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ff08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ff08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ff0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ff0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ff10: 0x3e00008  jr          $ra
    ctx->pc = 0x16FF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FF10u;
        // 0x16ff14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF18u;
}
