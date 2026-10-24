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

// Function: func_00107360
// Address: 0x107360 - 0x107c68
void func_00107360_0x107360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00107360_0x107360");
#endif

    switch (ctx->pc) {
        case 0x10749cu: goto label_10749c;
        case 0x107598u: goto label_107598;
        case 0x107748u: goto label_107748;
        case 0x107838u: goto label_107838;
        case 0x107870u: goto label_107870;
        case 0x107988u: goto label_107988;
        case 0x107a9cu: goto label_107a9c;
        case 0x107b74u: goto label_107b74;
        case 0x107bb4u: goto label_107bb4;
        default: break;
    }

    ctx->pc = 0x107360u;

    // 0x107360: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x107360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x107364: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x107364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x107368: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x107368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x10736c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10736cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107370: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x107370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x107374: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x107374u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107378: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x107378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x10737c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x10737cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107380: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x107380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x107384: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x107384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x107388: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x107388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x10738c: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x10738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x107390: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x107390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x107394: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x107394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x107398: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x107398u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x10739c: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x10739cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1073a0: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1073a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1073a4: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1073a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1073a8: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1073a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1073ac: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1073acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1073b0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1073b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1073b4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1073b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1073b8: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1073b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1073bc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1073bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1073c0: 0x52000218  beql        $s0, $zero, . + 4 + (0x218 << 2)
    ctx->pc = 0x1073C0u;
    {
        const bool branch_taken_0x1073c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1073c0) {
            ctx->pc = 0x1073C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1073C0u;
            // 0x1073c4: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C24u;
            goto label_107c24;
        }
    }
    ctx->pc = 0x1073C8u;
    // 0x1073c8: 0x13b60007  beq         $sp, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1073C8u;
    {
        const bool branch_taken_0x1073c8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 22));
        ctx->pc = 0x1073CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073C8u;
        // 0x1073cc: 0x27be0010  addiu       $fp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073c8) {
            ctx->pc = 0x1073E8u;
            goto label_1073e8;
        }
    }
    ctx->pc = 0x1073D0u;
    // 0x1073d0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1073d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1073d4: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x1073d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1073d8: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x1073d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1073dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1073dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1073e0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1073e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1073e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1073e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1073e8:
    // 0x1073e8: 0x13d70007  beq         $fp, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1073E8u;
    {
        const bool branch_taken_0x1073e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 23));
        ctx->pc = 0x1073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073E8u;
        // 0x1073ec: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1073e8) {
            ctx->pc = 0x107408u;
            goto label_107408;
        }
    }
    ctx->pc = 0x1073F0u;
    // 0x1073f0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x1073f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1073f4: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x1073f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1073f8: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x1073f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1073fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1073fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x107400: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x107400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x107404: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x107404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_107408:
    // 0x107408: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x107408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10740c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x10740cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x107410: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x107410u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107414: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x107414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x107418: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x107418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10741c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10741cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107420: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x107420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107424: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x107424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107428: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x107428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10742c: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x10742cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107430: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x107430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x107434: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x107434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107438: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x107438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10743c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x10743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107440: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x107440u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x107444: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x107444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x107448: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x107448u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x10744c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x10744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x107450: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x107450u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107454: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x107454u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x107458: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x107458u;
    {
        const bool branch_taken_0x107458 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107458u;
        // 0x10745c: 0xe7a40028  swc1        $f4, 0x28($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107458) {
            ctx->pc = 0x107490u;
            goto label_107490;
        }
    }
    ctx->pc = 0x107460u;
    // 0x107460: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x107460u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107464: 0x0  nop
    ctx->pc = 0x107464u;
    // NOP
    // 0x107468: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x107468u;
    {
        const bool branch_taken_0x107468 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107468) {
            ctx->pc = 0x107490u;
            goto label_107490;
        }
    }
    ctx->pc = 0x107470u;
    // 0x107470: 0x46052032  c.eq.s      $f4, $f5
    ctx->pc = 0x107470u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107474: 0x0  nop
    ctx->pc = 0x107474u;
    // NOP
    // 0x107478: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x107478u;
    {
        const bool branch_taken_0x107478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107478) {
            ctx->pc = 0x107490u;
            goto label_107490;
        }
    }
    ctx->pc = 0x107480u;
    // 0x107480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x107484: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x107484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x107488: 0x0  nop
    ctx->pc = 0x107488u;
    // NOP
    // 0x10748c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x10748cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_107490:
    // 0x107490: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x107490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107494: 0xc04078a  jal         func_101E28
    ctx->pc = 0x107494u;
    SET_GPR_U32(ctx, 31, 0x10749Cu);
    ctx->pc = 0x107498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107494u;
    // 0x107498: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x107494u, 0x10749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10749Cu;
