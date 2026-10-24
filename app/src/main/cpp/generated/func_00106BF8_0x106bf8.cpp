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

// Function: func_00106BF8
// Address: 0x106bf8 - 0x107360
void func_00106BF8_0x106bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00106BF8_0x106bf8");
#endif

    switch (ctx->pc) {
        case 0x106d20u: goto label_106d20;
        case 0x106fd4u: goto label_106fd4;
        case 0x107054u: goto label_107054;
        case 0x107068u: goto label_107068;
        case 0x107074u: goto label_107074;
        case 0x1070f4u: goto label_1070f4;
        case 0x107134u: goto label_107134;
        case 0x1071f0u: goto label_1071f0;
        case 0x107210u: goto label_107210;
        case 0x107224u: goto label_107224;
        case 0x107230u: goto label_107230;
        case 0x1072b0u: goto label_1072b0;
        default: break;
    }

    ctx->pc = 0x106bf8u;

    // 0x106bf8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x106bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x106bfc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x106bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x106c00: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x106c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x106c04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x106c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c08: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x106c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x106c0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x106c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106c10: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x106c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x106c14: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x106c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x106c18: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x106c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x106c1c: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x106c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x106c20: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x106c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x106c24: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x106c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x106c28: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x106c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x106c2c: 0xe7ba0180  swc1        $f26, 0x180($sp)
    ctx->pc = 0x106c2cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x106c30: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x106c30u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x106c34: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x106c34u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x106c38: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x106c38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x106c3c: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x106c3cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x106c40: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x106c40u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x106c44: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x106c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x106c48: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x106c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106c4c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x106c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106c50: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x106c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106c54: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x106c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106c58: 0x10c001ad  beqz        $a2, . + 4 + (0x1AD << 2)
    ctx->pc = 0x106C58u;
    {
        const bool branch_taken_0x106c58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C58u;
        // 0x106c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c58) {
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x106C60u;
    // 0x106c60: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x106c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106c64: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x106c64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106c68: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x106c68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106c6c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x106c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x106c70: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x106c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106c74: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x106c78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x106c78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106c7c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x106c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x106c80: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x106c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106c84: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x106c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106c88: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x106c88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106c8c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x106c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106c90: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x106c90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106c94: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x106c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106c98: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x106c98u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x106c9c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x106c9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x106ca0: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x106ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x106ca4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x106ca4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x106ca8: 0x46041e40  add.s       $f25, $f3, $f4
    ctx->pc = 0x106ca8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x106cac: 0x4606c832  c.eq.s      $f25, $f6
    ctx->pc = 0x106cacu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[25], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106cb0: 0x0  nop
    ctx->pc = 0x106cb0u;
    // NOP
    // 0x106cb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x106CB4u;
    {
        const bool branch_taken_0x106cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CB4u;
        // 0x106cb8: 0xe7a10048  swc1        $f1, 0x48($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cb4) {
            ctx->pc = 0x106CC4u;
            goto label_106cc4;
        }
    }
    ctx->pc = 0x106CBCu;
    // 0x106cbc: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x106CBCu;
    {
        const bool branch_taken_0x106cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CBCu;
        // 0x106cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cbc) {
            ctx->pc = 0x107310u;
            goto label_107310;
        }
    }
    ctx->pc = 0x106CC4u;
