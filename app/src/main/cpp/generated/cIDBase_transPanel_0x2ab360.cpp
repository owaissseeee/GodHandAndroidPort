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

// Function: cIDBase_transPanel
// Address: 0x2ab360 - 0x2ab9a8
void cIDBase_transPanel_0x2ab360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_transPanel_0x2ab360");
#endif

    switch (ctx->pc) {
        case 0x2ab3c0u: goto label_2ab3c0;
        case 0x2ab400u: goto label_2ab400;
        case 0x2ab4c8u: goto label_2ab4c8;
        case 0x2ab4ecu: goto label_2ab4ec;
        case 0x2ab4fcu: goto label_2ab4fc;
        case 0x2ab5a0u: goto label_2ab5a0;
        case 0x2ab5e8u: goto label_2ab5e8;
        case 0x2ab6e0u: goto label_2ab6e0;
        case 0x2ab710u: goto label_2ab710;
        case 0x2ab8a4u: goto label_2ab8a4;
        case 0x2ab8bcu: goto label_2ab8bc;
        case 0x2ab8c0u: goto label_2ab8c0;
        case 0x2ab8dcu: goto label_2ab8dc;
        case 0x2ab8f4u: goto label_2ab8f4;
        case 0x2ab95cu: goto label_2ab95c;
        default: break;
    }

    ctx->pc = 0x2ab360u;

    // 0x2ab360: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x2ab360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x2ab364: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x2ab364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
    // 0x2ab368: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x2ab368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
    // 0x2ab36c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab36cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab370: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x2ab370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x2ab374: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x2ab374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
    // 0x2ab378: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x2ab378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
    // 0x2ab37c: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x2ab37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
    // 0x2ab380: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x2ab380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
    // 0x2ab384: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x2ab384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
    // 0x2ab388: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x2ab388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
    // 0x2ab38c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2ab38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2ab390: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x2ab390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
    // 0x2ab394: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x2ab394u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x2ab398: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2ab398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2ab39c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB39Cu;
    {
        const bool branch_taken_0x2ab39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB39Cu;
        // 0x2ab3a0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab39c) {
            ctx->pc = 0x2AB3C0u;
            goto label_2ab3c0;
        }
    }
    ctx->pc = 0x2AB3A4u;
    // 0x2ab3a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ab3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ab3a8: 0x9226008b  lbu         $a2, 0x8B($s1)
    ctx->pc = 0x2ab3a8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 139)));
    // 0x2ab3ac: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x2ab3acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2ab3b0: 0x9225008a  lbu         $a1, 0x8A($s1)
    ctx->pc = 0x2ab3b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x2ab3b4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ab3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ab3b8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x2AB3B8u;
    SET_GPR_U32(ctx, 31, 0x2AB3C0u);
    ctx->pc = 0x2AB3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3B8u;
    // 0x2ab3bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x2AB3B8u, 0x2AB3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3C0u;
label_2ab3c0:
    // 0x2ab3c0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2ab3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x2ab3c4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ab3c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab3cc: 0x2462d880  addiu       $v0, $v1, -0x2780
    ctx->pc = 0x2ab3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957184));
    // 0x2ab3d0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ab3d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x2ab3d4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ab3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab3d8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2ab3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab3dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ab3dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD880u));
    // 0x2ab3e0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2ab3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab3e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ab3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ab3e8: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x2ab3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2ab3ec: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2ab3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ab3f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ab3f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3f4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ab3f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab3f8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2AB3F8u;
    SET_GPR_U32(ctx, 31, 0x2AB400u);
    ctx->pc = 0x2AB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3F8u;
    // 0x2ab3fc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2AB3F8u, 0x2AB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB400u;
