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

// Function: cOmea_ChkTreasureBox
// Address: 0x1bea40 - 0x1beb28
void cOmea_ChkTreasureBox_0x1bea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmea_ChkTreasureBox_0x1bea40");
#endif

    switch (ctx->pc) {
        case 0x1bea40u: goto label_1bea40;
        case 0x1bea44u: goto label_1bea44;
        case 0x1bea48u: goto label_1bea48;
        case 0x1bea4cu: goto label_1bea4c;
        case 0x1bea50u: goto label_1bea50;
        case 0x1bea54u: goto label_1bea54;
        case 0x1bea58u: goto label_1bea58;
        case 0x1bea5cu: goto label_1bea5c;
        case 0x1bea60u: goto label_1bea60;
        case 0x1bea64u: goto label_1bea64;
        case 0x1bea68u: goto label_1bea68;
        case 0x1bea6cu: goto label_1bea6c;
        case 0x1bea70u: goto label_1bea70;
        case 0x1bea74u: goto label_1bea74;
        case 0x1bea78u: goto label_1bea78;
        case 0x1bea7cu: goto label_1bea7c;
        case 0x1bea80u: goto label_1bea80;
        case 0x1bea84u: goto label_1bea84;
        case 0x1bea88u: goto label_1bea88;
        case 0x1bea8cu: goto label_1bea8c;
        case 0x1bea90u: goto label_1bea90;
        case 0x1bea94u: goto label_1bea94;
        case 0x1bea98u: goto label_1bea98;
        case 0x1bea9cu: goto label_1bea9c;
        case 0x1beaa0u: goto label_1beaa0;
        case 0x1beaa4u: goto label_1beaa4;
        case 0x1beaa8u: goto label_1beaa8;
        case 0x1beaacu: goto label_1beaac;
        case 0x1beab0u: goto label_1beab0;
        case 0x1beab4u: goto label_1beab4;
        case 0x1beab8u: goto label_1beab8;
        case 0x1beabcu: goto label_1beabc;
        case 0x1beac0u: goto label_1beac0;
        case 0x1beac4u: goto label_1beac4;
        case 0x1beac8u: goto label_1beac8;
        case 0x1beaccu: goto label_1beacc;
        case 0x1bead0u: goto label_1bead0;
        case 0x1bead4u: goto label_1bead4;
        case 0x1bead8u: goto label_1bead8;
        case 0x1beadcu: goto label_1beadc;
        case 0x1beae0u: goto label_1beae0;
        case 0x1beae4u: goto label_1beae4;
        case 0x1beae8u: goto label_1beae8;
        case 0x1beaecu: goto label_1beaec;
        case 0x1beaf0u: goto label_1beaf0;
        case 0x1beaf4u: goto label_1beaf4;
        case 0x1beaf8u: goto label_1beaf8;
        case 0x1beafcu: goto label_1beafc;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb04u: goto label_1beb04;
        case 0x1beb08u: goto label_1beb08;
        case 0x1beb0cu: goto label_1beb0c;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb14u: goto label_1beb14;
        case 0x1beb18u: goto label_1beb18;
        case 0x1beb1cu: goto label_1beb1c;
        case 0x1beb20u: goto label_1beb20;
        case 0x1beb24u: goto label_1beb24;
        default: break;
    }

    ctx->pc = 0x1bea40u;

label_1bea40:
    // 0x1bea40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bea44:
    // 0x1bea44: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1bea48:
    // 0x1bea48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1bea4c:
    // 0x1bea4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bea4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bea50:
    // 0x1bea50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bea54:
    // 0x1bea54: 0x9e220600  lwu         $v0, 0x600($s1)
    ctx->pc = 0x1bea54u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1bea58:
    // 0x1bea58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bea58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bea5c:
    // 0x1bea5c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1bea60:
    if (ctx->pc == 0x1BEA60u) {
        ctx->pc = 0x1BEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA5Cu;
        // 0x1bea60: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA64u;
        goto label_1bea64;
    }
    ctx->pc = 0x1BEA5Cu;
    {
        const bool branch_taken_0x1bea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA5Cu;
        // 0x1bea60: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea5c) {
            ctx->pc = 0x1BEB14u;
            goto label_1beb14;
        }
    }
    ctx->pc = 0x1BEA64u;
label_1bea64:
    // 0x1bea64: 0xc0b6dac  jal         func_2DB6B0
label_1bea68:
    if (ctx->pc == 0x1BEA68u) {
        ctx->pc = 0x1BEA6Cu;
        goto label_1bea6c;
    }
    ctx->pc = 0x1BEA64u;
    SET_GPR_U32(ctx, 31, 0x1BEA6Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BEA64u, 0x1BEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEA6Cu;
label_1bea6c:
    // 0x1bea6c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1bea6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1bea70:
    // 0x1bea70: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bea70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bea74:
    // 0x1bea74: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1bea74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bea78:
    // 0x1bea78: 0xa0f809  jalr        $a1
label_1bea7c:
    if (ctx->pc == 0x1BEA7Cu) {
        ctx->pc = 0x1BEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA78u;
        // 0x1bea7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA80u;
        goto label_1bea80;
    }
    ctx->pc = 0x1BEA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1BEA80u);
        ctx->pc = 0x1BEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA78u;
        // 0x1bea7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA78u, 0x1BEA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEA80u;
