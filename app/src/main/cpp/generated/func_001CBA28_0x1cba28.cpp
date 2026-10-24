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

// Function: func_001CBA28
// Address: 0x1cba28 - 0x1cc668
void func_001CBA28_0x1cba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CBA28_0x1cba28");
#endif

    switch (ctx->pc) {
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5d8u: goto label_1cc5d8;
        default: break;
    }

    ctx->pc = 0x1cba28u;

    // 0x1cba28: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1cba2c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1cba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1cba30: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1cba30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1cba34: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1cba34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1cba38: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1cba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1cba3c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1cba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1cba40: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1cba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1cba44: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1cba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1cba48: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1cba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1cba4c: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1cba4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1cba50: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1cba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1cba54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1cba58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1CBA58u;
    SET_GPR_U32(ctx, 31, 0x1CBA60u);
    ctx->pc = 0x1CBA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA58u;
    // 0x1cba5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1CBA58u, 0x1CBA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA60u;
label_1cba60:
    // 0x1cba60: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cba64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cba64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba68: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CBA68u;
    SET_GPR_U32(ctx, 31, 0x1CBA70u);
    ctx->pc = 0x1CBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA68u;
    // 0x1cba6c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CBA68u, 0x1CBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA70u;
label_1cba70:
    // 0x1cba70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cba70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cba74: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cba74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cba78: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cba7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cba7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cba80: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cba80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cba84: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cba84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cba88: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1cba88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cba8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBA8Cu;
    {
        const bool branch_taken_0x1cba8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA8Cu;
        // 0x1cba90: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba8c) {
            ctx->pc = 0x1CBAA0u;
            goto label_1cbaa0;
        }
    }
    ctx->pc = 0x1CBA94u;
    // 0x1cba94: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1cba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cba98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBA98u;
    {
        const bool branch_taken_0x1cba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA98u;
        // 0x1cba9c: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba98) {
            ctx->pc = 0x1CBAA4u;
            goto label_1cbaa4;
        }
    }
    ctx->pc = 0x1CBAA0u;
label_1cbaa0:
    // 0x1cbaa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cbaa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaa4:
    // 0x1cbaa4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1cbaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cbaa8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1cbaa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cbaac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1cbaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbab0: 0x1070006e  beq         $v1, $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1CBAB0u;
    {
        const bool branch_taken_0x1cbab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAB0u;
        // 0x1cbab4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbab0) {
            ctx->pc = 0x1CBC6Cu;
            goto label_1cbc6c;
        }
    }
    ctx->pc = 0x1CBAB8u;
    // 0x1cbab8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBAB8u;
    {
        const bool branch_taken_0x1cbab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbab8) {
            ctx->pc = 0x1CBABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBAB8u;
            // 0x1cbabc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBAD0u;
            goto label_1cbad0;
        }
    }
    ctx->pc = 0x1CBAC0u;
    // 0x1cbac0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBAC0u;
    {
        const bool branch_taken_0x1cbac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAC0u;
        // 0x1cbac4: 0x240303af  addiu       $v1, $zero, 0x3AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 943));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac0) {
            ctx->pc = 0x1CBAE8u;
            goto label_1cbae8;
        }
    }
    ctx->pc = 0x1CBAC8u;
    // 0x1cbac8: 0x100002da  b           . + 4 + (0x2DA << 2)
    ctx->pc = 0x1CBAC8u;
    {
        const bool branch_taken_0x1cbac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAC8u;
        // 0x1cbacc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbac8) {
            ctx->pc = 0x1CC634u;
            goto label_1cc634;
        }
    }
    ctx->pc = 0x1CBAD0u;
label_1cbad0:
    // 0x1cbad0: 0x106202a6  beq         $v1, $v0, . + 4 + (0x2A6 << 2)
    ctx->pc = 0x1CBAD0u;
    {
        const bool branch_taken_0x1cbad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAD0u;
        // 0x1cbad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbad0) {
            ctx->pc = 0x1CC56Cu;
            goto label_1cc56c;
        }
    }
    ctx->pc = 0x1CBAD8u;
    // 0x1cbad8: 0x106202aa  beq         $v1, $v0, . + 4 + (0x2AA << 2)
    ctx->pc = 0x1CBAD8u;
    {
        const bool branch_taken_0x1cbad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAD8u;
        // 0x1cbadc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbad8) {
            ctx->pc = 0x1CC584u;
            goto label_1cc584;
        }
    }
    ctx->pc = 0x1CBAE0u;
    // 0x1cbae0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x1CBAE0u;
    {
        const bool branch_taken_0x1cbae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAE0u;
        // 0x1cbae4: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbae0) {
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CBAE8u;
label_1cbae8:
    // 0x1cbae8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1cbaec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbaecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbaf0: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x1cbaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cbaf4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBAF4u;
    {
        const bool branch_taken_0x1cbaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAF4u;
        // 0x1cbaf8: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaf4) {
            ctx->pc = 0x1CBB00u;
            goto label_1cbb00;
        }
    }
    ctx->pc = 0x1CBAFCu;
    // 0x1cbafc: 0xae200674  sw          $zero, 0x674($s1)
    ctx->pc = 0x1cbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 0));
label_1cbb00:
    // 0x1cbb00: 0xc6200640  lwc1        $f0, 0x640($s1)
    ctx->pc = 0x1cbb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbb04: 0xc6210648  lwc1        $f1, 0x648($s1)
    ctx->pc = 0x1cbb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbb08: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1cbb08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1cbb0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1cbb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1cbb10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cbb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cbb14: 0x0  nop
    ctx->pc = 0x1cbb14u;
    // NOP
    // 0x1cbb18: 0x0  nop
    ctx->pc = 0x1cbb18u;
    // NOP
    // 0x1cbb1c: 0x46000344  c1          0x344
    ctx->pc = 0x1cbb1cu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1cbb20: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cbb20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cbb24: 0x28620379  slti        $v0, $v1, 0x379
    ctx->pc = 0x1cbb24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)889) ? 1 : 0);
    // 0x1cbb28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBB28u;
    {
        const bool branch_taken_0x1cbb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB28u;
        // 0x1cbb2c: 0x28620377  slti        $v0, $v1, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb28) {
            ctx->pc = 0x1CBB48u;
            goto label_1cbb48;
        }
    }
    ctx->pc = 0x1CBB30u;
    // 0x1cbb30: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CBB30u;
    {
        const bool branch_taken_0x1cbb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB30u;
        // 0x1cbb34: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb30) {
            ctx->pc = 0x1CBB90u;
            goto label_1cbb90;
        }
    }
    ctx->pc = 0x1CBB38u;
    // 0x1cbb38: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CBB38u;
    {
        const bool branch_taken_0x1cbb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb38) {
            ctx->pc = 0x1CBB90u;
            goto label_1cbb90;
        }
    }
    ctx->pc = 0x1CBB40u;
    // 0x1cbb40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CBB40u;
    {
        const bool branch_taken_0x1cbb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB40u;
        // 0x1cbb44: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb40) {
            ctx->pc = 0x1CBB74u;
            goto label_1cbb74;
        }
    }
    ctx->pc = 0x1CBB48u;
