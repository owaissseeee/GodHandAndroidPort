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

// Function: func_00154240
// Address: 0x154240 - 0x154a90
void func_00154240_0x154240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00154240_0x154240");
#endif

    switch (ctx->pc) {
        case 0x154390u: goto label_154390;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543e0u: goto label_1543e0;
        case 0x154408u: goto label_154408;
        case 0x154430u: goto label_154430;
        case 0x154458u: goto label_154458;
        case 0x154480u: goto label_154480;
        case 0x1544a8u: goto label_1544a8;
        case 0x154510u: goto label_154510;
        case 0x154538u: goto label_154538;
        case 0x154560u: goto label_154560;
        case 0x154588u: goto label_154588;
        case 0x1545b0u: goto label_1545b0;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545e8u: goto label_1545e8;
        case 0x154610u: goto label_154610;
        case 0x154670u: goto label_154670;
        case 0x15469cu: goto label_15469c;
        case 0x1546d0u: goto label_1546d0;
        case 0x154758u: goto label_154758;
        case 0x1547acu: goto label_1547ac;
        case 0x154830u: goto label_154830;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549dcu: goto label_1549dc;
        case 0x154a58u: goto label_154a58;
        default: break;
    }

    ctx->pc = 0x154240u;

    // 0x154240: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x154240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x154244: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x154244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x154248: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x154248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x15424c: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x15424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x154250: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x154250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x154254: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x154254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154258: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x154258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x15425c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x15425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x154260: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x154260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154264: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x154264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x154268: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x154268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x15426c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x15426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x154270: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x154270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x154274: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x154274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x154278: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x154278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15427c: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x15427cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x154280: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x154280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x154284: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x154284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x154288: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x154288u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x15428c: 0x148001f2  bnez        $a0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x15428Cu;
    {
        const bool branch_taken_0x15428c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x154290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15428Cu;
        // 0x154290: 0x30730001  andi        $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15428c) {
            ctx->pc = 0x154A58u;
            goto label_154a58;
        }
    }
    ctx->pc = 0x154294u;
    // 0x154294: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x154298: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x154298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15429c: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x1542a0: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1542a4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1542a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1542a8: 0x924302b6  lbu         $v1, 0x2B6($s2)
    ctx->pc = 0x1542a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 694)));
    // 0x1542ac: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x1542acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x1542b0: 0x924202b7  lbu         $v0, 0x2B7($s2)
    ctx->pc = 0x1542b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 695)));
    // 0x1542b4: 0xa62024  and         $a0, $a1, $a2
    ctx->pc = 0x1542b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1542b8: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x1542b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1542bc: 0x0  nop
    ctx->pc = 0x1542bcu;
    // NOP
    // 0x1542c0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1542c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x1542c4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1542c8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1542c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1542cc: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x1542ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1542d0: 0x0  nop
    ctx->pc = 0x1542d0u;
    // NOP
    // 0x1542d4: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x1542d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x1542d8: 0xc68103ac  lwc1        $f1, 0x3AC($s4)
    ctx->pc = 0x1542d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1542dc: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1542dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1542e0: 0x46082943  div.s       $f5, $f5, $f8
    ctx->pc = 0x1542e0u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[8]);
    // 0x1542e4: 0x924202bc  lbu         $v0, 0x2BC($s2)
    ctx->pc = 0x1542e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 700)));
    // 0x1542e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1542e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1542ec: 0xc68603a0  lwc1        $f6, 0x3A0($s4)
    ctx->pc = 0x1542ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1542f0: 0x0  nop
    ctx->pc = 0x1542f0u;
    // NOP
    // 0x1542f4: 0x0  nop
    ctx->pc = 0x1542f4u;
    // NOP
    // 0x1542f8: 0x460839c3  div.s       $f7, $f7, $f8
    ctx->pc = 0x1542f8u;
    ctx->f[7] = ps2FpuDivide(ctx->fcr31, ctx->f[7], ctx->f[8]);
    // 0x1542fc: 0xc6420240  lwc1        $f2, 0x240($s2)
    ctx->pc = 0x1542fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x154300: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x154300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x154304: 0x0  nop
    ctx->pc = 0x154304u;
    // NOP
    // 0x154308: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x154308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x15430c: 0xc6430244  lwc1        $f3, 0x244($s2)
    ctx->pc = 0x15430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154310: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x154310u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x154314: 0xc68903a4  lwc1        $f9, 0x3A4($s4)
    ctx->pc = 0x154314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x154318: 0xc6410248  lwc1        $f1, 0x248($s2)
    ctx->pc = 0x154318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15431c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x15431cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x154320: 0xc68603a8  lwc1        $f6, 0x3A8($s4)
    ctx->pc = 0x154320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x154324: 0x0  nop
    ctx->pc = 0x154324u;
    // NOP
    // 0x154328: 0x0  nop
    ctx->pc = 0x154328u;
    // NOP
    // 0x15432c: 0x46082103  div.s       $f4, $f4, $f8
    ctx->pc = 0x15432cu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[8]);
    // 0x154330: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x154330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x154334: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x154334u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x154338: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x154338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x15433c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x15433cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x154340: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x154340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x154344: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x154344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x154348: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x154348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15434c: 0x1080005e  beqz        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x15434Cu;
    {
        const bool branch_taken_0x15434c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x154350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15434Cu;
        // 0x154350: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15434c) {
            ctx->pc = 0x1544C8u;
            goto label_1544c8;
        }
    }
    ctx->pc = 0x154354u;
    // 0x154354: 0x13f080  sll         $fp, $s3, 2
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x154358: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x154358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x15435c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154360: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x154360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154364: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x154368: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x15436c: 0x26280060  addiu       $t0, $s1, 0x60
    ctx->pc = 0x15436cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x154370: 0x26290070  addiu       $t1, $s1, 0x70
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x154374: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x154378: 0x26360010  addiu       $s6, $s1, 0x10
    ctx->pc = 0x154378u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15437c: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x15437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x154380: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x154380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x154384: 0x26570220  addiu       $s7, $s2, 0x220
    ctx->pc = 0x154384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x154388: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x154388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15438c: 0x0  nop
    ctx->pc = 0x15438cu;
    // NOP
