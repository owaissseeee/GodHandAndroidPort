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

// Function: func_00145810
// Address: 0x145810 - 0x145fc8
void func_00145810_0x145810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00145810_0x145810");
#endif

    switch (ctx->pc) {
        case 0x145a80u: goto label_145a80;
        case 0x145d40u: goto label_145d40;
        case 0x145d48u: goto label_145d48;
        case 0x145e08u: goto label_145e08;
        case 0x145f78u: goto label_145f78;
        case 0x145f80u: goto label_145f80;
        default: break;
    }

    ctx->pc = 0x145810u;

    // 0x145810: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x145810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x145814: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x145814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x145818: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x145818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x14581c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14581cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145820: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x145820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x145824: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x145824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x145828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14582c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14582cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x145830: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x145830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x145834: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x145834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x145838: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x145838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14583c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14583cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x145840: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x145840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x145844: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x145844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x145848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x145848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14584c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14584cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145850: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x145850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x145854: 0xc62102a4  lwc1        $f1, 0x2A4($s1)
    ctx->pc = 0x145854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145858: 0xc6220338  lwc1        $f2, 0x338($s1)
    ctx->pc = 0x145858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14585c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14585cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x145860: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x145860u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x145864: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x145864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145868: 0xe62102a4  swc1        $f1, 0x2A4($s1)
    ctx->pc = 0x145868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x14586c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x14586Cu;
    {
        const bool branch_taken_0x14586c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14586Cu;
        // 0x145870: 0xe6220338  swc1        $f2, 0x338($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14586c) {
            ctx->pc = 0x145884u;
            goto label_145884;
        }
    }
    ctx->pc = 0x145874u;
    // 0x145874: 0x8e2300e4  lw          $v1, 0xE4($s1)
    ctx->pc = 0x145874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x145878: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x145878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x14587c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x14587cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x145880: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x145880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_145884:
    // 0x145884: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x145884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x145888: 0x3404c040  ori         $a0, $zero, 0xC040
    ctx->pc = 0x145888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
    // 0x14588c: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x14588cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
    // 0x145890: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x145894: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x145894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x145898: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x145898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14589c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x14589Cu;
    {
        const bool branch_taken_0x14589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14589Cu;
        // 0x1458a0: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14589c) {
            ctx->pc = 0x1458E8u;
            goto label_1458e8;
        }
    }
    ctx->pc = 0x1458A4u;
    // 0x1458a4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x1458a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x1458a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1458a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1458ac: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x1458acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x1458b0: 0xe6230338  swc1        $f3, 0x338($s1)
    ctx->pc = 0x1458b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    // 0x1458b4: 0xe62002a4  swc1        $f0, 0x2A4($s1)
    ctx->pc = 0x1458b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x1458b8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1458bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1458bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1458c0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1458c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1458c4: 0x96230422  lhu         $v1, 0x422($s1)
    ctx->pc = 0x1458c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1058)));
    // 0x1458c8: 0x862403b2  lh          $a0, 0x3B2($s1)
    ctx->pc = 0x1458c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 946)));
    // 0x1458cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1458ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1458d0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1458d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1458d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1458d8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1458d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1458dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1458DCu;
    {
        const bool branch_taken_0x1458dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1458E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1458DCu;
        // 0x1458e0: 0xa6230422  sh          $v1, 0x422($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458dc) {
            ctx->pc = 0x1458E8u;
            goto label_1458e8;
        }
    }
    ctx->pc = 0x1458E4u;
    // 0x1458e4: 0xa6200422  sh          $zero, 0x422($s1)
    ctx->pc = 0x1458e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1058), (uint16_t)GPR_U32(ctx, 0));