label_10749c:
    // 0x10749c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x10749cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1074a0: 0x0  nop
    ctx->pc = 0x1074a0u;
    // NOP
    // 0x1074a4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1074a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1074a8: 0x0  nop
    ctx->pc = 0x1074a8u;
    // NOP
    // 0x1074ac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1074ACu;
    {
        const bool branch_taken_0x1074ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1074B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074ACu;
        // 0x1074b0: 0xc7a40020  lwc1        $f4, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074ac) {
            ctx->pc = 0x1074F0u;
            goto label_1074f0;
        }
    }
    ctx->pc = 0x1074B4u;
    // 0x1074b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1074b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1074b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1074b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1074bc: 0x0  nop
    ctx->pc = 0x1074bcu;
    // NOP
    // 0x1074c0: 0x0  nop
    ctx->pc = 0x1074c0u;
    // NOP
    // 0x1074c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1074c4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1074c8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1074c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1074cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1074ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1074d0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1074d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1074d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1074d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1074d8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1074d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1074dc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1074dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1074e0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1074e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1074e4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x1074e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1074e8: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x1074e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1074ec: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x1074ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1074f0:
    // 0x1074f0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1074f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1074f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1074f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1074f8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1074f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1074fc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1074fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107500: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x107500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107504: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x107504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x107508: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x107508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10750c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10750cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x107510: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x107510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x107514: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x107514u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x107518: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x107518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10751c: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x10751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107520: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x107520u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x107524: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x107524u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x107528: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x107528u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x10752c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x10752cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x107530: 0x46020dc0  add.s       $f23, $f1, $f2
    ctx->pc = 0x107530u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x107534: 0x0  nop
    ctx->pc = 0x107534u;
    // NOP
    // 0x107538: 0x0  nop
    ctx->pc = 0x107538u;
    // NOP
    // 0x10753c: 0x46170004  c1          0x170004
    ctx->pc = 0x10753cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[23]);
    // 0x107540: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x107540u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107544: 0x0  nop
    ctx->pc = 0x107544u;
    // NOP
    // 0x107548: 0x450301b6  bc1tl       . + 4 + (0x1B6 << 2)
    ctx->pc = 0x107548u;
    {
        const bool branch_taken_0x107548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107548) {
            ctx->pc = 0x10754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107548u;
            // 0x10754c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107C24u;
            goto label_107c24;
        }
    }
    ctx->pc = 0x107550u;
    // 0x107550: 0x8e150000  lw          $s5, 0x0($s0)
    ctx->pc = 0x107550u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107554: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x107554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x107558: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x107558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10755c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10755cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x107560: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107564: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x107564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x107568: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x107568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x10756c: 0x0  nop
    ctx->pc = 0x10756cu;
    // NOP
    // 0x107570: 0x0  nop
    ctx->pc = 0x107570u;
    // NOP
    // 0x107574: 0x46171643  div.s       $f25, $f2, $f23
    ctx->pc = 0x107574u;
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[23]);
    // 0x107578: 0x12a2019b  beq         $s5, $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x107578u;
    {
        const bool branch_taken_0x107578 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x10757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107578u;
        // 0x10757c: 0x2471ff40  addiu       $s1, $v1, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107578) {
            ctx->pc = 0x107BE8u;
            goto label_107be8;
        }
    }
    ctx->pc = 0x107580u;
    // 0x107580: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x107580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x107584: 0x46003606  mov.s       $f24, $f6
    ctx->pc = 0x107584u;
    ctx->f[24] = FPU_MOV_S(ctx->f[6]);
    // 0x107588: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x107588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x10758c: 0x46001586  mov.s       $f22, $f2
    ctx->pc = 0x10758cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[2]);
    // 0x107590: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x107590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x107594: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x107594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_107598:
    // 0x107598: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x107598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10759c: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x10759Cu;
    {
        const bool branch_taken_0x10759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10759c) {
            ctx->pc = 0x107808u;
            goto label_107808;
        }
    }
    ctx->pc = 0x1075A4u;
    // 0x1075a4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1075a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1075a8: 0xc6260090  lwc1        $f6, 0x90($s1)
    ctx->pc = 0x1075a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1075ac: 0xc6240094  lwc1        $f4, 0x94($s1)
    ctx->pc = 0x1075acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1075b0: 0xc7a70000  lwc1        $f7, 0x0($sp)
    ctx->pc = 0x1075b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1075b4: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x1075b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1075b8: 0x46073081  sub.s       $f2, $f6, $f7
    ctx->pc = 0x1075b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
    // 0x1075bc: 0xc6250098  lwc1        $f5, 0x98($s1)
    ctx->pc = 0x1075bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1075c0: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x1075c0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x1075c4: 0xc7ab0008  lwc1        $f11, 0x8($sp)
    ctx->pc = 0x1075c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1075c8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1075c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1075cc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1075ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1075d0: 0x460b2941  sub.s       $f5, $f5, $f11
    ctx->pc = 0x1075d0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
    // 0x1075d4: 0x46001242  mul.s       $f9, $f2, $f0
    ctx->pc = 0x1075d4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1075d8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1075d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1075dc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1075dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1075e0: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x1075e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1075e4: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x1075e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x1075e8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1075e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1075ec: 0x46000282  mul.s       $f10, $f0, $f0
    ctx->pc = 0x1075ecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1075f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1075f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1075f4: 0x46044a40  add.s       $f9, $f9, $f4
    ctx->pc = 0x1075f4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[4]);
    // 0x1075f8: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1075f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1075fc: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x1075fcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x107600: 0x46194802  mul.s       $f0, $f9, $f25
    ctx->pc = 0x107600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[25]);
    // 0x107604: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x107604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x107608: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x107608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10760c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x10760cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x107610: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x107610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x107614: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x107614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x107618: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x107618u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x10761c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x10761cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x107620: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x107620u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x107624: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x107624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x107628: 0xc6200094  lwc1        $f0, 0x94($s1)
    ctx->pc = 0x107628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10762c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10762cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x107630: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x107630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x107634: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x107634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x107638: 0xc6200098  lwc1        $f0, 0x98($s1)
    ctx->pc = 0x107638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10763c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x10763cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x107640: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x107640u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x107644: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x107644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x107648: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x107648u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x10764c: 0x46145036  c.le.s      $f10, $f20
    ctx->pc = 0x10764cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107650: 0x0  nop
    ctx->pc = 0x107650u;
    // NOP
    // 0x107654: 0x4501015f  bc1t        . + 4 + (0x15F << 2)
    ctx->pc = 0x107654u;
    {
        const bool branch_taken_0x107654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x107658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107654u;
        // 0x107658: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107654) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x10765Cu;
    // 0x10765c: 0xc6250090  lwc1        $f5, 0x90($s1)
    ctx->pc = 0x10765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x107660: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x107660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107664: 0x46072801  sub.s       $f0, $f5, $f7
    ctx->pc = 0x107664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x107668: 0xc6220098  lwc1        $f2, 0x98($s1)
    ctx->pc = 0x107668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10766c: 0x460808c1  sub.s       $f3, $f1, $f8
    ctx->pc = 0x10766cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x107670: 0xc7a70010  lwc1        $f7, 0x10($sp)
    ctx->pc = 0x107670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x107674: 0x460b1101  sub.s       $f4, $f2, $f11
    ctx->pc = 0x107674u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x107678: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x107678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x10767c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10767cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x107680: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x107680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x107684: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x107684u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x107688: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x107688u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x10768c: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x10768cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x107690: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x107690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x107694: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x107694u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x107698: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x107698u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
    // 0x10769c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x10769cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1076a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1076a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1076a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1076a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1076a8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1076a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1076ac: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1076acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1076b0: 0x46005034  c.lt.s      $f10, $f0
    ctx->pc = 0x1076b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1076b4: 0x0  nop
    ctx->pc = 0x1076b4u;
    // NOP
    // 0x1076b8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1076B8u;
    {
        const bool branch_taken_0x1076b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1076BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076B8u;
        // 0x1076bc: 0x46022940  add.s       $f5, $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076b8) {
            ctx->pc = 0x1076F0u;
            goto label_1076f0;
        }
    }
    ctx->pc = 0x1076C0u;
    // 0x1076c0: 0x46055034  c.lt.s      $f10, $f5
    ctx->pc = 0x1076c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[10], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1076c4: 0x0  nop
    ctx->pc = 0x1076c4u;
    // NOP
    // 0x1076c8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1076C8u;
    {
        const bool branch_taken_0x1076c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1076c8) {
            ctx->pc = 0x1076F0u;
            goto label_1076f0;
        }
    }
    ctx->pc = 0x1076D0u;
    // 0x1076d0: 0x46184834  c.lt.s      $f9, $f24
    ctx->pc = 0x1076d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1076d4: 0x0  nop
    ctx->pc = 0x1076d4u;
    // NOP
    // 0x1076d8: 0x4501013e  bc1t        . + 4 + (0x13E << 2)
    ctx->pc = 0x1076D8u;
    {
        const bool branch_taken_0x1076d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1076d8) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x1076E0u;
    // 0x1076e0: 0x4609b836  c.le.s      $f23, $f9
    ctx->pc = 0x1076e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1076e4: 0x0  nop
    ctx->pc = 0x1076e4u;
    // NOP
    // 0x1076e8: 0x4501013a  bc1t        . + 4 + (0x13A << 2)
    ctx->pc = 0x1076E8u;
    {
        const bool branch_taken_0x1076e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1076e8) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x1076F0u;
