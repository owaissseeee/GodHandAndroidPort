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

// Function: func_0022ACE0
// Address: 0x22ace0 - 0x22af90
void func_0022ACE0_0x22ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022ACE0_0x22ace0");
#endif

    switch (ctx->pc) {
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ade4u: goto label_22ade4;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae5cu: goto label_22ae5c;
        case 0x22ae7cu: goto label_22ae7c;
        case 0x22ae84u: goto label_22ae84;
        case 0x22ae94u: goto label_22ae94;
        case 0x22aea8u: goto label_22aea8;
        case 0x22aeb4u: goto label_22aeb4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aee8u: goto label_22aee8;
        case 0x22af10u: goto label_22af10;
        case 0x22af20u: goto label_22af20;
        case 0x22af30u: goto label_22af30;
        case 0x22af3cu: goto label_22af3c;
        default: break;
    }

    ctx->pc = 0x22ace0u;

    // 0x22ace0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ace4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22ace8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22ace8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x22acec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22acecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x22acf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22acf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22acf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22acf8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x22acfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ad00: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22ad00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22ad04: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x22ad04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ad08: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22ad0c: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x22ad0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22ad10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22ad14: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AD14u;
    {
        const bool branch_taken_0x22ad14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD14u;
        // 0x22ad18: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad14) {
            ctx->pc = 0x22AD30u;
            goto label_22ad30;
        }
    }
    ctx->pc = 0x22AD1Cu;
    // 0x22ad1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ad20: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x22AD20u;
    {
        const bool branch_taken_0x22ad20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD20u;
        // 0x22ad24: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad20) {
            ctx->pc = 0x22AE3Cu;
            goto label_22ae3c;
        }
    }
    ctx->pc = 0x22AD28u;
    // 0x22ad28: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x22AD28u;
    {
        const bool branch_taken_0x22ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD28u;
        // 0x22ad2c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad28) {
            ctx->pc = 0x22AF40u;
            goto label_22af40;
        }
    }
    ctx->pc = 0x22AD30u;
label_22ad30:
    // 0x22ad30: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22AD30u;
    SET_GPR_U32(ctx, 31, 0x22AD38u);
    ctx->pc = 0x22AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD30u;
    // 0x22ad34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22AD30u, 0x22AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD38u;
label_22ad38:
    // 0x22ad38: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x22AD38u;
    SET_GPR_U32(ctx, 31, 0x22AD40u);
    ctx->pc = 0x22AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD38u;
    // 0x22ad3c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x22AD38u, 0x22AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD40u;
label_22ad40:
    // 0x22ad40: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x22ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ad44: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x22ad48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ad48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad4c: 0x0  nop
    ctx->pc = 0x22ad4cu;
    // NOP
    // 0x22ad50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22ad50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad54: 0x0  nop
    ctx->pc = 0x22ad54u;
    // NOP
    // 0x22ad58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22AD58u;
    {
        const bool branch_taken_0x22ad58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD58u;
        // 0x22ad5c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad58) {
            ctx->pc = 0x22AD64u;
            goto label_22ad64;
        }
    }
    ctx->pc = 0x22AD60u;
    // 0x22ad60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ad60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ad64:
    // 0x22ad64: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x22ad68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ad68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ad6c: 0x0  nop
    ctx->pc = 0x22ad6cu;
    // NOP
    // 0x22ad70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ad70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ad74: 0x0  nop
    ctx->pc = 0x22ad74u;
    // NOP
    // 0x22ad78: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x22AD78u;
    {
        const bool branch_taken_0x22ad78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ad78) {
            ctx->pc = 0x22AD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AD78u;
            // 0x22ad7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AD80u;
            goto label_22ad80;
        }
    }
    ctx->pc = 0x22AD80u;
label_22ad80:
    // 0x22ad80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22AD80u;
    {
        const bool branch_taken_0x22ad80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD80u;
        // 0x22ad84: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad80) {
            ctx->pc = 0x22ADC8u;
            goto label_22adc8;
        }
    }
    ctx->pc = 0x22AD88u;
    // 0x22ad88: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22ad8c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22ad90: 0x8c430dd0  lw          $v1, 0xDD0($v0)
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3536)));
    // 0x22ad94: 0x8c450dd4  lw          $a1, 0xDD4($v0)
    ctx->pc = 0x22ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3540)));
    // 0x22ad98: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22ad98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ad9c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22AD9Cu;
    SET_GPR_U32(ctx, 31, 0x22ADA4u);
    ctx->pc = 0x22ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD9Cu;
    // 0x22ada0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22AD9Cu, 0x22ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADA4u;
