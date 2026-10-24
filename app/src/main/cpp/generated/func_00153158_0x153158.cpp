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

// Function: func_00153158
// Address: 0x153158 - 0x153808
void func_00153158_0x153158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00153158_0x153158");
#endif

    switch (ctx->pc) {
        case 0x1531d0u: goto label_1531d0;
        case 0x1531f8u: goto label_1531f8;
        case 0x1532e4u: goto label_1532e4;
        case 0x153318u: goto label_153318;
        case 0x153340u: goto label_153340;
        case 0x15335cu: goto label_15335c;
        case 0x153370u: goto label_153370;
        case 0x153414u: goto label_153414;
        case 0x1534a0u: goto label_1534a0;
        case 0x1534bcu: goto label_1534bc;
        case 0x1534d8u: goto label_1534d8;
        case 0x1534e8u: goto label_1534e8;
        case 0x153530u: goto label_153530;
        case 0x153564u: goto label_153564;
        case 0x153624u: goto label_153624;
        case 0x1536dcu: goto label_1536dc;
        case 0x15370cu: goto label_15370c;
        case 0x1537b8u: goto label_1537b8;
        case 0x1537c8u: goto label_1537c8;
        default: break;
    }

    ctx->pc = 0x153158u;

    // 0x153158: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x153158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x15315c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x15315cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x153160: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x153160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x153164: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153168: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x153168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x15316c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15316cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153170: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x153170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x153174: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x153174u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153178: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x153178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x15317c: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x15317cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x153180: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x153180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x153184: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x153184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x153188: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x153188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15318c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15318cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x153190: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x153190u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x153194: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x153194u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x153198: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x153198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x15319c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x15319cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1531a0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1531a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1531a4: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x1531a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1531a8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1531a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1531ac: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1531acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1531b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1531b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1531b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1531b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1531b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1531b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1531bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1531bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1531c0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1531c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1531c4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1531c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1531c8: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1531C8u;
    SET_GPR_U32(ctx, 31, 0x1531D0u);
    ctx->pc = 0x1531CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1531C8u;
    // 0x1531cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1531C8u, 0x1531D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531D0u;