label_154390:
    // 0x154390: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x154390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154394: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x154394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154398: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x154398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15439c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x15439cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1543a0: 0x14a7fffb  bne         $a1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1543A0u;
    {
        const bool branch_taken_0x1543a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x1543A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A0u;
        // 0x1543a4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543a0) {
            ctx->pc = 0x154390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154390;
        }
    }
    ctx->pc = 0x1543A8u;
    // 0x1543a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1543a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1543acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1543b0: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x1543b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x1543b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1543b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1543b8:
    // 0x1543b8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1543b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1543bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1543bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1543c0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1543c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1543c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1543c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1543c8: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1543C8u;
    {
        const bool branch_taken_0x1543c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1543CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543C8u;
        // 0x1543cc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543c8) {
            ctx->pc = 0x1543B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1543b8;
        }
    }
    ctx->pc = 0x1543D0u;
    // 0x1543d0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x1543d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1543d8: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x1543d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x1543dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1543dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1543e0:
    // 0x1543e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1543e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1543e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1543e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1543e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1543e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1543ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1543ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1543f0: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1543F0u;
    {
        const bool branch_taken_0x1543f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1543F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543F0u;
        // 0x1543f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543f0) {
            ctx->pc = 0x1543E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1543e0;
        }
    }
    ctx->pc = 0x1543F8u;
    // 0x1543f8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1543f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1543fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154400: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x154404: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154408:
    // 0x154408: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15440c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154410: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154414: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x154414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154418: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154418u;
    {
        const bool branch_taken_0x154418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x15441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154418u;
        // 0x15441c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154418) {
            ctx->pc = 0x154408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154408;
        }
    }
    ctx->pc = 0x154420u;
    // 0x154420: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x154424: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154428: 0x2442d890  addiu       $v0, $v0, -0x2770
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957200));
    // 0x15442c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154430:
    // 0x154430: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x154430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154434: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154438: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15443c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x154440: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154440u;
    {
        const bool branch_taken_0x154440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x154444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154440u;
        // 0x154444: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154440) {
            ctx->pc = 0x154430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154430;
        }
    }
    ctx->pc = 0x154448u;
    // 0x154448: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x154448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15444c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154450: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x154454: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154458:
    // 0x154458: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15445c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x154460: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154464: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x154464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154468: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154468u;
    {
        const bool branch_taken_0x154468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x15446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154468u;
        // 0x15446c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154468) {
            ctx->pc = 0x154458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154458;
        }
    }
    ctx->pc = 0x154470u;
    // 0x154470: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x154470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154474: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154478: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x15447c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154480:
    // 0x154480: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154484: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x154484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x154488: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15448c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154490: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154490u;
    {
        const bool branch_taken_0x154490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x154494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154490u;
        // 0x154494: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154490) {
            ctx->pc = 0x154480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154480;
        }
    }
    ctx->pc = 0x154498u;
    // 0x154498: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x154498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15449c: 0x2664d880  addiu       $a0, $s3, -0x2780
    ctx->pc = 0x15449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x1544a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1544a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1544a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1544a8:
    // 0x1544a8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1544a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1544ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1544acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1544b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1544b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1544b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1544b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1544b8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1544B8u;
    {
        const bool branch_taken_0x1544b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1544BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544B8u;
        // 0x1544bc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544b8) {
            ctx->pc = 0x1544A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1544a8;
        }
    }
    ctx->pc = 0x1544C0u;
    // 0x1544c0: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1544C0u;
    {
        const bool branch_taken_0x1544c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C0u;
        // 0x1544c4: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544c0) {
            ctx->pc = 0x1546ACu;
            goto label_1546ac;
        }
    }
    ctx->pc = 0x1544C8u;
