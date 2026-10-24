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

// Function: func_001ADC38
// Address: 0x1adc38 - 0x1add20
void func_001ADC38_0x1adc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ADC38_0x1adc38");
#endif

    switch (ctx->pc) {
        case 0x1adc38u: goto label_1adc38;
        case 0x1adc3cu: goto label_1adc3c;
        case 0x1adc40u: goto label_1adc40;
        case 0x1adc44u: goto label_1adc44;
        case 0x1adc48u: goto label_1adc48;
        case 0x1adc4cu: goto label_1adc4c;
        case 0x1adc50u: goto label_1adc50;
        case 0x1adc54u: goto label_1adc54;
        case 0x1adc58u: goto label_1adc58;
        case 0x1adc5cu: goto label_1adc5c;
        case 0x1adc60u: goto label_1adc60;
        case 0x1adc64u: goto label_1adc64;
        case 0x1adc68u: goto label_1adc68;
        case 0x1adc6cu: goto label_1adc6c;
        case 0x1adc70u: goto label_1adc70;
        case 0x1adc74u: goto label_1adc74;
        case 0x1adc78u: goto label_1adc78;
        case 0x1adc7cu: goto label_1adc7c;
        case 0x1adc80u: goto label_1adc80;
        case 0x1adc84u: goto label_1adc84;
        case 0x1adc88u: goto label_1adc88;
        case 0x1adc8cu: goto label_1adc8c;
        case 0x1adc90u: goto label_1adc90;
        case 0x1adc94u: goto label_1adc94;
        case 0x1adc98u: goto label_1adc98;
        case 0x1adc9cu: goto label_1adc9c;
        case 0x1adca0u: goto label_1adca0;
        case 0x1adca4u: goto label_1adca4;
        case 0x1adca8u: goto label_1adca8;
        case 0x1adcacu: goto label_1adcac;
        case 0x1adcb0u: goto label_1adcb0;
        case 0x1adcb4u: goto label_1adcb4;
        case 0x1adcb8u: goto label_1adcb8;
        case 0x1adcbcu: goto label_1adcbc;
        case 0x1adcc0u: goto label_1adcc0;
        case 0x1adcc4u: goto label_1adcc4;
        case 0x1adcc8u: goto label_1adcc8;
        case 0x1adcccu: goto label_1adccc;
        case 0x1adcd0u: goto label_1adcd0;
        case 0x1adcd4u: goto label_1adcd4;
        case 0x1adcd8u: goto label_1adcd8;
        case 0x1adcdcu: goto label_1adcdc;
        case 0x1adce0u: goto label_1adce0;
        case 0x1adce4u: goto label_1adce4;
        case 0x1adce8u: goto label_1adce8;
        case 0x1adcecu: goto label_1adcec;
        case 0x1adcf0u: goto label_1adcf0;
        case 0x1adcf4u: goto label_1adcf4;
        case 0x1adcf8u: goto label_1adcf8;
        case 0x1adcfcu: goto label_1adcfc;
        case 0x1add00u: goto label_1add00;
        case 0x1add04u: goto label_1add04;
        case 0x1add08u: goto label_1add08;
        case 0x1add0cu: goto label_1add0c;
        case 0x1add10u: goto label_1add10;
        case 0x1add14u: goto label_1add14;
        case 0x1add18u: goto label_1add18;
        case 0x1add1cu: goto label_1add1c;
        default: break;
    }

    ctx->pc = 0x1adc38u;

label_1adc38:
    // 0x1adc38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1adc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1adc3c:
    // 0x1adc3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1adc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1adc40:
    // 0x1adc40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1adc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1adc44:
    // 0x1adc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1adc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1adc48:
    // 0x1adc48: 0xc06ddac  jal         func_1B76B0