label_1076f0:
    // 0x1076f0: 0x0  nop
    ctx->pc = 0x1076f0u;
    // NOP
    // 0x1076f4: 0x0  nop
    ctx->pc = 0x1076f4u;
    // NOP
    // 0x1076f8: 0x46140004  c1          0x140004
    ctx->pc = 0x1076f8u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x1076fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1076fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x107700: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x107700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107704: 0xc62200b0  lwc1        $f2, 0xB0($s1)
    ctx->pc = 0x107704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107708: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x107708u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10770c: 0x0  nop
    ctx->pc = 0x10770cu;
    // NOP
    // 0x107710: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x107710u;
    {
        const bool branch_taken_0x107710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107710u;
        // 0x107714: 0x46001501  sub.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107710) {
            ctx->pc = 0x10773Cu;
            goto label_10773c;
        }
    }
    ctx->pc = 0x107718u;
    // 0x107718: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x107718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10771c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x10771cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107720: 0x0  nop
    ctx->pc = 0x107720u;
    // NOP
    // 0x107724: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x107724u;
    {
        const bool branch_taken_0x107724 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107724u;
        // 0x107728: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107724) {
            ctx->pc = 0x10773Cu;
            goto label_10773c;
        }
    }
    ctx->pc = 0x10772Cu;
    // 0x10772c: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x10772cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107730: 0x0  nop
    ctx->pc = 0x107730u;
    // NOP
    // 0x107734: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x107734u;
    {
        const bool branch_taken_0x107734 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107734) {
            ctx->pc = 0x107738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107734u;
            // 0x107738: 0xe7b60044  swc1        $f22, 0x44($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10773Cu;
            goto label_10773c;
        }
    }
    ctx->pc = 0x10773Cu;