label_106cc4:
    // 0x106cc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x106cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x106cc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x106cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x106ccc: 0x0  nop
    ctx->pc = 0x106cccu;
    // NOP
    // 0x106cd0: 0x46191683  div.s       $f26, $f2, $f25
    ctx->pc = 0x106cd0u;
    ctx->f[26] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[25]);
    // 0x106cd4: 0x0  nop
    ctx->pc = 0x106cd4u;
    // NOP
    // 0x106cd8: 0x0  nop
    ctx->pc = 0x106cd8u;
    // NOP
    // 0x106cdc: 0x46190584  c1          0x190584
    ctx->pc = 0x106cdcu;
    ctx->f[22] = ps2FpuSqrt(ctx->fcr31, ctx->f[25]);
    // 0x106ce0: 0x8cd40000  lw          $s4, 0x0($a2)
    ctx->pc = 0x106ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x106ce4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x106ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x106ce8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x106ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x106cec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x106cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106cf0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x106cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x106cf4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x106cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x106cf8: 0x12820184  beq         $s4, $v0, . + 4 + (0x184 << 2)
    ctx->pc = 0x106CF8u;
    {
        const bool branch_taken_0x106cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x106CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CF8u;
        // 0x106cfc: 0x2470ff40  addiu       $s0, $v1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106cf8) {
            ctx->pc = 0x10730Cu;
            goto label_10730c;
        }
    }
    ctx->pc = 0x106D00u;
    // 0x106d00: 0x460015c6  mov.s       $f23, $f2
    ctx->pc = 0x106d00u;
    ctx->f[23] = FPU_MOV_S(ctx->f[2]);
    // 0x106d04: 0x46003606  mov.s       $f24, $f6
    ctx->pc = 0x106d04u;
    ctx->f[24] = FPU_MOV_S(ctx->f[6]);
    // 0x106d08: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x106d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x106d0c: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x106d10: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x106d10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x106d14: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x106d18: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x106d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x106d1c: 0x0  nop
    ctx->pc = 0x106d1cu;
    // NOP
label_106d20:
    // 0x106d20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106d24: 0x14400174  bnez        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x106D24u;
    {
        const bool branch_taken_0x106d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106d24) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106D2Cu;
    // 0x106d2c: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x106d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106d30: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x106d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106d34: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x106d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106d38: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x106d38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x106d3c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x106d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106d40: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x106d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x106d44: 0xc6480004  lwc1        $f8, 0x4($s2)
    ctx->pc = 0x106d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x106d48: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x106d48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x106d4c: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x106d4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x106d50: 0x46080181  sub.s       $f6, $f0, $f8
    ctx->pc = 0x106d50u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x106d54: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x106d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106d58: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x106d58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x106d5c: 0xc6490008  lwc1        $f9, 0x8($s2)
    ctx->pc = 0x106d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x106d60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x106d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x106d64: 0x46091141  sub.s       $f5, $f2, $f9
    ctx->pc = 0x106d64u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x106d68: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x106d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x106d6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x106d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x106d70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106d74: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x106d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106d78: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x106d78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x106d7c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x106d7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x106d80: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x106d80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x106d84: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x106d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x106d88: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x106d88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x106d8c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x106d8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x106d90: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x106d90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106d94: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x106d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106d98: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x106d98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x106d9c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x106d9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x106da0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x106da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x106da4: 0x460a0832  c.eq.s      $f1, $f10
    ctx->pc = 0x106da4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106da8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106dac: 0x46080041  sub.s       $f1, $f0, $f8
    ctx->pc = 0x106dacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x106db0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x106db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x106db4: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x106db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106db8: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x106db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x106dbc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x106DBCu;
    {
        const bool branch_taken_0x106dbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x106DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DBCu;
        // 0x106dc0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dbc) {
            ctx->pc = 0x106DE4u;
            goto label_106de4;
        }
    }
    ctx->pc = 0x106DC4u;
    // 0x106dc4: 0x460a0832  c.eq.s      $f1, $f10
    ctx->pc = 0x106dc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106dc8: 0x0  nop
    ctx->pc = 0x106dc8u;
    // NOP
    // 0x106dcc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x106DCCu;
    {
        const bool branch_taken_0x106dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106dcc) {
            ctx->pc = 0x106DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DCCu;
            // 0x106dd0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106DE8u;
            goto label_106de8;
        }
    }
    ctx->pc = 0x106DD4u;
    // 0x106dd4: 0x460a0032  c.eq.s      $f0, $f10
    ctx->pc = 0x106dd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106dd8: 0x0  nop
    ctx->pc = 0x106dd8u;
    // NOP
    // 0x106ddc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x106DDCu;
    {
        const bool branch_taken_0x106ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106ddc) {
            ctx->pc = 0x106DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106DDCu;
            // 0x106de0: 0xe7b70054  swc1        $f23, 0x54($sp) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106DE4u;
            goto label_106de4;
        }
    }
    ctx->pc = 0x106DE4u;