label_1531d0:
    // 0x1531d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1531d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1531d4: 0x0  nop
    ctx->pc = 0x1531d4u;
    // NOP
    // 0x1531d8: 0x0  nop
    ctx->pc = 0x1531d8u;
    // NOP
    // 0x1531dc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1531dcu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x1531e0: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1531e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1531e4: 0x0  nop
    ctx->pc = 0x1531e4u;
    // NOP
    // 0x1531e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1531E8u;
    {
        const bool branch_taken_0x1531e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1531ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1531E8u;
        // 0x1531ec: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1531e8) {
            ctx->pc = 0x1531FCu;
            goto label_1531fc;
        }
    }
    ctx->pc = 0x1531F0u;
    // 0x1531f0: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1531F0u;
    SET_GPR_U32(ctx, 31, 0x1531F8u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1531F0u, 0x1531F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1531F8u;
label_1531f8:
    // 0x1531f8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1531fc:
    // 0x1531fc: 0x46000186  mov.s       $f6, $f0
    ctx->pc = 0x1531fcu;
    ctx->f[6] = FPU_MOV_S(ctx->f[0]);
    // 0x153200: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x153200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x153204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153208: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x153208u;
    {
        const bool branch_taken_0x153208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153208u;
        // 0x15320c: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153208) {
            ctx->pc = 0x153244u;
            goto label_153244;
        }
    }
    ctx->pc = 0x153210u;
    // 0x153210: 0x9082fb53  lbu         $v0, -0x4AD($a0)
    ctx->pc = 0x153210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294966099)));
    // 0x153214: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x153214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x153218: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15321c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15321cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153220: 0x0  nop
    ctx->pc = 0x153220u;
    // NOP
    // 0x153224: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x153224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x153228: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x153228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x15322c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15322cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153230: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x153230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x153234: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x153234u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x153238: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x153238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15323c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x15323cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x153240: 0x46060180  add.s       $f6, $f0, $f6
    ctx->pc = 0x153240u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_153244:
    // 0x153244: 0xc6230158  lwc1        $f3, 0x158($s1)
    ctx->pc = 0x153244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153248: 0xc6e70158  lwc1        $f7, 0x158($s7)
    ctx->pc = 0x153248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15324c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x15324cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x153250: 0x46071800  add.s       $f0, $f3, $f7
    ctx->pc = 0x153250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x153254: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x153254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153258: 0x0  nop
    ctx->pc = 0x153258u;
    // NOP
    // 0x15325c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x15325Cu;
    {
        const bool branch_taken_0x15325c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15325Cu;
        // 0x153260: 0x4600adc6  mov.s       $f23, $f21 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15325c) {
            ctx->pc = 0x15331Cu;
            goto label_15331c;
        }
    }
    ctx->pc = 0x153264u;
    // 0x153264: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x153264u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x153268: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x15326c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x15326cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x153270: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x153270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x153274: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153278: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x153278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15327c: 0x46073902  mul.s       $f4, $f7, $f7
    ctx->pc = 0x15327cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x153280: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x153280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x153284: 0x46022840  add.s       $f1, $f5, $f2
    ctx->pc = 0x153284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x153288: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x153288u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x15328c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x15328cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x153290: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x153290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x153294: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x153294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x153298: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x153298u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x15329c: 0x0  nop
    ctx->pc = 0x15329cu;
    // NOP
    // 0x1532a0: 0x0  nop
    ctx->pc = 0x1532a0u;
    // NOP
    // 0x1532a4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1532a4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x1532a8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1532a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1532ac: 0x0  nop
    ctx->pc = 0x1532acu;
    // NOP
    // 0x1532b0: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x1532b0u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x1532b4: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x1532b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1532b8: 0x0  nop
    ctx->pc = 0x1532b8u;
    // NOP
    // 0x1532bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1532BCu;
    {
        const bool branch_taken_0x1532bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1532C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532BCu;
        // 0x1532c0: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532bc) {
            ctx->pc = 0x1532C8u;
            goto label_1532c8;
        }
    }
    ctx->pc = 0x1532C4u;
    // 0x1532c4: 0x4600b046  mov.s       $f1, $f22
    ctx->pc = 0x1532c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[22]);
label_1532c8:
    // 0x1532c8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1532c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1532cc: 0x0  nop
    ctx->pc = 0x1532ccu;
    // NOP
    // 0x1532d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1532D0u;
    {
        const bool branch_taken_0x1532d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1532D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532D0u;
        // 0x1532d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532d0) {
            ctx->pc = 0x1532DCu;
            goto label_1532dc;
        }
    }
    ctx->pc = 0x1532D8u;
    // 0x1532d8: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1532d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1532dc:
    // 0x1532dc: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x1532DCu;
    SET_GPR_U32(ctx, 31, 0x1532E4u);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x1532DCu, 0x1532E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1532E4u;
label_1532e4:
    // 0x1532e4: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x1532e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1532e8: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x1532e8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x1532ec: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1532ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1532f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1532F0u;
    {
        const bool branch_taken_0x1532f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1532F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1532F0u;
        // 0x1532f4: 0xe7b40064  swc1        $f20, 0x64($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1532f0) {
            ctx->pc = 0x1532FCu;
            goto label_1532fc;
        }
    }
    ctx->pc = 0x1532F8u;
    // 0x1532f8: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x1532f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_1532fc:
    // 0x1532fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1532fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153300: 0x0  nop
    ctx->pc = 0x153300u;
    // NOP
    // 0x153304: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x153304u;
    {
        const bool branch_taken_0x153304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153304u;
        // 0x153308: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153304) {
            ctx->pc = 0x153310u;
            goto label_153310;
        }
    }
    ctx->pc = 0x15330Cu;
    // 0x15330c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x15330cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_153310:
    // 0x153310: 0xc07e050  jal         func_1F8140
    ctx->pc = 0x153310u;
    SET_GPR_U32(ctx, 31, 0x153318u);
    ctx->pc = 0x1F8140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8140u, 0x153310u, 0x153318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153318u;