label_22ada4:
    // 0x22ada4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ada8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADA8u;
    {
        const bool branch_taken_0x22ada8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADA8u;
        // 0x22adac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ada8) {
            ctx->pc = 0x22ADC0u;
            goto label_22adc0;
        }
    }
    ctx->pc = 0x22ADB0u;
    // 0x22adb0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22adb4: 0x8c620dd4  lw          $v0, 0xDD4($v1)
    ctx->pc = 0x22adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3540)));
    // 0x22adb8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22adb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22adbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22adc0:
    // 0x22adc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22ADC0u;
    {
        const bool branch_taken_0x22adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADC0u;
        // 0x22adc4: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22adc0) {
            ctx->pc = 0x22AE00u;
            goto label_22ae00;
        }
    }
    ctx->pc = 0x22ADC8u;
label_22adc8:
    // 0x22adc8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x22adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22adcc: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x22adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x22add0: 0x8c430dc4  lw          $v1, 0xDC4($v0)
    ctx->pc = 0x22add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3524)));
    // 0x22add4: 0x8c450dc8  lw          $a1, 0xDC8($v0)
    ctx->pc = 0x22add4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3528)));
    // 0x22add8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x22add8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22addc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x22ADDCu;
    SET_GPR_U32(ctx, 31, 0x22ADE4u);
    ctx->pc = 0x22ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADDCu;
    // 0x22ade0: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x22ADDCu, 0x22ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADE4u;
label_22ade4:
    // 0x22ade4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x22ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22ade8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ADE8u;
    {
        const bool branch_taken_0x22ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22ade8) {
            ctx->pc = 0x22ADECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ADE8u;
            // 0x22adec: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AE00u;
            goto label_22ae00;
        }
    }
    ctx->pc = 0x22ADF0u;
    // 0x22adf0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22adf4: 0x8c620dcc  lw          $v0, 0xDCC($v1)
    ctx->pc = 0x22adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3532)));
    // 0x22adf8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22adfc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x22adfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_22ae00:
    // 0x22ae00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22ae00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ae04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22ae04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22ae08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae0c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22ae0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ae18: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22AE18u;
    SET_GPR_U32(ctx, 31, 0x22AE20u);
    ctx->pc = 0x22AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE18u;
    // 0x22ae1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22AE18u, 0x22AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE20u;
label_22ae20:
    // 0x22ae20: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x22ae20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22ae24: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x22ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22ae28: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x22ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x22ae2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ae30: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22ae30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22ae34: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x22ae34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ae38: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x22ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_22ae3c:
    // 0x22ae3c: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x22ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x22ae40: 0x8e0405f0  lw          $a0, 0x5F0($s0)
    ctx->pc = 0x22ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22ae44: 0xae0216dc  sw          $v0, 0x16DC($s0)
    ctx->pc = 0x22ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5852), GPR_U32(ctx, 2));
    // 0x22ae48: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x22AE48u;
    {
        const bool branch_taken_0x22ae48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE48u;
        // 0x22ae4c: 0xae0316e0  sw          $v1, 0x16E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae48) {
            ctx->pc = 0x22AE7Cu;
            goto label_22ae7c;
        }
    }
    ctx->pc = 0x22AE50u;
    // 0x22ae50: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x22ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x22ae54: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22AE54u;
    SET_GPR_U32(ctx, 31, 0x22AE5Cu);
    ctx->pc = 0x22AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE54u;
    // 0x22ae58: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22AE54u, 0x22AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE5Cu;
label_22ae5c:
    // 0x22ae5c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ae60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae64: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22ae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22ae68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22ae68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22ae6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ae6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ae70: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22ae74: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22AE74u;
    SET_GPR_U32(ctx, 31, 0x22AE7Cu);
    ctx->pc = 0x22AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE74u;
    // 0x22ae78: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22AE74u, 0x22AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE7Cu;
label_22ae7c:
    // 0x22ae7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22AE7Cu;
    SET_GPR_U32(ctx, 31, 0x22AE84u);
    ctx->pc = 0x22AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE7Cu;
    // 0x22ae80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22AE7Cu, 0x22AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE84u;
label_22ae84:
    // 0x22ae84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AE84u;
    {
        const bool branch_taken_0x22ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae84) {
            ctx->pc = 0x22AE94u;
            goto label_22ae94;
        }
    }
    ctx->pc = 0x22AE8Cu;
    // 0x22ae8c: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x22AE8Cu;
    SET_GPR_U32(ctx, 31, 0x22AE94u);
    ctx->pc = 0x22AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE8Cu;
    // 0x22ae90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x22AE8Cu, 0x22AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE94u;
label_22ae94:
    // 0x22ae94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ae98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22ae98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22ae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aea0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22AEA0u;
    SET_GPR_U32(ctx, 31, 0x22AEA8u);
    ctx->pc = 0x22AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEA0u;
    // 0x22aea4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22AEA0u, 0x22AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEA8u;
label_22aea8:
    // 0x22aea8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22aea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22aeac: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22AEACu;
    SET_GPR_U32(ctx, 31, 0x22AEB4u);
    ctx->pc = 0x22AEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEACu;
    // 0x22aeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22AEACu, 0x22AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEB4u;