label_1544c8:
    // 0x1544c8: 0x8e820410  lw          $v0, 0x410($s4)
    ctx->pc = 0x1544c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1040)));
    // 0x1544cc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1544d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1544d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1544d4: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1544D4u;
    {
        const bool branch_taken_0x1544d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D4u;
        // 0x1544d8: 0x13f080  sll         $fp, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d4) {
            ctx->pc = 0x154630u;
            goto label_154630;
        }
    }
    ctx->pc = 0x1544DCu;
    // 0x1544dc: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1544e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1544e4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1544e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1544e8: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x1544e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1544ec: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x1544f0: 0x26280060  addiu       $t0, $s1, 0x60
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1544f4: 0x26290070  addiu       $t1, $s1, 0x70
    ctx->pc = 0x1544f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1544f8: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x1544f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1544fc: 0x26360010  addiu       $s6, $s1, 0x10
    ctx->pc = 0x1544fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x154500: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x154500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x154504: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x154508: 0x26570220  addiu       $s7, $s2, 0x220
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x15450c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x15450cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154510:
    // 0x154510: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x154510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154514: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154518: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x154518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15451c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x15451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x154520: 0x14a7fffb  bne         $a1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154520u;
    {
        const bool branch_taken_0x154520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x154524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154520u;
        // 0x154524: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154520) {
            ctx->pc = 0x154510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154510;
        }
    }
    ctx->pc = 0x154528u;
    // 0x154528: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x154528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15452c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154530: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x154534: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x154534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154538:
    // 0x154538: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15453c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15453cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154540: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154544: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x154544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154548: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154548u;
    {
        const bool branch_taken_0x154548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x15454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154548u;
        // 0x15454c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154548) {
            ctx->pc = 0x154538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154538;
        }
    }
    ctx->pc = 0x154550u;
    // 0x154550: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x154550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154554: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x154554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154558: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x15455c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15455cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154560:
    // 0x154560: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154564: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x154564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154568: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x15456c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154570: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154570u;
    {
        const bool branch_taken_0x154570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x154574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154570u;
        // 0x154574: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154570) {
            ctx->pc = 0x154560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154560;
        }
    }
    ctx->pc = 0x154578u;
    // 0x154578: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x154578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15457c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154580: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x154584: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x154584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154588:
    // 0x154588: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15458c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154590: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154594: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x154594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154598: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154598u;
    {
        const bool branch_taken_0x154598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x15459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154598u;
        // 0x15459c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154598) {
            ctx->pc = 0x154588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154588;
        }
    }
    ctx->pc = 0x1545A0u;
    // 0x1545a0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x1545a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1545a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545a8: 0xc0c2934  jal         func_30A4D0
    ctx->pc = 0x1545A8u;
    SET_GPR_U32(ctx, 31, 0x1545B0u);
    ctx->pc = 0x1545ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545A8u;
    // 0x1545ac: 0x24a54730  addiu       $a1, $a1, 0x4730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4D0u, 0x1545A8u, 0x1545B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545B0u;
