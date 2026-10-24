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

// Function: cScenario_endExtraGame
// Address: 0x2c4868 - 0x2c4940
void cScenario_endExtraGame_0x2c4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_endExtraGame_0x2c4868");
#endif

    switch (ctx->pc) {
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48e0u: goto label_2c48e0;
        case 0x2c4908u: goto label_2c4908;
        default: break;
    }

    ctx->pc = 0x2c4868u;

    // 0x2c4868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c486c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4870: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c4874: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c4878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c487c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c487cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c4880: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2c4880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c4884: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C4884u;
    {
        const bool branch_taken_0x2c4884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4884) {
            ctx->pc = 0x2C4888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4884u;
            // 0x2c4888: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C492Cu;
            goto label_2c492c;
        }
    }
    ctx->pc = 0x2C488Cu;
    // 0x2c488c: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x2c488cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4890: 0x94910016  lhu         $s1, 0x16($a0)
    ctx->pc = 0x2c4890u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2c4894: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2c4894u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c4898: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2c4898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c489c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C489Cu;
    SET_GPR_U32(ctx, 31, 0x2C48A4u);
    ctx->pc = 0x2C48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C489Cu;
    // 0x2c48a0: 0xc4940010  lwc1        $f20, 0x10($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C489Cu, 0x2C48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48A4u;
label_2c48a4:
    // 0x2c48a4: 0x8450054a  lh          $s0, 0x54A($v0)
    ctx->pc = 0x2c48a4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x2c48a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c48ac: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x2c48b0: 0xc0aff20  jal         func_2BFC80
    ctx->pc = 0x2C48B0u;
    SET_GPR_U32(ctx, 31, 0x2C48B8u);
    ctx->pc = 0x2C48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C48B0u;
    // 0x2c48b4: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFC80u, 0x2C48B0u, 0x2C48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48B8u;
label_2c48b8:
    // 0x2c48b8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C48B8u;
    {
        const bool branch_taken_0x2c48b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48B8u;
        // 0x2c48bc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48b8) {
            ctx->pc = 0x2C48E8u;
            goto label_2c48e8;
        }
    }
    ctx->pc = 0x2C48C0u;
    // 0x2c48c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c48c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48c4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x2c48c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c48c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c48cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c48ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c48d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48d4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2c48d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c48d8: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x2C48D8u;
    SET_GPR_U32(ctx, 31, 0x2C48E0u);
    ctx->pc = 0x2C48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C48D8u;
    // 0x2c48dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C48D8u, 0x2C48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48E0u;
label_2c48e0:
    // 0x2c48e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C48E0u;
    {
        const bool branch_taken_0x2c48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48E0u;
        // 0x2c48e4: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48e0) {
            ctx->pc = 0x2C490Cu;
            goto label_2c490c;
        }
    }
    ctx->pc = 0x2C48E8u;
label_2c48e8:
    // 0x2c48e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c48e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48ec: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x2c48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x2c48f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c48f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c48f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c48f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c48f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c48fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c48fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4900: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x2C4900u;
    SET_GPR_U32(ctx, 31, 0x2C4908u);
    ctx->pc = 0x2C4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4900u;
    // 0x2c4904: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C4900u, 0x2C4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4908u;
label_2c4908:
    // 0x2c4908: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2c4908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
label_2c490c:
    // 0x2c490c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2c490cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2c4910: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x2c4910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31268)));
    // 0x2c4914: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2c4914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2c4918: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c4918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c491c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c491cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c4920: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c4920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4924: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x2c4924u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 3));
    // 0x2c4928: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c492c:
    // 0x2c492c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c492cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4934: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4938: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4938u;
        // 0x2c493c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4940u;
}
