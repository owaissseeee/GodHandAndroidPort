#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StateToPlayer__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79f728 - 0x79f8c0
void StateToPlayer__9EnemyShipRQ29EnemyShip4Ship_0x79f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateToPlayer__9EnemyShipRQ29EnemyShip4Ship_0x79f728");
#endif

    switch (ctx->pc) {
        case 0x79f778u: goto label_79f778;
        case 0x79f794u: goto label_79f794;
        case 0x79f808u: goto label_79f808;
        default: break;
    }

    ctx->pc = 0x79f728u;

    // 0x79f728: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79f72c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x79f72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x79f730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79f730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79f734: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79f734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x79f738: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x79f738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x79f73c: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x79f73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x79f740: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x79f740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x79f744: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x79f744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x79f748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79f74c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79f74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79f750: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79f750u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79f754: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79f754u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79f758: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79f758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79f75c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f760: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79f764: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79f764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79f768: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f76c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79f76cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79f770: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x79F770u;
    SET_GPR_U32(ctx, 31, 0x79F778u);
    ctx->pc = 0x79F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F770u;
    // 0x79f774: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79F770u, 0x79F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F778u;
label_79f778:
    // 0x79f778: 0x46000104  c1          0x104
    ctx->pc = 0x79f778u;
    ctx->f[4] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x79f77c: 0x46042032  c.eq.s      $f4, $f4
    ctx->pc = 0x79f77cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79f780: 0x0  nop
    ctx->pc = 0x79f780u;
    // NOP
    // 0x79f784: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x79F784u;
    {
        const bool branch_taken_0x79f784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79f784) {
            ctx->pc = 0x79F788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79F784u;
            // 0x79f788: 0xc602006c  lwc1        $f2, 0x6C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x79F79Cu;
            goto label_79f79c;
        }
    }
    ctx->pc = 0x79F78Cu;
    // 0x79f78c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79F78Cu;
    SET_GPR_U32(ctx, 31, 0x79F794u);
    ctx->pc = 0x79F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F78Cu;
    // 0x79f790: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79F78Cu, 0x79F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F794u;
label_79f794:
    // 0x79f794: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x79f794u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x79f798: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x79f798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79f79c:
    // 0x79f79c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79f7a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79f7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79f7a4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79f7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79f7a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79f7a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79f7ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79f7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79f7b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x79f7b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x79f7b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79f7b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79f7bc: 0x0  nop
    ctx->pc = 0x79f7bcu;
    // NOP
    // 0x79f7c0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x79f7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79f7c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x79f7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x79f7c8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x79f7c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x79f7cc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x79F7CCu;
    {
        const bool branch_taken_0x79f7cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F7CCu;
        // 0x79f7d0: 0xe602006c  swc1        $f2, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f7cc) {
            ctx->pc = 0x79F7F8u;
            goto label_79f7f8;
        }
    }
    ctx->pc = 0x79F7D4u;
    // 0x79f7d4: 0x12510007  beq         $s2, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79F7D4u;
    {
        const bool branch_taken_0x79f7d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x79F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F7D4u;
        // 0x79f7d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f7d4) {
            ctx->pc = 0x79F7F4u;
            goto label_79f7f4;
        }
    }
    ctx->pc = 0x79F7DCu;
    // 0x79f7dc: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x79f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f7e0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x79f7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x79f7e4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x79f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79f7e8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x79f7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x79f7ec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x79f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f7f0: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x79f7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_79f7f4:
    // 0x79f7f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_79f7f8:
    // 0x79f7f8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x79f7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79f7fc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x79f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79f800: 0xc1e7618  jal         func_79D860
    ctx->pc = 0x79F800u;
    SET_GPR_U32(ctx, 31, 0x79F808u);
    ctx->pc = 0x79F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79F800u;
    // 0x79f804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D860u, 0x79F800u, 0x79F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79F808u;
label_79f808:
    // 0x79f808: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x79f808u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x79f80c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x79f80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79f810: 0x0  nop
    ctx->pc = 0x79f810u;
    // NOP
    // 0x79f814: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79f814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79f818: 0x0  nop
    ctx->pc = 0x79f818u;
    // NOP
    // 0x79f81c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x79F81Cu;
    {
        const bool branch_taken_0x79f81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F81Cu;
        // 0x79f820: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79f81c) {
            ctx->pc = 0x79F85Cu;
            goto label_79f85c;
        }
    }
    ctx->pc = 0x79F824u;
    // 0x79f824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79f824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79f828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79f828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79f82c: 0x0  nop
    ctx->pc = 0x79f82cu;
    // NOP
    // 0x79f830: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x79f830u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x79f834: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x79f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79f838: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x79f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79f83c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x79f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f840: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x79f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x79f844: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x79f844u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x79f848: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x79f848u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x79f84c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x79f84cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x79f850: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x79f850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x79f854: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x79f854u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79f858: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x79f858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79f85c:
    // 0x79f85c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x79f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79f860: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79f860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79f864: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79f864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f868: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x79f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79f86c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79f86cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79f870: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79f870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f874: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79f874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79f878: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79f878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x79f87c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79f87cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x79f880: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79f880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79f884: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79f884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f888: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79f888u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79f88c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79f88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f890: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x79f890u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79f894: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x79f894u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79f898: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79f898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79f89c: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x79f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79f8a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x79f8a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79f8a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79f8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79f8a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x79f8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79f8ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x79f8acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79f8b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79f8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79f8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79F8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79F8B4u;
        // 0x79f8b8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79F8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79F8BCu;
    // 0x79f8bc: 0x0  nop
    ctx->pc = 0x79f8bcu;
    // NOP
    ctx->pc = 0x79f8c0u;
}
} // namespace gh_r501