label_2ab400:
    // 0x2ab400: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2ab400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ab404: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2ab404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab408: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2ab408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab40c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ab40cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ab410: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2ab410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab414: 0x0  nop
    ctx->pc = 0x2ab414u;
    // NOP
    // 0x2ab418: 0x45030156  bc1tl       . + 4 + (0x156 << 2)
    ctx->pc = 0x2AB418u;
    {
        const bool branch_taken_0x2ab418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab418) {
            ctx->pc = 0x2AB41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB418u;
            // 0x2ab41c: 0x7bb00210  lq          $s0, 0x210($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB974u;
            goto label_2ab974;
        }
    }
    ctx->pc = 0x2AB420u;
    // 0x2ab420: 0x8ee2aff0  lw          $v0, -0x5010($s7)
    ctx->pc = 0x2ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946800)));
    // 0x2ab424: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2ab424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab428: 0x24440210  addiu       $a0, $v0, 0x210
    ctx->pc = 0x2ab428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ab42c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x2ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2ab430: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2ab430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ab434: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ab434u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab438: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2ab438u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ab43c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ab43cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ab440: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ab440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab444: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2ab444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ab448: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ab448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ab44c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ab44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab450: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ab450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab454: 0x12530006  beq         $s2, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB454u;
    {
        const bool branch_taken_0x2ab454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x2AB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB454u;
        // 0x2ab458: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab454) {
            ctx->pc = 0x2AB470u;
            goto label_2ab470;
        }
    }
    ctx->pc = 0x2AB45Cu;
    // 0x2ab45c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2ab45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab460: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2ab460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab464: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2ab464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ab468: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ab468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ab46c: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x2ab46cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2ab470:
    // 0x2ab470: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab474: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ab474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab478: 0x8ee2aff0  lw          $v0, -0x5010($s7)
    ctx->pc = 0x2ab478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946800)));
    // 0x2ab47c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2ab47cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ab480: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ab480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ab484: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2ab484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ab488: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ab488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ab48c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ab48cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab490: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ab490u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ab494: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2ab494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab498: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2ab498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ab49c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ab49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ab4a0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2ab4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ab4a4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2ab4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4ac: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ab4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab4b0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2ab4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab4b4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2ab4b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ab4b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2ab4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ab4bc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2ab4bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ab4c0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2AB4C0u;
    SET_GPR_U32(ctx, 31, 0x2AB4C8u);
    ctx->pc = 0x2AB4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4C0u;
    // 0x2ab4c4: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2AB4C0u, 0x2AB4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4C8u;
label_2ab4c8:
    // 0x2ab4c8: 0x0  nop
    ctx->pc = 0x2ab4c8u;
    // NOP
    // 0x2ab4cc: 0x0  nop
    ctx->pc = 0x2ab4ccu;
    // NOP
    // 0x2ab4d0: 0x46000504  c1          0x504
    ctx->pc = 0x2ab4d0u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2ab4d4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x2ab4d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab4d8: 0x0  nop
    ctx->pc = 0x2ab4d8u;
    // NOP
    // 0x2ab4dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB4DCu;
    {
        const bool branch_taken_0x2ab4dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4DCu;
        // 0x2ab4e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4dc) {
            ctx->pc = 0x2AB4F4u;
            goto label_2ab4f4;
        }
    }
    ctx->pc = 0x2AB4E4u;
    // 0x2ab4e4: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2AB4E4u;
    SET_GPR_U32(ctx, 31, 0x2AB4ECu);
    ctx->pc = 0x2AB4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4E4u;
    // 0x2ab4e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2AB4E4u, 0x2AB4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4ECu;
label_2ab4ec:
    // 0x2ab4ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ab4ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ab4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ab4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab4f4:
    // 0x2ab4f4: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x2AB4F4u;
    SET_GPR_U32(ctx, 31, 0x2AB4FCu);
    ctx->pc = 0x2AB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4F4u;
    // 0x2ab4f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x2AB4F4u, 0x2AB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4FCu;
