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

// Function: func_001C86E8
// Address: 0x1c86e8 - 0x1c8930
void func_001C86E8_0x1c86e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C86E8_0x1c86e8");
#endif

    switch (ctx->pc) {
        case 0x1c870cu: goto label_1c870c;
        case 0x1c8784u: goto label_1c8784;
        case 0x1c8798u: goto label_1c8798;
        case 0x1c8898u: goto label_1c8898;
        case 0x1c88e4u: goto label_1c88e4;
        case 0x1c890cu: goto label_1c890c;
        case 0x1c8914u: goto label_1c8914;
        default: break;
    }

    ctx->pc = 0x1c86e8u;

    // 0x1c86e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c86e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c86ec: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1c86ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1c86f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c86f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c86f4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1c86f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c86f8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1c86fc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1c86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1c8700: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c8704: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1C8704u;
    SET_GPR_U32(ctx, 31, 0x1C870Cu);
    ctx->pc = 0x1C8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8704u;
    // 0x1c8708: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C8704u, 0x1C870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C870Cu;
label_1c870c:
    // 0x1c870c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c870cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c8710: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c8710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c8714: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8718: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c8718u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c871c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1c871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8720: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c8720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c8724: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1c8724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1c8728: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8728u;
    {
        const bool branch_taken_0x1c8728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8728u;
        // 0x1c872c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8728) {
            ctx->pc = 0x1C873Cu;
            goto label_1c873c;
        }
    }
    ctx->pc = 0x1C8730u;
    // 0x1c8730: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1c8730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1c8734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8734u;
    {
        const bool branch_taken_0x1c8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8734u;
        // 0x1c8738: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8734) {
            ctx->pc = 0x1C8740u;
            goto label_1c8740;
        }
    }
    ctx->pc = 0x1C873Cu;
label_1c873c:
    // 0x1c873c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c873cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8740:
    // 0x1c8740: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1c8740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c8744: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8744u;
    {
        const bool branch_taken_0x1c8744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8744u;
        // 0x1c8748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8744) {
            ctx->pc = 0x1C875Cu;
            goto label_1c875c;
        }
    }
    ctx->pc = 0x1C874Cu;
    // 0x1c874c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C874Cu;
    {
        const bool branch_taken_0x1c874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c874c) {
            ctx->pc = 0x1C87B8u;
            goto label_1c87b8;
        }
    }
    ctx->pc = 0x1C8754u;
    // 0x1c8754: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1C8754u;
    {
        const bool branch_taken_0x1c8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8754u;
        // 0x1c8758: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8754) {
            ctx->pc = 0x1C8918u;
            goto label_1c8918;
        }
    }
    ctx->pc = 0x1C875Cu;
label_1c875c:
    // 0x1c875c: 0xc60d0610  lwc1        $f13, 0x610($s0)
    ctx->pc = 0x1c875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8760: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x1c8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8764: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x1c8764u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1c8768: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1c8768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1c876c: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x1c876cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x1c8770: 0x0  nop
    ctx->pc = 0x1c8770u;
    // NOP
    // 0x1c8774: 0x0  nop
    ctx->pc = 0x1c8774u;
    // NOP
    // 0x1c8778: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1c8778u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x1c877c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C877Cu;
    SET_GPR_U32(ctx, 31, 0x1C8784u);
    ctx->pc = 0x1C8780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C877Cu;
    // 0x1c8780: 0xc60c0614  lwc1        $f12, 0x614($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C877Cu, 0x1C8784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8784u;
label_1c8784:
    // 0x1c8784: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c8784u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1c8788: 0xc60c0610  lwc1        $f12, 0x610($s0)
    ctx->pc = 0x1c8788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c878c: 0xc60d0618  lwc1        $f13, 0x618($s0)
    ctx->pc = 0x1c878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c8790: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1C8790u;
    SET_GPR_U32(ctx, 31, 0x1C8798u);
    ctx->pc = 0x1C8794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8790u;
    // 0x1c8794: 0xe6000100  swc1        $f0, 0x100($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1C8790u, 0x1C8798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8798u;
label_1c8798:
    // 0x1c8798: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1c8798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1c879c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1c879cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1c87a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c87a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c87a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c87a8: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1c87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1c87ac: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x1c87acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1c87b0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1c87b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c87b4: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1c87b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_1c87b8:
    // 0x1c87b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C87B8u;
    {
        const bool branch_taken_0x1c87b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C87B8u;
        // 0x1c87bc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c87b8) {
            ctx->pc = 0x1C87DCu;
            goto label_1c87dc;
        }
    }
    ctx->pc = 0x1C87C0u;
    // 0x1c87c0: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x1c87c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x1c87c4: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1c87c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1c87c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c87c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c87cc: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1c87ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c87d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c87d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c87d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c87d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c87d8: 0xe6210100  swc1        $f1, 0x100($s1)
    ctx->pc = 0x1c87d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
