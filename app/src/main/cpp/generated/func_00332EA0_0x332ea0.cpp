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

// Function: func_00332EA0
// Address: 0x332ea0 - 0x333048
void func_00332EA0_0x332ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332EA0_0x332ea0");
#endif

    switch (ctx->pc) {
        case 0x332f00u: goto label_332f00;
        case 0x332f30u: goto label_332f30;
        case 0x332f90u: goto label_332f90;
        case 0x332fb0u: goto label_332fb0;
        case 0x332fc0u: goto label_332fc0;
        case 0x332fe0u: goto label_332fe0;
        case 0x332fe8u: goto label_332fe8;
        case 0x332ff0u: goto label_332ff0;
        case 0x332ff8u: goto label_332ff8;
        case 0x333000u: goto label_333000;
        default: break;
    }

    ctx->pc = 0x332ea0u;

    // 0x332ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332eb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x332eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332eb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ebc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x332ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332ec0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x332EC0u;
    {
        const bool branch_taken_0x332ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x332EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EC0u;
        // 0x332ec4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ec0) {
            ctx->pc = 0x332ED8u;
            goto label_332ed8;
        }
    }
    ctx->pc = 0x332EC8u;
    // 0x332ec8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332ecc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x332ECCu;
    {
        const bool branch_taken_0x332ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332ECCu;
        // 0x332ed0: 0x24a54458  addiu       $a1, $a1, 0x4458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ecc) {
            ctx->pc = 0x332EF8u;
            goto label_332ef8;
        }
    }
    ctx->pc = 0x332ED4u;
    // 0x332ed4: 0x0  nop
    ctx->pc = 0x332ed4u;
    // NOP
label_332ed8:
    // 0x332ed8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x332ED8u;
    {
        const bool branch_taken_0x332ed8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x332EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332ED8u;
        // 0x332edc: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ed8) {
            ctx->pc = 0x332EE8u;
            goto label_332ee8;
        }
    }
    ctx->pc = 0x332EE0u;
    // 0x332ee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x332EE0u;
    {
        const bool branch_taken_0x332ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EE0u;
        // 0x332ee4: 0x24a54470  addiu       $a1, $a1, 0x4470 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ee0) {
            ctx->pc = 0x332EF8u;
            goto label_332ef8;
        }
    }
    ctx->pc = 0x332EE8u;
label_332ee8:
    // 0x332ee8: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x332EE8u;
    {
        const bool branch_taken_0x332ee8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x332ee8) {
            ctx->pc = 0x332EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332EE8u;
            // 0x332eec: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332F08u;
            goto label_332f08;
        }
    }
    ctx->pc = 0x332EF0u;
    // 0x332ef0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x332ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x332ef4: 0x24a54490  addiu       $a1, $a1, 0x4490
    ctx->pc = 0x332ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17552));
label_332ef8:
    // 0x332ef8: 0xc0cca02  jal         func_332808
    ctx->pc = 0x332EF8u;
    SET_GPR_U32(ctx, 31, 0x332F00u);
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x332EF8u, 0x332F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F00u;
label_332f00:
    // 0x332f00: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x332F00u;
    {
        const bool branch_taken_0x332f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F00u;
        // 0x332f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f00) {
            ctx->pc = 0x333028u;
            goto label_333028;
        }
    }
    ctx->pc = 0x332F08u;
label_332f08:
    // 0x332f08: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332f0c: 0x10730046  beq         $v1, $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x332F0Cu;
    {
        const bool branch_taken_0x332f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x332F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F0Cu;
        // 0x332f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f0c) {
            ctx->pc = 0x333028u;
            goto label_333028;
        }
    }
    ctx->pc = 0x332F14u;
    // 0x332f14: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x332F14u;
    {
        const bool branch_taken_0x332f14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F14u;
        // 0x332f18: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f14) {
            ctx->pc = 0x332F28u;
            goto label_332f28;
        }
    }
    ctx->pc = 0x332F1Cu;
    // 0x332f1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x332F1Cu;
    {
        const bool branch_taken_0x332f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F1Cu;
        // 0x332f20: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f1c) {
            ctx->pc = 0x333028u;
            goto label_333028;
        }
    }
    ctx->pc = 0x332F24u;
    // 0x332f24: 0x0  nop
    ctx->pc = 0x332f24u;
    // NOP
label_332f28:
    // 0x332f28: 0xc0cc3fa  jal         func_330FE8
    ctx->pc = 0x332F28u;
    SET_GPR_U32(ctx, 31, 0x332F30u);
    ctx->pc = 0x330FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330FE8u, 0x332F28u, 0x332F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F30u;
