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

// Function: InitVu0SlotArray4_1A0120
// Address: 0x1a0120 - 0x1a01a8
void InitVu0SlotArray4_1A0120_0x1a0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVu0SlotArray4_1A0120_0x1a0120");
#endif

    switch (ctx->pc) {
        case 0x1a0148u: goto label_1a0148;
        case 0x1a0158u: goto label_1a0158;
        case 0x1a0178u: goto label_1a0178;
        default: break;
    }

    ctx->pc = 0x1a0120u;

    // 0x1a0120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0124: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a0128: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a0128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a012c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a012cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a0134: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a0134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a0138: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1a0138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a013c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0140: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x1A0140u;
    SET_GPR_U32(ctx, 31, 0x1A0148u);
    ctx->pc = 0x1A0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0140u;
    // 0x1a0144: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x1A0140u, 0x1A0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0148u;
label_1a0148:
    // 0x1a0148: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a014c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a0150: 0x244269b0  addiu       $v0, $v0, 0x69B0
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27056));
    // 0x1a0154: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x1a0154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_1a0158:
    // 0x1a0158: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x1a0158u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a015c: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x1a015cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0160: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x1a0160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0164: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x1a0164u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a0168: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x1a0168u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a016c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0170: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A0170u;
    SET_GPR_U32(ctx, 31, 0x1A0178u);
    ctx->pc = 0x1A0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0170u;
    // 0x1a0174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A0170u, 0x1A0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0178u;
label_1a0178:
    // 0x1a0178: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a0178u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1a017c: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A017Cu;
    {
        const bool branch_taken_0x1a017c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A017Cu;
        // 0x1a0180: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a017c) {
            ctx->pc = 0x1A0158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0158;
        }
    }
    ctx->pc = 0x1A0184u;
    // 0x1a0184: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a0184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0188: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a018c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a018cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0194: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a0194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a019c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A019Cu;
        // 0x1a01a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A01A4u;
    // 0x1a01a4: 0x0  nop
    ctx->pc = 0x1a01a4u;
    // NOP
    ctx->pc = 0x1a01a8u;
}