label_106de4:
    // 0x106de4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x106de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106de8:
    // 0x106de8: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x106de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106dec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106df0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x106df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106df4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x106df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106df8: 0xc60400b0  lwc1        $f4, 0xB0($s0)
    ctx->pc = 0x106df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106dfc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x106dfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x106e00: 0x46042142  mul.s       $f5, $f4, $f4
    ctx->pc = 0x106e00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x106e04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x106e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x106e08: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x106e08u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x106e0c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x106e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106e10: 0x0  nop
    ctx->pc = 0x106e10u;
    // NOP
    // 0x106e14: 0x45010138  bc1t        . + 4 + (0x138 << 2)
    ctx->pc = 0x106E14u;
    {
        const bool branch_taken_0x106e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106e14) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106E1Cu;
    // 0x106e1c: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x106e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106e20: 0x0  nop
    ctx->pc = 0x106e20u;
    // NOP
    // 0x106e24: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
    ctx->pc = 0x106E24u;
    {
        const bool branch_taken_0x106e24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106e24) {
            ctx->pc = 0x106E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E24u;
            // 0x106e28: 0xc60000b0  lwc1        $f0, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x106F1Cu;
            goto label_106f1c;
        }
    }
    ctx->pc = 0x106E2Cu;
    // 0x106e2c: 0x4604b000  add.s       $f0, $f22, $f4
    ctx->pc = 0x106e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
    // 0x106e30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106e34: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x106e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106e38: 0x0  nop
    ctx->pc = 0x106e38u;
    // NOP
    // 0x106e3c: 0x4501012e  bc1t        . + 4 + (0x12E << 2)
    ctx->pc = 0x106E3Cu;
    {
        const bool branch_taken_0x106e3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x106E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E3Cu;
        // 0x106e40: 0xc7a50040  lwc1        $f5, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e3c) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106E44u;
    // 0x106e44: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x106e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106e48: 0xc6490000  lwc1        $f9, 0x0($s2)
    ctx->pc = 0x106e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x106e4c: 0xc64a0004  lwc1        $f10, 0x4($s2)
    ctx->pc = 0x106e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x106e50: 0x46091081  sub.s       $f2, $f2, $f9
    ctx->pc = 0x106e50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
    // 0x106e54: 0xc6480008  lwc1        $f8, 0x8($s2)
    ctx->pc = 0x106e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x106e58: 0xc7a70044  lwc1        $f7, 0x44($sp)
    ctx->pc = 0x106e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x106e5c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x106e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x106e60: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x106e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x106e64: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x106e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x106e68: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106e6c: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x106e6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x106e70: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x106e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x106e74: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x106e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x106e78: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x106e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106e7c: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x106e7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x106e80: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x106e80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106e84: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x106e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x106e88: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x106e88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106e8c: 0x461a18c2  mul.s       $f3, $f3, $f26
    ctx->pc = 0x106e8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x106e90: 0x46181834  c.lt.s      $f3, $f24
    ctx->pc = 0x106e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106e94: 0x0  nop
    ctx->pc = 0x106e94u;
    // NOP
    // 0x106e98: 0x45010117  bc1t        . + 4 + (0x117 << 2)
    ctx->pc = 0x106E98u;
    {
        const bool branch_taken_0x106e98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x106E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E98u;
        // 0x106e9c: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e98) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106EA0u;
    // 0x106ea0: 0x4603b834  c.lt.s      $f23, $f3
    ctx->pc = 0x106ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106ea4: 0x0  nop
    ctx->pc = 0x106ea4u;
    // NOP
    // 0x106ea8: 0x45010113  bc1t        . + 4 + (0x113 << 2)
    ctx->pc = 0x106EA8u;
    {
        const bool branch_taken_0x106ea8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106ea8) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106EB0u;
    // 0x106eb0: 0x46032882  mul.s       $f2, $f5, $f3
    ctx->pc = 0x106eb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x106eb4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x106eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106eb8: 0x46033842  mul.s       $f1, $f7, $f3
    ctx->pc = 0x106eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x106ebc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x106ebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x106ec0: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x106ec0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x106ec4: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x106ec4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x106ec8: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x106ec8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x106ecc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x106eccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x106ed0: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x106ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x106ed4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x106ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106ed8: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106edc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x106edcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x106ee0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x106ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x106ee4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x106ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x106ee8: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x106ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106eec: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x106eecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x106ef0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x106ef0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x106ef4: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x106ef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x106ef8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x106ef8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x106efc: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x106efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x106f00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x106f04: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106f08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x106f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106f0c: 0x0  nop
    ctx->pc = 0x106f0cu;
    // NOP
    // 0x106f10: 0x450100f9  bc1t        . + 4 + (0xF9 << 2)
    ctx->pc = 0x106F10u;
    {
        const bool branch_taken_0x106f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x106f10) {
            ctx->pc = 0x1072F8u;
            goto label_1072f8;
        }
    }
    ctx->pc = 0x106F18u;
    // 0x106f18: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x106f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_106f1c:
    // 0x106f1c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106f20: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x106f20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x106f24: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x106f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106f28: 0x0  nop
    ctx->pc = 0x106f28u;
    // NOP
    // 0x106f2c: 0x450000a7  bc1f        . + 4 + (0xA7 << 2)
    ctx->pc = 0x106F2Cu;
    {
        const bool branch_taken_0x106f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106f2c) {
            ctx->pc = 0x1071CCu;
            goto label_1071cc;
        }
    }
    ctx->pc = 0x106F34u;
    // 0x106f34: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x106f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x106f38: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x106f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f3c: 0xc6020090  lwc1        $f2, 0x90($s0)
    ctx->pc = 0x106f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x106f40: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x106f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106f44: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x106f44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x106f48: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x106f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x106f4c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x106f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x106f50: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x106f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x106f54: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x106f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x106f58: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x106f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x106f5c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x106f5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106f60: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x106f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f64: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x106f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x106f68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x106f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x106f6c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x106f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x106f70: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x106f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x106f74: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x106f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x106f78: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x106f78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x106f7c: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x106f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x106f80: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x106f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x106f84: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x106f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x106f88: 0x46040540  add.s       $f21, $f0, $f4
    ctx->pc = 0x106f88u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x106f8c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x106f8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x106f90: 0x0  nop
    ctx->pc = 0x106f90u;
    // NOP
    // 0x106f94: 0x0  nop
    ctx->pc = 0x106f94u;
    // NOP
    // 0x106f98: 0x46020084  c1          0x20084
    ctx->pc = 0x106f98u;
    ctx->f[2] = ps2FpuSqrt(ctx->fcr31, ctx->f[2]);
    // 0x106f9c: 0x4616b0c2  mul.s       $f3, $f22, $f22
    ctx->pc = 0x106f9cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x106fa0: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x106fa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x106fa8: 0x4615ab02  mul.s       $f12, $f21, $f21
    ctx->pc = 0x106fa8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x106fac: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x106facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x106fb0: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x106fb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x106fb4: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x106fb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x106fb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x106fb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x106fbc: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x106fbcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x106fc0: 0x0  nop
    ctx->pc = 0x106fc0u;
    // NOP
    // 0x106fc4: 0x0  nop
    ctx->pc = 0x106fc4u;
    // NOP
    // 0x106fc8: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x106fc8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x106fcc: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x106FCCu;
    SET_GPR_U32(ctx, 31, 0x106FD4u);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x106FCCu, 0x106FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FD4u;
