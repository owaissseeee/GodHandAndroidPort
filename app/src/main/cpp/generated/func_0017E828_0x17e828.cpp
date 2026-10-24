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

// Function: func_0017E828
// Address: 0x17e828 - 0x17e8b0
void func_0017E828_0x17e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017E828_0x17e828");
#endif

    switch (ctx->pc) {
        case 0x17e850u: goto label_17e850;
        case 0x17e860u: goto label_17e860;
        case 0x17e880u: goto label_17e880;
        default: break;
    }

    ctx->pc = 0x17e828u;

    // 0x17e828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e82c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17e830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e834: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17e838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e83c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17e840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17e840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e848: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x17E848u;
    SET_GPR_U32(ctx, 31, 0x17E850u);
    ctx->pc = 0x17E84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E848u;
    // 0x17e84c: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x17E848u, 0x17E850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E850u;
label_17e850:
    // 0x17e850: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17e854: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17e858: 0x244220b0  addiu       $v0, $v0, 0x20B0
    ctx->pc = 0x17e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8368));
    // 0x17e85c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x17e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_17e860:
    // 0x17e860: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x17e860u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e864: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x17e864u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e868: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x17e868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e86c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x17e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e870: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x17e870u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17e874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e878: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x17E878u;
    SET_GPR_U32(ctx, 31, 0x17E880u);
    ctx->pc = 0x17E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E878u;
    // 0x17e87c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x17E878u, 0x17E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E880u;
label_17e880:
    // 0x17e880: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17e880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17e884: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E884u;
    {
        const bool branch_taken_0x17e884 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x17E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E884u;
        // 0x17e888: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e884) {
            ctx->pc = 0x17E860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e860;
        }
    }
    ctx->pc = 0x17E88Cu;
    // 0x17e88c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17e88cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e890: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17e890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e894: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17e894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e89c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17e89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8A4u;
        // 0x17e8a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E8ACu;
    // 0x17e8ac: 0x0  nop
    ctx->pc = 0x17e8acu;
    // NOP
    ctx->pc = 0x17e8b0u;
}