label_1bea80:
    // 0x1bea80: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1bea84:
    // 0x1bea84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bea84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bea88:
    // 0x1bea88: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bea88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bea8c:
    // 0x1bea8c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bea90:
    // 0x1bea90: 0x40f809  jalr        $v0
label_1bea94:
    if (ctx->pc == 0x1BEA94u) {
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEA98u;
        goto label_1bea98;
    }
    ctx->pc = 0x1BEA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEA98u);
        ctx->pc = 0x1BEA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA90u;
        // 0x1bea94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA90u, 0x1BEA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEA98u;
label_1bea98:
    // 0x1bea98: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1bea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bea9c:
    // 0x1bea9c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1bea9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1beaa0:
    // 0x1beaa0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1beaa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1beaa4:
    // 0x1beaa4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1beaa4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1beaa8:
    // 0x1beaa8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1beaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1beaac:
    // 0x1beaac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1beaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1beab0:
    // 0x1beab0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1beab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1beab4:
    // 0x1beab4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1beab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1beab8:
    // 0x1beab8: 0xc07df8a  jal         func_1F7E28
label_1beabc:
    if (ctx->pc == 0x1BEABCu) {
        ctx->pc = 0x1BEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAB8u;
        // 0x1beabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAC0u;
        goto label_1beac0;
    }
    ctx->pc = 0x1BEAB8u;
    SET_GPR_U32(ctx, 31, 0x1BEAC0u);
    ctx->pc = 0x1BEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEAB8u;
    // 0x1beabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1BEAB8u, 0x1BEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAC0u;
label_1beac0:
    // 0x1beac0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1beac4:
    // 0x1beac4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1beac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1beac8:
    // 0x1beac8: 0x0  nop
    ctx->pc = 0x1beac8u;
    // NOP
label_1beacc:
    // 0x1beacc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1beaccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bead0:
    // 0x1bead0: 0x0  nop
    ctx->pc = 0x1bead0u;
    // NOP
label_1bead4:
    // 0x1bead4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_1bead8:
    if (ctx->pc == 0x1BEAD8u) {
        ctx->pc = 0x1BEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAD4u;
        // 0x1bead8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEADCu;
        goto label_1beadc;
    }
    ctx->pc = 0x1BEAD4u;
    {
        const bool branch_taken_0x1bead4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAD4u;
        // 0x1bead8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bead4) {
            ctx->pc = 0x1BEB10u;
            goto label_1beb10;
        }
    }
    ctx->pc = 0x1BEADCu;
label_1beadc:
    // 0x1beadc: 0xc07f0f4  jal         func_1FC3D0
label_1beae0:
    if (ctx->pc == 0x1BEAE0u) {
        ctx->pc = 0x1BEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEADCu;
        // 0x1beae0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAE4u;
        goto label_1beae4;
    }
    ctx->pc = 0x1BEADCu;
    SET_GPR_U32(ctx, 31, 0x1BEAE4u);
    ctx->pc = 0x1BEAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEADCu;
    // 0x1beae0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1BEADCu, 0x1BEAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1beae8:
    if (ctx->pc == 0x1BEAE8u) {
        ctx->pc = 0x1BEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAE4u;
        // 0x1beae8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEAECu;
        goto label_1beaec;
    }
    ctx->pc = 0x1BEAE4u;
    {
        const bool branch_taken_0x1beae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAE4u;
        // 0x1beae8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beae4) {
            ctx->pc = 0x1BEB10u;
            goto label_1beb10;
        }
    }
    ctx->pc = 0x1BEAECu;
label_1beaec:
    // 0x1beaec: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1beaecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1beaf0:
    // 0x1beaf0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1beaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1beaf4:
    // 0x1beaf4: 0x2508eb28  addiu       $t0, $t0, -0x14D8
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961960));
label_1beaf8:
    // 0x1beaf8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1beaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1beafc:
    // 0x1beafc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1beafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1beb00:
    // 0x1beb00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1beb00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1beb04:
    // 0x1beb04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1beb04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1beb08:
    // 0x1beb08: 0xc07de16  jal         func_1F7858
label_1beb0c:
    if (ctx->pc == 0x1BEB0Cu) {
        ctx->pc = 0x1BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB08u;
        // 0x1beb0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB10u;
        goto label_1beb10;
    }
    ctx->pc = 0x1BEB08u;
    SET_GPR_U32(ctx, 31, 0x1BEB10u);
    ctx->pc = 0x1BEB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB08u;
    // 0x1beb0c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1BEB08u, 0x1BEB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB10u;
label_1beb10:
    // 0x1beb10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1beb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1beb14:
    // 0x1beb14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1beb14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1beb18:
    // 0x1beb18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1beb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1beb1c:
    // 0x1beb1c: 0x3e00008  jr          $ra
label_1beb20:
    if (ctx->pc == 0x1BEB20u) {
        ctx->pc = 0x1BEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB1Cu;
        // 0x1beb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEB24u;
        goto label_1beb24;
    }
    ctx->pc = 0x1BEB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB1Cu;
        // 0x1beb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB24u;
label_1beb24:
    // 0x1beb24: 0x0  nop
    ctx->pc = 0x1beb24u;
    // NOP
    ctx->pc = 0x1beb28u;
}