label_106fd4:
    // 0x106fd4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x106fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x106fd8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x106fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x106fdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x106fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x106fe0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x106fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x106fe4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x106fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x106fe8: 0x0  nop
    ctx->pc = 0x106fe8u;
    // NOP
    // 0x106fec: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x106FECu;
    {
        const bool branch_taken_0x106fec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x106fec) {
            ctx->pc = 0x107128u;
            goto label_107128;
        }
    }
    ctx->pc = 0x106FF4u;
    // 0x106ff4: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x106ff8: 0x34216c04  ori         $at, $at, 0x6C04
    ctx->pc = 0x106ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27652);
    // 0x106ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x106ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107000: 0x0  nop
    ctx->pc = 0x107000u;
    // NOP
    // 0x107004: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x107004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107008: 0x0  nop
    ctx->pc = 0x107008u;
    // NOP
    // 0x10700c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x10700Cu;
    {
        const bool branch_taken_0x10700c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10700Cu;
        // 0x107010: 0x27b10060  addiu       $s1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10700c) {
            ctx->pc = 0x107128u;
            goto label_107128;
        }
    }
    ctx->pc = 0x107014u;
    // 0x107014: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x107014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107018: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x107018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10701c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x10701cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x107020: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x107020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107024: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107028: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x107028u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x10702c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x10702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107030: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x107030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107038: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x107038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10703c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x10703cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x107040: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x107040u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x107044: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x107044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x107048: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x107048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x10704c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x10704Cu;
    SET_GPR_U32(ctx, 31, 0x107054u);
    ctx->pc = 0x107050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10704Cu;
    // 0x107050: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x10704Cu, 0x107054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107054u;