label_10773c:
    // 0x10773c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x10773cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107740: 0xc04078a  jal         func_101E28
    ctx->pc = 0x107740u;
    SET_GPR_U32(ctx, 31, 0x107748u);
    ctx->pc = 0x107744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107740u;
    // 0x107744: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x107740u, 0x107748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107748u;
label_107748:
    // 0x107748: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x107748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10774c: 0x0  nop
    ctx->pc = 0x10774cu;
    // NOP
    // 0x107750: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x107750u;
    {
        const bool branch_taken_0x107750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107750u;
        // 0x107754: 0xc7a30040  lwc1        $f3, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107750) {
            ctx->pc = 0x10778Cu;
            goto label_10778c;
        }
    }
    ctx->pc = 0x107758u;
    // 0x107758: 0x0  nop
    ctx->pc = 0x107758u;
    // NOP
    // 0x10775c: 0x0  nop
    ctx->pc = 0x10775cu;
    // NOP
    // 0x107760: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x107760u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x107764: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x107764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107768: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x107768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10776c: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x10776cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107770: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x107770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x107774: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x107774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x107778: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x107778u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x10777c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x10777cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x107780: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x107780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x107784: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x107784u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x107788: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x107788u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_10778c:
    // 0x10778c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x10778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x107790: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x107790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107794: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x107794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107798: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x107798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x10779c: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x10779cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1077a0: 0xc7a80058  lwc1        $f8, 0x58($sp)
    ctx->pc = 0x1077a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1077a4: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x1077a4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x1077a8: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x1077a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x1077ac: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1077acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1077b0: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x1077b0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x1077b4: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x1077b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1077b8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x1077b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1077bc: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x1077bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x1077c0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1077c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1077c4: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1077c4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1077c8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1077c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1077cc: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x1077ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x1077d0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1077d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1077d4: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x1077d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x1077d8: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1077d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1077dc: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1077dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1077e0: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1077e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1077e4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x1077e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1077e8: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x1077e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1077ec: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1077ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1077f0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1077f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1077f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1077f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1077f8: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x1077f8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1077fc: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x1077fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x107800: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x107800u;
    {
        const bool branch_taken_0x107800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107800u;
        // 0x107804: 0xe7a80048  swc1        $f8, 0x48($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107800) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107808u;
label_107808:
    // 0x107808: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x107808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10780c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x10780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107810: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x107810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107814: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x107814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107818: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x107818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10781c: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x10781cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x107820: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x107820u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107824: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x107824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x107828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10782c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107830: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x107830u;
    SET_GPR_U32(ctx, 31, 0x107838u);
    ctx->pc = 0x107834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107830u;
    // 0x107834: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x107830u, 0x107838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107838u;
label_107838:
    // 0x107838: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x107838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10783c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x10783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107840: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x107840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107844: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x107844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107848: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x107848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10784c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x10784cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x107850: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x107850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x107854: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x107854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x107858: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x107858u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x10785c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x10785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x107864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107868: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x107868u;
    SET_GPR_U32(ctx, 31, 0x107870u);
    ctx->pc = 0x10786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107868u;
    // 0x10786c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x107868u, 0x107870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107870u;
label_107870:
    // 0x107870: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x107870u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x107874: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x107874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107878: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x107878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10787c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x10787cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107880: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x107880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x107884: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x107884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x107888: 0x46000282  mul.s       $f10, $f0, $f0
    ctx->pc = 0x107888u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x10788c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x10788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107890: 0x46052a42  mul.s       $f9, $f5, $f5
    ctx->pc = 0x107890u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x107894: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x107894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x107898: 0x460600c1  sub.s       $f3, $f0, $f6
    ctx->pc = 0x107898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x10789c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x10789cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1078a0: 0x46012881  sub.s       $f2, $f5, $f1
    ctx->pc = 0x1078a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1078a4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1078a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1078a8: 0x46063202  mul.s       $f8, $f6, $f6
    ctx->pc = 0x1078a8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1078ac: 0x46043901  sub.s       $f4, $f7, $f4
    ctx->pc = 0x1078acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
    // 0x1078b0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x1078b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1078b4: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x1078b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1078b8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1078b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1078bc: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1078bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1078c0: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x1078c0u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x1078c4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x1078c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1078c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1078c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1078cc: 0xe7a70054  swc1        $f7, 0x54($sp)
    ctx->pc = 0x1078ccu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1078d0: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x1078d0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x1078d4: 0xe7a50058  swc1        $f5, 0x58($sp)
    ctx->pc = 0x1078d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1078d8: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x1078d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x1078dc: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x1078dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1078e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1078e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1078e4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1078e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1078e8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1078e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1078ec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1078ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1078f0: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x1078f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1078f4: 0x46095280  add.s       $f10, $f10, $f9
    ctx->pc = 0x1078f4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
    // 0x1078f8: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1078f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1078fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1078fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x107900: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x107900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107904: 0x0  nop
    ctx->pc = 0x107904u;
    // NOP
    // 0x107908: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x107908u;
    {
        const bool branch_taken_0x107908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107908u;
        // 0x10790c: 0x460218c0  add.s       $f3, $f3, $f2 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107908) {
            ctx->pc = 0x107940u;
            goto label_107940;
        }
    }
    ctx->pc = 0x107910u;
    // 0x107910: 0x460a0034  c.lt.s      $f0, $f10
    ctx->pc = 0x107910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107914: 0x0  nop
    ctx->pc = 0x107914u;
    // NOP
    // 0x107918: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x107918u;
    {
        const bool branch_taken_0x107918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x107918) {
            ctx->pc = 0x10791Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107918u;
            // 0x10791c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107944u;
            goto label_107944;
        }
    }
    ctx->pc = 0x107920u;
    // 0x107920: 0x46183034  c.lt.s      $f6, $f24
    ctx->pc = 0x107920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107924: 0x0  nop
    ctx->pc = 0x107924u;
    // NOP
    // 0x107928: 0x450100aa  bc1t        . + 4 + (0xAA << 2)
    ctx->pc = 0x107928u;
    {
        const bool branch_taken_0x107928 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107928) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107930u;
    // 0x107930: 0x46061836  c.le.s      $f3, $f6
    ctx->pc = 0x107930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107934: 0x0  nop
    ctx->pc = 0x107934u;
    // NOP
    // 0x107938: 0x450100a6  bc1t        . + 4 + (0xA6 << 2)
    ctx->pc = 0x107938u;
    {
        const bool branch_taken_0x107938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107938) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107940u;