label_1cbb48:
    // 0x1cbb48: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x1cbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cbb4c: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CBB4Cu;
    {
        const bool branch_taken_0x1cbb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB4Cu;
        // 0x1cbb50: 0x2862037c  slti        $v0, $v1, 0x37C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)892) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb4c) {
            ctx->pc = 0x1CBBECu;
            goto label_1cbbec;
        }
    }
    ctx->pc = 0x1CBB54u;
    // 0x1cbb54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBB54u;
    {
        const bool branch_taken_0x1cbb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb54) {
            ctx->pc = 0x1CBB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBB54u;
            // 0x1cbb58: 0xae200100  sw          $zero, 0x100($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB74u;
            goto label_1cbb74;
        }
    }
    ctx->pc = 0x1CBB5Cu;
    // 0x1cbb5c: 0x286203ac  slti        $v0, $v1, 0x3AC
    ctx->pc = 0x1cbb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)940) ? 1 : 0);
    // 0x1cbb60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CBB60u;
    {
        const bool branch_taken_0x1cbb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB60u;
        // 0x1cbb64: 0x286203aa  slti        $v0, $v1, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb60) {
            ctx->pc = 0x1CBB70u;
            goto label_1cbb70;
        }
    }
    ctx->pc = 0x1CBB68u;
    // 0x1cbb68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CBB68u;
    {
        const bool branch_taken_0x1cbb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb68) {
            ctx->pc = 0x1CBB90u;
            goto label_1cbb90;
        }
    }
    ctx->pc = 0x1CBB70u;
label_1cbb70:
    // 0x1cbb70: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1cbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_1cbb74:
    // 0x1cbb74: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1cbb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbb78: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CBB78u;
    SET_GPR_U32(ctx, 31, 0x1CBB80u);
    ctx->pc = 0x1CBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB78u;
    // 0x1cbb7c: 0xc62d0648  lwc1        $f13, 0x648($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CBB78u, 0x1CBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cbb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cbb84: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cbb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cbb88: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1CBB88u;
    {
        const bool branch_taken_0x1cbb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB88u;
        // 0x1cbb8c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb88) {
            ctx->pc = 0x1CBC44u;
            goto label_1cbc44;
        }
    }
    ctx->pc = 0x1CBB90u;
label_1cbb90:
    // 0x1cbb90: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CBB90u;
    SET_GPR_U32(ctx, 31, 0x1CBB98u);
    ctx->pc = 0x1CBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB90u;
    // 0x1cbb94: 0xc62c0644  lwc1        $f12, 0x644($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CBB90u, 0x1CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB98u;
label_1cbb98:
    // 0x1cbb98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cbb98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cbb9c: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1cbb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbba0: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1cbba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cbba4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CBBA4u;
    SET_GPR_U32(ctx, 31, 0x1CBBACu);
    ctx->pc = 0x1CBBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBA4u;
    // 0x1cbba8: 0xe6200100  swc1        $f0, 0x100($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CBBA4u, 0x1CBBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBACu;
label_1cbbac:
    // 0x1cbbac: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cbbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cbbb0: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cbbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cbbb4: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1cbbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1cbbb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbbbc: 0xda240640  lqc2        $vf4, 0x640($s1)
    ctx->pc = 0x1cbbbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1600)));
    // 0x1cbbc0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1cbbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cbbc4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cbbc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cbbc8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cbbc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbbcc: 0xfa240640  sqc2        $vf4, 0x640($s1)
    ctx->pc = 0x1cbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1600), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbbd0: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x1cbbd4: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1cbbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x1cbbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cbbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbbdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbbe0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x1cbbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cbbe4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1CBBE4u;
    {
        const bool branch_taken_0x1cbbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBE4u;
        // 0x1cbbe8: 0xe6210674  swc1        $f1, 0x674($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe4) {
            ctx->pc = 0x1CBC44u;
            goto label_1cbc44;
        }
    }
    ctx->pc = 0x1CBBECu;
label_1cbbec:
    // 0x1cbbec: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CBBECu;
    SET_GPR_U32(ctx, 31, 0x1CBBF4u);
    ctx->pc = 0x1CBBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBECu;
    // 0x1cbbf0: 0xc62c0644  lwc1        $f12, 0x644($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CBBECu, 0x1CBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBF4u;
label_1cbbf4:
    // 0x1cbbf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cbbf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1cbbf8: 0xc62c0640  lwc1        $f12, 0x640($s1)
    ctx->pc = 0x1cbbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cbbfc: 0xc62d0648  lwc1        $f13, 0x648($s1)
    ctx->pc = 0x1cbbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cbc00: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CBC00u;
    SET_GPR_U32(ctx, 31, 0x1CBC08u);
    ctx->pc = 0x1CBC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC00u;
    // 0x1cbc04: 0xe6200100  swc1        $f0, 0x100($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CBC00u, 0x1CBC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC08u;
label_1cbc08:
    // 0x1cbc08: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x1cbc0c: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1cbc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x1cbc10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cbc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbc14: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cbc18: 0xa23002f7  sb          $s0, 0x2F7($s1)
    ctx->pc = 0x1cbc18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 16));
    // 0x1cbc1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cbc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc20: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1cbc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1cbc24: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1cbc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x1cbc28: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1cbc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1cbc2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cbc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc30: 0xe6210674  swc1        $f1, 0x674($s1)
    ctx->pc = 0x1cbc30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x1cbc34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbc34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc38: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1cbc38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cbc3c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CBC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC44u);
    ctx->pc = 0x1CBC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBC3Cu;
    // 0x1cbc40: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CBC3Cu, 0x1CBC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC44u;
label_1cbc44:
    // 0x1cbc44: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cbc44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cbc48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbc4c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1cbc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1cbc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbc54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbc58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cbc5c: 0xa6230568  sh          $v1, 0x568($s1)
    ctx->pc = 0x1cbc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cbc60: 0xe6200660  swc1        $f0, 0x660($s1)
    ctx->pc = 0x1cbc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1cbc64: 0xa2240531  sb          $a0, 0x531($s1)
    ctx->pc = 0x1cbc64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cbc68: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cbc68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cbc6c:
    // 0x1cbc6c: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x1cbc70: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBC70u;
    {
        const bool branch_taken_0x1cbc70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1CBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC70u;
        // 0x1cbc74: 0x96230568  lhu         $v1, 0x568($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc70) {
            ctx->pc = 0x1CBC84u;
            goto label_1cbc84;
        }
    }
    ctx->pc = 0x1CBC78u;
    // 0x1cbc78: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1cbc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cbc7c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1CBC7Cu;
    {
        const bool branch_taken_0x1cbc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC7Cu;
        // 0x1cbc80: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc7c) {
            ctx->pc = 0x1CBD80u;
            goto label_1cbd80;
        }
    }
    ctx->pc = 0x1CBC84u;
