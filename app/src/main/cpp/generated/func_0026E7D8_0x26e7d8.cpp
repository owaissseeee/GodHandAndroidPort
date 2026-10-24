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

// Function: func_0026E7D8
// Address: 0x26e7d8 - 0x26e988
void func_0026E7D8_0x26e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026E7D8_0x26e7d8");
#endif

    switch (ctx->pc) {
        case 0x26e8c0u: goto label_26e8c0;
        case 0x26e8c8u: goto label_26e8c8;
        case 0x26e8d4u: goto label_26e8d4;
        case 0x26e924u: goto label_26e924;
        case 0x26e938u: goto label_26e938;
        case 0x26e964u: goto label_26e964;
        default: break;
    }

    ctx->pc = 0x26e7d8u;

    // 0x26e7d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26e7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26e7dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x26e7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x26e7e0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x26e7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x26e7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e7e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x26e7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x26e7ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x26e7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x26e7f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e7f4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x26e7f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x26e7f8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x26e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x26e7fc: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26e7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
    // 0x26e800: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x26E800u;
    {
        const bool branch_taken_0x26e800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E800u;
        // 0x26e804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e800) {
            ctx->pc = 0x26E968u;
            goto label_26e968;
        }
    }
    ctx->pc = 0x26E808u;
    // 0x26e808: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x26e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e80c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x26e80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x26e810: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e810u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e814: 0x0  nop
    ctx->pc = 0x26e814u;
    // NOP
    // 0x26e818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26e818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e81c: 0x0  nop
    ctx->pc = 0x26e81cu;
    // NOP
    // 0x26e820: 0x45010052  bc1t        . + 4 + (0x52 << 2)
    ctx->pc = 0x26E820u;
    {
        const bool branch_taken_0x26e820 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E820u;
        // 0x26e824: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e820) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E828u;
    // 0x26e828: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x26e828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x26e82c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x26e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x26e830: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x26E830u;
    {
        const bool branch_taken_0x26e830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E830u;
        // 0x26e834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e830) {
            ctx->pc = 0x26E96Cu;
            goto label_26e96c;
        }
    }
    ctx->pc = 0x26E838u;
    // 0x26e838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26e838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26e83c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26e83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x26e840: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26e844: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x26e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x26e848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26e848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e84c: 0x3c01c130  lui         $at, 0xC130
    ctx->pc = 0x26e84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49456 << 16));
    // 0x26e850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26e850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26e854: 0x3c01bfe6  lui         $at, 0xBFE6
    ctx->pc = 0x26e854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49126 << 16));
    // 0x26e858: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26e858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x26e85c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26e85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26e860: 0x3c01c200  lui         $at, 0xC200
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49664 << 16));
    // 0x26e864: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26e864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x26e868: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26e868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26e86c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x26e86cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26e870: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x26e870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26e874: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26e874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26e878: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x26e878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x26e87c: 0xe4a4000c  swc1        $f4, 0xC($a1)
    ctx->pc = 0x26e87cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x26e880: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x26e880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x26e884: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x26e884u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x26e888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26e888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26e88c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26e890: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26e890u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e894: 0x127d0006  beq         $s3, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E894u;
    {
        const bool branch_taken_0x26e894 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 29));
        ctx->pc = 0x26E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E894u;
        // 0x26e898: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e894) {
            ctx->pc = 0x26E8B0u;
            goto label_26e8b0;
        }
    }
    ctx->pc = 0x26E89Cu;
    // 0x26e89c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x26e89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8a0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x26e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26e8a4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e8a8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26e8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e8ac: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26e8acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26e8b0:
    // 0x26e8b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26e8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26e8b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26e8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8b8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x26e8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e8bc: 0x0  nop
    ctx->pc = 0x26e8bcu;
    // NOP
label_26e8c0:
    // 0x26e8c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x26E8C0u;
    SET_GPR_U32(ctx, 31, 0x26E8C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x26E8C0u, 0x26E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8C8u;
label_26e8c8:
    // 0x26e8c8: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x26e8cc: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x26E8CCu;
    SET_GPR_U32(ctx, 31, 0x26E8D4u);
    ctx->pc = 0x26E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E8CCu;
    // 0x26e8d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x26E8CCu, 0x26E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8D4u;
label_26e8d4:
    // 0x26e8d4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26e8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e8d8: 0x0  nop
    ctx->pc = 0x26e8d8u;
    // NOP
    // 0x26e8dc: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x26E8DCu;
    {
        const bool branch_taken_0x26e8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e8dc) {
            ctx->pc = 0x26E8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E8DCu;
            // 0x26e8e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E908u;
            goto label_26e908;
        }
    }
    ctx->pc = 0x26E8E4u;
    // 0x26e8e4: 0x12700007  beq         $s3, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E8E4u;
    {
        const bool branch_taken_0x26e8e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x26E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E8E4u;
        // 0x26e8e8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e8e4) {
            ctx->pc = 0x26E904u;
            goto label_26e904;
        }
    }
    ctx->pc = 0x26E8ECu;
    // 0x26e8ec: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x26e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e8f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26e8f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x26e8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8f8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26e8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26e8fc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x26e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e900: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x26e900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_26e904:
    // 0x26e904: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26e904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26e908:
    // 0x26e908: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x26e908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e90c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x26E90Cu;
    {
        const bool branch_taken_0x26e90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E90Cu;
        // 0x26e910: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e90c) {
            ctx->pc = 0x26E8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e8c0;
        }
    }
    ctx->pc = 0x26E914u;
    // 0x26e914: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x26e914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x26e918: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26e918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26e91c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26E91Cu;
    SET_GPR_U32(ctx, 31, 0x26E924u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26E91Cu, 0x26E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E924u;
label_26e924:
    // 0x26e924: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x26e924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e928: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26e928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26e92c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26e92cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26e930: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26E930u;
    SET_GPR_U32(ctx, 31, 0x26E938u);
    ctx->pc = 0x26E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E930u;
    // 0x26e934: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26E930u, 0x26E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E938u;
label_26e938:
    // 0x26e938: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26e938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26e93c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x26e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e940: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x26e944: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e94c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26e94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e950: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x26e950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26e954: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26e954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26e958: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e95c: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x26E95Cu;
    SET_GPR_U32(ctx, 31, 0x26E964u);
    ctx->pc = 0x26E960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E95Cu;
    // 0x26e960: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x26E95Cu, 0x26E964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E964u;
label_26e964:
    // 0x26e964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e968:
    // 0x26e968: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x26e968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26e96c:
    // 0x26e96c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x26e96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e970: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x26e970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e974: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26e974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e978: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e97c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x26e97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26e980: 0x3e00008  jr          $ra
    ctx->pc = 0x26E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E980u;
        // 0x26e984: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E988u;
}