label_153318:
    // 0x153318: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x153318u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_15331c:
    // 0x15331c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x153320: 0x26320160  addiu       $s2, $s1, 0x160
    ctx->pc = 0x153320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x153324: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x153324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
    // 0x153328: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153328u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8A0u));
    // 0x15332c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x15332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x153334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153338: 0xc056b68  jal         func_15ADA0
    ctx->pc = 0x153338u;
    SET_GPR_U32(ctx, 31, 0x153340u);
    ctx->pc = 0x15333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153338u;
    // 0x15333c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ADA0u, 0x153338u, 0x153340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153340u;
label_153340:
    // 0x153340: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x153340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x153344: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x153344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153348: 0x263e0080  addiu       $fp, $s1, 0x80
    ctx->pc = 0x153348u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x15334c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153350: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x153350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153354: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x153354u;
    SET_GPR_U32(ctx, 31, 0x15335Cu);
    ctx->pc = 0x153358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153354u;
    // 0x153358: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x153354u, 0x15335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15335Cu;
label_15335c:
    // 0x15335c: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x153360: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x153360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x153364: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x153364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153368: 0xc04078a  jal         func_101E28
    ctx->pc = 0x153368u;
    SET_GPR_U32(ctx, 31, 0x153370u);
    ctx->pc = 0x15336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153368u;
    // 0x15336c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x153368u, 0x153370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153370u;
label_153370:
    // 0x153370: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x153370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153374: 0x0  nop
    ctx->pc = 0x153374u;
    // NOP
    // 0x153378: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x153378u;
    {
        const bool branch_taken_0x153378 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153378u;
        // 0x15337c: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153378) {
            ctx->pc = 0x1533BCu;
            goto label_1533bc;
        }
    }
    ctx->pc = 0x153380u;
    // 0x153380: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153384: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153388: 0x0  nop
    ctx->pc = 0x153388u;
    // NOP
    // 0x15338c: 0x0  nop
    ctx->pc = 0x15338cu;
    // NOP
    // 0x153390: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x153390u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x153394: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x153394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153398: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x153398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15339c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533a0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1533a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1533a4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1533a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1533a8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1533a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1533ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1533acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1533b0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1533b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1533b4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x1533b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1533b8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x1533b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1533bc:
    // 0x1533bc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1533bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1533c0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1533c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1533c4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1533c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1533c8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1533c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1533cc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1533ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1533d0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1533d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1533d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1533d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1533d8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1533d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1533dc: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1533dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1533e0: 0x8ea300f0  lw          $v1, 0xF0($s5)
    ctx->pc = 0x1533e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1533e4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1533e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1533e8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1533e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1533ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1533ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1533f0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1533f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1533f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1533f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1533f8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1533f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1533fc: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1533fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x153400: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x153400u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153404: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x153404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153408: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x153408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15340c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x15340Cu;
    SET_GPR_U32(ctx, 31, 0x153414u);
    ctx->pc = 0x153410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15340Cu;
    // 0x153410: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x15340Cu, 0x153414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153414u;
label_153414:
    // 0x153414: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x153414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153418: 0x0  nop
    ctx->pc = 0x153418u;
    // NOP
    // 0x15341c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x15341Cu;
    {
        const bool branch_taken_0x15341c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x153420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15341Cu;
        // 0x153420: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15341c) {
            ctx->pc = 0x153460u;
            goto label_153460;
        }
    }
    ctx->pc = 0x153424u;
    // 0x153424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153428: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15342c: 0x0  nop
    ctx->pc = 0x15342cu;
    // NOP
    // 0x153430: 0x0  nop
    ctx->pc = 0x153430u;
    // NOP
    // 0x153434: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x153434u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x153438: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x153438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15343c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x15343cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153440: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x153440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153444: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x153444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x153448: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x153448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15344c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x15344cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x153450: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x153450u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x153454: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x153454u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x153458: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x153458u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15345c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x15345cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_153460:
    // 0x153460: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x153460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153464: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x153464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153468: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x153468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x15346c: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x15346cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x153470: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x153470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x153474: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x153474u;
    {
        const bool branch_taken_0x153474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153474u;
        // 0x153478: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153474) {
            ctx->pc = 0x1534D8u;
            goto label_1534d8;
        }
    }
    ctx->pc = 0x15347Cu;
    // 0x15347c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x15347cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x153480: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x153480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x153484: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x153484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x153488: 0x3c05808c  lui         $a1, 0x808C
    ctx->pc = 0x153488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32908 << 16));
    // 0x15348c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x15348cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153490: 0x34a5e6f0  ori         $a1, $a1, 0xE6F0
    ctx->pc = 0x153490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59120);
    // 0x153494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x153494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x153498: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x153498u;
    SET_GPR_U32(ctx, 31, 0x1534A0u);
    ctx->pc = 0x15349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153498u;
    // 0x15349c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x153498u, 0x1534A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534A0u;