label_1cbc84:
    // 0x1cbc84: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x1cbc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x1cbc88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CBC88u;
    {
        const bool branch_taken_0x1cbc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC88u;
        // 0x1cbc8c: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc88) {
            ctx->pc = 0x1CBC94u;
            goto label_1cbc94;
        }
    }
    ctx->pc = 0x1CBC90u;
    // 0x1cbc90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cbc94:
    // 0x1cbc94: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x1cbc94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cbc98: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x1cbc98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cbc9c: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1cbc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1cbca0: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x1cbca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x1cbca4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBCA4u;
    {
        const bool branch_taken_0x1cbca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCA4u;
        // 0x1cbca8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbca4) {
            ctx->pc = 0x1CBCC4u;
            goto label_1cbcc4;
        }
    }
    ctx->pc = 0x1CBCACu;
    // 0x1cbcac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cbcacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cbcb0: 0x2442a380  addiu       $v0, $v0, -0x5C80
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
    // 0x1cbcb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbcb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbcbc: 0x800008  jr          $a0
    ctx->pc = 0x1CBCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CBCC4u: goto label_1cbcc4;
            case 0x1CBCD8u: goto label_1cbcd8;
            case 0x1CBCECu: goto label_1cbcec;
            case 0x1CBD00u: goto label_1cbd00;
            case 0x1CBD30u: goto label_1cbd30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBCBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CBCC4u;
label_1cbcc4:
    // 0x1cbcc4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cbcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cbcc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbccc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cbcd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CBCD0u;
    {
        const bool branch_taken_0x1cbcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD0u;
        // 0x1cbcd4: 0x2406012f  addiu       $a2, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcd0) {
            ctx->pc = 0x1CBD10u;
            goto label_1cbd10;
        }
    }
    ctx->pc = 0x1CBCD8u;
label_1cbcd8:
    // 0x1cbcd8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cbcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cbcdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbce0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cbce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cbce4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CBCE4u;
    {
        const bool branch_taken_0x1cbce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCE4u;
        // 0x1cbce8: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbce4) {
            ctx->pc = 0x1CBD10u;
            goto label_1cbd10;
        }
    }
    ctx->pc = 0x1CBCECu;
label_1cbcec:
    // 0x1cbcec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cbcf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbcf4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cbcf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CBCF8u;
    {
        const bool branch_taken_0x1cbcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCF8u;
        // 0x1cbcfc: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbcf8) {
            ctx->pc = 0x1CBD10u;
            goto label_1cbd10;
        }
    }
    ctx->pc = 0x1CBD00u;
label_1cbd00:
    // 0x1cbd00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cbd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cbd04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cbd08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cbd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cbd0c: 0x240600d5  addiu       $a2, $zero, 0xD5
    ctx->pc = 0x1cbd0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_1cbd10:
    // 0x1cbd10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cbd10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbd14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbd18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd20: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CBD20u;
    SET_GPR_U32(ctx, 31, 0x1CBD28u);
    ctx->pc = 0x1CBD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD20u;
    // 0x1cbd24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CBD20u, 0x1CBD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD28u;
label_1cbd28:
    // 0x1cbd28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CBD28u;
    {
        const bool branch_taken_0x1cbd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD28u;
        // 0x1cbd2c: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd28) {
            ctx->pc = 0x1CBD84u;
            goto label_1cbd84;
        }
    }
    ctx->pc = 0x1CBD30u;
label_1cbd30:
    // 0x1cbd30: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cbd30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cbd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd38: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1cbd3c: 0x2406012f  addiu       $a2, $zero, 0x12F
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x1cbd40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cbd44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbd48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbd4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd54: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CBD54u;
    SET_GPR_U32(ctx, 31, 0x1CBD5Cu);
    ctx->pc = 0x1CBD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD54u;
    // 0x1cbd58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CBD54u, 0x1CBD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD5Cu;
label_1cbd5c:
    // 0x1cbd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd64: 0x24060132  addiu       $a2, $zero, 0x132
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x1cbd68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cbd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cbd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbd70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbd74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbd78: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CBD78u;
    SET_GPR_U32(ctx, 31, 0x1CBD80u);
    ctx->pc = 0x1CBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD78u;
    // 0x1cbd7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CBD78u, 0x1CBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD80u;
label_1cbd80:
    // 0x1cbd80: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x1cbd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_1cbd84:
    // 0x1cbd84: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBD84u;
    {
        const bool branch_taken_0x1cbd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd84) {
            ctx->pc = 0x1CBD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD84u;
            // 0x1cbd88: 0x962302fe  lhu         $v1, 0x2FE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDC0u;
            goto label_1cbdc0;
        }
    }
    ctx->pc = 0x1CBD8Cu;
    // 0x1cbd8c: 0x52400027  beql        $s2, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CBD8Cu;
    {
        const bool branch_taken_0x1cbd8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd8c) {
            ctx->pc = 0x1CBD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD8Cu;
            // 0x1cbd90: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE2Cu;
            goto label_1cbe2c;
        }
    }
    ctx->pc = 0x1CBD94u;
    // 0x1cbd94: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cbd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cbd98: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cbd98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cbd9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbd9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbda0: 0xc6410100  lwc1        $f1, 0x100($s2)
    ctx->pc = 0x1cbda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbda4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cbda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cbda8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cbda8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cbdac: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cbdacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cbdb0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CBDB0u;
    SET_GPR_U32(ctx, 31, 0x1CBDB8u);
    ctx->pc = 0x1CBDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBDB0u;
    // 0x1cbdb4: 0xe6410100  swc1        $f1, 0x100($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CBDB0u, 0x1CBDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDB8u;
label_1cbdb8:
    // 0x1cbdb8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CBDB8u;
    {
        const bool branch_taken_0x1cbdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDB8u;
        // 0x1cbdbc: 0xe6400100  swc1        $f0, 0x100($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdb8) {
            ctx->pc = 0x1CBE28u;
            goto label_1cbe28;
        }
    }
    ctx->pc = 0x1CBDC0u;