label_107940:
    // 0x107940: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x107940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_107944:
    // 0x107944: 0x0  nop
    ctx->pc = 0x107944u;
    // NOP
    // 0x107948: 0x0  nop
    ctx->pc = 0x107948u;
    // NOP
    // 0x10794c: 0x46033503  div.s       $f20, $f6, $f3
    ctx->pc = 0x10794cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[6], ctx->f[3]);
    // 0x107950: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x107950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x107954: 0x0  nop
    ctx->pc = 0x107954u;
    // NOP
    // 0x107958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x107958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10795c: 0x0  nop
    ctx->pc = 0x10795cu;
    // NOP
    // 0x107960: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x107960u;
    {
        const bool branch_taken_0x107960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107960u;
        // 0x107964: 0xc7a00068  lwc1        $f0, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107960) {
            ctx->pc = 0x107978u;
            goto label_107978;
        }
    }
    ctx->pc = 0x107968u;
    // 0x107968: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x107968u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10796c: 0x0  nop
    ctx->pc = 0x10796cu;
    // NOP
    // 0x107970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x107970u;
    {
        const bool branch_taken_0x107970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107970) {
            ctx->pc = 0x107974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107970u;
            // 0x107974: 0xe7b60060  swc1        $f22, 0x60($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x107978u;
            goto label_107978;
        }
    }
    ctx->pc = 0x107978u;