label_1545b0:
    // 0x1545b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1545b4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1545b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1545bc: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
label_1545c0:
    // 0x1545c0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1545c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1545c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1545c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1545c8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1545c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1545cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1545ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1545d0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1545D0u;
    {
        const bool branch_taken_0x1545d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1545D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545D0u;
        // 0x1545d4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545d0) {
            ctx->pc = 0x1545C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1545c0;
        }
    }
    ctx->pc = 0x1545D8u;
    // 0x1545d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1545d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1545dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1545e0: 0x2663d880  addiu       $v1, $s3, -0x2780
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x1545e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1545e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1545e8:
    // 0x1545e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1545e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1545ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1545ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1545f0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1545f4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1545f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1545f8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1545F8u;
    {
        const bool branch_taken_0x1545f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F8u;
        // 0x1545fc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f8) {
            ctx->pc = 0x1545E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1545e8;
        }
    }
    ctx->pc = 0x154600u;
    // 0x154600: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x154600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154604: 0x2664d880  addiu       $a0, $s3, -0x2780
    ctx->pc = 0x154604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957184));
    // 0x154608: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15460c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154610:
    // 0x154610: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x154610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154614: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154618: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x15461c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15461cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x154620: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154620u;
    {
        const bool branch_taken_0x154620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x154624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154620u;
        // 0x154624: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154620) {
            ctx->pc = 0x154610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154610;
        }
    }
    ctx->pc = 0x154628u;
    // 0x154628: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x154628u;
    {
        const bool branch_taken_0x154628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154628u;
        // 0x15462c: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154628) {
            ctx->pc = 0x1546ACu;
            goto label_1546ac;
        }
    }
    ctx->pc = 0x154630u;
label_154630:
    // 0x154630: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x154634: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x154634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x154638: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x154638u;
    {
        const bool branch_taken_0x154638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154638u;
        // 0x15463c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154638) {
            ctx->pc = 0x154678u;
            goto label_154678;
        }
    }
    ctx->pc = 0x154640u;
    // 0x154640: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x154644: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x154644u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154648: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x154648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15464c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x154650: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x154654: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x154658: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x154658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15465c: 0x26260050  addiu       $a2, $s1, 0x50
    ctx->pc = 0x15465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x154660: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x154660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154664: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x154664u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154668: 0xc0b6002  jal         func_2D8008
    ctx->pc = 0x154668u;
    SET_GPR_U32(ctx, 31, 0x154670u);
    ctx->pc = 0x15466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154668u;
    // 0x15466c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8008u, 0x154668u, 0x154670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154670u;
label_154670:
    // 0x154670: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x154670u;
    {
        const bool branch_taken_0x154670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154670u;
        // 0x154674: 0x13f080  sll         $fp, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154670) {
            ctx->pc = 0x1546A4u;
            goto label_1546a4;
        }
    }
    ctx->pc = 0x154678u;
