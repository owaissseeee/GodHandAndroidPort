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

// Function: func_00187750
// Address: 0x187750 - 0x1877d8
void func_00187750_0x187750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187750_0x187750");
#endif

    switch (ctx->pc) {
        case 0x187778u: goto label_187778;
        case 0x187788u: goto label_187788;
        case 0x1877a8u: goto label_1877a8;
        default: break;
    }

    ctx->pc = 0x187750u;

    // 0x187750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x187754: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x187754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x187758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18775c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x187760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187764: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x187764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x187768: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x187768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18776c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187770: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x187770u;
    SET_GPR_U32(ctx, 31, 0x187778u);
    ctx->pc = 0x187774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187770u;
    // 0x187774: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x187770u, 0x187778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187778u;
label_187778:
    // 0x187778: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x187778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18777c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x187780: 0x24423148  addiu       $v0, $v0, 0x3148
    ctx->pc = 0x187780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12616));
    // 0x187784: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x187784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_187788:
    // 0x187788: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x187788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18778c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18778cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187790: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x187790u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187794: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x187794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x187798: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x187798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18779c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1877A0u;
    SET_GPR_U32(ctx, 31, 0x1877A8u);
    ctx->pc = 0x1877A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877A0u;
    // 0x1877a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1877A0u, 0x1877A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877A8u;
label_1877a8:
    // 0x1877a8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1877ac: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1877ACu;
    {
        const bool branch_taken_0x1877ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1877B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877ACu;
        // 0x1877b0: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877ac) {
            ctx->pc = 0x187788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187788;
        }
    }
    ctx->pc = 0x1877B4u;
    // 0x1877b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1877b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1877b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1877b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1877bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1877bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1877c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1877c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1877c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1877c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1877c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1877c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1877cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1877CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877CCu;
        // 0x1877d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1877CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1877D4u;
    // 0x1877d4: 0x0  nop
    ctx->pc = 0x1877d4u;
    // NOP
    ctx->pc = 0x1877d8u;
}
