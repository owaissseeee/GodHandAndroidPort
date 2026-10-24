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

// Function: Setup_Field_214_Obj0000Array_620_193718
// Address: 0x193718 - 0x1937a0
void Setup_Field_214_Obj0000Array_620_193718_0x193718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup_Field_214_Obj0000Array_620_193718_0x193718");
#endif

    switch (ctx->pc) {
        case 0x193740u: goto label_193740;
        case 0x193750u: goto label_193750;
        case 0x193770u: goto label_193770;
        default: break;
    }

    ctx->pc = 0x193718u;

    // 0x193718: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19371c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x193720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193724: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x193724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x193728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19372c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x193730: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193738: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x193738u;
    SET_GPR_U32(ctx, 31, 0x193740u);
    ctx->pc = 0x19373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193738u;
    // 0x19373c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x193738u, 0x193740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193740u;
label_193740:
    // 0x193740: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x193740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193744: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x193744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x193748: 0x24424878  addiu       $v0, $v0, 0x4878
    ctx->pc = 0x193748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18552));
    // 0x19374c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19374cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_193750:
    // 0x193750: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x193750u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193754: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x193754u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193758: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x193758u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19375c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19375cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193760: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x193760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x193764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193768: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x193768u;
    SET_GPR_U32(ctx, 31, 0x193770u);
    ctx->pc = 0x19376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193768u;
    // 0x19376c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x193768u, 0x193770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193770u;
label_193770:
    // 0x193770: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x193774: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x193774u;
    {
        const bool branch_taken_0x193774 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x193778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193774u;
        // 0x193778: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193774) {
            ctx->pc = 0x193750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193750;
        }
    }
    ctx->pc = 0x19377Cu;
    // 0x19377c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19377cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193780: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x193780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193784: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x193784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19378c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19378cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193794: 0x3e00008  jr          $ra
    ctx->pc = 0x193794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193794u;
        // 0x193798: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19379Cu;
    // 0x19379c: 0x0  nop
    ctx->pc = 0x19379cu;
    // NOP
    ctx->pc = 0x1937a0u;
}