label_2ab4fc:
    // 0x2ab4fc: 0x0  nop
    ctx->pc = 0x2ab4fcu;
    // NOP
    // 0x2ab500: 0x0  nop
    ctx->pc = 0x2ab500u;
    // NOP
    // 0x2ab504: 0x46140043  div.s       $f1, $f0, $f20
    ctx->pc = 0x2ab504u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x2ab508: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2ab508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab50c: 0x0  nop
    ctx->pc = 0x2ab50cu;
    // NOP
    // 0x2ab510: 0x4502002a  bc1fl       . + 4 + (0x2A << 2)
    ctx->pc = 0x2AB510u;
    {
        const bool branch_taken_0x2ab510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ab510) {
            ctx->pc = 0x2AB514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB510u;
            // 0x2ab514: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB5BCu;
            goto label_2ab5bc;
        }
    }
    ctx->pc = 0x2AB518u;
    // 0x2ab518: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2ab518u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab51c: 0x0  nop
    ctx->pc = 0x2ab51cu;
    // NOP
    // 0x2ab520: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB520u;
    {
        const bool branch_taken_0x2ab520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB520u;
        // 0x2ab524: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab520) {
            ctx->pc = 0x2AB538u;
            goto label_2ab538;
        }
    }
    ctx->pc = 0x2AB528u;
    // 0x2ab528: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2ab528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ab52c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2ab52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ab530: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2ab530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ab534: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2ab534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_2ab538:
    // 0x2ab538: 0x0  nop
    ctx->pc = 0x2ab538u;
    // NOP
    // 0x2ab53c: 0x0  nop
    ctx->pc = 0x2ab53cu;
    // NOP
    // 0x2ab540: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2ab540u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2ab544: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2ab544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ab548: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab54c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab550: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2ab550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2ab554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab558: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x2ab558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ab55c: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x2ab55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2ab560: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB560u;
    {
        const bool branch_taken_0x2ab560 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AB564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB560u;
        // 0x2ab564: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab560) {
            ctx->pc = 0x2AB57Cu;
            goto label_2ab57c;
        }
    }
    ctx->pc = 0x2AB568u;
    // 0x2ab568: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ab568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab56c: 0x0  nop
    ctx->pc = 0x2ab56cu;
    // NOP
    // 0x2ab570: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ab570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ab574: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB574u;
    {
        const bool branch_taken_0x2ab574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab574) {
            ctx->pc = 0x2AB598u;
            goto label_2ab598;
        }
    }
    ctx->pc = 0x2AB57Cu;
label_2ab57c:
    // 0x2ab57c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ab57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ab580: 0x31e42  srl         $v1, $v1, 25
    ctx->pc = 0x2ab580u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x2ab584: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ab584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ab588: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ab588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab58c: 0x0  nop
    ctx->pc = 0x2ab58cu;
    // NOP
    // 0x2ab590: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ab590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2ab594: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2ab594u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ab598:
    // 0x2ab598: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2AB598u;
    SET_GPR_U32(ctx, 31, 0x2AB5A0u);
    ctx->pc = 0x2AB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB598u;
    // 0x2ab59c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2AB598u, 0x2AB5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB5A0u;
label_2ab5a0:
    // 0x2ab5a0: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2ab5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2ab5a4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ab5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ab5a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ab5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ab5ac: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x2ab5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x2ab5b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ab5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ab5b4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2ab5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2ab5b8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2ab5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2ab5bc:
    // 0x2ab5bc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2ab5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ab5c0: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x2ab5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
    // 0x2ab5c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ab5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab5c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ab5c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab5cc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2ab5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2ab5d0: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2ab5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ab5d4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2ab5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ab5d8: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2ab5d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ab5dc: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2ab5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ab5e0: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x2ab5e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ab5e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ab5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ab5e8:
    // 0x2ab5e8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2ab5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ab5ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ab5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ab5f0: 0x0  nop
    ctx->pc = 0x2ab5f0u;
    // NOP
    // 0x2ab5f4: 0x0  nop
    ctx->pc = 0x2ab5f4u;
    // NOP
    // 0x2ab5f8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AB5F8u;
    {
        const bool branch_taken_0x2ab5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AB5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB5F8u;
        // 0x2ab5fc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab5f8) {
            ctx->pc = 0x2AB5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab5e8;
        }
    }
    ctx->pc = 0x2AB600u;
    // 0x2ab600: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2ab600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2ab604: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2ab604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2ab608: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ab608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab60c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ab60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ab610: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ab614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab618: 0x92230089  lbu         $v1, 0x89($s1)
    ctx->pc = 0x2ab618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 137)));
    // 0x2ab61c: 0x46005086  mov.s       $f2, $f10
    ctx->pc = 0x2ab61cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[10]);
    // 0x2ab620: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2ab620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2ab624: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2AB624u;
    {
        const bool branch_taken_0x2ab624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB624u;
        // 0x2ab628: 0x46005b06  mov.s       $f12, $f11 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab624) {
            ctx->pc = 0x2AB674u;
            goto label_2ab674;
        }
    }
    ctx->pc = 0x2AB62Cu;
    // 0x2ab62c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2ab62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ab630: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB630u;
    {
        const bool branch_taken_0x2ab630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB630u;
        // 0x2ab634: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab630) {
            ctx->pc = 0x2AB648u;
            goto label_2ab648;
        }
    }
    ctx->pc = 0x2AB638u;
    // 0x2ab638: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AB638u;
    {
        const bool branch_taken_0x2ab638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ab638) {
            ctx->pc = 0x2AB660u;
            goto label_2ab660;
        }
    }
    ctx->pc = 0x2AB640u;
    // 0x2ab640: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2AB640u;
    {
        const bool branch_taken_0x2ab640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab640) {
            ctx->pc = 0x2AB6C0u;
            goto label_2ab6c0;
        }
    }
    ctx->pc = 0x2AB648u;