label_22aeb4:
    // 0x22aeb4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22aeb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22aeb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22aebc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x22AEBCu;
    {
        const bool branch_taken_0x22aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aebc) {
            ctx->pc = 0x22AEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AEBCu;
            // 0x22aec0: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AEECu;
            goto label_22aeec;
        }
    }
    ctx->pc = 0x22AEC4u;
    // 0x22aec4: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x22aec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x22aec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AEC8u;
    {
        const bool branch_taken_0x22aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEC8u;
        // 0x22aecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aec8) {
            ctx->pc = 0x22AEE0u;
            goto label_22aee0;
        }
    }
    ctx->pc = 0x22AED0u;
    // 0x22aed0: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22AED0u;
    SET_GPR_U32(ctx, 31, 0x22AED8u);
    ctx->pc = 0x22AED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AED0u;
    // 0x22aed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22AED0u, 0x22AED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AED8u;
label_22aed8:
    // 0x22aed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AED8u;
    {
        const bool branch_taken_0x22aed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AED8u;
        // 0x22aedc: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aed8) {
            ctx->pc = 0x22AEECu;
            goto label_22aeec;
        }
    }
    ctx->pc = 0x22AEE0u;
label_22aee0:
    // 0x22aee0: 0xc09a98e  jal         func_26A638
    ctx->pc = 0x22AEE0u;
    SET_GPR_U32(ctx, 31, 0x22AEE8u);
    ctx->pc = 0x22AEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEE0u;
    // 0x22aee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A638u, 0x22AEE0u, 0x22AEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEE8u;
label_22aee8:
    // 0x22aee8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22aee8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22aeec:
    // 0x22aeec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22aeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22aef0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x22AEF0u;
    {
        const bool branch_taken_0x22aef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aef0) {
            ctx->pc = 0x22AEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AEF0u;
            // 0x22aef4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AF40u;
            goto label_22af40;
        }
    }
    ctx->pc = 0x22AEF8u;
    // 0x22aef8: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x22aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x22aefc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22AEFCu;
    {
        const bool branch_taken_0x22aefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEFCu;
        // 0x22af00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aefc) {
            ctx->pc = 0x22AF28u;
            goto label_22af28;
        }
    }
    ctx->pc = 0x22AF04u;
    // 0x22af04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22af04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af08: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x22AF08u;
    SET_GPR_U32(ctx, 31, 0x22AF10u);
    ctx->pc = 0x22AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF08u;
    // 0x22af0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x22AF08u, 0x22AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF10u;
label_22af10:
    // 0x22af10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22af18: 0xc09aa4e  jal         func_26A938
    ctx->pc = 0x22AF18u;
    SET_GPR_U32(ctx, 31, 0x22AF20u);
    ctx->pc = 0x22AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF18u;
    // 0x22af1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A938u, 0x22AF18u, 0x22AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF20u;
label_22af20:
    // 0x22af20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AF20u;
    {
        const bool branch_taken_0x22af20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF20u;
        // 0x22af24: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af20) {
            ctx->pc = 0x22AF40u;
            goto label_22af40;
        }
    }
    ctx->pc = 0x22AF28u;
label_22af28:
    // 0x22af28: 0xc09aa0e  jal         func_26A838
    ctx->pc = 0x22AF28u;
    SET_GPR_U32(ctx, 31, 0x22AF30u);
    ctx->pc = 0x22AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF28u;
    // 0x22af2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A838u, 0x22AF28u, 0x22AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF30u;
label_22af30:
    // 0x22af30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22af30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af34: 0xc09aa0e  jal         func_26A838
    ctx->pc = 0x22AF34u;
    SET_GPR_U32(ctx, 31, 0x22AF3Cu);
    ctx->pc = 0x22AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF34u;
    // 0x22af38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A838u, 0x22AF34u, 0x22AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF3Cu;
label_22af3c:
    // 0x22af3c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22af3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_22af40:
    // 0x22af40: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22af40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22af44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AF44u;
    {
        const bool branch_taken_0x22af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF44u;
        // 0x22af48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af44) {
            ctx->pc = 0x22AF50u;
            goto label_22af50;
        }
    }
    ctx->pc = 0x22AF4Cu;
    // 0x22af4c: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22af50:
    // 0x22af50: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22af54: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AF54u;
    {
        const bool branch_taken_0x22af54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af54) {
            ctx->pc = 0x22AF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AF54u;
            // 0x22af58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AF74u;
            goto label_22af74;
        }
    }
    ctx->pc = 0x22AF5Cu;
    // 0x22af5c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22af60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22af60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22af64: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22af64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22af68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22af68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22af6c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22af6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22af70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22af70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22af74:
    // 0x22af74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22af74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22af78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22af78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22af7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22af7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22af80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22af80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22af84: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22af88: 0x3e00008  jr          $ra
    ctx->pc = 0x22AF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF88u;
        // 0x22af8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AF90u;
}