label_1534a0:
    // 0x1534a0: 0x8ee400f0  lw          $a0, 0xF0($s7)
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    // 0x1534a4: 0x3c058099  lui         $a1, 0x8099
    ctx->pc = 0x1534a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32921 << 16));
    // 0x1534a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1534a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1534ac: 0x34a58877  ori         $a1, $a1, 0x8877
    ctx->pc = 0x1534acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34935);
    // 0x1534b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1534b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1534b4: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x1534B4u;
    SET_GPR_U32(ctx, 31, 0x1534BCu);
    ctx->pc = 0x1534B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534B4u;
    // 0x1534b8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x1534B4u, 0x1534BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534BCu;
label_1534bc:
    // 0x1534bc: 0x3c0580fa  lui         $a1, 0x80FA
    ctx->pc = 0x1534bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33018 << 16));
    // 0x1534c0: 0x8ea400f0  lw          $a0, 0xF0($s5)
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x1534c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1534c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1534c8: 0x34a5ce87  ori         $a1, $a1, 0xCE87
    ctx->pc = 0x1534c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52871);
    // 0x1534cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1534ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1534d0: 0xc057caa  jal         func_15F2A8
    ctx->pc = 0x1534D0u;
    SET_GPR_U32(ctx, 31, 0x1534D8u);
    ctx->pc = 0x1534D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534D0u;
    // 0x1534d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F2A8u, 0x1534D0u, 0x1534D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534D8u;
label_1534d8:
    // 0x1534d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1534d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1534dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1534dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534e0: 0xc056ae8  jal         func_15ABA0
    ctx->pc = 0x1534E0u;
    SET_GPR_U32(ctx, 31, 0x1534E8u);
    ctx->pc = 0x1534E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1534E0u;
    // 0x1534e4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABA0u, 0x1534E0u, 0x1534E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534E8u;
label_1534e8:
    // 0x1534e8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1534e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1534ec: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1534ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1534f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1534f4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1534F4u;
    {
        const bool branch_taken_0x1534f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1534f4) {
            ctx->pc = 0x1534F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534F4u;
            // 0x1534f8: 0xc643000c  lwc1        $f3, 0xC($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x153568u;
            goto label_153568;
        }
    }
    ctx->pc = 0x1534FCu;
    // 0x1534fc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1534fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153500: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153500u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153504: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153508: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15350c: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x15350cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x153510: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x153510u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x153514: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153518: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x153518u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15351c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x15351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153520: 0x3c06807f  lui         $a2, 0x807F
    ctx->pc = 0x153520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32895 << 16));
    // 0x153524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x153524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153528: 0xc057ee6  jal         func_15FB98
    ctx->pc = 0x153528u;
    SET_GPR_U32(ctx, 31, 0x153530u);
    ctx->pc = 0x15352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153528u;
    // 0x15352c: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB98u, 0x153528u, 0x153530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153530u;