label_2ab648:
    // 0x2ab648: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AB648u;
    {
        const bool branch_taken_0x2ab648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB648u;
        // 0x2ab64c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab648) {
            ctx->pc = 0x2AB690u;
            goto label_2ab690;
        }
    }
    ctx->pc = 0x2AB650u;
    // 0x2ab650: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AB650u;
    {
        const bool branch_taken_0x2ab650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ab650) {
            ctx->pc = 0x2AB6ACu;
            goto label_2ab6ac;
        }
    }
    ctx->pc = 0x2AB658u;
    // 0x2ab658: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2AB658u;
    {
        const bool branch_taken_0x2ab658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab658) {
            ctx->pc = 0x2AB6C0u;
            goto label_2ab6c0;
        }
    }
    ctx->pc = 0x2AB660u;
label_2ab660:
    // 0x2ab660: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ab664: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2ab664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2ab668: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x2ab668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab66c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2AB66Cu;
    {
        const bool branch_taken_0x2ab66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB66Cu;
        // 0x2ab670: 0x46005086  mov.s       $f2, $f10 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[10]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab66c) {
            ctx->pc = 0x2AB6BCu;
            goto label_2ab6bc;
        }
    }
    ctx->pc = 0x2AB674u;
label_2ab674:
    // 0x2ab674: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x2ab674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab67c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab680: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ab680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ab684: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2ab684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2ab688: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AB688u;
    {
        const bool branch_taken_0x2ab688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB688u;
        // 0x2ab68c: 0x46005b06  mov.s       $f12, $f11 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab688) {
            ctx->pc = 0x2AB6C0u;
            goto label_2ab6c0;
        }
    }
    ctx->pc = 0x2AB690u;
label_2ab690:
    // 0x2ab690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ab690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab694: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2ab694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2ab698: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab69c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab6a0: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab6a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AB6A4u;
    {
        const bool branch_taken_0x2ab6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6A4u;
        // 0x2ab6a8: 0x46006286  mov.s       $f10, $f12 (Delay Slot)
        ctx->f[10] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6a4) {
            ctx->pc = 0x2AB6C0u;
            goto label_2ab6c0;
        }
    }
    ctx->pc = 0x2AB6ACu;
label_2ab6ac:
    // 0x2ab6ac: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x2ab6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2ab6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab6b4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2ab6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2ab6b8: 0x46005086  mov.s       $f2, $f10
    ctx->pc = 0x2ab6b8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[10]);
label_2ab6bc:
    // 0x2ab6bc: 0x46005b06  mov.s       $f12, $f11
    ctx->pc = 0x2ab6bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[11]);
label_2ab6c0:
    // 0x2ab6c0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2ab6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ab6c4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2ab6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ab6c8: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2ab6c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2ab6cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ab6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ab6d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ab6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ab6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab6d8: 0x2542d880  addiu       $v0, $t2, -0x2780
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957184));
    // 0x2ab6dc: 0x0  nop
    ctx->pc = 0x2ab6dcu;
    // NOP
label_2ab6e0:
    // 0x2ab6e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ab6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab6e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ab6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ab6e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ab6ec: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2ab6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2ab6f0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AB6F0u;
    {
        const bool branch_taken_0x2ab6f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6F0u;
        // 0x2ab6f4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6f0) {
            ctx->pc = 0x2AB6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab6e0;
        }
    }
    ctx->pc = 0x2AB6F8u;
    // 0x2ab6f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ab6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ab6fc: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2ab6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ab700: 0x2444d880  addiu       $a0, $v0, -0x2780
    ctx->pc = 0x2ab700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x2ab704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2ab704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ab708: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ab708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab70c: 0x0  nop
    ctx->pc = 0x2ab70cu;
    // NOP