label_1adc4c:
    if (ctx->pc == 0x1ADC4Cu) {
        ctx->pc = 0x1ADC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC48u;
        // 0x1adc4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC50u;
        goto label_1adc50;
    }
    ctx->pc = 0x1ADC48u;
    SET_GPR_U32(ctx, 31, 0x1ADC50u);
    ctx->pc = 0x1ADC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC48u;
    // 0x1adc4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1ADC48u, 0x1ADC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC50u;
label_1adc50:
    // 0x1adc50: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_1adc54:
    if (ctx->pc == 0x1ADC54u) {
        ctx->pc = 0x1ADC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC50u;
        // 0x1adc54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC58u;
        goto label_1adc58;
    }
    ctx->pc = 0x1ADC50u;
    {
        const bool branch_taken_0x1adc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adc50) {
            ctx->pc = 0x1ADC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADC50u;
            // 0x1adc54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADD10u;
            goto label_1add10;
        }
    }
    ctx->pc = 0x1ADC58u;
label_1adc58:
    // 0x1adc58: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1adc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1adc5c:
    // 0x1adc5c: 0xc0a4bd4  jal         func_292F50
label_1adc60:
    if (ctx->pc == 0x1ADC60u) {
        ctx->pc = 0x1ADC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC5Cu;
        // 0x1adc60: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC64u;
        goto label_1adc64;
    }
    ctx->pc = 0x1ADC5Cu;
    SET_GPR_U32(ctx, 31, 0x1ADC64u);
    ctx->pc = 0x1ADC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADC5Cu;
    // 0x1adc60: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1ADC5Cu, 0x1ADC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADC64u;
label_1adc64:
    // 0x1adc64: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1adc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1adc68:
    // 0x1adc68: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1adc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1adc6c:
    // 0x1adc6c: 0xc4417a14  lwc1        $f1, 0x7A14($v0)
    ctx->pc = 0x1adc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1adc70:
    // 0x1adc70: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1adc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1adc74:
    // 0x1adc74: 0x920402f4  lbu         $a0, 0x2F4($s0)
    ctx->pc = 0x1adc74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1adc78:
    // 0x1adc78: 0x2463dc50  addiu       $v1, $v1, -0x23B0
    ctx->pc = 0x1adc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
label_1adc7c:
    // 0x1adc7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1adc7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1adc80:
    // 0x1adc80: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1adc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1adc84:
    // 0x1adc84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1adc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1adc88:
    // 0x1adc88: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x1adc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
label_1adc8c:
    // 0x1adc8c: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x1adc8cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_1adc90:
    // 0x1adc90: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_1adc94:
    if (ctx->pc == 0x1ADC94u) {
        ctx->pc = 0x1ADC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC90u;
        // 0x1adc94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADC98u;
        goto label_1adc98;
    }
    ctx->pc = 0x1ADC90u;
    {
        const bool branch_taken_0x1adc90 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1ADC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADC90u;
        // 0x1adc94: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adc90) {
            ctx->pc = 0x1ADCBCu;
            goto label_1adcbc;
        }
    }
    ctx->pc = 0x1ADC98u;
label_1adc98:
    // 0x1adc98: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x1adc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1adc9c:
    // 0x1adc9c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1adc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1adca0:
    // 0x1adca0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1adca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1adca4:
    // 0x1adca4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1adca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1adca8:
    // 0x1adca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1adca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1adcac:
    // 0x1adcac: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1adcacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1adcb0:
    // 0x1adcb0: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x1adcb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
label_1adcb4:
    // 0x1adcb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1adcb8:
    if (ctx->pc == 0x1ADCB8u) {
        ctx->pc = 0x1ADCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCB4u;
        // 0x1adcb8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCBCu;
        goto label_1adcbc;
    }
    ctx->pc = 0x1ADCB4u;
    {
        const bool branch_taken_0x1adcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCB4u;
        // 0x1adcb8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcb4) {
            ctx->pc = 0x1ADCC4u;
            goto label_1adcc4;
        }
    }
    ctx->pc = 0x1ADCBCu;