label_153530:
    // 0x153530: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153534: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x153534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153538: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15353c: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15353cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153540: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x153540u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x153544: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x153544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x153548: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x153548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15354c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x15354cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x153550: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x153550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153554: 0x3c06807f  lui         $a2, 0x807F
    ctx->pc = 0x153554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32895 << 16));
    // 0x153558: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x153558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15355c: 0xc057ee6  jal         func_15FB98
    ctx->pc = 0x15355Cu;
    SET_GPR_U32(ctx, 31, 0x153564u);
    ctx->pc = 0x153560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15355Cu;
    // 0x153560: 0x34c6ff00  ori         $a2, $a2, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FB98u, 0x15355Cu, 0x153564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153564u;
label_153564:
    // 0x153564: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x153564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_153568:
    // 0x153568: 0x4600bb07  neg.s       $f12, $f23
    ctx->pc = 0x153568u;
    ctx->f[12] = FPU_NEG_S(ctx->f[23]);
    // 0x15356c: 0xc64a0008  lwc1        $f10, 0x8($s2)
    ctx->pc = 0x15356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x153570: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x153570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153574: 0xc6240160  lwc1        $f4, 0x160($s1)
    ctx->pc = 0x153574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153578: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x153578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15357c: 0xc7a70014  lwc1        $f7, 0x14($sp)
    ctx->pc = 0x15357cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x153580: 0xc7ab0018  lwc1        $f11, 0x18($sp)
    ctx->pc = 0x153580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x153584: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x153584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153588: 0x46033c42  mul.s       $f17, $f7, $f3
    ctx->pc = 0x153588u;
    ctx->f[17] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x15358c: 0xc6460004  lwc1        $f6, 0x4($s2)
    ctx->pc = 0x15358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x153590: 0x46035c02  mul.s       $f16, $f11, $f3
    ctx->pc = 0x153590u;
    ctx->f[16] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x153594: 0xc7a9001c  lwc1        $f9, 0x1C($sp)
    ctx->pc = 0x153594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x153598: 0x460303c2  mul.s       $f15, $f0, $f3
    ctx->pc = 0x153598u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15359c: 0x46040382  mul.s       $f14, $f0, $f4
    ctx->pc = 0x15359cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1535a0: 0x460a0202  mul.s       $f8, $f0, $f10
    ctx->pc = 0x1535a0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1535a4: 0x46065b42  mul.s       $f13, $f11, $f6
    ctx->pc = 0x1535a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x1535a8: 0x46045842  mul.s       $f1, $f11, $f4
    ctx->pc = 0x1535a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x1535ac: 0x46043942  mul.s       $f5, $f7, $f4
    ctx->pc = 0x1535acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x1535b0: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x1535b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x1535b4: 0x460a3882  mul.s       $f2, $f7, $f10
    ctx->pc = 0x1535b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x1535b8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x1535b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1535bc: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x1535bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x1535c0: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x1535c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
    // 0x1535c4: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x1535c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x1535c8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x1535c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1535cc: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x1535ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x1535d0: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x1535d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x1535d4: 0x46064982  mul.s       $f6, $f9, $f6
    ctx->pc = 0x1535d4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
    // 0x1535d8: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x1535d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x1535dc: 0x46110840  add.s       $f1, $f1, $f17
    ctx->pc = 0x1535dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[17]);
    // 0x1535e0: 0x46100000  add.s       $f0, $f0, $f16
    ctx->pc = 0x1535e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[16]);
    // 0x1535e4: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x1535e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x1535e8: 0x460a5ac2  mul.s       $f11, $f11, $f10
    ctx->pc = 0x1535e8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1535ec: 0x460a4a42  mul.s       $f9, $f9, $f10
    ctx->pc = 0x1535ecu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x1535f0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1535f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1535f4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1535f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1535f8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1535f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x1535fc: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x1535fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x153600: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x153600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x153604: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x153604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x153608: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x153608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15360c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x15360cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x153610: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x153610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x153614: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x153614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x153618: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x153618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15361c: 0xc0567f2  jal         func_159FC8
    ctx->pc = 0x15361Cu;
    SET_GPR_U32(ctx, 31, 0x153624u);
    ctx->pc = 0x153620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15361Cu;
    // 0x153620: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC8u, 0x15361Cu, 0x153624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153624u;