label_2ab710:
    // 0x2ab710: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2ab710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ab718: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2ab718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2ab71c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ab71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ab720: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AB720u;
    {
        const bool branch_taken_0x2ab720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2AB724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB720u;
        // 0x2ab724: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab720) {
            ctx->pc = 0x2AB710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab710;
        }
    }
    ctx->pc = 0x2AB728u;
    // 0x2ab728: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2ab728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab72c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2ab72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ab730: 0xc6260068  lwc1        $f6, 0x68($s1)
    ctx->pc = 0x2ab730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ab734: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ab734u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab738: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x2ab738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab73c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x2ab73cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2ab740: 0xc625006c  lwc1        $f5, 0x6C($s1)
    ctx->pc = 0x2ab740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ab744: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x2ab744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x2ab748: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2ab748u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2ab74c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ab74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ab750: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ab750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ab754: 0xe7a60160  swc1        $f6, 0x160($sp)
    ctx->pc = 0x2ab754u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2ab758: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2ab758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2ab75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ab75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab760: 0x46002506  mov.s       $f20, $f4
    ctx->pc = 0x2ab760u;
    ctx->f[20] = FPU_MOV_S(ctx->f[4]);
    // 0x2ab764: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x2ab764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab768: 0xe7a50164  swc1        $f5, 0x164($sp)
    ctx->pc = 0x2ab768u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2ab76c: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x2ab76cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2ab770: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ab770u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ab774: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2ab774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab778: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2ab778u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x2ab77c: 0xc6870040  lwc1        $f7, 0x40($s4)
    ctx->pc = 0x2ab77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2ab780: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ab780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ab784: 0xc6880030  lwc1        $f8, 0x30($s4)
    ctx->pc = 0x2ab784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2ab788: 0xe7a50164  swc1        $f5, 0x164($sp)
    ctx->pc = 0x2ab788u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2ab78c: 0xe7a60160  swc1        $f6, 0x160($sp)
    ctx->pc = 0x2ab78cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2ab790: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2ab790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ab794: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x2ab794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x2ab798: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x2ab79c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab7a0: 0xc6890034  lwc1        $f9, 0x34($s4)
    ctx->pc = 0x2ab7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2ab7a4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ab7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ab7a8: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x2ab7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab7ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2ab7acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2ab7b0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x2ab7b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x2ab7b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ab7b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2ab7b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ab7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ab7bc: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x2ab7bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2ab7c0: 0xe7a60160  swc1        $f6, 0x160($sp)
    ctx->pc = 0x2ab7c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2ab7c4: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2ab7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab7c8: 0xe7a50164  swc1        $f5, 0x164($sp)
    ctx->pc = 0x2ab7c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2ab7cc: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2ab7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2ab7d0: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x2ab7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x2ab7d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ab7d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ab7d8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2ab7d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2ab7dc: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2ab7dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2ab7e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2ab7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2ab7e4: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x2ab7e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2ab7e8: 0xe7a50164  swc1        $f5, 0x164($sp)
    ctx->pc = 0x2ab7e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2ab7ec: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2ab7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab7f0: 0xe7a60160  swc1        $f6, 0x160($sp)
    ctx->pc = 0x2ab7f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2ab7f4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2ab7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2ab7f8: 0xafa00168  sw          $zero, 0x168($sp)
    ctx->pc = 0x2ab7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 0));
    // 0x2ab7fc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2ab7fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2ab800: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2ab800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2ab804: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2ab804u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2ab808: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2ab808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ab80c: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x2ab80cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2ab810: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2ab810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab814: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2ab814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab818: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x2ab818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x2ab81c: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x2ab81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ab820: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2ab820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab824: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2ab824u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ab828: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2ab828u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2ab82c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x2ab82cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2ab830: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ab830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ab834: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2ab834u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ab838: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2ab838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab83c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x2ab83cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x2ab840: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2ab840u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x2ab844: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2ab844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2ab848: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ab848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ab84c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2ab84cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2ab850: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x2ab850u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ab854: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x2ab854u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ab858: 0xe6c4000c  swc1        $f4, 0xC($s6)
    ctx->pc = 0x2ab858u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x2ab85c: 0xe4e4000c  swc1        $f4, 0xC($a3)
    ctx->pc = 0x2ab85cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x2ab860: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2ab860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab864: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2ab864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab868: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ab868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab86c: 0x8ee5aff0  lw          $a1, -0x5010($s7)
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294946800)));
    // 0x2ab870: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x2ab870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ab874: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2ab874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2ab878: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x2ab878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2ab87c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2ab87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2ab880: 0xe504000c  swc1        $f4, 0xC($t0)
    ctx->pc = 0x2ab880u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x2ab884: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2ab884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab888: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ab888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab88c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2ab88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab890: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ab890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ab894: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2ab894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ab898: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2ab898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ab89c: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x2AB89Cu;
    SET_GPR_U32(ctx, 31, 0x2AB8A4u);
    ctx->pc = 0x2AB8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB89Cu;
    // 0x2ab8a0: 0xe524000c  swc1        $f4, 0xC($t1) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x2AB89Cu, 0x2AB8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8A4u;