label_107054:
    // 0x107054: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x107054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x107058: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x107058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10705c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10705cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107060: 0xc056bcc  jal         func_15AF30
    ctx->pc = 0x107060u;
    SET_GPR_U32(ctx, 31, 0x107068u);
    ctx->pc = 0x107064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107060u;
    // 0x107064: 0x27c6d880  addiu       $a2, $fp, -0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF30u, 0x107060u, 0x107068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107068u;
label_107068:
    // 0x107068: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x107068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10706c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x10706Cu;
    SET_GPR_U32(ctx, 31, 0x107074u);
    ctx->pc = 0x107070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10706Cu;
    // 0x107070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x10706Cu, 0x107074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107074u;
label_107074:
    // 0x107074: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x107074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107078: 0x0  nop
    ctx->pc = 0x107078u;
    // NOP
    // 0x10707c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x10707Cu;
    {
        const bool branch_taken_0x10707c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10707Cu;
        // 0x107080: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10707c) {
            ctx->pc = 0x1070B8u;
            goto label_1070b8;
        }
    }
    ctx->pc = 0x107084u;
    // 0x107084: 0x0  nop
    ctx->pc = 0x107084u;
    // NOP
    // 0x107088: 0x0  nop
    ctx->pc = 0x107088u;
    // NOP
    // 0x10708c: 0x4600b883  div.s       $f2, $f23, $f0
    ctx->pc = 0x10708cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[0]);
    // 0x107090: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x107090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107094: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x107094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107098: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x107098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10709c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x10709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1070a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1070a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1070a4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1070a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1070a8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1070a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1070ac: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1070acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1070b0: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1070b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1070b4: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1070b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1070b8:
    // 0x1070b8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1070b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1070bc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1070bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1070c0: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1070c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1070c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1070c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070c8: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1070c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1070cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1070ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070d0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1070d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1070d4: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1070d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1070d8: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1070d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1070dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1070dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1070e0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1070e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1070e4: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1070e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1070e8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1070e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1070ec: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1070ECu;
    SET_GPR_U32(ctx, 31, 0x1070F4u);
    ctx->pc = 0x1070F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070ECu;
    // 0x1070f0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1070ECu, 0x1070F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070F4u;
label_1070f4:
    // 0x1070f4: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1070f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1070f8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1070f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1070fc: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1070fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107100: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x107100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x107104: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x107104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107108: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x107108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x10710c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x10710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107110: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x107110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x107114: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x107114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x107118: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x107118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10711c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10711cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x107120: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x107120u;
    {
        const bool branch_taken_0x107120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107120u;
        // 0x107124: 0xe6610008  swc1        $f1, 0x8($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107120) {
            ctx->pc = 0x1072F4u;
            goto label_1072f4;
        }
    }
    ctx->pc = 0x107128u;
