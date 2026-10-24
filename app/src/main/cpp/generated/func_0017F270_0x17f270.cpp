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

// Function: func_0017F270
// Address: 0x17f270 - 0x17f2f8
void func_0017F270_0x17f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017F270_0x17f270");
#endif

    switch (ctx->pc) {
        case 0x17f298u: goto label_17f298;
        case 0x17f2a8u: goto label_17f2a8;
        case 0x17f2c8u: goto label_17f2c8;
        default: break;
    }

    ctx->pc = 0x17f270u;

    // 0x17f270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17f274: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17f274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17f278: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f27c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17f27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17f280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17f284: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17f288: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17f288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f290: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x17F290u;
    SET_GPR_U32(ctx, 31, 0x17F298u);
    ctx->pc = 0x17F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F290u;
    // 0x17f294: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x17F290u, 0x17F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F298u;
label_17f298:
    // 0x17f298: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17f298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f29c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17f2a0: 0x244223d0  addiu       $v0, $v0, 0x23D0
    ctx->pc = 0x17f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
    // 0x17f2a4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x17f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_17f2a8:
    // 0x17f2a8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x17f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f2ac: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x17f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f2b0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x17f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f2b4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x17f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f2b8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x17f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17f2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2c0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17F2C0u;
    SET_GPR_U32(ctx, 31, 0x17F2C8u);
    ctx->pc = 0x17F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F2C0u;
    // 0x17f2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17F2C0u, 0x17F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F2C8u;
label_17f2c8:
    // 0x17f2c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17f2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17f2cc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F2CCu;
    {
        const bool branch_taken_0x17f2cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x17F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2CCu;
        // 0x17f2d0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f2cc) {
            ctx->pc = 0x17F2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f2a8;
        }
    }
    ctx->pc = 0x17F2D4u;
    // 0x17f2d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17f2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f2d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17f2dc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17f2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f2e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f2e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f2e4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17f2e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17F2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2ECu;
        // 0x17f2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F2F4u;
    // 0x17f2f4: 0x0  nop
    ctx->pc = 0x17f2f4u;
    // NOP
    ctx->pc = 0x17f2f8u;
}