label_107978:
    // 0x107978: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x107978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10797c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x10797cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x107980: 0xc04078a  jal         func_101E28
    ctx->pc = 0x107980u;
    SET_GPR_U32(ctx, 31, 0x107988u);
    ctx->pc = 0x107984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107980u;
    // 0x107984: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x107980u, 0x107988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107988u;
label_107988:
    // 0x107988: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x107988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10798c: 0x0  nop
    ctx->pc = 0x10798cu;
    // NOP
    // 0x107990: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x107990u;
    {
        const bool branch_taken_0x107990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107990u;
        // 0x107994: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107990) {
            ctx->pc = 0x1079CCu;
            goto label_1079cc;
        }
    }
    ctx->pc = 0x107998u;
    // 0x107998: 0x0  nop
    ctx->pc = 0x107998u;
    // NOP
    // 0x10799c: 0x0  nop
    ctx->pc = 0x10799cu;
    // NOP
    // 0x1079a0: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x1079a0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x1079a4: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x1079a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1079a8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1079a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1079ac: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1079acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1079b0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1079b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1079b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1079b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1079b8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1079b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1079bc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1079bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1079c0: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1079c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1079c4: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1079c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1079c8: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1079c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1079cc:
    // 0x1079cc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1079ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1079d0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1079d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1079d4: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x1079d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1079d8: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x1079d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1079dc: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x1079dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1079e0: 0x46144102  mul.s       $f4, $f8, $f20
    ctx->pc = 0x1079e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x1079e4: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1079e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1079e8: 0x461430c2  mul.s       $f3, $f6, $f20
    ctx->pc = 0x1079e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x1079ec: 0x46143942  mul.s       $f5, $f7, $f20
    ctx->pc = 0x1079ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x1079f0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1079f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1079f4: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x1079f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x1079f8: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1079f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1079fc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1079fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x107a00: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x107a00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x107a04: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x107a04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x107a08: 0xe7a80074  swc1        $f8, 0x74($sp)
    ctx->pc = 0x107a08u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x107a0c: 0x46152034  c.lt.s      $f4, $f21
    ctx->pc = 0x107a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107a10: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x107a10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x107a14: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x107a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x107a18: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x107a18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x107a1c: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
    ctx->pc = 0x107A1Cu;
    {
        const bool branch_taken_0x107a1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x107A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A1Cu;
        // 0x107a20: 0xe7a50088  swc1        $f5, 0x88($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a1c) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107A24u;
    // 0x107a24: 0xc62000b4  lwc1        $f0, 0xB4($s1)
    ctx->pc = 0x107a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107a28: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x107a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107a2c: 0x0  nop
    ctx->pc = 0x107a2cu;
    // NOP
    // 0x107a30: 0x45010068  bc1t        . + 4 + (0x68 << 2)
    ctx->pc = 0x107A30u;
    {
        const bool branch_taken_0x107a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107a30) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107A38u;
    // 0x107a38: 0xe7b50084  swc1        $f21, 0x84($sp)
    ctx->pc = 0x107a38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x107a3c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x107a3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x107a40: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x107a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x107a44: 0xc62400b0  lwc1        $f4, 0xB0($s1)
    ctx->pc = 0x107a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107a48: 0x46011500  add.s       $f20, $f2, $f1
    ctx->pc = 0x107a48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x107a4c: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x107a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x107a50: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x107a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107a54: 0x0  nop
    ctx->pc = 0x107a54u;
    // NOP
    // 0x107a58: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x107A58u;
    {
        const bool branch_taken_0x107a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107a58) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107A60u;
    // 0x107a60: 0x0  nop
    ctx->pc = 0x107a60u;
    // NOP
    // 0x107a64: 0x0  nop
    ctx->pc = 0x107a64u;
    // NOP
    // 0x107a68: 0x46140004  c1          0x140004
    ctx->pc = 0x107a68u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x107a6c: 0x46151832  c.eq.s      $f3, $f21
    ctx->pc = 0x107a6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107a70: 0x0  nop
    ctx->pc = 0x107a70u;
    // NOP
    // 0x107a74: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x107A74u;
    {
        const bool branch_taken_0x107a74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A74u;
        // 0x107a78: 0x46002501  sub.s       $f20, $f4, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a74) {
            ctx->pc = 0x107A8Cu;
            goto label_107a8c;
        }
    }
    ctx->pc = 0x107A7Cu;
    // 0x107a7c: 0x46152832  c.eq.s      $f5, $f21
    ctx->pc = 0x107a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107a80: 0x0  nop
    ctx->pc = 0x107a80u;
    // NOP
    // 0x107a84: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x107A84u;
    {
        const bool branch_taken_0x107a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x107a84) {
            ctx->pc = 0x107BD4u;
            goto label_107bd4;
        }
    }
    ctx->pc = 0x107A8Cu;
