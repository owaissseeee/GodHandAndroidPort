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

// Function: func_001325A0
// Address: 0x1325a0 - 0x1329c0
void func_001325A0_0x1325a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001325A0_0x1325a0");
#endif

    switch (ctx->pc) {
        case 0x132750u: goto label_132750;
        case 0x132800u: goto label_132800;
        case 0x1328a0u: goto label_1328a0;
        case 0x1328c0u: goto label_1328c0;
        case 0x132984u: goto label_132984;
        default: break;
    }

    ctx->pc = 0x1325a0u;

    // 0x1325a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1325a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1325a4: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1325a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1325a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1325a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x1325ac: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1325acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1325b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1325b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1325b4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1325b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1325b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1325b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1325bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1325c0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1325c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1325c4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1325c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1325c8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1325c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1325cc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1325ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1325d0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1325d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1325d4: 0x106000ef  beqz        $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x1325D4u;
    {
        const bool branch_taken_0x1325d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325D4u;
        // 0x1325d8: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325d4) {
            ctx->pc = 0x132994u;
            goto label_132994;
        }
    }
    ctx->pc = 0x1325DCu;
    // 0x1325dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1325dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1325e0: 0x504000ed  beql        $v0, $zero, . + 4 + (0xED << 2)
    ctx->pc = 0x1325E0u;
    {
        const bool branch_taken_0x1325e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325e0) {
            ctx->pc = 0x1325E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1325E0u;
            // 0x1325e4: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x1325E8u;
    // 0x1325e8: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1325e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1325ec: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x1325ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1325f0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1325f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1325f4: 0x0  nop
    ctx->pc = 0x1325f4u;
    // NOP
    // 0x1325f8: 0x450300e7  bc1tl       . + 4 + (0xE7 << 2)
    ctx->pc = 0x1325F8u;
    {
        const bool branch_taken_0x1325f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1325f8) {
            ctx->pc = 0x1325FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1325F8u;
            // 0x1325fc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132600u;
    // 0x132600: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x132600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132604: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x132604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132608: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x132608u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13260c: 0x0  nop
    ctx->pc = 0x13260cu;
    // NOP
    // 0x132610: 0x450300e1  bc1tl       . + 4 + (0xE1 << 2)
    ctx->pc = 0x132610u;
    {
        const bool branch_taken_0x132610 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132610) {
            ctx->pc = 0x132614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132610u;
            // 0x132614: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132618u;
    // 0x132618: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x132618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13261c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x132620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132624: 0x0  nop
    ctx->pc = 0x132624u;
    // NOP
    // 0x132628: 0x450300db  bc1tl       . + 4 + (0xDB << 2)
    ctx->pc = 0x132628u;
    {
        const bool branch_taken_0x132628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132628) {
            ctx->pc = 0x13262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132628u;
            // 0x13262c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132630u;
    // 0x132630: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x132630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132634: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x132634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132638: 0x0  nop
    ctx->pc = 0x132638u;
    // NOP
    // 0x13263c: 0x450300d6  bc1tl       . + 4 + (0xD6 << 2)
    ctx->pc = 0x13263Cu;
    {
        const bool branch_taken_0x13263c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13263c) {
            ctx->pc = 0x132640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13263Cu;
            // 0x132640: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132644u;
    // 0x132644: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x132644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132648: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x132648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13264c: 0x0  nop
    ctx->pc = 0x13264cu;
    // NOP
    // 0x132650: 0x450300d1  bc1tl       . + 4 + (0xD1 << 2)
    ctx->pc = 0x132650u;
    {
        const bool branch_taken_0x132650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132650) {
            ctx->pc = 0x132654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132650u;
            // 0x132654: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x132658u;
    // 0x132658: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x132658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13265c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13265cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132660: 0x0  nop
    ctx->pc = 0x132660u;
    // NOP
    // 0x132664: 0x450300cc  bc1tl       . + 4 + (0xCC << 2)
    ctx->pc = 0x132664u;
    {
        const bool branch_taken_0x132664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132664) {
            ctx->pc = 0x132668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132664u;
            // 0x132668: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132998u;
            goto label_132998;
        }
    }
    ctx->pc = 0x13266Cu;
    // 0x13266c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x132670: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x132670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132674: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x132674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132678: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x132678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13267c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13267cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132680: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x132680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132684: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x132684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x132688: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x132688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13268c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132690: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x132690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132694: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x132694u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132698: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x132698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13269c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x13269cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1326a0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x1326a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1326a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1326a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1326a8: 0x0  nop
    ctx->pc = 0x1326a8u;
    // NOP
    // 0x1326ac: 0x0  nop
    ctx->pc = 0x1326acu;
    // NOP
    // 0x1326b0: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x1326b0u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[1]);
    // 0x1326b4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1326b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1326b8: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x1326b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1326bc: 0x0  nop
    ctx->pc = 0x1326bcu;
    // NOP
    // 0x1326c0: 0x0  nop
    ctx->pc = 0x1326c0u;
    // NOP
    // 0x1326c4: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x1326c4u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[0]);
    // 0x1326c8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1326c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1326cc: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x1326ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1326d0: 0x8e070068  lw          $a3, 0x68($s0)
    ctx->pc = 0x1326d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1326d4: 0x0  nop
    ctx->pc = 0x1326d4u;
    // NOP
    // 0x1326d8: 0x0  nop
    ctx->pc = 0x1326d8u;
    // NOP
    // 0x1326dc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1326dcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x1326e0: 0x8e080018  lw          $t0, 0x18($s0)
    ctx->pc = 0x1326e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1326e4: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1326e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1326e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1326e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1326ec: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1326ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1326f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1326f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1326f4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1326f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1326f8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1326f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1326fc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1326fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x132700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132704: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x132704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x132708: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x132708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13270c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13270cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x132710: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x132710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x132714: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x132714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x132718: 0x10c5009e  beq         $a2, $a1, . + 4 + (0x9E << 2)
    ctx->pc = 0x132718u;
    {
        const bool branch_taken_0x132718 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x13271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132718u;
        // 0x13271c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132718) {
            ctx->pc = 0x132994u;
            goto label_132994;
        }
    }
    ctx->pc = 0x132720u;
    // 0x132720: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x132720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x132724: 0x91050005  lbu         $a1, 0x5($t0)
    ctx->pc = 0x132724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x132728: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x132728u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13272c: 0x91030006  lbu         $v1, 0x6($t0)
    ctx->pc = 0x13272cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x132730: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x132730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x132734: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x132734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x132738: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x132738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13273c: 0x12800095  beqz        $s4, . + 4 + (0x95 << 2)
    ctx->pc = 0x13273Cu;
    {
        const bool branch_taken_0x13273c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x132740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13273Cu;
        // 0x132740: 0x863821  addu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13273c) {
            ctx->pc = 0x132994u;
            goto label_132994;
        }
    }
    ctx->pc = 0x132744u;
    // 0x132744: 0x24150014  addiu       $s5, $zero, 0x14
    ctx->pc = 0x132744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x132748: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x132748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13274c: 0x0  nop
    ctx->pc = 0x13274cu;
    // NOP
label_132750:
    // 0x132750: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x132750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x132754: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x132754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x132758: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x132758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x13275c: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x13275cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x132760: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x132760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132764: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x132764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132768: 0x952018  mult        $a0, $a0, $s5
    ctx->pc = 0x132768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x13276c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13276cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x132770: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x132770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x132774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x132774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x132778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13277c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x13277cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132780: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x132780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x132784: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132784u;
        // 0x132788: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132784) {
            ctx->pc = 0x132798u;
            goto label_132798;
        }
    }
    ctx->pc = 0x13278Cu;
    // 0x13278c: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x13278cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x132790: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x132790u;
    {
        const bool branch_taken_0x132790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132790u;
        // 0x132794: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132790) {
            ctx->pc = 0x1327C0u;
            goto label_1327c0;
        }
    }
    ctx->pc = 0x132798u;