label_153624:
    // 0x153624: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x153624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153628: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153628u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15362c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x15362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153630: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x153630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x153634: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x153634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153638: 0xc7ab0024  lwc1        $f11, 0x24($sp)
    ctx->pc = 0x153638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x15363c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153640: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x153640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153644: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x153644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x153648: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x153648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15364c: 0x460b2042  mul.s       $f1, $f4, $f11
    ctx->pc = 0x15364cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x153650: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x153650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x153654: 0x46055182  mul.s       $f6, $f10, $f5
    ctx->pc = 0x153654u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x153658: 0xc7a7002c  lwc1        $f7, 0x2C($sp)
    ctx->pc = 0x153658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x15365c: 0x46052302  mul.s       $f12, $f4, $f5
    ctx->pc = 0x15365cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x153660: 0xc7a9001c  lwc1        $f9, 0x1C($sp)
    ctx->pc = 0x153660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x153664: 0x460b43c2  mul.s       $f15, $f8, $f11
    ctx->pc = 0x153664u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x153668: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x153668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x15366c: 0x460d50c2  mul.s       $f3, $f10, $f13
    ctx->pc = 0x15366cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x153670: 0x460d2382  mul.s       $f14, $f4, $f13
    ctx->pc = 0x153670u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x153674: 0x46074882  mul.s       $f2, $f9, $f7
    ctx->pc = 0x153674u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x153678: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x153678u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x15367c: 0x460b5182  mul.s       $f6, $f10, $f11
    ctx->pc = 0x15367cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x153680: 0x460d4402  mul.s       $f16, $f8, $f13
    ctx->pc = 0x153680u;
    ctx->f[16] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x153684: 0x460f18c1  sub.s       $f3, $f3, $f15
    ctx->pc = 0x153684u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x153688: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x153688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x15368c: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x15368cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x153690: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x153690u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x153694: 0x46075282  mul.s       $f10, $f10, $f7
    ctx->pc = 0x153694u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x153698: 0x46074202  mul.s       $f8, $f8, $f7
    ctx->pc = 0x153698u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x15369c: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x15369cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x1536a0: 0x460b4ac2  mul.s       $f11, $f9, $f11
    ctx->pc = 0x1536a0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x1536a4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1536a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1536a8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1536a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1536ac: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1536acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1536b0: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x1536b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x1536b4: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x1536b4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x1536b8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1536b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1536bc: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x1536bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x1536c0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1536c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1536c4: 0x46101081  sub.s       $f2, $f2, $f16
    ctx->pc = 0x1536c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[16]);
    // 0x1536c8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1536c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1536cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1536ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1536d0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1536d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1536d4: 0xc051e2a  jal         func_1478A8
    ctx->pc = 0x1536D4u;
    SET_GPR_U32(ctx, 31, 0x1536DCu);
    ctx->pc = 0x1536D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1536D4u;
    // 0x1536d8: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1478A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1478A8u, 0x1536D4u, 0x1536DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1536DCu;
label_1536dc:
    // 0x1536dc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1536e0: 0x10960006  beq         $a0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1536E0u;
    {
        const bool branch_taken_0x1536e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x1536E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536E0u;
        // 0x1536e4: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536e0) {
            ctx->pc = 0x1536FCu;
            goto label_1536fc;
        }
    }
    ctx->pc = 0x1536E8u;
    // 0x1536e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1536e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1536ec: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1536ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1536f0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1536f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1536f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1536f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1536f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1536f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1536fc:
    // 0x1536fc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1536fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x153700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x153700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153704: 0xc0567f2  jal         func_159FC8
    ctx->pc = 0x153704u;
    SET_GPR_U32(ctx, 31, 0x15370Cu);
    ctx->pc = 0x153708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153704u;
    // 0x153708: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC8u, 0x153704u, 0x15370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15370Cu;
