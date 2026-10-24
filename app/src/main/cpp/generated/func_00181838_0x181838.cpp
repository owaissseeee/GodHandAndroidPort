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

// Function: func_00181838
// Address: 0x181838 - 0x1818c0
void func_00181838_0x181838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181838_0x181838");
#endif

    switch (ctx->pc) {
        case 0x181860u: goto label_181860;
        case 0x181870u: goto label_181870;
        case 0x181890u: goto label_181890;
        default: break;
    }

    ctx->pc = 0x181838u;

    // 0x181838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x181838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18183c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18183cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x181840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181844: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x181844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x181848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18184c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x181850: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x181850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x181854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181858: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x181858u;
    SET_GPR_U32(ctx, 31, 0x181860u);
    ctx->pc = 0x18185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181858u;
    // 0x18185c: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x181858u, 0x181860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181860u;
label_181860:
    // 0x181860: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x181860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181864: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x181864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x181868: 0x24422858  addiu       $v0, $v0, 0x2858
    ctx->pc = 0x181868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10328));
    // 0x18186c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18186cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_181870:
    // 0x181870: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x181870u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181874: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x181874u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181878: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x181878u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18187c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18187cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181880: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x181880u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x181884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181888: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x181888u;
    SET_GPR_U32(ctx, 31, 0x181890u);
    ctx->pc = 0x18188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181888u;
    // 0x18188c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x181888u, 0x181890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181890u;
label_181890:
    // 0x181890: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x181890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x181894: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x181894u;
    {
        const bool branch_taken_0x181894 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x181898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181894u;
        // 0x181898: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181894) {
            ctx->pc = 0x181870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181870;
        }
    }
    ctx->pc = 0x18189Cu;
    // 0x18189c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1818a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1818a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1818a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1818a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1818a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1818ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1818acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1818b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1818b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1818B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1818B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818B4u;
        // 0x1818b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1818B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1818BCu;
    // 0x1818bc: 0x0  nop
    ctx->pc = 0x1818bcu;
    // NOP
    ctx->pc = 0x1818c0u;
}
