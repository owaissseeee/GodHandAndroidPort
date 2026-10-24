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

// Function: func_00170470
// Address: 0x170470 - 0x1704e8
void func_00170470_0x170470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00170470_0x170470");
#endif

    switch (ctx->pc) {
        case 0x1704b0u: goto label_1704b0;
        case 0x1704d4u: goto label_1704d4;
        default: break;
    }

    ctx->pc = 0x170470u;

    // 0x170470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x170474: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x170474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x170478: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x170478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17047c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17047cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170484: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x170484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x170488: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17048c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x17048cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x170490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x170494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170498: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x170498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17049c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17049cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1704a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1704a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704a8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1704A8u;
    SET_GPR_U32(ctx, 31, 0x1704B0u);
    ctx->pc = 0x1704ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704A8u;
    // 0x1704ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1704A8u, 0x1704B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704B0u;
label_1704b0:
    // 0x1704b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1704b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1704b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1704b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1704bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1704bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1704c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1704c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1704c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1704c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1704CCu;
    SET_GPR_U32(ctx, 31, 0x1704D4u);
    ctx->pc = 0x1704D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1704CCu;
    // 0x1704d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1704CCu, 0x1704D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1704D4u;
label_1704d4:
    // 0x1704d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1704d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1704d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1704d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1704dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1704dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1704e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1704E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1704E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1704E0u;
        // 0x1704e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1704E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1704E8u;
}