label_1458e8:
    // 0x1458e8: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x1458e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1458ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1458ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1458f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1458f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1458f4: 0x0  nop
    ctx->pc = 0x1458f4u;
    // NOP
    // 0x1458f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1458f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1458fc: 0x0  nop
    ctx->pc = 0x1458fcu;
    // NOP
    // 0x145900: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x145900u;
    {
        const bool branch_taken_0x145900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145900u;
        // 0x145904: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145900) {
            ctx->pc = 0x145980u;
            goto label_145980;
        }
    }
    ctx->pc = 0x145908u;
    // 0x145908: 0xc6230350  lwc1        $f3, 0x350($s1)
    ctx->pc = 0x145908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14590c: 0xc6200360  lwc1        $f0, 0x360($s1)
    ctx->pc = 0x14590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145914: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x145914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145918: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x145918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x14591c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x14591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x145920: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x145920u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x145924: 0xc442e880  lwc1        $f2, -0x1780($v0)
    ctx->pc = 0x145924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14592c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x14592cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x145930: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x145930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x145934: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x145934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145938: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x145938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x14593c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14593cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x145940: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x145940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145944: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x145944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145948: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x14594c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14594cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x145950: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x145950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x145954: 0x96220422  lhu         $v0, 0x422($s1)
    ctx->pc = 0x145954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1058)));
    // 0x145958: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14595c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x14595cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145960: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x145960u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145964: 0x5030011  bgezl       $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x145964u;
    {
        const bool branch_taken_0x145964 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x145964) {
            ctx->pc = 0x145968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145964u;
            // 0x145968: 0xc6240360  lwc1        $f4, 0x360($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1459ACu;
            goto label_1459ac;
        }
    }
    ctx->pc = 0x14596Cu;
    // 0x14596c: 0x962203b2  lhu         $v0, 0x3B2($s1)
    ctx->pc = 0x14596cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 946)));
    // 0x145970: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145974: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x145974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145978: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x145978u;
    {
        const bool branch_taken_0x145978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145978u;
        // 0x14597c: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145978) {
            ctx->pc = 0x1459A8u;
            goto label_1459a8;
        }
    }
    ctx->pc = 0x145980u;
label_145980:
    // 0x145980: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x145980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x145984: 0xc6200350  lwc1        $f0, 0x350($s1)
    ctx->pc = 0x145984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14598c: 0xc441e880  lwc1        $f1, -0x1780($v0)
    ctx->pc = 0x14598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145990: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x145990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x145994: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x145994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x145998: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x145998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x14599c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x14599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x1459a0: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x1459a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1459a4: 0x86280422  lh          $t0, 0x422($s1)
    ctx->pc = 0x1459a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1058)));
