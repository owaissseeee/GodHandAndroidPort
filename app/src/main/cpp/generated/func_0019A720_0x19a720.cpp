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

// Function: func_0019A720
// Address: 0x19a720 - 0x19a7a8
void func_0019A720_0x19a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019A720_0x19a720");
#endif

    switch (ctx->pc) {
        case 0x19a748u: goto label_19a748;
        case 0x19a758u: goto label_19a758;
        case 0x19a778u: goto label_19a778;
        default: break;
    }

    ctx->pc = 0x19a720u;

    // 0x19a720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19a724: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19a728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a72c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19a730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19a730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19a734: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19a738: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a740: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19A740u;
    SET_GPR_U32(ctx, 31, 0x19A748u);
    ctx->pc = 0x19A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A740u;
    // 0x19a744: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19A740u, 0x19A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A748u;
label_19a748:
    // 0x19a748: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19a74c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19a750: 0x24425548  addiu       $v0, $v0, 0x5548
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
    // 0x19a754: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19a754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19a758:
    // 0x19a758: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19a758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a75c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a760: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19a760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a764: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19a764u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a768: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19a768u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19a76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a770: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19A770u;
    SET_GPR_U32(ctx, 31, 0x19A778u);
    ctx->pc = 0x19A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A770u;
    // 0x19a774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19A770u, 0x19A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A778u;
label_19a778:
    // 0x19a778: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19a778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19a77c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19A77Cu;
    {
        const bool branch_taken_0x19a77c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A77Cu;
        // 0x19a780: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a77c) {
            ctx->pc = 0x19A758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a758;
        }
    }
    ctx->pc = 0x19A784u;
    // 0x19a784: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a788: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19a788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a78c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19a78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19a790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a794: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19a794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a79c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A79Cu;
        // 0x19a7a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A7A4u;
    // 0x19a7a4: 0x0  nop
    ctx->pc = 0x19a7a4u;
    // NOP
    ctx->pc = 0x19a7a8u;
}