label_15370c:
    // 0x15370c: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x15370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x153710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x153710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153714: 0xc7ab0024  lwc1        $f11, 0x24($sp)
    ctx->pc = 0x153714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x153718: 0x26e40080  addiu       $a0, $s7, 0x80
    ctx->pc = 0x153718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 128));
    // 0x15371c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x15371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x153720: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x153720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x153724: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x153724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x153728: 0x460b2042  mul.s       $f1, $f4, $f11
    ctx->pc = 0x153728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x15372c: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x15372cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x153730: 0x46055182  mul.s       $f6, $f10, $f5
    ctx->pc = 0x153730u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x153734: 0xc7a7002c  lwc1        $f7, 0x2C($sp)
    ctx->pc = 0x153734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x153738: 0x46052302  mul.s       $f12, $f4, $f5
    ctx->pc = 0x153738u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x15373c: 0xc7a9001c  lwc1        $f9, 0x1C($sp)
    ctx->pc = 0x15373cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x153740: 0x460b43c2  mul.s       $f15, $f8, $f11
    ctx->pc = 0x153740u;
    ctx->f[15] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x153744: 0x460d50c2  mul.s       $f3, $f10, $f13
    ctx->pc = 0x153744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[13]);
    // 0x153748: 0x460d2382  mul.s       $f14, $f4, $f13
    ctx->pc = 0x153748u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x15374c: 0x46074882  mul.s       $f2, $f9, $f7
    ctx->pc = 0x15374cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
    // 0x153750: 0x46054002  mul.s       $f0, $f8, $f5
    ctx->pc = 0x153750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x153754: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x153754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x153758: 0x460b5182  mul.s       $f6, $f10, $f11
    ctx->pc = 0x153758u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[11]);
    // 0x15375c: 0x460d4402  mul.s       $f16, $f8, $f13
    ctx->pc = 0x15375cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x153760: 0x460f18c1  sub.s       $f3, $f3, $f15
    ctx->pc = 0x153760u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[15]);
    // 0x153764: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x153764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x153768: 0x460c1081  sub.s       $f2, $f2, $f12
    ctx->pc = 0x153768u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x15376c: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x15376cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x153770: 0x46075282  mul.s       $f10, $f10, $f7
    ctx->pc = 0x153770u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x153774: 0x46074202  mul.s       $f8, $f8, $f7
    ctx->pc = 0x153774u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x153778: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x153778u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x15377c: 0x460b4ac2  mul.s       $f11, $f9, $f11
    ctx->pc = 0x15377cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x153780: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x153780u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x153784: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x153784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x153788: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x153788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x15378c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x15378cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x153790: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x153790u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x153794: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x153794u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x153798: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x153798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x15379c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x15379cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1537a0: 0x46101081  sub.s       $f2, $f2, $f16
    ctx->pc = 0x1537a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[16]);
    // 0x1537a4: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1537a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1537a8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1537a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1537ac: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1537acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1537b0: 0xc051e2a  jal         func_1478A8
    ctx->pc = 0x1537B0u;
    SET_GPR_U32(ctx, 31, 0x1537B8u);
    ctx->pc = 0x1537B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537B0u;
    // 0x1537b4: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1478A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1478A8u, 0x1537B0u, 0x1537B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537B8u;
label_1537b8:
    // 0x1537b8: 0x8ee600d0  lw          $a2, 0xD0($s7)
    ctx->pc = 0x1537b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
    // 0x1537bc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1537bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537c0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1537C0u;
    SET_GPR_U32(ctx, 31, 0x1537C8u);
    ctx->pc = 0x1537C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537C0u;
    // 0x1537c4: 0x8ee400f0  lw          $a0, 0xF0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1537C0u, 0x1537C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537C8u;
label_1537c8:
    // 0x1537c8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x1537c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1537cc: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x1537ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1537d0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x1537d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1537d4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x1537d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1537d8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x1537d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1537dc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x1537dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1537e0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x1537e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1537e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1537e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1537e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1537e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1537ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1537ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1537f0: 0xc7b70128  lwc1        $f23, 0x128($sp)
    ctx->pc = 0x1537f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1537f4: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x1537f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1537f8: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x1537f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1537fc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1537fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x153800: 0x3e00008  jr          $ra
    ctx->pc = 0x153800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153800u;
        // 0x153804: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153808u;
}