label_1459a8:
    // 0x1459a8: 0xc6240360  lwc1        $f4, 0x360($s1)
    ctx->pc = 0x1459a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1459ac:
    // 0x1459ac: 0x2482e880  addiu       $v0, $a0, -0x1780
    ctx->pc = 0x1459acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x1459b0: 0xc620035c  lwc1        $f0, 0x35C($s1)
    ctx->pc = 0x1459b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1459b4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1459b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1459b8: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x1459b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1459bc: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1459c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1459c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1459c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1459c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1459c8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x1459c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1459cc: 0x2473e840  addiu       $s3, $v1, -0x17C0
    ctx->pc = 0x1459ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
    // 0x1459d0: 0xc486e840  lwc1        $f6, -0x17C0($a0)
    ctx->pc = 0x1459d0u;
    { uint32_t bits = FAST_READ32(0x41E840u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1459d4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1459d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1459d8: 0x8e2300e4  lw          $v1, 0xE4($s1)
    ctx->pc = 0x1459d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x1459dc: 0x26240098  addiu       $a0, $s1, 0x98
    ctx->pc = 0x1459dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x1459e0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1459e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1459e4: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1459e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1459e8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1459e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1459ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1459f0: 0x262402a8  addiu       $a0, $s1, 0x2A8
    ctx->pc = 0x1459f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 680));
    // 0x1459f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1459f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1459f8: 0x26370094  addiu       $s7, $s1, 0x94
    ctx->pc = 0x1459f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1459fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1459fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x145a00: 0x263603fa  addiu       $s6, $s1, 0x3FA
    ctx->pc = 0x145a00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1018));
    // 0x145a04: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x145a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x145a08: 0x3c0d00ff  lui         $t5, 0xFF
    ctx->pc = 0x145a08u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)255 << 16));
    // 0x145a0c: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x145a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x145a10: 0x3c0f0080  lui         $t7, 0x80
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)128 << 16));
    // 0x145a14: 0x2e0702d  daddu       $t6, $s7, $zero
    ctx->pc = 0x145a14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a18: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x145a18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a1c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x145a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x145a20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a24: 0x263500a4  addiu       $s5, $s1, 0xA4
    ctx->pc = 0x145a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x145a28: 0x263403b4  addiu       $s4, $s1, 0x3B4
    ctx->pc = 0x145a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 948));
    // 0x145a2c: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x145a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a30: 0x24190004  addiu       $t9, $zero, 0x4
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145a34: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x145a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x145a38: 0x3c18ff00  lui         $t8, 0xFF00
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)65280 << 16));
    // 0x145a3c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x145a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x145a40: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x145a44: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x145a44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x145a48: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x145a48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x145a4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a50: 0x2629033c  addiu       $t1, $s1, 0x33C
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 828));
    // 0x145a54: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x145a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x145a58: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x145a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a5c: 0x36103030  ori         $s0, $s0, 0x3030
    ctx->pc = 0x145a5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)12336);
    // 0x145a60: 0x35ef8080  ori         $t7, $t7, 0x8080
    ctx->pc = 0x145a60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32896);
    // 0x145a64: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x145a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145a68: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x145a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a6c: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x145a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x145a70: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x145a70u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x145a74: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x145a74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x145a78: 0xe4430044  swc1        $f3, 0x44($v0)
    ctx->pc = 0x145a78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x145a7c: 0x0  nop
    ctx->pc = 0x145a7cu;
    // NOP
label_145a80:
    // 0x145a80: 0x11400039  beqz        $t2, . + 4 + (0x39 << 2)
    ctx->pc = 0x145A80u;
    {
        const bool branch_taken_0x145a80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A80u;
        // 0x145a84: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a80) {
            ctx->pc = 0x145B68u;
            goto label_145b68;
        }
    }
    ctx->pc = 0x145A88u;
    // 0x145a88: 0x11590027  beq         $t2, $t9, . + 4 + (0x27 << 2)
    ctx->pc = 0x145A88u;
    {
        const bool branch_taken_0x145a88 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 25));
        if (branch_taken_0x145a88) {
            ctx->pc = 0x145B28u;
            goto label_145b28;
        }
    }
    ctx->pc = 0x145A90u;
    // 0x145a90: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x145a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145a98: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x145a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x145a9c: 0x0  nop
    ctx->pc = 0x145a9cu;
    // NOP
    // 0x145aa0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x145aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145aa4: 0x0  nop
    ctx->pc = 0x145aa4u;
    // NOP
    // 0x145aa8: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x145AA8u;
    {
        const bool branch_taken_0x145aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145aa8) {
            ctx->pc = 0x145B28u;
            goto label_145b28;
        }
    }
    ctx->pc = 0x145AB0u;
    // 0x145ab0: 0xc5230014  lwc1        $f3, 0x14($t1)
    ctx->pc = 0x145ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145ab4: 0xc5200010  lwc1        $f0, 0x10($t1)
    ctx->pc = 0x145ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ab8: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x145ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145abc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x145abcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x145ac0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145ac4: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x145ac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x145ac8: 0xc5840000  lwc1        $f4, 0x0($t4)
    ctx->pc = 0x145ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x145acc: 0xc582fffc  lwc1        $f2, -0x4($t4)
    ctx->pc = 0x145accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145ad0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145ad4: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x145ad4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x145ad8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x145ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x145adc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x145adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x145ae0: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x145ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ae4: 0xc521fffc  lwc1        $f1, -0x4($t1)
    ctx->pc = 0x145ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ae8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145aec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x145aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x145af0: 0xe441003c  swc1        $f1, 0x3C($v0)
    ctx->pc = 0x145af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x145af4: 0xc6200338  lwc1        $f0, 0x338($s1)
    ctx->pc = 0x145af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145af8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145afc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x145afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x145b00: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x145b00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x145b04: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x145b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x145b08: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x145b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145b0c: 0xc6210338  lwc1        $f1, 0x338($s1)
    ctx->pc = 0x145b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145b10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b14: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x145b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x145b18: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x145b18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x145b1c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x145b1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x145b20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x145B20u;
    {
        const bool branch_taken_0x145b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B20u;
        // 0x145b24: 0xe4420044  swc1        $f2, 0x44($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b20) {
            ctx->pc = 0x145B64u;
            goto label_145b64;
        }
    }
    ctx->pc = 0x145B28u;