label_1cbdc0:
    // 0x1cbdc0: 0x28620379  slti        $v0, $v1, 0x379
    ctx->pc = 0x1cbdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)889) ? 1 : 0);
    // 0x1cbdc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBDC4u;
    {
        const bool branch_taken_0x1cbdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDC4u;
        // 0x1cbdc8: 0x28620377  slti        $v0, $v1, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdc4) {
            ctx->pc = 0x1CBDE4u;
            goto label_1cbde4;
        }
    }
    ctx->pc = 0x1CBDCCu;
    // 0x1cbdcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBDCCu;
    {
        const bool branch_taken_0x1cbdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDCCu;
        // 0x1cbdd0: 0x2402036d  addiu       $v0, $zero, 0x36D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 877));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdcc) {
            ctx->pc = 0x1CBDF8u;
            goto label_1cbdf8;
        }
    }
    ctx->pc = 0x1CBDD4u;
    // 0x1cbdd4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CBDD4u;
    {
        const bool branch_taken_0x1cbdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cbdd4) {
            ctx->pc = 0x1CBDF8u;
            goto label_1cbdf8;
        }
    }
    ctx->pc = 0x1CBDDCu;
    // 0x1cbddc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1CBDDCu;
    {
        const bool branch_taken_0x1cbddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDDCu;
        // 0x1cbde0: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbddc) {
            ctx->pc = 0x1CBE2Cu;
            goto label_1cbe2c;
        }
    }
    ctx->pc = 0x1CBDE4u;
label_1cbde4:
    // 0x1cbde4: 0x286203ac  slti        $v0, $v1, 0x3AC
    ctx->pc = 0x1cbde4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)940) ? 1 : 0);
    // 0x1cbde8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CBDE8u;
    {
        const bool branch_taken_0x1cbde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDE8u;
        // 0x1cbdec: 0x286203aa  slti        $v0, $v1, 0x3AA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)938) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbde8) {
            ctx->pc = 0x1CBE28u;
            goto label_1cbe28;
        }
    }
    ctx->pc = 0x1CBDF0u;
    // 0x1cbdf0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1CBDF0u;
    {
        const bool branch_taken_0x1cbdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdf0) {
            ctx->pc = 0x1CBDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDF0u;
            // 0x1cbdf4: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE2Cu;
            goto label_1cbe2c;
        }
    }
    ctx->pc = 0x1CBDF8u;
label_1cbdf8:
    // 0x1cbdf8: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CBDF8u;
    {
        const bool branch_taken_0x1cbdf8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdf8) {
            ctx->pc = 0x1CBDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDF8u;
            // 0x1cbdfc: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE2Cu;
            goto label_1cbe2c;
        }
    }
    ctx->pc = 0x1CBE00u;
    // 0x1cbe00: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1cbe04: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1cbe04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1cbe08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbe0c: 0xc6410108  lwc1        $f1, 0x108($s2)
    ctx->pc = 0x1cbe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbe10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cbe10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cbe14: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cbe14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cbe18: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cbe18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1cbe1c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CBE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE24u);
    ctx->pc = 0x1CBE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE1Cu;
    // 0x1cbe20: 0xe6410108  swc1        $f1, 0x108($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CBE1Cu, 0x1CBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE24u;
label_1cbe24:
    // 0x1cbe24: 0xe6400108  swc1        $f0, 0x108($s2)
    ctx->pc = 0x1cbe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 264), bits); }
label_1cbe28:
    // 0x1cbe28: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1cbe28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1cbe2c:
    // 0x1cbe2c: 0x26230640  addiu       $v1, $s1, 0x640
    ctx->pc = 0x1cbe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cbe30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1cbe30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbe34: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbe34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbe38: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbe38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cbe3c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1cbe3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cbe40: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cbe40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cbe44: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cbe44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbe48: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbe4c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cbe4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbe50: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cbe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbe54: 0x27b70080  addiu       $s7, $sp, 0x80
    ctx->pc = 0x1cbe54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cbe58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cbe5c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cbe5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbe60: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1cbe60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cbe64: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cbe64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbe68: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cbe68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbe6c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cbe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cbe70: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1cbe70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cbe74: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBE74u;
    {
        const bool branch_taken_0x1cbe74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE74u;
        // 0x1cbe78: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe74) {
            ctx->pc = 0x1CBE94u;
            goto label_1cbe94;
        }
    }
    ctx->pc = 0x1CBE7Cu;
    // 0x1cbe7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cbe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbe80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cbe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cbe84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cbe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbe88: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1cbe88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1cbe8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cbe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbe90: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cbe90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1cbe94:
    // 0x1cbe94: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1cbe94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cbe98: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cbe9c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1cbe9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbea0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cbea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cbea4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cbea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cbea8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbeac: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cbeb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cbeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbeb4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cbeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cbeb8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cbeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbebc: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x1cbebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x1cbec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cbec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbec4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cbec8: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cbec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cbecc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cbeccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbed0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CBED0u;
    SET_GPR_U32(ctx, 31, 0x1CBED8u);
    ctx->pc = 0x1CBED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBED0u;
    // 0x1cbed4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CBED0u, 0x1CBED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBED8u;
label_1cbed8:
    // 0x1cbed8: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1CBED8u;
    {
        const bool branch_taken_0x1cbed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbed8) {
            ctx->pc = 0x1CC270u;
            goto label_1cc270;
        }
    }
    ctx->pc = 0x1CBEE0u;
    // 0x1cbee0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1cbee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1cbee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbee8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cbee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbeec: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1cbeecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cbef0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbef4: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cbef8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1cbef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cbefc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cbefcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cbf00: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cbf00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbf04: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbf04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbf08: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cbf08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbf0c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cbf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbf10: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1cbf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbf14: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1cbf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbf18: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1cbf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cbf1c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1cbf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cbf20: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1cbf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cbf24: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1cbf24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1cbf28: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1cbf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cbf2c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CBF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF34u);
    ctx->pc = 0x1CBF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF2Cu;
    // 0x1cbf30: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CBF2Cu, 0x1CBF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF34u;
