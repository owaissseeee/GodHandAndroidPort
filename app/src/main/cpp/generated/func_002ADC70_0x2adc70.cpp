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

// Function: func_002ADC70
// Address: 0x2adc70 - 0x2adf50
void func_002ADC70_0x2adc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002ADC70_0x2adc70");
#endif

    switch (ctx->pc) {
        case 0x2adce0u: goto label_2adce0;
        case 0x2add50u: goto label_2add50;
        case 0x2add74u: goto label_2add74;
        case 0x2addacu: goto label_2addac;
        case 0x2ade2cu: goto label_2ade2c;
        default: break;
    }

    ctx->pc = 0x2adc70u;

    // 0x2adc70: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2adc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2adc74: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2adc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2adc78: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2adc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2adc7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2adc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc80: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2adc80u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2adc84: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2adc84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc88: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2adc88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2adc8c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2adc8cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2adc90: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2adc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2adc94: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2adc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2adc98: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2adc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2adc9c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2adc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2adca0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2adca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2adca4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2adca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2adca8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2adca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2adcac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2adcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2adcb0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2adcb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2adcb4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2adcb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2adcb8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2adcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2adcbc: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x2adcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2adcc0: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2ADCC0u;
    {
        const bool branch_taken_0x2adcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCC0u;
        // 0x2adcc4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcc0) {
            ctx->pc = 0x2ADF10u;
            goto label_2adf10;
        }
    }
    ctx->pc = 0x2ADCC8u;
    // 0x2adcc8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2adccc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2adcccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adcd0: 0x1840008f  blez        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2ADCD0u;
    {
        const bool branch_taken_0x2adcd0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ADCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADCD0u;
        // 0x2adcd4: 0x8e330014  lw          $s3, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adcd0) {
            ctx->pc = 0x2ADF10u;
            goto label_2adf10;
        }
    }
    ctx->pc = 0x2ADCD8u;
    // 0x2adcd8: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x2adcd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2adcdc: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2adcdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2adce0:
    // 0x2adce0: 0x92620014  lbu         $v0, 0x14($s3)
    ctx->pc = 0x2adce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2adce4: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x2ADCE4u;
    {
        const bool branch_taken_0x2adce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adce4) {
            ctx->pc = 0x2ADCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADCE4u;
            // 0x2adce8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF00u;
            goto label_2adf00;
        }
    }
    ctx->pc = 0x2ADCECu;
    // 0x2adcec: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2adcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2adcf0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2adcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2adcf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2adcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2adcf8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2adcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2adcfc: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x2adcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2add00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2add00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2add04: 0xe7b70034  swc1        $f23, 0x34($sp)
    ctx->pc = 0x2add04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2add08: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2add08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2add0c: 0xe6b5000c  swc1        $f21, 0xC($s5)
    ctx->pc = 0x2add0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x2add10: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x2add10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2add14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2add14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2add18: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2add18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2add1c: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2add1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2add20: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2add20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2add24: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2add24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2add28: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2add28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2add2c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2add2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2add30: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2add30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2add34: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2add34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2add38: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2add38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2add3c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2add3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2add40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add44: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2add44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2add48: 0xc04d990  jal         func_136640
    ctx->pc = 0x2ADD48u;
    SET_GPR_U32(ctx, 31, 0x2ADD50u);
    ctx->pc = 0x2ADD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD48u;
    // 0x2add4c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136640u, 0x2ADD48u, 0x2ADD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD50u;
label_2add50:
    // 0x2add50: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2add50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2add54: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2add54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2add58: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x2add58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2add5c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2add5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2add60: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2add60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2add64: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2add64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2add68: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2add68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2add6c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2ADD6Cu;
    SET_GPR_U32(ctx, 31, 0x2ADD74u);
    ctx->pc = 0x2ADD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADD6Cu;
    // 0x2add70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2ADD6Cu, 0x2ADD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADD74u;
label_2add74:
    // 0x2add74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2add74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2add78: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2add78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2add7c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2add7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2add80: 0x0  nop
    ctx->pc = 0x2add80u;
    // NOP
    // 0x2add84: 0x4502005e  bc1fl       . + 4 + (0x5E << 2)
    ctx->pc = 0x2ADD84u;
    {
        const bool branch_taken_0x2add84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2add84) {
            ctx->pc = 0x2ADD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD84u;
            // 0x2add88: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF00u;
            goto label_2adf00;
        }
    }
    ctx->pc = 0x2ADD8Cu;
    // 0x2add8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2add90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2add90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2add94: 0x28420080  slti        $v0, $v0, 0x80
    ctx->pc = 0x2add94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2add98: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x2ADD98u;
    {
        const bool branch_taken_0x2add98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2add98) {
            ctx->pc = 0x2ADD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADD98u;
            // 0x2add9c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF00u;
            goto label_2adf00;
        }
    }
    ctx->pc = 0x2ADDA0u;
    // 0x2adda0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2adda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2adda4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2ADDA4u;
    SET_GPR_U32(ctx, 31, 0x2ADDACu);
    ctx->pc = 0x2ADDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADDA4u;
    // 0x2adda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2ADDA4u, 0x2ADDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADDACu;