label_107a8c:
    // 0x107a8c: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x107a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x107a90: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x107a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x107a94: 0xc04078a  jal         func_101E28
    ctx->pc = 0x107A94u;
    SET_GPR_U32(ctx, 31, 0x107A9Cu);
    ctx->pc = 0x107A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107A94u;
    // 0x107a98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x107A94u, 0x107A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107A9Cu;
label_107a9c:
    // 0x107a9c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x107a9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107aa0: 0x0  nop
    ctx->pc = 0x107aa0u;
    // NOP
    // 0x107aa4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x107AA4u;
    {
        const bool branch_taken_0x107aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x107AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107AA4u;
        // 0x107aa8: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107aa4) {
            ctx->pc = 0x107AE0u;
            goto label_107ae0;
        }
    }
    ctx->pc = 0x107AACu;
    // 0x107aac: 0x0  nop
    ctx->pc = 0x107aacu;
    // NOP
    // 0x107ab0: 0x0  nop
    ctx->pc = 0x107ab0u;
    // NOP
    // 0x107ab4: 0x4600b083  div.s       $f2, $f22, $f0
    ctx->pc = 0x107ab4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[0]);
    // 0x107ab8: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x107ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107abc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x107abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107ac0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x107ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107ac4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x107ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x107ac8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x107ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x107acc: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x107accu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x107ad0: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x107ad0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x107ad4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x107ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x107ad8: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x107ad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x107adc: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x107adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_107ae0:
    // 0x107ae0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x107ae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107ae4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x107ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107ae8: 0xc7a60090  lwc1        $f6, 0x90($sp)
    ctx->pc = 0x107ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x107aec: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x107af0: 0xc7a70094  lwc1        $f7, 0x94($sp)
    ctx->pc = 0x107af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x107af4: 0xc7a80098  lwc1        $f8, 0x98($sp)
    ctx->pc = 0x107af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x107af8: 0x46143182  mul.s       $f6, $f6, $f20
    ctx->pc = 0x107af8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x107afc: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x107afcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
    // 0x107b00: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x107b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x107b04: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x107b04u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
    // 0x107b08: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x107b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x107b0c: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x107b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x107b10: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x107b10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x107b14: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x107b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107b18: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x107b18u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x107b1c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x107b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107b20: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x107b20u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x107b24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x107b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107b28: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x107b28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x107b2c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x107b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x107b30: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x107b30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x107b34: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x107b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x107b38: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x107b38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x107b3c: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x107b3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x107b40: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x107b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x107b44: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x107b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x107b48: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x107b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x107b4c: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x107b4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x107b50: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x107b50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x107b54: 0xe7a80088  swc1        $f8, 0x88($sp)
    ctx->pc = 0x107b54u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x107b58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x107b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x107b5c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x107b5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107b60: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x107b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107b6c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x107B6Cu;
    SET_GPR_U32(ctx, 31, 0x107B74u);
    ctx->pc = 0x107B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107B6Cu;
    // 0x107b70: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x107B6Cu, 0x107B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107B74u;