label_1cbf34:
    // 0x1cbf34: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1cbf34u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1cbf38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbf38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbf3c: 0x0  nop
    ctx->pc = 0x1cbf3cu;
    // NOP
    // 0x1cbf40: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cbf40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cbf44: 0x0  nop
    ctx->pc = 0x1cbf44u;
    // NOP
    // 0x1cbf48: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBF48u;
    {
        const bool branch_taken_0x1cbf48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CBF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF48u;
        // 0x1cbf4c: 0xc7a40070  lwc1        $f4, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf48) {
            ctx->pc = 0x1CBF8Cu;
            goto label_1cbf8c;
        }
    }
    ctx->pc = 0x1CBF50u;
    // 0x1cbf50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cbf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cbf54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cbf54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cbf58: 0x0  nop
    ctx->pc = 0x1cbf58u;
    // NOP
    // 0x1cbf5c: 0x0  nop
    ctx->pc = 0x1cbf5cu;
    // NOP
    // 0x1cbf60: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1cbf60u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1cbf64: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x1cbf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cbf68: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1cbf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cbf6c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1cbf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbf70: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1cbf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1cbf74: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cbf74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cbf78: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cbf78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cbf7c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cbf7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cbf80: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1cbf80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1cbf84: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1cbf84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cbf88: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1cbf88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1cbf8c:
    // 0x1cbf8c: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cbf8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbf90: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cbf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbf94: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1cbf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cbf98: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1cbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cbf9c: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1cbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cbfa0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1cbfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cbfa4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1cbfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1cbfa8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1cbfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1cbfac: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1cbfacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1cbfb0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cbfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1cbfb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cbfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cbfb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cbfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cbfbc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1cbfbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cbfc0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1cbfc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1cbfc4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1cbfc4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1cbfc8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1cbfc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbfcc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1cbfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbfd0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1cbfd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cbfd4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbfd8: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbfd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cbfdc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1cbfdcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbfe0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cbfe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cbfe4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1cbfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbfe8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1cbfe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbfec: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1cbfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cbff0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cbff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cbff4: 0x10570007  beq         $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBFF4u;
    {
        const bool branch_taken_0x1cbff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x1CBFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFF4u;
        // 0x1cbff8: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbff4) {
            ctx->pc = 0x1CC014u;
            goto label_1cc014;
        }
    }
    ctx->pc = 0x1CBFFCu;
    // 0x1cbffc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cbffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cc000: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1cc000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc004: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cc008: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1cc008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc00c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cc010: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cc014:
    // 0x1cc014: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC014u;
    {
        const bool branch_taken_0x1cc014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cc014) {
            ctx->pc = 0x1CC038u;
            goto label_1cc038;
        }
    }
    ctx->pc = 0x1CC01Cu;
    // 0x1cc01c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc020: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cc020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cc024: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc028: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1cc028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1cc02c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc030: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cc030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cc034: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cc038:
    // 0x1cc038: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC038u;
    {
        const bool branch_taken_0x1cc038 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC038u;
        // 0x1cc03c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc038) {
            ctx->pc = 0x1CC05Cu;
            goto label_1cc05c;
        }
    }
    ctx->pc = 0x1CC040u;
    // 0x1cc040: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc044: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1cc044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cc048: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc04c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1cc04cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cc050: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc054: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cc054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cc058: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1cc058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc05c:
    // 0x1cc05c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc060: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cc060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cc064: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1cc064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cc068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc06c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1cc06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc070: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cc070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc074: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1cc074u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1cc078: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cc07c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1cc07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1cc080: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cc084: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cc084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cc088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc08c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1cc08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cc090: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cc090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cc094: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1cc094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cc098: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cc098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cc09c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cc09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cc0a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc0a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc0a4: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x1cc0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x1cc0a8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CC0A8u;
    SET_GPR_U32(ctx, 31, 0x1CC0B0u);
    ctx->pc = 0x1CC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC0A8u;
    // 0x1cc0ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CC0A8u, 0x1CC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC0B0u;
label_1cc0b0:
    // 0x1cc0b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC0B0u;
    {
        const bool branch_taken_0x1cc0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0B0u;
        // 0x1cc0b4: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0b0) {
            ctx->pc = 0x1CC0C8u;
            goto label_1cc0c8;
        }
    }
    ctx->pc = 0x1CC0B8u;
    // 0x1cc0b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc0bc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cc0c0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cc0c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cc0c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cc0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cc0c8:
    // 0x1cc0c8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cc0cc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC0CCu;
    {
        const bool branch_taken_0x1cc0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cc0cc) {
            ctx->pc = 0x1CC0F0u;
            goto label_1cc0f0;
        }
    }
    ctx->pc = 0x1CC0D4u;
    // 0x1cc0d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc0d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cc0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cc0dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc0e0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1cc0e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1cc0e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc0e8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cc0ec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1cc0f0:
    // 0x1cc0f0: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC0F0u;
    {
        const bool branch_taken_0x1cc0f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC0F0u;
        // 0x1cc0f4: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc0f0) {
            ctx->pc = 0x1CC114u;
            goto label_1cc114;
        }
    }
    ctx->pc = 0x1CC0F8u;
    // 0x1cc0f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cc0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc0fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1cc0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cc100: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc104: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1cc104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cc108: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc10c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1cc10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cc110: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1cc110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc114:
    // 0x1cc114: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc118: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1cc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc120: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1cc120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1cc124: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x1cc124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
    // 0x1cc128: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1cc128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1cc12c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1cc12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc130: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cc130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cc134: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc138: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1cc138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cc13c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cc140: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1cc140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1cc144: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cc144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cc148: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cc148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cc14c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc14cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc150: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cc154: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cc154u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc158: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CC158u;
    SET_GPR_U32(ctx, 31, 0x1CC160u);
    ctx->pc = 0x1CC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC158u;
    // 0x1cc15c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CC158u, 0x1CC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC160u;
label_1cc160:
    // 0x1cc160: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC160u;
    {
        const bool branch_taken_0x1cc160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc160) {
            ctx->pc = 0x1CC164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC160u;
            // 0x1cc164: 0x962202fe  lhu         $v0, 0x2FE($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC198u;
            goto label_1cc198;
        }
    }
    ctx->pc = 0x1CC168u;
    // 0x1cc168: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1cc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cc16c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1cc170: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cc170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cc174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc178: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cc17c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1cc17cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cc180: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cc180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc184: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cc184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc188: 0x0  nop
    ctx->pc = 0x1cc188u;
    // NOP
    // 0x1cc18c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CC18Cu;
    {
        const bool branch_taken_0x1cc18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc18c) {
            ctx->pc = 0x1CC190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC18Cu;
            // 0x1cc190: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC194u;
            goto label_1cc194;
        }
    }
    ctx->pc = 0x1CC194u;
label_1cc194:
    // 0x1cc194: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x1cc194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
label_1cc198:
    // 0x1cc198: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1cc19c: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x1cc1a0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC1A0u;
    {
        const bool branch_taken_0x1cc1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1A0u;
        // 0x1cc1a4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1a0) {
            ctx->pc = 0x1CC1C0u;
            goto label_1cc1c0;
        }
    }
    ctx->pc = 0x1CC1A8u;
    // 0x1cc1a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc1ac: 0x2442a4e0  addiu       $v0, $v0, -0x5B20
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943968));
    // 0x1cc1b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc1b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cc1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc1b8: 0x800008  jr          $a0
    ctx->pc = 0x1CC1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC1C0u: goto label_1cc1c0;
            case 0x1CC1D4u: goto label_1cc1d4;
            case 0x1CC1E8u: goto label_1cc1e8;
            case 0x1CC1FCu: goto label_1cc1fc;
            case 0x1CC210u: goto label_1cc210;
            case 0x1CC224u: goto label_1cc224;
            case 0x1CC328u: goto label_1cc328;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC1B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC1C0u;