label_132798:
    // 0x132798: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x132798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13279c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13279Cu;
    {
        const bool branch_taken_0x13279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13279Cu;
        // 0x1327a0: 0x1551018  mult        $v0, $t2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13279c) {
            ctx->pc = 0x1327B0u;
            goto label_1327b0;
        }
    }
    ctx->pc = 0x1327A4u;
    // 0x1327a4: 0x3c0680ff  lui         $a2, 0x80FF
    ctx->pc = 0x1327a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33023 << 16));
    // 0x1327a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1327A8u;
    {
        const bool branch_taken_0x1327a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327A8u;
        // 0x1327ac: 0x481821  addu        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327a8) {
            ctx->pc = 0x1327C8u;
            goto label_1327c8;
        }
    }
    ctx->pc = 0x1327B0u;
label_1327b0:
    // 0x1327b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1327b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1327b4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1327b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1327b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1327b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1327bc: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1327bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1327c0:
    // 0x1327c0: 0x1551018  mult        $v0, $t2, $s5
    ctx->pc = 0x1327c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1327c4: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1327c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1327c8:
    // 0x1327c8: 0x90620010  lbu         $v0, 0x10($v1)
    ctx->pc = 0x1327c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1327cc: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x1327ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1327d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1327d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1327d4: 0x946a0002  lhu         $t2, 0x2($v1)
    ctx->pc = 0x1327d4u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1327d8: 0x946c0004  lhu         $t4, 0x4($v1)
    ctx->pc = 0x1327d8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1327dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1327dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1327e0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1327E0u;
    {
        const bool branch_taken_0x1327e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1327E0u;
        // 0x1327e4: 0x946b0006  lhu         $t3, 0x6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327e0) {
            ctx->pc = 0x1328A8u;
            goto label_1328a8;
        }
    }
    ctx->pc = 0x1327E8u;
    // 0x1327e8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1327ec: 0x24f30002  addiu       $s3, $a3, 0x2
    ctx->pc = 0x1327ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1327f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1327f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327f4: 0x25320001  addiu       $s2, $t1, 0x1
    ctx->pc = 0x1327f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1327f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1327f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1327fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1327fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_132800:
    // 0x132800: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x132800u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x132804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x132808: 0x0  nop
    ctx->pc = 0x132808u;
    // NOP
    // 0x13280c: 0x0  nop
    ctx->pc = 0x13280cu;
    // NOP
    // 0x132810: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x132810u;
    {
        const bool branch_taken_0x132810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x132814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132810u;
        // 0x132814: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132810) {
            ctx->pc = 0x132800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132800;
        }
    }
    ctx->pc = 0x132818u;
    // 0x132818: 0x1111818  mult        $v1, $t0, $s1
    ctx->pc = 0x132818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13281c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x132820: 0x1512818  mult        $a1, $t2, $s1
    ctx->pc = 0x132820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x132824: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13282c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13282cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132830: 0xa24021  addu        $t0, $a1, $v0
    ctx->pc = 0x132830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x132834: 0x1912818  mult        $a1, $t4, $s1
    ctx->pc = 0x132834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x132838: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x132838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x13283c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x13283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132840: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x132840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x132844: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x132844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x132848: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x132848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13284c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x13284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132850: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x132854: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x132854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132858: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x132858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13285c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x13285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132860: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x132860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x132864: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x132864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132868: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x132868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13286c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x13286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132870: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x132870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132874: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x132874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132878: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x13287c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x13287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132880: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x132880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x132884: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x132884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132888: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x132888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13288c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x13288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132890: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x132890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x132894: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x132894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132898: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x132898u;
    SET_GPR_U32(ctx, 31, 0x1328A0u);
    ctx->pc = 0x13289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132898u;
    // 0x13289c: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x132898u, 0x1328A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328A0u;