label_1c87dc:
    // 0x1c87dc: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1c87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1c87e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c87e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c87e4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c87e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c87e8: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c87e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c87ec: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1c87ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c87f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c87f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c87f4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c87f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c87f8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1c87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c87fc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1c87fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c8800: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1c8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c8804: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1c8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8808: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1c8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c880c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c880cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c8810: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c8810u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c8814: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c8814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8818: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c8818u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c881c: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1c881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1c8820: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1c8820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1c8824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8828: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1c8828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c882c: 0xc6010614  lwc1        $f1, 0x614($s0)
    ctx->pc = 0x1c882cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8830: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c8830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c8834: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c8834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8838: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c8838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c883c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C883Cu;
    {
        const bool branch_taken_0x1c883c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C883Cu;
        // 0x1c8840: 0xe6010614  swc1        $f1, 0x614($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c883c) {
            ctx->pc = 0x1C885Cu;
            goto label_1c885c;
        }
    }
    ctx->pc = 0x1C8844u;
    // 0x1c8844: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c8844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8848: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c8848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c884c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8850: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1c8850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1c8854: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8858: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1c8858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c885c:
    // 0x1c885c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x1c885cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c8860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8864: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c8864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1c8868: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1c8868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c886c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c8870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8874: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c8874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c8878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c887c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c8880: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1c8880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c8884: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c8884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1c8888: 0x24090534  addiu       $t1, $zero, 0x534
    ctx->pc = 0x1c8888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
    // 0x1c888c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c888cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8890: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1C8890u;
    SET_GPR_U32(ctx, 31, 0x1C8898u);
    ctx->pc = 0x1C8894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8890u;
    // 0x1c8894: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C8890u, 0x1C8898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8898u;
label_1c8898:
    // 0x1c8898: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8898u;
    {
        const bool branch_taken_0x1c8898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8898) {
            ctx->pc = 0x1C889Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8898u;
            // 0x1c889c: 0xc6000620  lwc1        $f0, 0x620($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C88ECu;
            goto label_1c88ec;
        }
    }
    ctx->pc = 0x1C88A0u;
    // 0x1c88a0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c88a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c88a4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C88A4u;
    {
        const bool branch_taken_0x1c88a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1C88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88A4u;
        // 0x1c88a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88a4) {
            ctx->pc = 0x1C88C4u;
            goto label_1c88c4;
        }
    }
    ctx->pc = 0x1C88ACu;
    // 0x1c88ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c88acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c88b0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1c88b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c88b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c88b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1c88b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c88b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c88bc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1c88bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1c88c0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1c88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1c88c4:
    // 0x1c88c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c88c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c88c8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c88c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1c88cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c88ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c88d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c88d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c88d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c88d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c88d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c88d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c88dc: 0xc072376  jal         func_1C8DD8
    ctx->pc = 0x1C88DCu;
    SET_GPR_U32(ctx, 31, 0x1C88E4u);
    ctx->pc = 0x1C88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C88DCu;
    // 0x1c88e0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DD8u, 0x1C88DCu, 0x1C88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C88E4u;
label_1c88e4:
    // 0x1c88e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C88E4u;
    {
        const bool branch_taken_0x1c88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E4u;
        // 0x1c88e8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e4) {
            ctx->pc = 0x1C8918u;
            goto label_1c8918;
        }
    }
    ctx->pc = 0x1C88ECu;
label_1c88ec:
    // 0x1c88ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c88ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c88f0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c88f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c88f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c88f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c88f8: 0x0  nop
    ctx->pc = 0x1c88f8u;
    // NOP
    // 0x1c88fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88FCu;
    {
        const bool branch_taken_0x1c88fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88FCu;
        // 0x1c8900: 0xe6000620  swc1        $f0, 0x620($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88fc) {
            ctx->pc = 0x1C890Cu;
            goto label_1c890c;
        }
    }
    ctx->pc = 0x1C8904u;
    // 0x1c8904: 0xc072376  jal         func_1C8DD8
    ctx->pc = 0x1C8904u;
    SET_GPR_U32(ctx, 31, 0x1C890Cu);
    ctx->pc = 0x1C8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8904u;
    // 0x1c8908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DD8u, 0x1C8904u, 0x1C890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C890Cu;
label_1c890c:
    // 0x1c890c: 0xc072394  jal         func_1C8E50
    ctx->pc = 0x1C890Cu;
    SET_GPR_U32(ctx, 31, 0x1C8914u);
    ctx->pc = 0x1C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C890Cu;
    // 0x1c8910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8E50u, 0x1C890Cu, 0x1C8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8914u;
label_1c8914:
    // 0x1c8914: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1c8914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c8918:
    // 0x1c8918: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1c8918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c891c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8920: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1c8920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8924: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8924u;
        // 0x1c8928: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C892Cu;
    // 0x1c892c: 0x0  nop
    ctx->pc = 0x1c892cu;
    // NOP
    ctx->pc = 0x1c8930u;
}