label_145b28:
    // 0x145b28: 0x1140000f  beqz        $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x145B28u;
    {
        const bool branch_taken_0x145b28 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B28u;
        // 0x145b2c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b28) {
            ctx->pc = 0x145B68u;
            goto label_145b68;
        }
    }
    ctx->pc = 0x145B30u;
    // 0x145b30: 0x1159000e  beq         $t2, $t9, . + 4 + (0xE << 2)
    ctx->pc = 0x145B30u;
    {
        const bool branch_taken_0x145b30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 25));
        ctx->pc = 0x145B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B30u;
        // 0x145b34: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b30) {
            ctx->pc = 0x145B6Cu;
            goto label_145b6c;
        }
    }
    ctx->pc = 0x145B38u;
    // 0x145b38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b3c: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x145b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b40: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x145b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145b44: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x145b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x145b48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x145b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b4c: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x145b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145b50: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x145b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x145b54: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b58: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x145b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145b5c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x145b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145b60: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x145b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
label_145b64:
    // 0x145b64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x145b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_145b68:
    // 0x145b68: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x145b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_145b6c:
    // 0x145b6c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x145b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145b70: 0x3c82021  addu        $a0, $fp, $t0
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x145b74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x145b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b7c: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x145b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x145b80: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x145b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145b84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145b88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145B88u;
    {
        const bool branch_taken_0x145b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B88u;
        // 0x145b8c: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b88) {
            ctx->pc = 0x145BA0u;
            goto label_145ba0;
        }
    }
    ctx->pc = 0x145B90u;
    // 0x145b90: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x145b94: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x145b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x145b98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145B98u;
    {
        const bool branch_taken_0x145b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145B98u;
        // 0x145b9c: 0x501025  or          $v0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b98) {
            ctx->pc = 0x145BACu;
            goto label_145bac;
        }
    }
    ctx->pc = 0x145BA0u;
label_145ba0:
    // 0x145ba0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x145ba4: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x145ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x145ba8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x145ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
label_145bac:
    // 0x145bac: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x145bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x145bb0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x145bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x145bb4: 0x2ab1821  addu        $v1, $s5, $t3
    ctx->pc = 0x145bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
    // 0x145bb8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x145bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x145bbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x145bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145bc0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145bc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145bc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145bc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145bcc: 0xaca40084  sw          $a0, 0x84($a1)
    ctx->pc = 0x145bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 4));
    // 0x145bd0: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x145bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145bd8: 0x0  nop
    ctx->pc = 0x145bd8u;
    // NOP
    // 0x145bdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x145BDCu;
    {
        const bool branch_taken_0x145bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BDCu;
        // 0x145be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bdc) {
            ctx->pc = 0x145BE8u;
            goto label_145be8;
        }
    }
    ctx->pc = 0x145BE4u;
    // 0x145be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145be8:
    // 0x145be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145bec: 0x15420004  bne         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145BECu;
    {
        const bool branch_taken_0x145bec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x145BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BECu;
        // 0x145bf0: 0x1cb1821  addu        $v1, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bec) {
            ctx->pc = 0x145C00u;
            goto label_145c00;
        }
    }
    ctx->pc = 0x145BF4u;
    // 0x145bf4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x145bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x145bf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145BF8u;
    {
        const bool branch_taken_0x145bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145BF8u;
        // 0x145bfc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145bf8) {
            ctx->pc = 0x145C08u;
            goto label_145c08;
        }
    }
    ctx->pc = 0x145C00u;