label_1cc1c0:
    // 0x1cc1c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc1c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc1cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC1CCu;
    {
        const bool branch_taken_0x1cc1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1CCu;
        // 0x1cc1d0: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1cc) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC1D4u;
label_1cc1d4:
    // 0x1cc1d4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1dc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc1e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CC1E0u;
    {
        const bool branch_taken_0x1cc1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1E0u;
        // 0x1cc1e4: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1e0) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC1E8u;
label_1cc1e8:
    // 0x1cc1e8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc1f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CC1F4u;
    {
        const bool branch_taken_0x1cc1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1F4u;
        // 0x1cc1f8: 0x2406011e  addiu       $a2, $zero, 0x11E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1f4) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC1FCu;
label_1cc1fc:
    // 0x1cc1fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc204: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc208: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CC208u;
    {
        const bool branch_taken_0x1cc208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC208u;
        // 0x1cc20c: 0x240600ea  addiu       $a2, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc208) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC210u;
label_1cc210:
    // 0x1cc210: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cc214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc218: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc21c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC21Cu;
    {
        const bool branch_taken_0x1cc21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC21Cu;
        // 0x1cc220: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc21c) {
            ctx->pc = 0x1CC234u;
            goto label_1cc234;
        }
    }
    ctx->pc = 0x1CC224u;
label_1cc224:
    // 0x1cc224: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc228: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc22c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc230: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1cc230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1cc234:
    // 0x1cc234: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc238: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc23c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc23cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc240: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc240u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc244: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CC244u;
    SET_GPR_U32(ctx, 31, 0x1CC24Cu);
    ctx->pc = 0x1CC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC244u;
    // 0x1cc248: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CC244u, 0x1CC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC24Cu;
label_1cc24c:
    // 0x1cc24c: 0xc073d2a  jal         func_1CF4A8
    ctx->pc = 0x1CC24Cu;
    SET_GPR_U32(ctx, 31, 0x1CC254u);
    ctx->pc = 0x1CC250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC24Cu;
    // 0x1cc250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF4A8u, 0x1CC24Cu, 0x1CC254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC254u;
label_1cc254:
    // 0x1cc254: 0x126000f7  beqz        $s3, . + 4 + (0xF7 << 2)
    ctx->pc = 0x1CC254u;
    {
        const bool branch_taken_0x1cc254 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC254u;
        // 0x1cc258: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc254) {
            ctx->pc = 0x1CC634u;
            goto label_1cc634;
        }
    }
    ctx->pc = 0x1CC25Cu;
    // 0x1cc25c: 0x3c01bc54  lui         $at, 0xBC54
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48212 << 16));
    // 0x1cc260: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cc260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cc264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc268: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1CC268u;
    {
        const bool branch_taken_0x1cc268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC268u;
        // 0x1cc26c: 0xe6200630  swc1        $f0, 0x630($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc268) {
            ctx->pc = 0x1CC634u;
            goto label_1cc634;
        }
    }
    ctx->pc = 0x1CC270u;
label_1cc270:
    // 0x1cc270: 0xc0742ce  jal         func_1D0B38
    ctx->pc = 0x1CC270u;
    SET_GPR_U32(ctx, 31, 0x1CC278u);
    ctx->pc = 0x1CC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC270u;
    // 0x1cc274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B38u, 0x1CC270u, 0x1CC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC278u;
label_1cc278:
    // 0x1cc278: 0xc6210674  lwc1        $f1, 0x674($s1)
    ctx->pc = 0x1cc278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc27c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc27cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc280: 0x0  nop
    ctx->pc = 0x1cc280u;
    // NOP
    // 0x1cc284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cc284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc288: 0x0  nop
    ctx->pc = 0x1cc288u;
    // NOP
    // 0x1cc28c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC28Cu;
    {
        const bool branch_taken_0x1cc28c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc28c) {
            ctx->pc = 0x1CC290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC28Cu;
            // 0x1cc290: 0xc6210644  lwc1        $f1, 0x644($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC2A0u;
            goto label_1cc2a0;
        }
    }
    ctx->pc = 0x1CC294u;
    // 0x1cc294: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x1cc294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1cc298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC298u;
    {
        const bool branch_taken_0x1cc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC298u;
        // 0x1cc29c: 0xe6200674  swc1        $f0, 0x674($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc298) {
            ctx->pc = 0x1CC2BCu;
            goto label_1cc2bc;
        }
    }
    ctx->pc = 0x1CC2A0u;
label_1cc2a0:
    // 0x1cc2a0: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1cc2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1cc2a4: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1cc2a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1cc2a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc2a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc2ac: 0x0  nop
    ctx->pc = 0x1cc2acu;
    // NOP
    // 0x1cc2b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cc2b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cc2b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cc2b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cc2b8: 0xe6210644  swc1        $f1, 0x644($s1)
    ctx->pc = 0x1cc2b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1604), bits); }
label_1cc2bc:
    // 0x1cc2bc: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc2c0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1cc2c4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CC2C4u;
    {
        const bool branch_taken_0x1cc2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2C4u;
        // 0x1cc2c8: 0x24020363  addiu       $v0, $zero, 0x363 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2c4) {
            ctx->pc = 0x1CC380u;
            goto label_1cc380;
        }
    }
    ctx->pc = 0x1CC2CCu;
    // 0x1cc2cc: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cc2ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cc2d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC2D0u;
    {
        const bool branch_taken_0x1cc2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2D0u;
        // 0x1cc2d4: 0x240203b7  addiu       $v0, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2d0) {
            ctx->pc = 0x1CC2E0u;
            goto label_1cc2e0;
        }
    }
    ctx->pc = 0x1CC2D8u;
    // 0x1cc2d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC2D8u;
    {
        const bool branch_taken_0x1cc2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2D8u;
        // 0x1cc2dc: 0x2402037c  addiu       $v0, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2d8) {
            ctx->pc = 0x1CC310u;
            goto label_1cc310;
        }
    }
    ctx->pc = 0x1CC2E0u;
label_1cc2e0:
    // 0x1cc2e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1cc2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc2ec: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x1cc2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x1cc2f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc2f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc2fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc2fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc300: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CC300u;
    SET_GPR_U32(ctx, 31, 0x1CC308u);
    ctx->pc = 0x1CC304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC300u;
    // 0x1cc304: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CC300u, 0x1CC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC308u;
label_1cc308:
    // 0x1cc308: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1cc308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cc30c: 0x2402037c  addiu       $v0, $zero, 0x37C
    ctx->pc = 0x1cc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
