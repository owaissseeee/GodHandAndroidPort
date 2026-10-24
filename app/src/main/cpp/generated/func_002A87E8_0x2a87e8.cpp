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

// Function: func_002A87E8
// Address: 0x2a87e8 - 0x2a8a08
void func_002A87E8_0x2a87e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A87E8_0x2a87e8");
#endif

    switch (ctx->pc) {
        case 0x2a8844u: goto label_2a8844;
        default: break;
    }

    ctx->pc = 0x2a87e8u;

    // 0x2a87e8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a87e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a87ec: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a87ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a87f0: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x2a87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2a87f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2a87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2a87f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a87fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a8800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a8800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8804: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a8804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a8808: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a880c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8810: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A8810u;
    {
        const bool branch_taken_0x2a8810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8810u;
        // 0x2a8814: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8810) {
            ctx->pc = 0x2A8984u;
            goto label_2a8984;
        }
    }
    ctx->pc = 0x2A8818u;
    // 0x2a8818: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a8818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2a881c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8820: 0x54400059  bnel        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A8820u;
    {
        const bool branch_taken_0x2a8820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8820) {
            ctx->pc = 0x2A8824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8820u;
            // 0x2a8824: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8988u;
            goto label_2a8988;
        }
    }
    ctx->pc = 0x2A8828u;
    // 0x2a8828: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x2a8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x2a882c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a8830: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2A8830u;
    {
        const bool branch_taken_0x2a8830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8830) {
            ctx->pc = 0x2A8834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8830u;
            // 0x2a8834: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8988u;
            goto label_2a8988;
        }
    }
    ctx->pc = 0x2A8838u;
    // 0x2a8838: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a8838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a883c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2A883Cu;
    SET_GPR_U32(ctx, 31, 0x2A8844u);
    ctx->pc = 0x2A8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A883Cu;
    // 0x2a8840: 0x24523050  addiu       $s2, $v0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2A883Cu, 0x2A8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8844u;
label_2a8844:
    // 0x2a8844: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2a8844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a8848: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x2a8848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x2a884c: 0x8ca3aff0  lw          $v1, -0x5010($a1)
    ctx->pc = 0x2a884cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2a8850: 0x50600068  beql        $v1, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x2A8850u;
    {
        const bool branch_taken_0x2a8850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8850) {
            ctx->pc = 0x2A8854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8850u;
            // 0x2a8854: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A89F4u;
            goto label_2a89f4;
        }
    }
    ctx->pc = 0x2A8858u;
    // 0x2a8858: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8858u;
    {
        const bool branch_taken_0x2a8858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8858) {
            ctx->pc = 0x2A885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8858u;
            // 0x2a885c: 0x8e1100f0  lw          $s1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8860u;
            goto label_2a8860;
        }
    }
    ctx->pc = 0x2A8860u;
