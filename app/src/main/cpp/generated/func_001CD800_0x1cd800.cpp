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

// Function: func_001CD800
// Address: 0x1cd800 - 0x1cd9c0
void func_001CD800_0x1cd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CD800_0x1cd800");
#endif

    switch (ctx->pc) {
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd914u: goto label_1cd914;
        case 0x1cd95cu: goto label_1cd95c;
        case 0x1cd964u: goto label_1cd964;
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd9a8u: goto label_1cd9a8;
        default: break;
    }

    ctx->pc = 0x1cd800u;

    // 0x1cd800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cd804: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1cd804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1cd808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd80c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1cd80cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1cd810: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cd814: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1cd814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1cd818: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1cd818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1cd81c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CD81Cu;
    SET_GPR_U32(ctx, 31, 0x1CD824u);
    ctx->pc = 0x1CD820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD81Cu;
    // 0x1cd820: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CD81Cu, 0x1CD824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD824u;
label_1cd824:
    // 0x1cd824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1cd824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1cd828: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1cd828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd82c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd830: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cd830u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cd834: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1cd834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cd838: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1cd838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cd83c: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cd83cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cd840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD840u;
    {
        const bool branch_taken_0x1cd840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD840u;
        // 0x1cd844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd840) {
            ctx->pc = 0x1CD858u;
            goto label_1cd858;
        }
    }
    ctx->pc = 0x1CD848u;
    // 0x1cd848: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD848u;
    {
        const bool branch_taken_0x1cd848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd848) {
            ctx->pc = 0x1CD84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD848u;
            // 0x1cd84c: 0xc6010674  lwc1        $f1, 0x674($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD88Cu;
            goto label_1cd88c;
        }
    }
    ctx->pc = 0x1CD850u;
    // 0x1cd850: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1CD850u;
    {
        const bool branch_taken_0x1cd850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD850u;
        // 0x1cd854: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd850) {
            ctx->pc = 0x1CD9ACu;
            goto label_1cd9ac;
        }
    }
    ctx->pc = 0x1CD858u;
label_1cd858:
    // 0x1cd858: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x1cd858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x1cd85c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1cd85cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1cd860: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd864: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cd864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cd868: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1cd868u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x1cd86c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x1cd86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x1cd870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd874: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cd878: 0xe6010630  swc1        $f1, 0x630($s0)
    ctx->pc = 0x1cd878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1cd87c: 0xe6000660  swc1        $f0, 0x660($s0)
    ctx->pc = 0x1cd87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
    // 0x1cd880: 0xe6020674  swc1        $f2, 0x674($s0)
    ctx->pc = 0x1cd880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
    // 0x1cd884: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cd884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd888: 0xc6010674  lwc1        $f1, 0x674($s0)
    ctx->pc = 0x1cd888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd88c:
    // 0x1cd88c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cd88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cd890: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd894: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1cd894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1cd898: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd89c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cd89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cd8a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd8a4: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1cd8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd8a8: 0xc6010674  lwc1        $f1, 0x674($s0)
    ctx->pc = 0x1cd8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1cd8acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1cd8b0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd8b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cd8b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cd8b8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD8B8u;
    {
        const bool branch_taken_0x1cd8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8B8u;
        // 0x1cd8bc: 0xe6010674  swc1        $f1, 0x674($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8b8) {
            ctx->pc = 0x1CD8D8u;
            goto label_1cd8d8;
        }
    }
    ctx->pc = 0x1CD8C0u;
    // 0x1cd8c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd8c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1cd8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1cd8c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd8cc: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1cd8ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1cd8d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd8d4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1cd8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1cd8d8:
    // 0x1cd8d8: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1cd8d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cd8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd8e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1cd8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1cd8e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cd8e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cd8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cd8ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1cd8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1cd8f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd8f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1cd8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1cd8fc: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd900: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1cd900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1cd904: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1cd904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1cd908: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cd908u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd90c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1CD90Cu;
    SET_GPR_U32(ctx, 31, 0x1CD914u);
    ctx->pc = 0x1CD910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD90Cu;
    // 0x1cd910: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1CD90Cu, 0x1CD914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD914u;
label_1cd914:
    // 0x1cd914: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD914u;
    {
        const bool branch_taken_0x1cd914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd914) {
            ctx->pc = 0x1CD918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD914u;
            // 0x1cd918: 0xc6000660  lwc1        $f0, 0x660($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD968u;
            goto label_1cd968;
        }
    }
    ctx->pc = 0x1CD91Cu;
    // 0x1cd91c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd920: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD920u;
    {
        const bool branch_taken_0x1cd920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD920u;
        // 0x1cd924: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd920) {
            ctx->pc = 0x1CD93Cu;
            goto label_1cd93c;
        }
    }
    ctx->pc = 0x1CD928u;
    // 0x1cd928: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cd92c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1cd92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd930: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd934: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1cd934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd938: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cd93c:
    // 0x1cd93c: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1cd93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd940: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd948: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd94c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd954: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD954u;
    SET_GPR_U32(ctx, 31, 0x1CD95Cu);
    ctx->pc = 0x1CD958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD954u;
    // 0x1cd958: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD954u, 0x1CD95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD95Cu;
label_1cd95c:
    // 0x1cd95c: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD95Cu;
    SET_GPR_U32(ctx, 31, 0x1CD964u);
    ctx->pc = 0x1CD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD95Cu;
    // 0x1cd960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD95Cu, 0x1CD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD964u;
label_1cd964:
    // 0x1cd964: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x1cd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd968:
    // 0x1cd968: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cd968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd96c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1cd96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1cd970: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cd970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd974: 0x0  nop
    ctx->pc = 0x1cd974u;
    // NOP
    // 0x1cd978: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1CD978u;
    {
        const bool branch_taken_0x1cd978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD978u;
        // 0x1cd97c: 0xe6000660  swc1        $f0, 0x660($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd978) {
            ctx->pc = 0x1CD9A8u;
            goto label_1cd9a8;
        }
    }
    ctx->pc = 0x1CD980u;
    // 0x1cd980: 0xc074206  jal         func_1D0818
    ctx->pc = 0x1CD980u;
    SET_GPR_U32(ctx, 31, 0x1CD988u);
    ctx->pc = 0x1CD984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD980u;
    // 0x1cd984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0818u, 0x1CD980u, 0x1CD988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD988u;
label_1cd988:
    // 0x1cd988: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1cd988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cd98c: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x1cd98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x1cd990: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd994: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cd994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cd998: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cd998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cd99c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd99cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9a0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1CD9A0u;
    SET_GPR_U32(ctx, 31, 0x1CD9A8u);
    ctx->pc = 0x1CD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9A0u;
    // 0x1cd9a4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1CD9A0u, 0x1CD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9A8u;
label_1cd9a8:
    // 0x1cd9a8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1cd9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cd9ac:
    // 0x1cd9ac: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1cd9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd9b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cd9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd9b4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1cd9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD9B8u;
        // 0x1cd9bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD9C0u;
}