label_1cc310:
    // 0x1cc310: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CC310u;
    {
        const bool branch_taken_0x1cc310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC310u;
        // 0x1cc314: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc310) {
            ctx->pc = 0x1CC32Cu;
            goto label_1cc32c;
        }
    }
    ctx->pc = 0x1CC318u;
    // 0x1cc318: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CC318u;
    SET_GPR_U32(ctx, 31, 0x1CC320u);
    ctx->pc = 0x1CC31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC318u;
    // 0x1cc31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CC318u, 0x1CC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1CC320u;
    {
        const bool branch_taken_0x1cc320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC320u;
        // 0x1cc324: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc320) {
            ctx->pc = 0x1CC634u;
            goto label_1cc634;
        }
    }
    ctx->pc = 0x1CC328u;
label_1cc328:
    // 0x1cc328: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1cc32c:
    // 0x1cc32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc330: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1cc334: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc338: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1cc338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc340: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cc340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc344: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc344u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc348: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1CC348u;
    SET_GPR_U32(ctx, 31, 0x1CC350u);
    ctx->pc = 0x1CC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC348u;
    // 0x1cc34c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1CC348u, 0x1CC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC350u;
label_1cc350:
    // 0x1cc350: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc354: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1cc358: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cc358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cc35c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cc35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc364: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cc364u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cc368: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1cc36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc370: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CC370u;
    SET_GPR_U32(ctx, 31, 0x1CC378u);
    ctx->pc = 0x1CC374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC370u;
    // 0x1cc374: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CC370u, 0x1CC378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC378u;
label_1cc378:
    // 0x1cc378: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x1CC378u;
    {
        const bool branch_taken_0x1cc378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC378u;
        // 0x1cc37c: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc378) {
            ctx->pc = 0x1CC634u;
            goto label_1cc634;
        }
    }
    ctx->pc = 0x1CC380u;
label_1cc380:
    // 0x1cc380: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CC380u;
    SET_GPR_U32(ctx, 31, 0x1CC388u);
    ctx->pc = 0x1CC384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC380u;
    // 0x1cc384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CC380u, 0x1CC388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC388u;
label_1cc388:
    // 0x1cc388: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc38c: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1cc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1cc390: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1cc394: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cc394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cc398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cc398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc39c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1cc39cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cc3a0: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc3a4: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CC3A4u;
    SET_GPR_U32(ctx, 31, 0x1CC3ACu);
    ctx->pc = 0x1CC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3A4u;
    // 0x1cc3a8: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CC3A4u, 0x1CC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3ACu;
label_1cc3ac:
    // 0x1cc3ac: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc3b0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CC3B0u;
    SET_GPR_U32(ctx, 31, 0x1CC3B8u);
    ctx->pc = 0x1CC3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3B0u;
    // 0x1cc3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CC3B0u, 0x1CC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3B8u;
label_1cc3b8:
    // 0x1cc3b8: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc3bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc3c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1cc3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3c4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cc3c8: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cc3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cc3cc: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CC3CCu;
    SET_GPR_U32(ctx, 31, 0x1CC3D4u);
    ctx->pc = 0x1CC3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3CCu;
    // 0x1cc3d0: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CC3CCu, 0x1CC3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3D4u;
label_1cc3d4:
    // 0x1cc3d4: 0x962202fe  lhu         $v0, 0x2FE($s1)
    ctx->pc = 0x1cc3d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1cc3d8: 0x2444fc9f  addiu       $a0, $v0, -0x361
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966431));
    // 0x1cc3dc: 0x2c830057  sltiu       $v1, $a0, 0x57
    ctx->pc = 0x1cc3dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x1cc3e0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC3E0u;
    {
        const bool branch_taken_0x1cc3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3E0u;
        // 0x1cc3e4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3e0) {
            ctx->pc = 0x1CC400u;
            goto label_1cc400;
        }
    }
    ctx->pc = 0x1CC3E8u;
    // 0x1cc3e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1cc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc3ec: 0x2442a640  addiu       $v0, $v0, -0x59C0
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944320));
    // 0x1cc3f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc3f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cc3f8: 0x800008  jr          $a0
    ctx->pc = 0x1CC3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC400u: goto label_1cc400;
            case 0x1CC414u: goto label_1cc414;
            case 0x1CC428u: goto label_1cc428;
            case 0x1CC43Cu: goto label_1cc43c;
            case 0x1CC450u: goto label_1cc450;
            case 0x1CC464u: goto label_1cc464;
            case 0x1CC478u: goto label_1cc478;
            case 0x1CC48Cu: goto label_1cc48c;
            case 0x1CC4A0u: goto label_1cc4a0;
            case 0x1CC4B4u: goto label_1cc4b4;
            case 0x1CC4C8u: goto label_1cc4c8;
            case 0x1CC4DCu: goto label_1cc4dc;
            case 0x1CC4FCu: goto label_1cc4fc;
            case 0x1CC528u: goto label_1cc528;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC400u;