label_154678:
    // 0x154678: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x15467c: 0x8e4800f0  lw          $t0, 0xF0($s2)
    ctx->pc = 0x15467cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x154680: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x154684: 0x924a02cc  lbu         $t2, 0x2CC($s2)
    ctx->pc = 0x154684u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 716)));
    // 0x154688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x154688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15468c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15468cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154690: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x154690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x154694: 0xc0b5f94  jal         func_2D7E50
    ctx->pc = 0x154694u;
    SET_GPR_U32(ctx, 31, 0x15469Cu);
    ctx->pc = 0x154698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154694u;
    // 0x154698: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E50u, 0x154694u, 0x15469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15469Cu;
label_15469c:
    // 0x15469c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x15469cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546a0: 0x13f080  sll         $fp, $s3, 2
    ctx->pc = 0x1546a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1546a4:
    // 0x1546a4: 0x26570220  addiu       $s7, $s2, 0x220
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
    // 0x1546a8: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_1546ac:
    // 0x1546ac: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x1546b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1546b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1546b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1546B4u;
    {
        const bool branch_taken_0x1546b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B4u;
        // 0x1546b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b4) {
            ctx->pc = 0x1546E8u;
            goto label_1546e8;
        }
    }
    ctx->pc = 0x1546BCu;
    // 0x1546bc: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1546c0: 0x2442d870  addiu       $v0, $v0, -0x2790
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x1546c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1546c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1546c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1546c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1546cc: 0x0  nop
    ctx->pc = 0x1546ccu;
    // NOP
label_1546d0:
    // 0x1546d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1546d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1546d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1546d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1546d8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1546dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1546dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1546e0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1546E0u;
    {
        const bool branch_taken_0x1546e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1546E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546E0u;
        // 0x1546e4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546e0) {
            ctx->pc = 0x1546D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1546d0;
        }
    }
    ctx->pc = 0x1546E8u;
label_1546e8:
    // 0x1546e8: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x1546e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x1546ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1546f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1546f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1546f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1546f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1546f8: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x1546F8u;
    {
        const bool branch_taken_0x1546f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F8u;
        // 0x1546fc: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546f8) {
            ctx->pc = 0x154924u;
            goto label_154924;
        }
    }
    ctx->pc = 0x154700u;
    // 0x154700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154704: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x154704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154708: 0x0  nop
    ctx->pc = 0x154708u;
    // NOP
    // 0x15470c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x15470cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154710: 0x0  nop
    ctx->pc = 0x154710u;
    // NOP
    // 0x154714: 0x45000083  bc1f        . + 4 + (0x83 << 2)
    ctx->pc = 0x154714u;
    {
        const bool branch_taken_0x154714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x154718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154714u;
        // 0x154718: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154714) {
            ctx->pc = 0x154924u;
            goto label_154924;
        }
    }
    ctx->pc = 0x15471Cu;
    // 0x15471c: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x15471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154720: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x154724: 0xc6810390  lwc1        $f1, 0x390($s4)
    ctx->pc = 0x154724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154728: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x154728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15472c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x15472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154730: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x154730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x154734: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x154734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x154738: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x154738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15473c: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x15473cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x154740: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x154740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x154744: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x154748: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15474c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x15474cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154750: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x154750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x154754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_154758:
    // 0x154758: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x154758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15475c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x154760: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154764: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x154764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x154768: 0x14a2fffb  bne         $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x154768u;
    {
        const bool branch_taken_0x154768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x15476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154768u;
        // 0x15476c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154768) {
            ctx->pc = 0x154758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154758;
        }
    }
    ctx->pc = 0x154770u;
    // 0x154770: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x154774: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x154778: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15477c: 0x24630210  addiu       $v1, $v1, 0x210
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x154780: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x154780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x154784: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x154784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154788: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x154788u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15478c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15478cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x154790: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x154790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x154794: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x154794u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154798: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x154798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15479c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x15479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1547a0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1547a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1547a4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1547A4u;
    SET_GPR_U32(ctx, 31, 0x1547ACu);
    ctx->pc = 0x1547A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547A4u;
    // 0x1547a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1547A4u, 0x1547ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1547ACu;
