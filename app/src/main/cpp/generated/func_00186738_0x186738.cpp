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

// Function: func_00186738
// Address: 0x186738 - 0x1867c0
void func_00186738_0x186738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186738_0x186738");
#endif

    switch (ctx->pc) {
        case 0x186760u: goto label_186760;
        case 0x186770u: goto label_186770;
        case 0x186790u: goto label_186790;
        default: break;
    }

    ctx->pc = 0x186738u;

    // 0x186738: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18673c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18673cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x186740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186744: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x186744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x186748: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x186748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18674c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18674cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x186750: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x186750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x186754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186758: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x186758u;
    SET_GPR_U32(ctx, 31, 0x186760u);
    ctx->pc = 0x18675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186758u;
    // 0x18675c: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x186758u, 0x186760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186760u;
label_186760:
    // 0x186760: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x186760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186764: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x186764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x186768: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x186768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x18676c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18676cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_186770:
    // 0x186770: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x186770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x186774: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x186774u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x186778: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x186778u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18677c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18677cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x186780: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x186780u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x186784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186788: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x186788u;
    SET_GPR_U32(ctx, 31, 0x186790u);
    ctx->pc = 0x18678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186788u;
    // 0x18678c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x186788u, 0x186790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186790u;
label_186790:
    // 0x186790: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x186790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x186794: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x186794u;
    {
        const bool branch_taken_0x186794 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x186798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186794u;
        // 0x186798: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186794) {
            ctx->pc = 0x186770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186770;
        }
    }
    ctx->pc = 0x18679Cu;
    // 0x18679c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18679cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1867a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1867a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1867a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1867a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1867a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1867ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1867acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1867b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1867b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1867b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1867B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B4u;
        // 0x1867b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867BCu;
    // 0x1867bc: 0x0  nop
    ctx->pc = 0x1867bcu;
    // NOP
    ctx->pc = 0x1867c0u;
}