label_145c00:
    // 0x145c00: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x145c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x145c04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x145c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_145c08:
    // 0x145c08: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x145c0c: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x145c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x145c10: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x145c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x145c14: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x145c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x145c18: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145c1c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x145c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x145c20: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x145c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145c24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x145c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145c28: 0xe4660070  swc1        $f6, 0x70($v1)
    ctx->pc = 0x145c28u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x145c2c: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x145c2cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145c30: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x145c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c34: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x145c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145c38: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145c3c: 0x25403  sra         $t2, $v0, 16
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145c40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x145c44: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x145c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145c48: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x145c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x145c4c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x145c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x145c50: 0x256b0014  addiu       $t3, $t3, 0x14
    ctx->pc = 0x145c50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x145c54: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x145c54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x145c58: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145c5c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x145c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x145c60: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x145c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x145c64: 0x29440005  slti        $a0, $t2, 0x5
    ctx->pc = 0x145c64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x145c68: 0xe4620078  swc1        $f2, 0x78($v1)
    ctx->pc = 0x145c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x145c6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145c70: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x145c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x145c74: 0xe441007c  swc1        $f1, 0x7C($v0)
    ctx->pc = 0x145c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x145c78: 0x862503b2  lh          $a1, 0x3B2($s1)
    ctx->pc = 0x145c78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 946)));
    // 0x145c7c: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x145c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145c80: 0x1480ff7f  bnez        $a0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x145C80u;
    {
        const bool branch_taken_0x145c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x145C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C80u;
        // 0x145c84: 0x2400a  movz        $t0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c80) {
            ctx->pc = 0x145A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145a80;
        }
    }
    ctx->pc = 0x145C88u;
    // 0x145c88: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x145c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x145c8c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x145c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x145c90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x145c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x145c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x145c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145C98u;
    {
        const bool branch_taken_0x145c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C98u;
        // 0x145c9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c98) {
            ctx->pc = 0x145CACu;
            goto label_145cac;
        }
    }
    ctx->pc = 0x145CA0u;
    // 0x145ca0: 0xa6200420  sh          $zero, 0x420($s1)
    ctx->pc = 0x145ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x145ca4: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x145CA4u;
    {
        const bool branch_taken_0x145ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CA4u;
        // 0x145ca8: 0xa622041e  sh          $v0, 0x41E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1054), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ca4) {
            ctx->pc = 0x145F98u;
            goto label_145f98;
        }
    }
    ctx->pc = 0x145CACu;
label_145cac:
    // 0x145cac: 0x96220422  lhu         $v0, 0x422($s1)
    ctx->pc = 0x145cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1058)));
    // 0x145cb0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x145cb4: 0x248774a0  addiu       $a3, $a0, 0x74A0
    ctx->pc = 0x145cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x145cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145cbc: 0x8ce4056c  lw          $a0, 0x56C($a3)
    ctx->pc = 0x145cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x145cc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x145cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145cc4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x145cc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145cc8: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x145cc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x145ccc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145CCCu;
    {
        const bool branch_taken_0x145ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x145CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CCCu;
        // 0x145cd0: 0x3300a  movz        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ccc) {
            ctx->pc = 0x145CE4u;
            goto label_145ce4;
        }
    }
    ctx->pc = 0x145CD4u;
    // 0x145cd4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x145cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x145cd8: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x145cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x145cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145CDCu;
    {
        const bool branch_taken_0x145cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CDCu;
        // 0x145ce0: 0xdce201a0  ld          $v0, 0x1A0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cdc) {
            ctx->pc = 0x145CF0u;
            goto label_145cf0;
        }
    }
    ctx->pc = 0x145CE4u;
