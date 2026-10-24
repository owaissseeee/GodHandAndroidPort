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

// Function: func_002AFED0
// Address: 0x2afed0 - 0x2b0028
void func_002AFED0_0x2afed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AFED0_0x2afed0");
#endif

    switch (ctx->pc) {
        case 0x2aff28u: goto label_2aff28;
        case 0x2aff38u: goto label_2aff38;
        case 0x2aff50u: goto label_2aff50;
        case 0x2aff70u: goto label_2aff70;
        case 0x2aff78u: goto label_2aff78;
        case 0x2aff84u: goto label_2aff84;
        case 0x2affbcu: goto label_2affbc;
        case 0x2affc8u: goto label_2affc8;
        default: break;
    }

    ctx->pc = 0x2afed0u;

    // 0x2afed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2afed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2afed4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2afed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2afed8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2afed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2afedc: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2afedcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2afee0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2afee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2afee4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2afee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afee8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2afee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2afeec: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2afeecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2afef0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2afef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2afef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2afef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2afef8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2afef8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2afefc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2afefcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff00: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2aff00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2aff04: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2aff04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2aff08: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2aff08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2aff0c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2aff0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2aff10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2aff10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2aff14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2aff14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff18: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2aff18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2aff1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aff20: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2AFF20u;
    SET_GPR_U32(ctx, 31, 0x2AFF28u);
    ctx->pc = 0x2AFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF20u;
    // 0x2aff24: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2AFF20u, 0x2AFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF28u;
label_2aff28:
    // 0x2aff28: 0x8e0423a4  lw          $a0, 0x23A4($s0)
    ctx->pc = 0x2aff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9124)));
    // 0x2aff2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2aff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff30: 0xc0abac0  jal         func_2AEB00
    ctx->pc = 0x2AFF30u;
    SET_GPR_U32(ctx, 31, 0x2AFF38u);
    ctx->pc = 0x2AFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF30u;
    // 0x2aff34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB00u, 0x2AFF30u, 0x2AFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF38u;
label_2aff38:
    // 0x2aff38: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2aff38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff3c: 0x680002e  bltz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2AFF3Cu;
    {
        const bool branch_taken_0x2aff3c = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x2AFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF3Cu;
        // 0x2aff40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff3c) {
            ctx->pc = 0x2AFFF8u;
            goto label_2afff8;
        }
    }
    ctx->pc = 0x2AFF44u;
    // 0x2aff44: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2AFF44u;
    {
        const bool branch_taken_0x2aff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFF44u;
        // 0x2aff48: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aff44) {
            ctx->pc = 0x2AFFDCu;
            goto label_2affdc;
        }
    }
    ctx->pc = 0x2AFF4Cu;
    // 0x2aff4c: 0x0  nop
    ctx->pc = 0x2aff4cu;
    // NOP
label_2aff50:
    // 0x2aff50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2aff54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2aff58: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2aff58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2aff5c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2aff5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2aff60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff64: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2aff64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff68: 0xc0abf12  jal         func_2AFC48
    ctx->pc = 0x2AFF68u;
    SET_GPR_U32(ctx, 31, 0x2AFF70u);
    ctx->pc = 0x2AFF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF68u;
    // 0x2aff6c: 0x2934823  subu        $t1, $s4, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC48u, 0x2AFF68u, 0x2AFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF70u;
label_2aff70:
    // 0x2aff70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2aff70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aff78:
    // 0x2aff78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aff78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aff7c: 0xc0ac242  jal         func_2B0908
    ctx->pc = 0x2AFF7Cu;
    SET_GPR_U32(ctx, 31, 0x2AFF84u);
    ctx->pc = 0x2AFF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFF7Cu;
    // 0x2aff80: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0908u, 0x2AFF7Cu, 0x2AFF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFF84u;
label_2aff84:
    // 0x2aff84: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2aff84u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2aff88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aff88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aff8c: 0x0  nop
    ctx->pc = 0x2aff8cu;
    // NOP
    // 0x2aff90: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2aff90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aff94: 0x0  nop
    ctx->pc = 0x2aff94u;
    // NOP
    // 0x2aff98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AFF98u;
    {
        const bool branch_taken_0x2aff98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2aff98) {
            ctx->pc = 0x2AFFB4u;
            goto label_2affb4;
        }
    }
    ctx->pc = 0x2AFFA0u;
    // 0x2affa0: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2affa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2affa4: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x2affa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2affa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2affa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2affac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2affacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2affb0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2affb0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2affb4:
    // 0x2affb4: 0xc0abc86  jal         func_2AF218
    ctx->pc = 0x2AFFB4u;
    SET_GPR_U32(ctx, 31, 0x2AFFBCu);
    ctx->pc = 0x2AFFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFB4u;
    // 0x2affb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF218u, 0x2AFFB4u, 0x2AFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFBCu;
label_2affbc:
    // 0x2affbc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x2affbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2affc0: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2AFFC0u;
    SET_GPR_U32(ctx, 31, 0x2AFFC8u);
    ctx->pc = 0x2AFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AFFC0u;
    // 0x2affc4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2AFFC0u, 0x2AFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AFFC8u;
label_2affc8:
    // 0x2affc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2affc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2affcc: 0x293182a  slt         $v1, $s4, $s3
    ctx->pc = 0x2affccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2affd0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFFD0u;
    {
        const bool branch_taken_0x2affd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFD0u;
        // 0x2affd4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affd0) {
            ctx->pc = 0x2AFFF8u;
            goto label_2afff8;
        }
    }
    ctx->pc = 0x2AFFD8u;
    // 0x2affd8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2affd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2affdc:
    // 0x2affdc: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2affdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2affe0: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2AFFE0u;
    {
        const bool branch_taken_0x2affe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFE0u;
        // 0x2affe4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2affe0) {
            ctx->pc = 0x2AFF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aff50;
        }
    }
    ctx->pc = 0x2AFFE8u;
    // 0x2affe8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2affe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2affec: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2affecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2afff0: 0x1462ffe1  bne         $v1, $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2AFFF0u;
    {
        const bool branch_taken_0x2afff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AFFF0u;
        // 0x2afff4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afff0) {
            ctx->pc = 0x2AFF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aff78;
        }
    }
    ctx->pc = 0x2AFFF8u;
label_2afff8:
    // 0x2afff8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2afff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2afffc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2afffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0000: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b0000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0004: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b0004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0008: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b0008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b000c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b000cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0010: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2b0010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0018: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2b0018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b001c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2b001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0020: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0020u;
        // 0x2b0024: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0028u;
}