label_1547ac:
    // 0x1547ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1547acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1547b0: 0x0  nop
    ctx->pc = 0x1547b0u;
    // NOP
    // 0x1547b4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1547B4u;
    {
        const bool branch_taken_0x1547b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1547B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547B4u;
        // 0x1547b8: 0xc7a40050  lwc1        $f4, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547b4) {
            ctx->pc = 0x1547F8u;
            goto label_1547f8;
        }
    }
    ctx->pc = 0x1547BCu;
    // 0x1547bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1547c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1547c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1547c4: 0x0  nop
    ctx->pc = 0x1547c4u;
    // NOP
    // 0x1547c8: 0x0  nop
    ctx->pc = 0x1547c8u;
    // NOP
    // 0x1547cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1547ccu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1547d0: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x1547d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1547d4: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x1547d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1547d8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1547d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1547dc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1547dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1547e0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1547e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1547e4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1547e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1547e8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1547e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1547ec: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1547ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1547f0: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x1547f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1547f4: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x1547f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1547f8:
    // 0x1547f8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1547f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1547fc: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1547fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x154800: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x154804: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
    // 0x154808: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x154808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15480c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x15480cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154810: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x154810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x61A900u));
    // 0x154814: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x154814u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x154818: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x154818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15481c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15481cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154820: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x154820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x154824: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x154824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x154828: 0xc04078a  jal         func_101E28
    ctx->pc = 0x154828u;
    SET_GPR_U32(ctx, 31, 0x154830u);
    ctx->pc = 0x15482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154828u;
    // 0x15482c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x154828u, 0x154830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154830u;
