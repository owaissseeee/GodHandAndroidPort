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

// Function: func_00275668
// Address: 0x275668 - 0x275888
void func_00275668_0x275668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275668_0x275668");
#endif

    switch (ctx->pc) {
        case 0x275724u: goto label_275724;
        default: break;
    }

    ctx->pc = 0x275668u;

    // 0x275668: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x275668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27566c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x27566cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x275670: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x275670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x275674: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x275674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275678: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x275678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27567c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x27567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x275680: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x275680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x275684: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x275684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x275688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x275688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27568c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x275690: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275694: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x275698: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x275698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x27569c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27569cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2756a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2756a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2756a4: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x2756a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x2756a8: 0x2c620070  sltiu       $v0, $v1, 0x70
    ctx->pc = 0x2756a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x2756ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2756ACu;
    {
        const bool branch_taken_0x2756ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756ACu;
        // 0x2756b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756ac) {
            ctx->pc = 0x2756E4u;
            goto label_2756e4;
        }
    }
    ctx->pc = 0x2756B4u;
    // 0x2756b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2756b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2756b8: 0x244277e0  addiu       $v0, $v0, 0x77E0
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30688));
    // 0x2756bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2756bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2756c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2756c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2756c4: 0x800008  jr          $a0
    ctx->pc = 0x2756C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2756CCu: goto label_2756cc;
            case 0x2756E4u: goto label_2756e4;
            case 0x275864u: goto label_275864;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2756C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2756CCu;
label_2756cc:
    // 0x2756cc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2756ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2756d0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2756d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2756d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2756d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2756d8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2756d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2756dc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2756dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2756e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2756e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2756e4:
    // 0x2756e4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x2756e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2756e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2756E8u;
    {
        const bool branch_taken_0x2756e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756E8u;
        // 0x2756ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756e8) {
            ctx->pc = 0x2756FCu;
            goto label_2756fc;
        }
    }
    ctx->pc = 0x2756F0u;
    // 0x2756f0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x2756f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x2756f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2756F4u;
    {
        const bool branch_taken_0x2756f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2756F4u;
        // 0x2756f8: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756f4) {
            ctx->pc = 0x275700u;
            goto label_275700;
        }
    }
    ctx->pc = 0x2756FCu;
label_2756fc:
    // 0x2756fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2756fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275700:
    // 0x275700: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x275700u;
    {
        const bool branch_taken_0x275700 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x275704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275700u;
        // 0x275704: 0x26300480  addiu       $s0, $s1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275700) {
            ctx->pc = 0x275864u;
            goto label_275864;
        }
    }
    ctx->pc = 0x275708u;
    // 0x275708: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x275708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27570c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x27570cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275710: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x275710u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x275714: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x275714u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x275718: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x275718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27571c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x27571Cu;
    SET_GPR_U32(ctx, 31, 0x275724u);
    ctx->pc = 0x275720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27571Cu;
    // 0x275720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x27571Cu, 0x275724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275724u;