label_332f30:
    // 0x332f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x332f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f34: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x332F34u;
    {
        const bool branch_taken_0x332f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F34u;
        // 0x332f38: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f34) {
            ctx->pc = 0x333028u;
            goto label_333028;
        }
    }
    ctx->pc = 0x332F3Cu;
    // 0x332f3c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x332f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x332f40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x332f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x332f44: 0x24c69dd0  addiu       $a2, $a2, -0x6230
    ctx->pc = 0x332f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942160));
    // 0x332f48: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x332f4c: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x332f4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3D9DD0u));
    // 0x332f50: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x332f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x332f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x332f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f5c: 0xa2050044  sb          $a1, 0x44($s0)
    ctx->pc = 0x332f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x332f60: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x332f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x332f64: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x332f64u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x332f68: 0x90c80001  lbu         $t0, 0x1($a2)
    ctx->pc = 0x332f68u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x332f6c: 0x72ac0  sll         $a1, $a3, 11
    ctx->pc = 0x332f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x332f70: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x332f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x332f74: 0xa2080045  sb          $t0, 0x45($s0)
    ctx->pc = 0x332f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x332f78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x332f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x332f7c: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x332f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x332f80: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x332f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x332f84: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x332f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x332f88: 0xc0ec190  jal         func_3B0640
    ctx->pc = 0x332F88u;
    SET_GPR_U32(ctx, 31, 0x332F90u);
    ctx->pc = 0x332F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332F88u;
    // 0x332f8c: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0640u, 0x332F88u, 0x332F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F90u;
label_332f90:
    // 0x332f90: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x332f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x332f94: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x332f98: 0x26080044  addiu       $t0, $s0, 0x44
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x332f9c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x332f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x332fa0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x332fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x332fa4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x332fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x332fa8: 0xc0cc444  jal         func_331110
    ctx->pc = 0x332FA8u;
    SET_GPR_U32(ctx, 31, 0x332FB0u);
    ctx->pc = 0x332FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FA8u;
    // 0x332fac: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331110u, 0x332FA8u, 0x332FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FB0u;
label_332fb0:
    // 0x332fb0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x332FB0u;
    {
        const bool branch_taken_0x332fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332fb0) {
            ctx->pc = 0x332FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332FB0u;
            // 0x332fb4: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332FC8u;
            goto label_332fc8;
        }
    }
    ctx->pc = 0x332FB8u;
    // 0x332fb8: 0xc0cc41c  jal         func_331070
    ctx->pc = 0x332FB8u;
    SET_GPR_U32(ctx, 31, 0x332FC0u);
    ctx->pc = 0x332FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FB8u;
    // 0x332fbc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331070u, 0x332FB8u, 0x332FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FC0u;
label_332fc0:
    // 0x332fc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x332FC0u;
    {
        const bool branch_taken_0x332fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332FC0u;
        // 0x332fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fc0) {
            ctx->pc = 0x333028u;
            goto label_333028;
        }
    }
    ctx->pc = 0x332FC8u;
label_332fc8:
    // 0x332fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x332fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332fcc: 0x8c519dd4  lw          $s1, -0x622C($v0)
    ctx->pc = 0x332fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942164)));
    // 0x332fd0: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x332FD0u;
    {
        const bool branch_taken_0x332fd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x332fd0) {
            ctx->pc = 0x332FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332FD0u;
            // 0x332fd4: 0xa2130002  sb          $s3, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333020u;
            goto label_333020;
        }
    }
    ctx->pc = 0x332FD8u;
    // 0x332fd8: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x332FD8u;
    SET_GPR_U32(ctx, 31, 0x332FE0u);
    ctx->pc = 0x332FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FD8u;
    // 0x332fdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x332FD8u, 0x332FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FE0u;
label_332fe0:
    // 0x332fe0: 0xc0cc6fc  jal         func_331BF0
    ctx->pc = 0x332FE0u;
    SET_GPR_U32(ctx, 31, 0x332FE8u);
    ctx->pc = 0x331BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331BF0u, 0x332FE0u, 0x332FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FE8u;
label_332fe8:
    // 0x332fe8: 0xc0cc6b6  jal         func_331AD8
    ctx->pc = 0x332FE8u;
    SET_GPR_U32(ctx, 31, 0x332FF0u);
    ctx->pc = 0x331AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331AD8u, 0x332FE8u, 0x332FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FF0u;
label_332ff0:
    // 0x332ff0: 0xc0cc516  jal         func_331458
    ctx->pc = 0x332FF0u;
    SET_GPR_U32(ctx, 31, 0x332FF8u);
    ctx->pc = 0x332FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FF0u;
    // 0x332ff4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331458u, 0x332FF0u, 0x332FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332FF8u;
label_332ff8:
    // 0x332ff8: 0xc0cc41c  jal         func_331070
    ctx->pc = 0x332FF8u;
    SET_GPR_U32(ctx, 31, 0x333000u);
    ctx->pc = 0x332FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332FF8u;
    // 0x332ffc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331070u, 0x332FF8u, 0x333000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333000u;
label_333000:
    // 0x333000: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x333000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x333004: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x333004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x333008: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x333008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33300c: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x33300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x333010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333014: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x333014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x333018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333018u;
    {
        const bool branch_taken_0x333018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333018u;
        // 0x33301c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333018) {
            ctx->pc = 0x333024u;
            goto label_333024;
        }
    }
    ctx->pc = 0x333020u;
label_333020:
    // 0x333020: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x333020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_333024:
    // 0x333024: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x333024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_333028:
    // 0x333028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33302c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33302cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333030: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333030u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333034: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x333038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33303c: 0x3e00008  jr          $ra
    ctx->pc = 0x33303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33303Cu;
        // 0x333040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333044u;
    // 0x333044: 0x0  nop
    ctx->pc = 0x333044u;
    // NOP
    ctx->pc = 0x333048u;
}