label_154830:
    // 0x154830: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x154830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x154834: 0x0  nop
    ctx->pc = 0x154834u;
    // NOP
    // 0x154838: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x154838u;
    {
        const bool branch_taken_0x154838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154838u;
        // 0x15483c: 0xc7a40030  lwc1        $f4, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154838) {
            ctx->pc = 0x15487Cu;
            goto label_15487c;
        }
    }
    ctx->pc = 0x154840u;
    // 0x154840: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x154844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154848: 0x0  nop
    ctx->pc = 0x154848u;
    // NOP
    // 0x15484c: 0x0  nop
    ctx->pc = 0x15484cu;
    // NOP
    // 0x154850: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x154850u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x154854: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x154854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154858: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x154858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15485c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154860: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x154860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x154864: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x154864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x154868: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x154868u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x15486c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x15486cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x154870: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x154870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x154874: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x154874u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x154878: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x154878u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_15487c:
    // 0x15487c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x15487cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154880: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x154880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x154884: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x154888: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x15488c: 0xdfa50020  ld          $a1, 0x20($sp)
    ctx->pc = 0x15488cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154890: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x154890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x154894: 0xae240098  sw          $a0, 0x98($s1)
    ctx->pc = 0x154894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 4));
    // 0x154898: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x15489c: 0xfe250090  sd          $a1, 0x90($s1)
    ctx->pc = 0x15489cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 5));
    // 0x1548a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1548a4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1548a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1548a8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1548a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1548ac: 0x8e830414  lw          $v1, 0x414($s4)
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
    // 0x1548b0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1548b4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1548b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1548b8: 0x90640058  lbu         $a0, 0x58($v1)
    ctx->pc = 0x1548b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1548bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1548bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1548c0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1548c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1548c4: 0xa62400b0  sh          $a0, 0xB0($s1)
    ctx->pc = 0x1548c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 176), (uint16_t)GPR_U32(ctx, 4));
    // 0x1548c8: 0xc624008c  lwc1        $f4, 0x8C($s1)
    ctx->pc = 0x1548c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1548cc: 0x8e830414  lw          $v1, 0x414($s4)
    ctx->pc = 0x1548ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1044)));
    // 0x1548d0: 0xc4416210  lwc1        $f1, 0x6210($v0)
    ctx->pc = 0x1548d0u;
    { uint32_t bits = FAST_READ32(0x61A910u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1548d4: 0x90640059  lbu         $a0, 0x59($v1)
    ctx->pc = 0x1548d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 89)));
    // 0x1548d8: 0xc4426214  lwc1        $f2, 0x6214($v0)
    ctx->pc = 0x1548d8u;
    { uint32_t bits = FAST_READ32(0x61A914u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1548dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1548dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1548e0: 0x0  nop
    ctx->pc = 0x1548e0u;
    // NOP
    // 0x1548e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1548e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1548e8: 0xc4436218  lwc1        $f3, 0x6218($v0)
    ctx->pc = 0x1548e8u;
    { uint32_t bits = FAST_READ32(0x61A918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1548ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1548ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1548f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1548f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1548f4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1548f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1548f8: 0x0  nop
    ctx->pc = 0x1548f8u;
    // NOP
    // 0x1548fc: 0x0  nop
    ctx->pc = 0x1548fcu;
    // NOP
    // 0x154900: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x154900u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[7]);
    // 0x154904: 0x0  nop
    ctx->pc = 0x154904u;
    // NOP
    // 0x154908: 0x0  nop
    ctx->pc = 0x154908u;
    // NOP
    // 0x15490c: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x15490cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x154910: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x154910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x154914: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154918: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x154918u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15491c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15491Cu;
    {
        const bool branch_taken_0x15491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15491Cu;
        // 0x154920: 0xe624008c  swc1        $f4, 0x8C($s1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15491c) {
            ctx->pc = 0x1549C0u;
            goto label_1549c0;
        }
    }
    ctx->pc = 0x154924u;
label_154924:
    // 0x154924: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x154928: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x154928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15492c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15492Cu;
    {
        const bool branch_taken_0x15492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15492Cu;
        // 0x154930: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15492c) {
            ctx->pc = 0x15495Cu;
            goto label_15495c;
        }
    }
    ctx->pc = 0x154934u;
    // 0x154934: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x154934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x154938: 0x8c430608  lw          $v1, 0x608($v0)
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1544)));
    // 0x15493c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15493Cu;
    {
        const bool branch_taken_0x15493c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15493Cu;
        // 0x154940: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15493c) {
            ctx->pc = 0x15495Cu;
            goto label_15495c;
        }
    }
    ctx->pc = 0x154944u;
    // 0x154944: 0x8c44aff0  lw          $a0, -0x5010($v0)
    ctx->pc = 0x154944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x154948: 0xdc830210  ld          $v1, 0x210($a0)
    ctx->pc = 0x154948u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x15494c: 0xfe230090  sd          $v1, 0x90($s1)
    ctx->pc = 0x15494cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 3));
    // 0x154950: 0x8c820218  lw          $v0, 0x218($a0)
    ctx->pc = 0x154950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    // 0x154954: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x154954u;
    {
        const bool branch_taken_0x154954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154954u;
        // 0x154958: 0xae220098  sw          $v0, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154954) {
            ctx->pc = 0x1549C0u;
            goto label_1549c0;
        }
    }
    ctx->pc = 0x15495Cu;
label_15495c:
    // 0x15495c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15495cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x154960: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x154960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x154964: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x154964u;
    {
        const bool branch_taken_0x154964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154964) {
            ctx->pc = 0x154968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154964u;
            // 0x154968: 0x8e420250  lw          $v0, 0x250($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1549C4u;
            goto label_1549c4;
        }
    }
    ctx->pc = 0x15496Cu;
    // 0x15496c: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x15496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154970: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x154970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x154974: 0xc6810390  lwc1        $f1, 0x390($s4)
    ctx->pc = 0x154974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154978: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15497c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154980: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x154980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154984: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x154984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x154988: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x154988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15498c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154990: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x154990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x154994: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x154994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x154998: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x154998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x15499c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x15499cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1549a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1549a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1549a4: 0x0  nop
    ctx->pc = 0x1549a4u;
    // NOP