label_1cc400:
    // 0x1cc400: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc404: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1cc408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc40c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1CC40Cu;
    {
        const bool branch_taken_0x1cc40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC40Cu;
        // 0x1cc410: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc40c) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC414u;
label_1cc414:
    // 0x1cc414: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc418: 0x3c014254  lui         $at, 0x4254
    ctx->pc = 0x1cc418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16980 << 16));
    // 0x1cc41c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc420: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1CC420u;
    {
        const bool branch_taken_0x1cc420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC420u;
        // 0x1cc424: 0x24040112  addiu       $a0, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc420) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC428u;
label_1cc428:
    // 0x1cc428: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc42c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x1cc42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x1cc430: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc434: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1CC434u;
    {
        const bool branch_taken_0x1cc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC434u;
        // 0x1cc438: 0x24040112  addiu       $a0, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc434) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC43Cu;
label_1cc43c:
    // 0x1cc43c: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc440: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x1cc444: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc448: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1CC448u;
    {
        const bool branch_taken_0x1cc448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC448u;
        // 0x1cc44c: 0x24040112  addiu       $a0, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc448) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC450u;
label_1cc450:
    // 0x1cc450: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc454: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1cc454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1cc458: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc45c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1CC45Cu;
    {
        const bool branch_taken_0x1cc45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC45Cu;
        // 0x1cc460: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc45c) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC464u;
label_1cc464:
    // 0x1cc464: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc468: 0x3c01432f  lui         $at, 0x432F
    ctx->pc = 0x1cc468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17199 << 16));
    // 0x1cc46c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc470: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1CC470u;
    {
        const bool branch_taken_0x1cc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC470u;
        // 0x1cc474: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc470) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC478u;
label_1cc478:
    // 0x1cc478: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc47c: 0x3c01432f  lui         $at, 0x432F
    ctx->pc = 0x1cc47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17199 << 16));
    // 0x1cc480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc484: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CC484u;
    {
        const bool branch_taken_0x1cc484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC484u;
        // 0x1cc488: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc484) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC48Cu;
label_1cc48c:
    // 0x1cc48c: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc490: 0x3c0142b0  lui         $at, 0x42B0
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17072 << 16));
    // 0x1cc494: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc498: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1CC498u;
    {
        const bool branch_taken_0x1cc498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC498u;
        // 0x1cc49c: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc498) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC4A0u;
label_1cc4a0:
    // 0x1cc4a0: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4a4: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x1cc4a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc4ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1CC4ACu;
    {
        const bool branch_taken_0x1cc4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4ACu;
        // 0x1cc4b0: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4ac) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC4B4u;
label_1cc4b4:
    // 0x1cc4b4: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4b8: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1cc4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x1cc4bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc4c0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CC4C0u;
    {
        const bool branch_taken_0x1cc4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C0u;
        // 0x1cc4c4: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4c0) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC4C8u;
label_1cc4c8:
    // 0x1cc4c8: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc4cc: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x1cc4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x1cc4d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc4d4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CC4D4u;
    {
        const bool branch_taken_0x1cc4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4D4u;
        // 0x1cc4d8: 0x24040111  addiu       $a0, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4d4) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC4DCu;
label_1cc4dc:
    // 0x1cc4dc: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc4e0: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1cc4e4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x1cc4e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc4ec: 0x2404012b  addiu       $a0, $zero, 0x12B
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x1cc4f0: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1cc4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cc4f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CC4F4u;
    {
        const bool branch_taken_0x1cc4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4F4u;
        // 0x1cc4f8: 0xc6600600  lwc1        $f0, 0x600($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4f4) {
            ctx->pc = 0x1CC538u;
            goto label_1cc538;
        }
    }
    ctx->pc = 0x1CC4FCu;
label_1cc4fc:
    // 0x1cc4fc: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc500: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1cc500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cc504: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cc504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc508: 0x2406011d  addiu       $a2, $zero, 0x11D
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x1cc50c: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1cc50cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cc510: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc514: 0xac45004c  sw          $a1, 0x4C($v0)
    ctx->pc = 0x1cc514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
    // 0x1cc518: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc51c: 0xa4660044  sh          $a2, 0x44($v1)
    ctx->pc = 0x1cc51cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 6));
    // 0x1cc520: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC520u;
    {
        const bool branch_taken_0x1cc520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC520u;
        // 0x1cc524: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc520) {
            ctx->pc = 0x1CC554u;
            goto label_1cc554;
        }
    }
    ctx->pc = 0x1CC528u;
label_1cc528:
    // 0x1cc528: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc52c: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1cc530: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1cc534: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc538:
    // 0x1cc538: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc53c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc53cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc540: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cc540u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cc544: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x1cc544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1cc548: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cc548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc54c: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x1cc54cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cc550: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1cc550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1cc554:
    // 0x1cc554: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1cc554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc558: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cc558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc55c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cc55cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cc560: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cc560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc564: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1CC564u;
    {
        const bool branch_taken_0x1cc564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC564u;
        // 0x1cc568: 0xe6200660  swc1        $f0, 0x660($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc564) {
            ctx->pc = 0x1CC618u;
            goto label_1cc618;
        }
    }
    ctx->pc = 0x1CC56Cu;
label_1cc56c:
    // 0x1cc56c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1cc56cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1cc570: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1cc574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cc574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cc57c: 0xe6200660  swc1        $f0, 0x660($s1)
    ctx->pc = 0x1cc57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
    // 0x1cc580: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1cc580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cc584:
    // 0x1cc584: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc588: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1CC588u;
    SET_GPR_U32(ctx, 31, 0x1CC590u);
    ctx->pc = 0x1CC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC588u;
    // 0x1cc58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1CC588u, 0x1CC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC590u;
label_1cc590:
    // 0x1cc590: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc594: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1cc598: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1cc59c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cc59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc5a0: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1cc5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cc5a4: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc5a8: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x1CC5A8u;
    SET_GPR_U32(ctx, 31, 0x1CC5B0u);
    ctx->pc = 0x1CC5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5A8u;
    // 0x1cc5ac: 0x8e250654  lw          $a1, 0x654($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x1CC5A8u, 0x1CC5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5B0u;
label_1cc5b0:
    // 0x1cc5b0: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc5b4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1CC5B4u;
    SET_GPR_U32(ctx, 31, 0x1CC5BCu);
    ctx->pc = 0x1CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5B4u;
    // 0x1cc5b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1CC5B4u, 0x1CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5BCu;
label_1cc5bc:
    // 0x1cc5bc: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc5c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc5c4: 0x26250640  addiu       $a1, $s1, 0x640
    ctx->pc = 0x1cc5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x1cc5c8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1cc5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1cc5cc: 0xa4600044  sh          $zero, 0x44($v1)
    ctx->pc = 0x1cc5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cc5d0: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x1CC5D0u;
    SET_GPR_U32(ctx, 31, 0x1CC5D8u);
    ctx->pc = 0x1CC5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5D0u;
    // 0x1cc5d4: 0x8e240650  lw          $a0, 0x650($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x1CC5D0u, 0x1CC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5D8u;
label_1cc5d8:
    // 0x1cc5d8: 0xc6600600  lwc1        $f0, 0x600($s3)
    ctx->pc = 0x1cc5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc5dc: 0x24040123  addiu       $a0, $zero, 0x123
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    // 0x1cc5e0: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1cc5e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cc5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cc5e8: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc5ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cc5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cc5f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cc5f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cc5f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cc5f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1cc5f8: 0xe461004c  swc1        $f1, 0x4C($v1)
    ctx->pc = 0x1cc5f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
    // 0x1cc5fc: 0x8e220650  lw          $v0, 0x650($s1)
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x1cc600: 0xa4440044  sh          $a0, 0x44($v0)
    ctx->pc = 0x1cc600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cc604: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1cc604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1cc608: 0xc6200660  lwc1        $f0, 0x660($s1)
    ctx->pc = 0x1cc608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc60c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cc60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cc610: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1cc610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc614: 0xe6200660  swc1        $f0, 0x660($s1)
    ctx->pc = 0x1cc614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1632), bits); }
label_1cc618:
    // 0x1cc618: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC618u;
        // 0x1cc61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC630u;
            goto label_1cc630;
        }
    }
    ctx->pc = 0x1CC620u;
    // 0x1cc620: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1cc620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc624: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1cc624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cc628: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1cc628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cc62c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1cc62cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cc630:
    // 0x1cc630: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1cc630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cc634:
    // 0x1cc634: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1cc634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cc638:
    // 0x1cc638: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1cc638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cc63c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1cc63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cc640: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1cc640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cc644: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x1cc644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cc648: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x1cc648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cc64c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x1cc64cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cc650: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1cc650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cc654: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1cc654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cc658: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1cc658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cc65c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC65Cu;
        // 0x1cc660: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC664u;
    // 0x1cc664: 0x0  nop
    ctx->pc = 0x1cc664u;
    // NOP
    ctx->pc = 0x1cc668u;
}