label_107b74:
    // 0x107b74: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x107b74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107b78: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x107b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107b7c: 0x13b30006  beq         $sp, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x107B7Cu;
    {
        const bool branch_taken_0x107b7c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 19));
        ctx->pc = 0x107B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107B7Cu;
        // 0x107b80: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b7c) {
            ctx->pc = 0x107B98u;
            goto label_107b98;
        }
    }
    ctx->pc = 0x107B84u;
    // 0x107b84: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x107b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107b88: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x107b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107b8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x107b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x107b90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x107b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x107b94: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x107b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_107b98:
    // 0x107b98: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107b9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x107b9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107ba0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x107ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107ba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107bac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x107BACu;
    SET_GPR_U32(ctx, 31, 0x107BB4u);
    ctx->pc = 0x107BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BACu;
    // 0x107bb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x107BACu, 0x107BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BB4u;
label_107bb4:
    // 0x107bb4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x107bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107bb8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x107bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107bbc: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x107bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107bc0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x107bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107bc4: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x107bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107bc8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x107bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x107bcc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x107bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x107bd0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x107bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_107bd4:
    // 0x107bd4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x107bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x107bd8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x107bd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x107bdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107be0: 0x56a2fe6d  bnel        $s5, $v0, . + 4 + (-0x193 << 2)
    ctx->pc = 0x107BE0u;
    {
        const bool branch_taken_0x107be0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x107be0) {
            ctx->pc = 0x107BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107BE0u;
            // 0x107be4: 0x263100c0  addiu       $s1, $s1, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107598;
        }
    }
    ctx->pc = 0x107BE8u;
label_107be8:
    // 0x107be8: 0x12dd0006  beq         $s6, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x107BE8u;
    {
        const bool branch_taken_0x107be8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 29));
        ctx->pc = 0x107BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BE8u;
        // 0x107bec: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107be8) {
            ctx->pc = 0x107C04u;
            goto label_107c04;
        }
    }
    ctx->pc = 0x107BF0u;
    // 0x107bf0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x107bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107bf4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x107bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107bf8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x107bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x107bfc: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x107bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x107c00: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x107c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_107c04:
    // 0x107c04: 0x12fe0006  beq         $s7, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x107C04u;
    {
        const bool branch_taken_0x107c04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x107C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C04u;
        // 0x107c08: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c04) {
            ctx->pc = 0x107C20u;
            goto label_107c20;
        }
    }
    ctx->pc = 0x107C0Cu;
    // 0x107c0c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x107c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x107c10: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x107c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107c14: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x107c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x107c18: 0xe6e10008  swc1        $f1, 0x8($s7)
    ctx->pc = 0x107c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x107c1c: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x107c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_107c20:
    // 0x107c20: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x107c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_107c24:
    // 0x107c24: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x107c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x107c28: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x107c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x107c2c: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x107c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x107c30: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x107c30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x107c34: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x107c34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x107c38: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x107c38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x107c3c: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x107c3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x107c40: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x107c40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x107c44: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x107c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x107c48: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x107c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x107c4c: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x107c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x107c50: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x107c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x107c54: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x107c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x107c58: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x107c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x107c5c: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x107c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107c60: 0x3e00008  jr          $ra
    ctx->pc = 0x107C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C60u;
        // 0x107c64: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C68u;
}