label_2a8860:
    // 0x2a8860: 0x24640210  addiu       $a0, $v1, 0x210
    ctx->pc = 0x2a8860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2a8864: 0x53a40008  beql        $sp, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A8864u;
    {
        const bool branch_taken_0x2a8864 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a8864) {
            ctx->pc = 0x2A8868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8864u;
            // 0x2a8868: 0x8c4200f0  lw          $v0, 0xF0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8888u;
            goto label_2a8888;
        }
    }
    ctx->pc = 0x2A886Cu;
    // 0x2a886c: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x2a886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8870: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a8870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a8874: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2a8874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8878: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2a8878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a887c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8880: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a8880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a8884: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2a8884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_2a8888:
    // 0x2a8888: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2a8888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a888c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2a888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8890: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a8890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8894: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2a8894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a8898: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2a8898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2a889c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2a889cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a88a0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2a88a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2a88a4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2a88a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2a88a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a88a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a88ac: 0x0  nop
    ctx->pc = 0x2a88acu;
    // NOP
    // 0x2a88b0: 0x0  nop
    ctx->pc = 0x2a88b0u;
    // NOP
    // 0x2a88b4: 0x46000144  c1          0x144
    ctx->pc = 0x2a88b4u;
    ctx->f[5] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2a88b8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2a88b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a88bc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a88bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a88c0: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2a88c0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2a88c4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a88c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a88c8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2a88c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2a88cc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2a88ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2a88d0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2a88d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2a88d4: 0x0  nop
    ctx->pc = 0x2a88d4u;
    // NOP
    // 0x2a88d8: 0x0  nop
    ctx->pc = 0x2a88d8u;
    // NOP
    // 0x2a88dc: 0x46030104  c1          0x30104
    ctx->pc = 0x2a88dcu;
    ctx->f[4] = ps2FpuSqrt(ctx->fcr31, ctx->f[3]);
    // 0x2a88e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2a88e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a88e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a88e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a88e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88ec: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2a88ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2a88f0: 0x460120c1  sub.s       $f3, $f4, $f1
    ctx->pc = 0x2a88f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2a88f4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x2a88f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2a88f8: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2a88f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2a88fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A88FCu;
    {
        const bool branch_taken_0x2a88fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A88FCu;
        // 0x2a8900: 0x460018c2  mul.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a88fc) {
            ctx->pc = 0x2A890Cu;
            goto label_2a890c;
        }
    }
    ctx->pc = 0x2A8904u;
    // 0x2a8904: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2a8904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2a8908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a890c:
    // 0x2a890c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2a890cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a8910: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A8910u;
    {
        const bool branch_taken_0x2a8910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8910u;
        // 0x2a8914: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8910) {
            ctx->pc = 0x2A8958u;
            goto label_2a8958;
        }
    }
    ctx->pc = 0x2A8918u;
    // 0x2a8918: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2a8918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a891c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2a891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2a8920: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2a8920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2a8924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a8924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a8928: 0x0  nop
    ctx->pc = 0x2a8928u;
    // NOP
    // 0x2a892c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a892cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8930: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2a8930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8934: 0x0  nop
    ctx->pc = 0x2a8934u;
    // NOP
    // 0x2a8938: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8938u;
    {
        const bool branch_taken_0x2a8938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8938u;
        // 0x2a893c: 0x8ca2aff0  lw          $v0, -0x5010($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8938) {
            ctx->pc = 0x2A8948u;
            goto label_2a8948;
        }
    }
    ctx->pc = 0x2A8940u;
    // 0x2a8940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8944: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a8944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a8948:
    // 0x2a8948: 0x10520003  beq         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A8948u;
    {
        const bool branch_taken_0x2a8948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2a8948) {
            ctx->pc = 0x2A8958u;
            goto label_2a8958;
        }
    }
    ctx->pc = 0x2A8950u;
    // 0x2a8950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8954: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a8954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2a8958:
    // 0x2a8958: 0x46042836  c.le.s      $f5, $f4
    ctx->pc = 0x2a8958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a895c: 0x0  nop
    ctx->pc = 0x2a895cu;
    // NOP
    // 0x2a8960: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2A8960u;
    {
        const bool branch_taken_0x2a8960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8960) {
            ctx->pc = 0x2A8964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8960u;
            // 0x2a8964: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A8988u;
            goto label_2a8988;
        }
    }
    ctx->pc = 0x2A8968u;
    // 0x2a8968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a896c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a896cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8970: 0x0  nop
    ctx->pc = 0x2a8970u;
    // NOP
    // 0x2a8974: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2a8974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a8978: 0x0  nop
    ctx->pc = 0x2a8978u;
    // NOP
    // 0x2a897c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A897Cu;
    {
        const bool branch_taken_0x2a897c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a897c) {
            ctx->pc = 0x2A89A8u;
            goto label_2a89a8;
        }
    }
    ctx->pc = 0x2A8984u;
label_2a8984:
    // 0x2a8984: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x2a8984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_2a8988:
    // 0x2a8988: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a8988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2a898c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a8990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a8990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8994: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x2a8994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x2a8998: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a8998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a899c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x2a899cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x2a89a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A89A0u;
    {
        const bool branch_taken_0x2a89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89A0u;
        // 0x2a89a4: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89a0) {
            ctx->pc = 0x2A89F0u;
            goto label_2a89f0;
        }
    }
    ctx->pc = 0x2A89A8u;
label_2a89a8:
    // 0x2a89a8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2a89a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2a89ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2a89acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2a89b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a89b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a89b4: 0x0  nop
    ctx->pc = 0x2a89b4u;
    // NOP
    // 0x2a89b8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2a89b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a89bc: 0x0  nop
    ctx->pc = 0x2a89bcu;
    // NOP
    // 0x2a89c0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2A89C0u;
    {
        const bool branch_taken_0x2a89c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a89c0) {
            ctx->pc = 0x2A89C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A89C0u;
            // 0x2a89c4: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A89E4u;
            goto label_2a89e4;
        }
    }
    ctx->pc = 0x2A89C8u;
    // 0x2a89c8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x2a89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x2a89cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a89ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a89d0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2a89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x2a89d4: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x2a89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x2a89d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a89dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A89DCu;
    {
        const bool branch_taken_0x2a89dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A89DCu;
        // 0x2a89e0: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a89dc) {
            ctx->pc = 0x2A89F0u;
            goto label_2a89f0;
        }
    }
    ctx->pc = 0x2A89E4u;
label_2a89e4:
    // 0x2a89e4: 0xe603024c  swc1        $f3, 0x24C($s0)
    ctx->pc = 0x2a89e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x2a89e8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2a89e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2a89ec: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x2a89ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_2a89f0:
    // 0x2a89f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a89f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a89f4:
    // 0x2a89f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a89f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a89f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a89f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a89fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a89fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8a00: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8A00u;
        // 0x2a8a04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8A08u;
}