label_107128:
    // 0x107128: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x107128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10712c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x10712Cu;
    SET_GPR_U32(ctx, 31, 0x107134u);
    ctx->pc = 0x107130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10712Cu;
    // 0x107130: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x10712Cu, 0x107134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107134u;
label_107134:
    // 0x107134: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x107134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107138: 0x0  nop
    ctx->pc = 0x107138u;
    // NOP
    // 0x10713c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x10713Cu;
    {
        const bool branch_taken_0x10713c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10713Cu;
        // 0x107140: 0xc7a30060  lwc1        $f3, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10713c) {
            ctx->pc = 0x107178u;
            goto label_107178;
        }
    }
    ctx->pc = 0x107144u;
    // 0x107144: 0x0  nop
    ctx->pc = 0x107144u;
    // NOP
    // 0x107148: 0x0  nop
    ctx->pc = 0x107148u;
    // NOP
    // 0x10714c: 0x4600b883  div.s       $f2, $f23, $f0
    ctx->pc = 0x10714cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[0]);
    // 0x107150: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x107150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107154: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x107154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107158: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x107158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10715c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x10715cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x107160: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x107160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x107164: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x107164u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x107168: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x107168u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x10716c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x10716cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x107170: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x107170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x107174: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x107174u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_107178:
    // 0x107178: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x107178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10717c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x10717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107180: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x107180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107184: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x107184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107188: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x107188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10718c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x10718cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x107190: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x107190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x107194: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x107194u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x107198: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x107198u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10719c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x10719cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1071a0: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x1071a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1071a4: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x1071a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1071a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1071a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1071ac: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1071acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1071b0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x1071b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1071b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1071b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1071b8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1071b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1071bc: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x1071bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1071c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1071c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1071c4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1071C4u;
    {
        const bool branch_taken_0x1071c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1071C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1071C4u;
        // 0x1071c8: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1071c4) {
            ctx->pc = 0x1072F4u;
            goto label_1072f4;
        }
    }
    ctx->pc = 0x1071CCu;
label_1071cc:
    // 0x1071cc: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x1071ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1071d0: 0x0  nop
    ctx->pc = 0x1071d0u;
    // NOP
    // 0x1071d4: 0x0  nop
    ctx->pc = 0x1071d4u;
    // NOP
    // 0x1071d8: 0x46060184  c1          0x60184
    ctx->pc = 0x1071d8u;
    ctx->f[6] = ps2FpuSqrt(ctx->fcr31, ctx->f[6]);
    // 0x1071dc: 0xc60c00b0  lwc1        $f12, 0xB0($s0)
    ctx->pc = 0x1071dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1071e0: 0x0  nop
    ctx->pc = 0x1071e0u;
    // NOP
    // 0x1071e4: 0x46066303  div.s       $f12, $f12, $f6
    ctx->pc = 0x1071e4u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[6]);
    // 0x1071e8: 0xc0e86de  jal         func_3A1B78
    ctx->pc = 0x1071E8u;
    SET_GPR_U32(ctx, 31, 0x1071F0u);
    ctx->pc = 0x3A1B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1B78u, 0x1071E8u, 0x1071F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1071F0u;
label_1071f0:
    // 0x1071f0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1071f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1071f4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1071f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1071f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1071f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1071fc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1071fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x107200: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x107200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107204: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x107204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107208: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x107208u;
    SET_GPR_U32(ctx, 31, 0x107210u);
    ctx->pc = 0x10720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107208u;
    // 0x10720c: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x107208u, 0x107210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107210u;
label_107210:
    // 0x107210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x107210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107214: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x107214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107218: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x107218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10721c: 0xc056bcc  jal         func_15AF30
    ctx->pc = 0x10721Cu;
    SET_GPR_U32(ctx, 31, 0x107224u);
    ctx->pc = 0x107220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10721Cu;
    // 0x107220: 0x27c6d880  addiu       $a2, $fp, -0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294957184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF30u, 0x10721Cu, 0x107224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107224u;