label_1adcbc:
    // 0x1adcbc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1adcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1adcc0:
    // 0x1adcc0: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1adcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1adcc4:
    // 0x1adcc4: 0x24e3dc50  addiu       $v1, $a3, -0x23B0
    ctx->pc = 0x1adcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958160));
label_1adcc8:
    // 0x1adcc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1adccc:
    // 0x1adccc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1adcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1adcd0:
    // 0x1adcd0: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_1adcd4:
    if (ctx->pc == 0x1ADCD4u) {
        ctx->pc = 0x1ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCD0u;
        // 0x1adcd4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCD8u;
        goto label_1adcd8;
    }
    ctx->pc = 0x1ADCD0u;
    {
        const bool branch_taken_0x1adcd0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCD0u;
        // 0x1adcd4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adcd0) {
            ctx->pc = 0x1ADCECu;
            goto label_1adcec;
        }
    }
    ctx->pc = 0x1ADCD8u;
label_1adcd8:
    // 0x1adcd8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1adcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1adcdc:
    // 0x1adcdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1adcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1adce0:
    // 0x1adce0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1adce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1adce4:
    // 0x1adce4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1adce8:
    if (ctx->pc == 0x1ADCE8u) {
        ctx->pc = 0x1ADCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE4u;
        // 0x1adce8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCECu;
        goto label_1adcec;
    }
    ctx->pc = 0x1ADCE4u;
    {
        const bool branch_taken_0x1adce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCE4u;
        // 0x1adce8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adce4) {
            ctx->pc = 0x1ADCF0u;
            goto label_1adcf0;
        }
    }
    ctx->pc = 0x1ADCECu;
label_1adcec:
    // 0x1adcec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1adcecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1adcf0:
    // 0x1adcf0: 0xa0f809  jalr        $a1
label_1adcf4:
    if (ctx->pc == 0x1ADCF4u) {
        ctx->pc = 0x1ADCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCF0u;
        // 0x1adcf4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADCF8u;
        goto label_1adcf8;
    }
    ctx->pc = 0x1ADCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1ADCF8u);
        ctx->pc = 0x1ADCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCF0u;
        // 0x1adcf4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADCF0u, 0x1ADCF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ADCF8u;
label_1adcf8:
    // 0x1adcf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1adcfc:
    // 0x1adcfc: 0xc0aa1fa  jal         func_2A87E8
label_1add00:
    if (ctx->pc == 0x1ADD00u) {
        ctx->pc = 0x1ADD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADCFCu;
        // 0x1add00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD04u;
        goto label_1add04;
    }
    ctx->pc = 0x1ADCFCu;
    SET_GPR_U32(ctx, 31, 0x1ADD04u);
    ctx->pc = 0x1ADD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADCFCu;
    // 0x1add00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1ADCFCu, 0x1ADD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD04u;
label_1add04:
    // 0x1add04: 0xc06ddb6  jal         func_1B76D8
label_1add08:
    if (ctx->pc == 0x1ADD08u) {
        ctx->pc = 0x1ADD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD04u;
        // 0x1add08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD0Cu;
        goto label_1add0c;
    }
    ctx->pc = 0x1ADD04u;
    SET_GPR_U32(ctx, 31, 0x1ADD0Cu);
    ctx->pc = 0x1ADD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD04u;
    // 0x1add08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1ADD04u, 0x1ADD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD0Cu;
label_1add0c:
    // 0x1add0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1add0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1add10:
    // 0x1add10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1add10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1add14:
    // 0x1add14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1add14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1add18:
    // 0x1add18: 0x3e00008  jr          $ra
label_1add1c:
    if (ctx->pc == 0x1ADD1Cu) {
        ctx->pc = 0x1ADD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD18u;
        // 0x1add1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ADD20u;
        goto label_fallthrough_0x1add18;
    }
    ctx->pc = 0x1ADD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD18u;
        // 0x1add1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1add18:
    ctx->pc = 0x1ADD20u;
}