label_145ce4:
    // 0x145ce4: 0xdce201a0  ld          $v0, 0x1A0($a3)
    ctx->pc = 0x145ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x145ce8: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x145ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x145cec: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x145cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_145cf0:
    // 0x145cf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x145cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x145cf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145CF4u;
    {
        const bool branch_taken_0x145cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF4u;
        // 0x145cf8: 0x2c61821  addu        $v1, $s6, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cf4) {
            ctx->pc = 0x145D0Cu;
            goto label_145d0c;
        }
    }
    ctx->pc = 0x145CFCu;
    // 0x145cfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x145cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x145d00: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x145d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x145d04: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x145D04u;
    {
        const bool branch_taken_0x145d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D04u;
        // 0x145d08: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d04) {
            ctx->pc = 0x145F9Cu;
            goto label_145f9c;
        }
    }
    ctx->pc = 0x145D0Cu;
label_145d0c:
    // 0x145d0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x145d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145d10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x145d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x145d14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145d18: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x145D18u;
    {
        const bool branch_taken_0x145d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D18u;
        // 0x145d1c: 0x26300150  addiu       $s0, $s1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d18) {
            ctx->pc = 0x145F98u;
            goto label_145f98;
        }
    }
    ctx->pc = 0x145D20u;
    // 0x145d20: 0x9622041e  lhu         $v0, 0x41E($s1)
    ctx->pc = 0x145d20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1054)));
    // 0x145d24: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x145d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x145d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145d30: 0xa6200420  sh          $zero, 0x420($s1)
    ctx->pc = 0x145d30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x145d34: 0xa622041e  sh          $v0, 0x41E($s1)
    ctx->pc = 0x145d34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1054), (uint16_t)GPR_U32(ctx, 2));
    // 0x145d38: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x145D38u;
    SET_GPR_U32(ctx, 31, 0x145D40u);
    ctx->pc = 0x145D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D38u;
    // 0x145d3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x145D38u, 0x145D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D40u;
label_145d40:
    // 0x145d40: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x145D40u;
    SET_GPR_U32(ctx, 31, 0x145D48u);
    ctx->pc = 0x145D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145D40u;
    // 0x145d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x145D40u, 0x145D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145D48u;
label_145d48:
    // 0x145d48: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x145d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x145d4c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x145d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x145d50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x145d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x145d54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d5c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x145d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x145d60: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x145d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x145d64: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x145d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x145d68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x145d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x145d6c: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x145d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x145d70: 0xae230368  sw          $v1, 0x368($s1)
    ctx->pc = 0x145d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 3));
    // 0x145d74: 0xc62002a4  lwc1        $f0, 0x2A4($s1)
    ctx->pc = 0x145d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145d78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d7c: 0x0  nop
    ctx->pc = 0x145d7cu;
    // NOP
    // 0x145d80: 0x45000068  bc1f        . + 4 + (0x68 << 2)
    ctx->pc = 0x145D80u;
    {
        const bool branch_taken_0x145d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D80u;
        // 0x145d84: 0xae230364  sw          $v1, 0x364($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d80) {
            ctx->pc = 0x145F24u;
            goto label_145f24;
        }
    }
    ctx->pc = 0x145D88u;
    // 0x145d88: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x145d8c: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x145d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x145d90: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x145d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x145d94: 0x3c105080  lui         $s0, 0x5080
    ctx->pc = 0x145d94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20608 << 16));
    // 0x145d98: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x145d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x145d9c: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x145d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x145da0: 0x3c0f0030  lui         $t7, 0x30
    ctx->pc = 0x145da0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)48 << 16));
    // 0x145da4: 0x3c0e0080  lui         $t6, 0x80
    ctx->pc = 0x145da4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)128 << 16));
    // 0x145da8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x145da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x145dac: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x145dacu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145db0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x145db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x145db4: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x145db4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145db8: 0xc463e840  lwc1        $f3, -0x17C0($v1)
    ctx->pc = 0x145db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145dbc: 0x2473e840  addiu       $s3, $v1, -0x17C0
    ctx->pc = 0x145dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
    // 0x145dc0: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x145dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x145dc4: 0x24d8e880  addiu       $t8, $a2, -0x1780
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
    // 0x145dc8: 0x8fbe0008  lw          $fp, 0x8($sp)
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145dcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x145dccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dd0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x145dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x145dd4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x145dd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145dd8: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x145dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145ddc: 0x36108080  ori         $s0, $s0, 0x8080
    ctx->pc = 0x145ddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32896);
    // 0x145de0: 0x3c19ff00  lui         $t9, 0xFF00
    ctx->pc = 0x145de0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65280 << 16));
    // 0x145de4: 0x35ef3030  ori         $t7, $t7, 0x3030
    ctx->pc = 0x145de4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)12336);
    // 0x145de8: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x145de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x145dec: 0x35ce8080  ori         $t6, $t6, 0x8080
    ctx->pc = 0x145decu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32896);
    // 0x145df0: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x145df4: 0x262c033c  addiu       $t4, $s1, 0x33C
    ctx->pc = 0x145df4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 828));
    // 0x145df8: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x145df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x145dfc: 0x262b0350  addiu       $t3, $s1, 0x350
    ctx->pc = 0x145dfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    // 0x145e00: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x145e00u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
    // 0x145e04: 0x86280422  lh          $t0, 0x422($s1)
    ctx->pc = 0x145e04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1058)));