label_2ab8a4:
    // 0x2ab8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ab8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8ac: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2ab8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x2ab8b0: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2ab8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2ab8b4: 0xc051d5a  jal         func_147568
    ctx->pc = 0x2AB8B4u;
    SET_GPR_U32(ctx, 31, 0x2AB8BCu);
    ctx->pc = 0x2AB8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8B4u;
    // 0x2ab8b8: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x2AB8B4u, 0x2AB8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8BCu;
label_2ab8bc:
    // 0x2ab8bc: 0x0  nop
    ctx->pc = 0x2ab8bcu;
    // NOP
label_2ab8c0:
    // 0x2ab8c0: 0x138100  sll         $s0, $s3, 4
    ctx->pc = 0x2ab8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2ab8c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2ab8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ab8c8: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2ab8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2ab8cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ab8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8d0: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2ab8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2ab8d4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2AB8D4u;
    SET_GPR_U32(ctx, 31, 0x2AB8DCu);
    ctx->pc = 0x2AB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8D4u;
    // 0x2ab8d8: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2AB8D4u, 0x2AB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8DCu;
label_2ab8dc:
    // 0x2ab8dc: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2ab8e0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2ab8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ab8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8e8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2ab8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2ab8ec: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2AB8ECu;
    SET_GPR_U32(ctx, 31, 0x2AB8F4u);
    ctx->pc = 0x2AB8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB8ECu;
    // 0x2ab8f0: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2AB8ECu, 0x2AB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB8F4u;
label_2ab8f4:
    // 0x2ab8f4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x2ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ab8f8: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x2ab8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2ab8fc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2ab8fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ab900: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x2ab900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ab904: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2AB904u;
    {
        const bool branch_taken_0x2ab904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB904u;
        // 0x2ab908: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab904) {
            ctx->pc = 0x2AB8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab8c0;
        }
    }
    ctx->pc = 0x2AB90Cu;
    // 0x2ab90c: 0x86830044  lh          $v1, 0x44($s4)
    ctx->pc = 0x2ab90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x2ab910: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ab914: 0xc6230078  lwc1        $f3, 0x78($s1)
    ctx->pc = 0x2ab914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ab918: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ab918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab91c: 0xc622007c  lwc1        $f2, 0x7C($s1)
    ctx->pc = 0x2ab91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ab920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab924: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x2ab924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab928: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2ab928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2ab92c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x2ab92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab930: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x2ab930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab934: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2ab934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ab938: 0x8fa70170  lw          $a3, 0x170($sp)
    ctx->pc = 0x2ab938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ab93c: 0x8faa0174  lw          $t2, 0x174($sp)
    ctx->pc = 0x2ab93cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x2ab940: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2ab944: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2ab944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ab948: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x2ab948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ab94c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2ab94cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ab950: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x2ab950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2ab954: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2AB954u;
    SET_GPR_U32(ctx, 31, 0x2AB95Cu);
    ctx->pc = 0x2AB958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB954u;
    // 0x2ab958: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2AB954u, 0x2AB95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB95Cu;
label_2ab95c:
    // 0x2ab95c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ab95cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab960: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB960u;
    {
        const bool branch_taken_0x2ab960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB960u;
        // 0x2ab964: 0x7bb00210  lq          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab960) {
            ctx->pc = 0x2AB974u;
            goto label_2ab974;
        }
    }
    ctx->pc = 0x2AB968u;
    // 0x2ab968: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2ab96c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ab96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ab970: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x2ab970u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_2ab974:
    // 0x2ab974: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x2ab974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2ab978: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x2ab978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2ab97c: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x2ab97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2ab980: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x2ab980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2ab984: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x2ab984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2ab988: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x2ab988u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ab98c: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x2ab98cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ab990: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x2ab990u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ab994: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2ab994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ab998: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x2ab998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ab99c: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x2ab99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ab9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9A0u;
        // 0x2ab9a4: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB9A8u;
}