label_1549a8:
    // 0x1549a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1549a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1549ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1549b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1549b4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1549b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1549b8: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1549B8u;
    {
        const bool branch_taken_0x1549b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1549BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549B8u;
        // 0x1549bc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b8) {
            ctx->pc = 0x1549A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1549a8;
        }
    }
    ctx->pc = 0x1549C0u;
label_1549c0:
    // 0x1549c0: 0x8e420250  lw          $v0, 0x250($s2)
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_1549c4:
    // 0x1549c4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1549c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1549c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549C8u;
    {
        const bool branch_taken_0x1549c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1549CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549C8u;
        // 0x1549cc: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549c8) {
            ctx->pc = 0x1549DCu;
            goto label_1549dc;
        }
    }
    ctx->pc = 0x1549D0u;
    // 0x1549d0: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x1549d4: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x1549D4u;
    SET_GPR_U32(ctx, 31, 0x1549DCu);
    ctx->pc = 0x1549D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549D4u;
    // 0x1549d8: 0x24a56940  addiu       $a1, $a1, 0x6940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x1549D4u, 0x1549DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1549DCu;
label_1549dc:
    // 0x1549dc: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x1549e0: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1549e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1549e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1549e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1549E8u;
    {
        const bool branch_taken_0x1549e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1549ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549E8u;
        // 0x1549ec: 0x2fe1021  addu        $v0, $s7, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549e8) {
            ctx->pc = 0x154A04u;
            goto label_154a04;
        }
    }
    ctx->pc = 0x1549F0u;
    // 0x1549f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1549f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1549f4: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1549f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1549f8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1549f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1549fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1549FCu;
    {
        const bool branch_taken_0x1549fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549FCu;
        // 0x154a00: 0x2fe1021  addu        $v0, $s7, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549fc) {
            ctx->pc = 0x154A1Cu;
            goto label_154a1c;
        }
    }
    ctx->pc = 0x154A04u;
label_154a04:
    // 0x154a04: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x154a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x154a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154a10: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x154a10u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x154a14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x154A14u;
    {
        const bool branch_taken_0x154a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A14u;
        // 0x154a18: 0xe620002c  swc1        $f0, 0x2C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a14) {
            ctx->pc = 0x154A58u;
            goto label_154a58;
        }
    }
    ctx->pc = 0x154A1Cu;
label_154a1c:
    // 0x154a1c: 0x864202ac  lh          $v0, 0x2AC($s2)
    ctx->pc = 0x154a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 684)));
    // 0x154a20: 0x2fe1821  addu        $v1, $s7, $fp
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 30)));
    // 0x154a24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x154a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x154a28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x154a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x154a2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a30: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x154a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x154a34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x154a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x154a38: 0x0  nop
    ctx->pc = 0x154a38u;
    // NOP
    // 0x154a3c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x154a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x154a40: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154a44: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x154a48: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x154a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154a4c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x154a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x154a50: 0xc0b601c  jal         func_2D8070
    ctx->pc = 0x154A50u;
    SET_GPR_U32(ctx, 31, 0x154A58u);
    ctx->pc = 0x154A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A50u;
    // 0x154a54: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8070u, 0x154A50u, 0x154A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154A58u;
label_154a58:
    // 0x154a58: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x154a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x154a5c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x154a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x154a60: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x154a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x154a64: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x154a64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x154a68: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x154a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x154a6c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x154a6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x154a70: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x154a70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x154a74: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x154a74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x154a78: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x154a78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x154a7c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x154a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154a80: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x154a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x154a84: 0x3e00008  jr          $ra
    ctx->pc = 0x154A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A84u;
        // 0x154a88: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154A8Cu;
    // 0x154a8c: 0x0  nop
    ctx->pc = 0x154a8cu;
    // NOP
    ctx->pc = 0x154a90u;
}