label_145e08:
    // 0x145e08: 0x55570006  bnel        $t2, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x145E08u;
    {
        const bool branch_taken_0x145e08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 23));
        if (branch_taken_0x145e08) {
            ctx->pc = 0x145E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145E08u;
            // 0x145e0c: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145E24u;
            goto label_145e24;
        }
    }
    ctx->pc = 0x145E10u;
    // 0x145e10: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x145e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x145e14: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x145e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x145e18: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x145e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x145E1Cu;
    {
        const bool branch_taken_0x145e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E1Cu;
        // 0x145e20: 0xac44004c  sw          $a0, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e1c) {
            ctx->pc = 0x145E28u;
            goto label_145e28;
        }
    }
    ctx->pc = 0x145E24u;
label_145e24:
    // 0x145e24: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x145e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
label_145e28:
    // 0x145e28: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x145e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145e2c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x145e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x145e30: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x145e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145e34: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x145e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
    // 0x145e38: 0xc7010000  lwc1        $f1, 0x0($t8)
    ctx->pc = 0x145e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145e3c: 0x2c83021  addu        $a2, $s6, $t0
    ctx->pc = 0x145e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
    // 0x145e40: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x145e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x145e44: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x145e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145e48: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x145e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145e4c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x145e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x145e50: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145e54: 0xe4410040  swc1        $f1, 0x40($v0)
    ctx->pc = 0x145e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x145e58: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x145e5c: 0xe4610044  swc1        $f1, 0x44($v1)
    ctx->pc = 0x145e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x145e60: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x145e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145e64: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145e68: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x145e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x145e6c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x145e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145e70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E74u;
    {
        const bool branch_taken_0x145e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E74u;
        // 0x145e78: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e74) {
            ctx->pc = 0x145E8Cu;
            goto label_145e8c;
        }
    }
    ctx->pc = 0x145E7Cu;
    // 0x145e7c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x145e80: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x145e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x145e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145E84u;
    {
        const bool branch_taken_0x145e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E84u;
        // 0x145e88: 0x4f1025  or          $v0, $v0, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e84) {
            ctx->pc = 0x145E98u;
            goto label_145e98;
        }
    }
    ctx->pc = 0x145E8Cu;