label_275724:
    // 0x275724: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x275724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275728: 0x0  nop
    ctx->pc = 0x275728u;
    // NOP
    // 0x27572c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x27572cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275730: 0x0  nop
    ctx->pc = 0x275730u;
    // NOP
    // 0x275734: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x275734u;
    {
        const bool branch_taken_0x275734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275734u;
        // 0x275738: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275734) {
            ctx->pc = 0x27577Cu;
            goto label_27577c;
        }
    }
    ctx->pc = 0x27573Cu;
    // 0x27573c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275740: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x275740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x275744: 0xc6210480  lwc1        $f1, 0x480($s1)
    ctx->pc = 0x275744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275748: 0x0  nop
    ctx->pc = 0x275748u;
    // NOP
    // 0x27574c: 0x0  nop
    ctx->pc = 0x27574cu;
    // NOP
    // 0x275750: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x275750u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x275754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x275754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x275758: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x275758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27575c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x27575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275760: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x275760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x275764: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x275764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x275768: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x275768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27576c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27576cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x275770: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x275770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x275774: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x275774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275778: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x275778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_27577c:
    // 0x27577c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x27577cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275780: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x275780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x275784: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x275784u;
    {
        const bool branch_taken_0x275784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x275788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275784u;
        // 0x275788: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275784) {
            ctx->pc = 0x2757A0u;
            goto label_2757a0;
        }
    }
    ctx->pc = 0x27578Cu;
    // 0x27578c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x27578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275790: 0xe6200480  swc1        $f0, 0x480($s1)
    ctx->pc = 0x275790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1152), bits); }
    // 0x275794: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x275794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x275798: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x275798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27579c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x27579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2757a0:
    // 0x2757a0: 0xc6210484  lwc1        $f1, 0x484($s1)
    ctx->pc = 0x2757a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2757a4: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x2757a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2757a8: 0x0  nop
    ctx->pc = 0x2757a8u;
    // NOP
    // 0x2757ac: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x2757ACu;
    {
        const bool branch_taken_0x2757ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2757ACu;
        // 0x2757b0: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757ac) {
            ctx->pc = 0x275804u;
            goto label_275804;
        }
    }
    ctx->pc = 0x2757B4u;
    // 0x2757b4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x2757b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x2757b8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2757B8u;
    {
        const bool branch_taken_0x2757b8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2757b8) {
            ctx->pc = 0x275804u;
            goto label_275804;
        }
    }
    ctx->pc = 0x2757C0u;
    // 0x2757c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2757c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2757c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2757c8: 0x0  nop
    ctx->pc = 0x2757c8u;
    // NOP
    // 0x2757cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2757ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2757d0: 0x46150102  mul.s       $f4, $f0, $f21
    ctx->pc = 0x2757d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2757d4: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x2757d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2757d8: 0x0  nop
    ctx->pc = 0x2757d8u;
    // NOP
    // 0x2757dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2757DCu;
    {
        const bool branch_taken_0x2757dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2757dc) {
            ctx->pc = 0x2757E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2757DCu;
            // 0x2757e0: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2757E4u;
            goto label_2757e4;
        }
    }
    ctx->pc = 0x2757E4u;
label_2757e4:
    // 0x2757e4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2757e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x2757e8: 0x3042042c  andi        $v0, $v0, 0x42C
    ctx->pc = 0x2757e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1068);
    // 0x2757ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2757ECu;
    {
        const bool branch_taken_0x2757ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2757ec) {
            ctx->pc = 0x2757F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2757ECu;
            // 0x2757f0: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2757F4u;
            goto label_2757f4;
        }
    }
    ctx->pc = 0x2757F4u;
label_2757f4:
    // 0x2757f4: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x2757f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
    // 0x2757f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2757f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2757fc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2757FCu;
    {
        const bool branch_taken_0x2757fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2757fc) {
            ctx->pc = 0x275800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2757FCu;
            // 0x275800: 0x46001906  mov.s       $f4, $f3 (Delay Slot)
            ctx->f[4] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x275804u;
            goto label_275804;
        }
    }
    ctx->pc = 0x275804u;
label_275804:
    // 0x275804: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x275804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x275808: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x275808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27580c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27580cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275810: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x275810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27581c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x27581cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x275820: 0xc6221758  lwc1        $f2, 0x1758($s1)
    ctx->pc = 0x275820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275824: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x275824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x275828: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x275828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27582c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27582cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275830: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x275830u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x275834: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x275834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x275838: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x275838u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x27583c: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x27583cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275840: 0x0  nop
    ctx->pc = 0x275840u;
    // NOP
    // 0x275844: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x275844u;
    {
        const bool branch_taken_0x275844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275844u;
        // 0x275848: 0xe6221758  swc1        $f2, 0x1758($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5976), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275844) {
            ctx->pc = 0x275850u;
            goto label_275850;
        }
    }
    ctx->pc = 0x27584Cu;
    // 0x27584c: 0xe6231758  swc1        $f3, 0x1758($s1)
    ctx->pc = 0x27584cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5976), bits); }
label_275850:
    // 0x275850: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x275850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x275854: 0xc6211758  lwc1        $f1, 0x1758($s1)
    ctx->pc = 0x275854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275858: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x275858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27585c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27585cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x275860: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x275860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_275864:
    // 0x275864: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x275864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275868: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x275868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27586c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x27586cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x275870: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x275870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x275874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275878: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x275878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27587c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275880: 0x3e00008  jr          $ra
    ctx->pc = 0x275880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275880u;
        // 0x275884: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275888u;
}