label_107224:
    // 0x107224: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x107224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107228: 0xc04078a  jal         func_101E28
    ctx->pc = 0x107228u;
    SET_GPR_U32(ctx, 31, 0x107230u);
    ctx->pc = 0x10722Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107228u;
    // 0x10722c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x107228u, 0x107230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107230u;
label_107230:
    // 0x107230: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x107230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107234: 0x0  nop
    ctx->pc = 0x107234u;
    // NOP
    // 0x107238: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x107238u;
    {
        const bool branch_taken_0x107238 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107238u;
        // 0x10723c: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107238) {
            ctx->pc = 0x107274u;
            goto label_107274;
        }
    }
    ctx->pc = 0x107240u;
    // 0x107240: 0x0  nop
    ctx->pc = 0x107240u;
    // NOP
    // 0x107244: 0x0  nop
    ctx->pc = 0x107244u;
    // NOP
    // 0x107248: 0x4600b883  div.s       $f2, $f23, $f0
    ctx->pc = 0x107248u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[0]);
    // 0x10724c: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x10724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107250: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x107250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107254: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x107254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107258: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x107258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x10725c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x10725cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x107260: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x107260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x107264: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x107264u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x107268: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x107268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x10726c: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x10726cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x107270: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x107270u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_107274:
    // 0x107274: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x107274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x107278: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x107278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10727c: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x10727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107280: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x107284: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x107284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107288: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10728c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x10728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107290: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x107290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x107294: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x107294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x107298: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x107298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10729c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x10729cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1072a0: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1072a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1072a4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1072a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1072a8: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x1072A8u;
    SET_GPR_U32(ctx, 31, 0x1072B0u);
    ctx->pc = 0x1072ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1072A8u;
    // 0x1072ac: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x1072A8u, 0x1072B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1072B0u;
label_1072b0:
    // 0x1072b0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1072b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1072b4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1072b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1072b8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1072b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1072bc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1072bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1072c0: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x1072c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1072c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1072c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1072c8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1072c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1072cc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1072ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1072d0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1072d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1072d4: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x1072d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1072d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1072d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1072dc: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x1072dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1072e0: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1072E0u;
    {
        const bool branch_taken_0x1072e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1072E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072E0u;
        // 0x1072e4: 0xe7a20088  swc1        $f2, 0x88($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072e0) {
            ctx->pc = 0x1072F4u;
            goto label_1072f4;
        }
    }
    ctx->pc = 0x1072E8u;
    // 0x1072e8: 0xe6640000  swc1        $f4, 0x0($s3)
    ctx->pc = 0x1072e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1072ec: 0xe6630004  swc1        $f3, 0x4($s3)
    ctx->pc = 0x1072ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1072f0: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x1072f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1072f4:
    // 0x1072f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1072f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1072f8:
    // 0x1072f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1072f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1072fc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x107300: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107304: 0x1682fe86  bne         $s4, $v0, . + 4 + (-0x17A << 2)
    ctx->pc = 0x107304u;
    {
        const bool branch_taken_0x107304 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x107308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107304u;
        // 0x107308: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107304) {
            ctx->pc = 0x106D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106d20;
        }
    }
    ctx->pc = 0x10730Cu;
label_10730c:
    // 0x10730c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x10730cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_107310:
    // 0x107310: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x107310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x107314: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x107314u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x107318: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x107318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10731c: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x10731cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x107320: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x107320u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107324: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x107324u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x107328: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x107328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10732c: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x10732cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x107330: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x107330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x107334: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x107334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x107338: 0xc7ba0180  lwc1        $f26, 0x180($sp)
    ctx->pc = 0x107338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x10733c: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x10733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x107340: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x107340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x107344: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x107344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x107348: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x107348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x10734c: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x10734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107350: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x107350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107354: 0x3e00008  jr          $ra
    ctx->pc = 0x107354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107354u;
        // 0x107358: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10735Cu;
    // 0x10735c: 0x0  nop
    ctx->pc = 0x10735cu;
    // NOP
    ctx->pc = 0x107360u;
}