label_145e8c:
    // 0x145e8c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x145e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x145e90: 0x591024  and         $v0, $v0, $t9
    ctx->pc = 0x145e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 25));
    // 0x145e94: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x145e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_145e98:
    // 0x145e98: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x145e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x145e9c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x145e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x145ea0: 0x8da50000  lw          $a1, 0x0($t5)
    ctx->pc = 0x145ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x145ea4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x145ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x145ea8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x145ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145eac: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x145eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145eb0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x145eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x145eb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x145eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145eb8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x145eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145ebc: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x145ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
    // 0x145ec0: 0x25403  sra         $t2, $v0, 16
    ctx->pc = 0x145ec0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145ec4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x145ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145ec8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x145ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x145ecc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145ed0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x145ed0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x145ed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x145ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ed8: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x145ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x145edc: 0xe4630070  swc1        $f3, 0x70($v1)
    ctx->pc = 0x145edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x145ee0: 0x25ad0014  addiu       $t5, $t5, 0x14
    ctx->pc = 0x145ee0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
    // 0x145ee4: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x145ee4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x145ee8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x145eec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145ef0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x145ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x145ef4: 0x25290014  addiu       $t1, $t1, 0x14
    ctx->pc = 0x145ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20));
    // 0x145ef8: 0x29450005  slti        $a1, $t2, 0x5
    ctx->pc = 0x145ef8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x145efc: 0xe4620074  swc1        $f2, 0x74($v1)
    ctx->pc = 0x145efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x145f00: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145f04: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x145f04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x145f08: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x145f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x145f0c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x145f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x145f10: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x145f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x145f14: 0x862203b2  lh          $v0, 0x3B2($s1)
    ctx->pc = 0x145f14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 946)));
    // 0x145f18: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x145f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145f1c: 0x14a0ffba  bnez        $a1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x145F1Cu;
    {
        const bool branch_taken_0x145f1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x145F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F1Cu;
        // 0x145f20: 0x82400b  movn        $t0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f1c) {
            ctx->pc = 0x145E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145e08;
        }
    }
    ctx->pc = 0x145F24u;
label_145f24:
    // 0x145f24: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x145f28: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x145f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x145f2c: 0x2462e840  addiu       $v0, $v1, -0x17C0
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961216));
    // 0x145f30: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x145f34: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x145f38: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x145f3c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x145f3cu;
    { uint32_t bits = FAST_READ32(0x41E850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145f40: 0xc4430014  lwc1        $f3, 0x14($v0)
    ctx->pc = 0x145f40u;
    { uint32_t bits = FAST_READ32(0x41E854u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x145f44: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x145f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x145f48: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x145f48u;
    { uint32_t bits = FAST_READ32(0x41E858u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145f4c: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x145f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x145f50: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x145f50u;
    { uint32_t bits = FAST_READ32(0x41E85Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145f54: 0xe4630074  swc1        $f3, 0x74($v1)
    ctx->pc = 0x145f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x145f58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x145f5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145f60: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x145f64: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x145f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x145f68: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x145f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x145f6c: 0xe462007c  swc1        $f2, 0x7C($v1)
    ctx->pc = 0x145f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
    // 0x145f70: 0xe6200338  swc1        $f0, 0x338($s1)
    ctx->pc = 0x145f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
    // 0x145f74: 0x0  nop
    ctx->pc = 0x145f74u;
    // NOP
label_145f78:
    // 0x145f78: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x145F78u;
    SET_GPR_U32(ctx, 31, 0x145F80u);
    ctx->pc = 0x145F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145F78u;
    // 0x145f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x145F78u, 0x145F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F80u;
label_145f80:
    // 0x145f80: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x145f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x145f84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x145f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f88: 0x25403  sra         $t2, $v0, 16
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145f8c: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x145f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x145f90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x145F90u;
    {
        const bool branch_taken_0x145f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F90u;
        // 0x145f94: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f90) {
            ctx->pc = 0x145F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145f78;
        }
    }
    ctx->pc = 0x145F98u;
label_145f98:
    // 0x145f98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x145f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_145f9c:
    // 0x145f9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x145f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x145fa0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x145fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x145fa4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x145fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x145fa8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x145fa8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x145fac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x145facu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x145fb0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x145fb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145fb4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x145fb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145fb8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x145fb8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x145FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FC0u;
        // 0x145fc4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145FC8u;
}