label_2addac:
    // 0x2addac: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2addacu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2addb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2addb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2addb4: 0x0  nop
    ctx->pc = 0x2addb4u;
    // NOP
    // 0x2addb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2addb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2addbc: 0x0  nop
    ctx->pc = 0x2addbcu;
    // NOP
    // 0x2addc0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2ADDC0u;
    {
        const bool branch_taken_0x2addc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADDC0u;
        // 0x2addc4: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2addc0) {
            ctx->pc = 0x2ADDFCu;
            goto label_2addfc;
        }
    }
    ctx->pc = 0x2ADDC8u;
    // 0x2addc8: 0x0  nop
    ctx->pc = 0x2addc8u;
    // NOP
    // 0x2addcc: 0x0  nop
    ctx->pc = 0x2addccu;
    // NOP
    // 0x2addd0: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x2addd0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[2]);
    // 0x2addd4: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x2addd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2addd8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2addd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adddc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2adddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adde0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2adde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2adde4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2adde4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2adde8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2adde8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2addec: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2addecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2addf0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2addf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2addf4: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x2addf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2addf8: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x2addf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2addfc:
    // 0x2addfc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2addfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ade00: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ade00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade04: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ade04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ade08: 0x0  nop
    ctx->pc = 0x2ade08u;
    // NOP
    // 0x2ade0c: 0x0  nop
    ctx->pc = 0x2ade0cu;
    // NOP
    // 0x2ade10: 0x46140004  c1          0x140004
    ctx->pc = 0x2ade10u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x2ade14: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x2ade14u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ade18: 0x0  nop
    ctx->pc = 0x2ade18u;
    // NOP
    // 0x2ade1c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADE1Cu;
    {
        const bool branch_taken_0x2ade1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ade1c) {
            ctx->pc = 0x2ADE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADE1Cu;
            // 0x2ade20: 0x4600b001  sub.s       $f0, $f22, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADE30u;
            goto label_2ade30;
        }
    }
    ctx->pc = 0x2ADE24u;
    // 0x2ade24: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2ADE24u;
    SET_GPR_U32(ctx, 31, 0x2ADE2Cu);
    ctx->pc = 0x2ADE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADE24u;
    // 0x2ade28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2ADE24u, 0x2ADE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADE2Cu;
label_2ade2c:
    // 0x2ade2c: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x2ade2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_2ade30:
    // 0x2ade30: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ade30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ade34: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2ade34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ade38: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2ade38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ade3c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ade3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ade40: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ade40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ade44: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ade44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ade48: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2ade48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ade4c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ade4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ade50: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ade50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ade54: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2ade54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ade58: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2ade58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ade5c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ade5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ade60: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2ade60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ade64: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2ade64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ade68: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2ade68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ade6c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ade6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ade70: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2ade70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ade74: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2ade74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2ade78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ade7c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2ade7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2ade80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ade80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ade84: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2ade84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ade88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ade88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ade8c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2ade8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ade90: 0x50520006  beql        $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADE90u;
    {
        const bool branch_taken_0x2ade90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2ade90) {
            ctx->pc = 0x2ADE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADE90u;
            // 0x2ade94: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADEACu;
            goto label_2adeac;
        }
    }
    ctx->pc = 0x2ADE98u;
    // 0x2ade98: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ade98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ade9c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2ade9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2adea0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2adea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adea4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2adea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2adea8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2adea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2adeac:
    // 0x2adeac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2adeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2adeb0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2adeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2adeb4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2adeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2adeb8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2adeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2adebc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2adebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2adec0: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x2adec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x2adec4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2adec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2adec8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2adec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2adecc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2adeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2aded0: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2aded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2aded4: 0x10720006  beq         $v1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADED4u;
    {
        const bool branch_taken_0x2aded4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2ADED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADED4u;
        // 0x2aded8: 0xc7a00024  lwc1        $f0, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aded4) {
            ctx->pc = 0x2ADEF0u;
            goto label_2adef0;
        }
    }
    ctx->pc = 0x2ADEDCu;
    // 0x2adedc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2adedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adee0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2adee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2adee4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2adee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2adee8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2adee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adeec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2adeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2adef0:
    // 0x2adef0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2adef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2adef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2adef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2adef8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2adef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2adefc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2adf00:
    // 0x2adf00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2adf04: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2adf04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2adf08: 0x1440ff75  bnez        $v0, . + 4 + (-0x8B << 2)
    ctx->pc = 0x2ADF08u;
    {
        const bool branch_taken_0x2adf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF08u;
        // 0x2adf0c: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf08) {
            ctx->pc = 0x2ADCE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adce0;
        }
    }
    ctx->pc = 0x2ADF10u;
label_2adf10:
    // 0x2adf10: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2adf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2adf14: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2adf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2adf18: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2adf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2adf1c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2adf1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2adf20: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2adf20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2adf24: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2adf24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2adf28: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2adf28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2adf2c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2adf2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2adf30: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2adf30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2adf34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2adf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2adf38: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2adf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2adf3c: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2adf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2adf40: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2adf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2adf44: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2adf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2adf48: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADF48u;
        // 0x2adf4c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADF50u;
}