label_1328a0:
    // 0x1328a0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1328A0u;
    {
        const bool branch_taken_0x1328a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1328A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328A0u;
        // 0x1328a4: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328a0) {
            ctx->pc = 0x132988u;
            goto label_132988;
        }
    }
    ctx->pc = 0x1328A8u;
label_1328a8:
    // 0x1328a8: 0x24f30002  addiu       $s3, $a3, 0x2
    ctx->pc = 0x1328a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x1328ac: 0x25320001  addiu       $s2, $t1, 0x1
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1328b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1328b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1328b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1328b8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1328b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1328bc: 0x0  nop
    ctx->pc = 0x1328bcu;
    // NOP
label_1328c0:
    // 0x1328c0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1328c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1328c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1328c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1328c8: 0x0  nop
    ctx->pc = 0x1328c8u;
    // NOP
    // 0x1328cc: 0x0  nop
    ctx->pc = 0x1328ccu;
    // NOP
    // 0x1328d0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1328D0u;
    {
        const bool branch_taken_0x1328d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1328D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328D0u;
        // 0x1328d4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1328d0) {
            ctx->pc = 0x1328C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1328c0;
        }
    }
    ctx->pc = 0x1328D8u;
    // 0x1328d8: 0x1114018  mult        $t0, $t0, $s1
    ctx->pc = 0x1328d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1328dc: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1328dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1328e0: 0x1511818  mult        $v1, $t2, $s1
    ctx->pc = 0x1328e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1328e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1328e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1328e8: 0x1912818  mult        $a1, $t4, $s1
    ctx->pc = 0x1328e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1328ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1328ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1328f0: 0x1715018  mult        $t2, $t3, $s1
    ctx->pc = 0x1328f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1328f4: 0x10d4021  addu        $t0, $t0, $t5
    ctx->pc = 0x1328f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x1328f8: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1328f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1328fc: 0x6d1021  addu        $v0, $v1, $t5
    ctx->pc = 0x1328fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x132900: 0xad1821  addu        $v1, $a1, $t5
    ctx->pc = 0x132900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x132904: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x132904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x132908: 0x14d4821  addu        $t1, $t2, $t5
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x13290c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x132910: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x132910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132914: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x132914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x132918: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x132918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13291c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x13291cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x132920: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x132920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132924: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x132924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x132928: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x132928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13292c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x13292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x132930: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x132930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132934: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x132934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x132938: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x132938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13293c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132940: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x132940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132944: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x132944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x132948: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x132948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13294c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x13294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x132950: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x132950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132954: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x132954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132958: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x132958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13295c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x13295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132960: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x132960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132964: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x132964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x132968: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x132968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13296c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x13296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x132970: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x132970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132974: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x132974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x132978: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x132978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13297c: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x13297Cu;
    SET_GPR_U32(ctx, 31, 0x132984u);
    ctx->pc = 0x132980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13297Cu;
    // 0x132980: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x13297Cu, 0x132984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132984u;
label_132984:
    // 0x132984: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x132984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_132988:
    // 0x132988: 0x134102b  sltu        $v0, $t1, $s4
    ctx->pc = 0x132988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x13298c: 0x1440ff70  bnez        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x13298Cu;
    {
        const bool branch_taken_0x13298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13298Cu;
        // 0x132990: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13298c) {
            ctx->pc = 0x132750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132750;
        }
    }
    ctx->pc = 0x132994u;
label_132994:
    // 0x132994: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x132994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_132998:
    // 0x132998: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x132998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13299c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13299cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1329a0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1329a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1329a4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1329a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1329a8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1329a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1329ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1329acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1329b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1329b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1329b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1329B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1329B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329B4u;
        // 0x1329b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1329B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1329BCu;
    // 0x1329bc: 0x0  nop
    ctx->pc = 0x1329bcu;
    // NOP
    ctx->pc = 0x1329c0u;
}
