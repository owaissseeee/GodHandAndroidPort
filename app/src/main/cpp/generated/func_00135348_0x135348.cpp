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

// Function: func_00135348
// Address: 0x135348 - 0x135b18
void func_00135348_0x135348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00135348_0x135348");
#endif

    switch (ctx->pc) {
        case 0x135440u: goto label_135440;
        case 0x13548cu: goto label_13548c;
        case 0x1354b8u: goto label_1354b8;
        case 0x135500u: goto label_135500;
        case 0x135578u: goto label_135578;
        case 0x1355c0u: goto label_1355c0;
        case 0x1356a4u: goto label_1356a4;
        case 0x1356ecu: goto label_1356ec;
        case 0x1356f8u: goto label_1356f8;
        case 0x1357f0u: goto label_1357f0;
        case 0x1357fcu: goto label_1357fc;
        case 0x1358f8u: goto label_1358f8;
        case 0x135904u: goto label_135904;
        default: break;
    }

    ctx->pc = 0x135348u;

    // 0x135348: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x13534c: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x13534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x135350: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x135350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x135354: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135358: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x135358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x13535c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13535cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135360: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x135360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x135364: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x135364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135368: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x135368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x13536c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135370: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x135370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135374: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x135374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x135378: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x135378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x13537c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x13537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x135380: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x135380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x135384: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x135384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x135388: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x135388u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x13538c: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x13538cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x135390: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x135390u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x135394: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x135394u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x135398: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x135398u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x13539c: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x13539cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1353a0: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1353a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1353a4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1353a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1353a8: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1353a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1353ac: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1353acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1353b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1353b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1353b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1353b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1353b8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1353bc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1353bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1353c0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1353c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1353c4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1353c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1353c8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1353c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1353cc: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1353ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1353d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1353d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1353d4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1353d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1353d8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1353d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1353dc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1353dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1353e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1353e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1353e4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1353e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1353e8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1353e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1353ec: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1353ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1353f0: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x1353f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1353f4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1353f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1353f8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1353f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1353fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1353fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135400: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x135400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x135404: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135404u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135408: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x135408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13540c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x13540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135410: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x135410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135414: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x135414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135418: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x135418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13541c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x13541cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135420: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135424: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135428: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x135428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13542c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13542cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135430: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135434: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135438: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135438u;
    SET_GPR_U32(ctx, 31, 0x135440u);
    ctx->pc = 0x13543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135438u;
    // 0x13543c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135438u, 0x135440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135440u;
label_135440:
    // 0x135440: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x135440u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x135444: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x135444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135448: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x135448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13544c: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x13544cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x135450: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135450u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135454: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135458: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x135458u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13545c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13545cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135460: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x135460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135464: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x135464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135468: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x135468u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13546c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13546cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135470: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135474: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x135474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x135478: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x135478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13547c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x13547cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135484: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135484u;
    SET_GPR_U32(ctx, 31, 0x13548Cu);
    ctx->pc = 0x135488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135484u;
    // 0x135488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135484u, 0x13548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13548Cu;
label_13548c:
    // 0x13548c: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x13548cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x135490: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x135490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135494: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x135494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x135498: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x135498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x13549c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13549cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1354a0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1354a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1354a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1354a8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1354a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1354acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354b0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1354B0u;
    SET_GPR_U32(ctx, 31, 0x1354B8u);
    ctx->pc = 0x1354B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354B0u;
    // 0x1354b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1354B0u, 0x1354B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1354B8u;
label_1354b8:
    // 0x1354b8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x1354b8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x1354bc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1354bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1354c0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1354c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1354c4: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1354c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1354c8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1354c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1354cc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1354ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354d0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1354d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1354d4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1354d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354d8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1354d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1354dc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1354dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1354e0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1354e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1354e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1354e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1354e8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1354e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354ec: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1354ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1354f0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1354f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1354f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1354f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354f8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1354F8u;
    SET_GPR_U32(ctx, 31, 0x135500u);
    ctx->pc = 0x1354FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1354F8u;
    // 0x1354fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1354F8u, 0x135500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135500u;
label_135500:
    // 0x135500: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x135500u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x135504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135508: 0x0  nop
    ctx->pc = 0x135508u;
    // NOP
    // 0x13550c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13550cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135510: 0x0  nop
    ctx->pc = 0x135510u;
    // NOP
    // 0x135514: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x135514u;
    {
        const bool branch_taken_0x135514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135514u;
        // 0x135518: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135514) {
            ctx->pc = 0x135550u;
            goto label_135550;
        }
    }
    ctx->pc = 0x13551Cu;
    // 0x13551c: 0x4600c036  c.le.s      $f24, $f0
    ctx->pc = 0x13551cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135520: 0x0  nop
    ctx->pc = 0x135520u;
    // NOP
    // 0x135524: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x135524u;
    {
        const bool branch_taken_0x135524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135524) {
            ctx->pc = 0x135550u;
            goto label_135550;
        }
    }
    ctx->pc = 0x13552Cu;
    // 0x13552c: 0x12d70163  beq         $s6, $s7, . + 4 + (0x163 << 2)
    ctx->pc = 0x13552Cu;
    {
        const bool branch_taken_0x13552c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 23));
        ctx->pc = 0x135530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13552Cu;
        // 0x135530: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13552c) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x135534u;
    // 0x135534: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x135534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135538: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x135538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x13553c: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x13553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135540: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x135540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x135544: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x135544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135548: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x135548u;
    {
        const bool branch_taken_0x135548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135548u;
        // 0x13554c: 0xe6c00008  swc1        $f0, 0x8($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135548) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x135550u;
label_135550:
    // 0x135550: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x135550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135554: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x135554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x135558: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x135558u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x13555c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13555cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135560: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135564: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x135564u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x135568: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13556c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135570: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x135570u;
    SET_GPR_U32(ctx, 31, 0x135578u);
    ctx->pc = 0x135574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135570u;
    // 0x135574: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x135570u, 0x135578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135578u;
label_135578:
    // 0x135578: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x135578u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x13557c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x13557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135580: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x135580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x135584: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x135584u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135588: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135588u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13558c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x13558cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135590: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x135590u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x135594: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135598: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x135598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13559c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x13559cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1355a0: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x1355a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1355a4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1355a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1355a8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1355a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1355ac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1355acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1355b0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1355b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1355b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1355b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1355b8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1355B8u;
    SET_GPR_U32(ctx, 31, 0x1355C0u);
    ctx->pc = 0x1355BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1355B8u;
    // 0x1355bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1355B8u, 0x1355C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355C0u;
label_1355c0:
    // 0x1355c0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1355c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1355c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1355c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1355c8: 0x0  nop
    ctx->pc = 0x1355c8u;
    // NOP
    // 0x1355cc: 0x4600b836  c.le.s      $f23, $f0
    ctx->pc = 0x1355ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1355d0: 0x0  nop
    ctx->pc = 0x1355d0u;
    // NOP
    // 0x1355d4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1355D4u;
    {
        const bool branch_taken_0x1355d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1355d4) {
            ctx->pc = 0x135610u;
            goto label_135610;
        }
    }
    ctx->pc = 0x1355DCu;
    // 0x1355dc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1355dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1355e0: 0x0  nop
    ctx->pc = 0x1355e0u;
    // NOP
    // 0x1355e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1355E4u;
    {
        const bool branch_taken_0x1355e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1355e4) {
            ctx->pc = 0x135610u;
            goto label_135610;
        }
    }
    ctx->pc = 0x1355ECu;
    // 0x1355ec: 0x12de0133  beq         $s6, $fp, . + 4 + (0x133 << 2)
    ctx->pc = 0x1355ECu;
    {
        const bool branch_taken_0x1355ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x1355F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1355ECu;
        // 0x1355f0: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355ec) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x1355F4u;
    // 0x1355f4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1355f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1355f8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1355f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1355fc: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x1355fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135600: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x135600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x135604: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x135604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135608: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x135608u;
    {
        const bool branch_taken_0x135608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135608u;
        // 0x13560c: 0xe6c00008  swc1        $f0, 0x8($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135608) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x135610u;
label_135610:
    // 0x135610: 0x4600c836  c.le.s      $f25, $f0
    ctx->pc = 0x135610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135614: 0x0  nop
    ctx->pc = 0x135614u;
    // NOP
    // 0x135618: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x135618u;
    {
        const bool branch_taken_0x135618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135618) {
            ctx->pc = 0x135654u;
            goto label_135654;
        }
    }
    ctx->pc = 0x135620u;
    // 0x135620: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x135620u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135624: 0x0  nop
    ctx->pc = 0x135624u;
    // NOP
    // 0x135628: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x135628u;
    {
        const bool branch_taken_0x135628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135628) {
            ctx->pc = 0x135654u;
            goto label_135654;
        }
    }
    ctx->pc = 0x135630u;
    // 0x135630: 0x12d40122  beq         $s6, $s4, . + 4 + (0x122 << 2)
    ctx->pc = 0x135630u;
    {
        const bool branch_taken_0x135630 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 20));
        ctx->pc = 0x135634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135630u;
        // 0x135634: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135630) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x135638u;
    // 0x135638: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x135638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13563c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x13563cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x135640: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x135640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135644: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x135644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x135648: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x135648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13564c: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x13564Cu;
    {
        const bool branch_taken_0x13564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13564Cu;
        // 0x135650: 0xe6c00008  swc1        $f0, 0x8($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13564c) {
            ctx->pc = 0x135ABCu;
            goto label_135abc;
        }
    }
    ctx->pc = 0x135654u;
label_135654:
    // 0x135654: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x135654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135658: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x135658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13565c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x13565cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x135660: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x135660u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135664: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135668: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13566c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13566cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135670: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135674: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x135674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135678: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x135678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13567c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x13567cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135680: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135680u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135684: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x135684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135688: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x135688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13568c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13568cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135690: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135694: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x135694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135698: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13569c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x13569Cu;
    SET_GPR_U32(ctx, 31, 0x1356A4u);
    ctx->pc = 0x1356A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13569Cu;
    // 0x1356a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x13569Cu, 0x1356A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356A4u;
label_1356a4:
    // 0x1356a4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1356a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1356a8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1356a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1356ac: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1356acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1356b0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1356b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1356b4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1356b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1356b8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1356b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1356bc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1356bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1356c0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1356c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1356c4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1356c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1356c8: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1356c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1356cc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1356ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1356d0: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1356d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1356d4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1356d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1356d8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1356d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1356dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1356dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1356e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1356e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356e4: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1356E4u;
    SET_GPR_U32(ctx, 31, 0x1356ECu);
    ctx->pc = 0x1356E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356E4u;
    // 0x1356e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1356E4u, 0x1356ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356ECu;
label_1356ec:
    // 0x1356ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1356ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1356f0: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1356F0u;
    SET_GPR_U32(ctx, 31, 0x1356F8u);
    ctx->pc = 0x1356F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356F0u;
    // 0x1356f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1356F0u, 0x1356F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1356F8u;
label_1356f8:
    // 0x1356f8: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x1356f8u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    // 0x1356fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1356fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135700: 0x0  nop
    ctx->pc = 0x135700u;
    // NOP
    // 0x135704: 0x4600d036  c.le.s      $f26, $f0
    ctx->pc = 0x135704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[26], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135708: 0x0  nop
    ctx->pc = 0x135708u;
    // NOP
    // 0x13570c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x13570Cu;
    {
        const bool branch_taken_0x13570c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13570c) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x135714u;
    // 0x135714: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x135714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135718: 0x0  nop
    ctx->pc = 0x135718u;
    // NOP
    // 0x13571c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x13571Cu;
    {
        const bool branch_taken_0x13571c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13571c) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x135724u;
    // 0x135724: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x135724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135728: 0x0  nop
    ctx->pc = 0x135728u;
    // NOP
    // 0x13572c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x13572Cu;
    {
        const bool branch_taken_0x13572c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13572c) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x135734u;
    // 0x135734: 0x4617a000  add.s       $f0, $f20, $f23
    ctx->pc = 0x135734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x135738: 0x0  nop
    ctx->pc = 0x135738u;
    // NOP
    // 0x13573c: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x13573cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x135740: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x135740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135744: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135748: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13574c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x13574cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135750: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135750u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135754: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135758: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13575c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13575cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135760: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135764: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x135764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135768: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x135768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13576c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x13576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135770: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x135770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x135774: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x135774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x135778: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x135778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13577c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x13577cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135780: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135784: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135788: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13578c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13578cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135790: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135794: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135798: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x135798u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13579c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x13579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1357a0: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1357A0u;
    {
        const bool branch_taken_0x1357a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1357a0) {
            ctx->pc = 0x135A9Cu;
            goto label_135a9c;
        }
    }
    ctx->pc = 0x1357A8u;
label_1357a8:
    // 0x1357a8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1357a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1357ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1357acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1357b0: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1357b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1357b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1357b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1357b8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1357b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1357bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1357bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1357c0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1357c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1357c4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1357c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1357c8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1357c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1357cc: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1357ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1357d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1357d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1357d4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1357d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1357d8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1357d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1357dc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1357dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1357e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1357e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1357e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1357e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357e8: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1357E8u;
    SET_GPR_U32(ctx, 31, 0x1357F0u);
    ctx->pc = 0x1357ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357E8u;
    // 0x1357ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1357E8u, 0x1357F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357F0u;
label_1357f0:
    // 0x1357f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357f4: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1357F4u;
    SET_GPR_U32(ctx, 31, 0x1357FCu);
    ctx->pc = 0x1357F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1357F4u;
    // 0x1357f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1357F4u, 0x1357FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1357FCu;
label_1357fc:
    // 0x1357fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1357fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x135800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135804: 0x0  nop
    ctx->pc = 0x135804u;
    // NOP
    // 0x135808: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x135808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13580c: 0x0  nop
    ctx->pc = 0x13580cu;
    // NOP
    // 0x135810: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x135810u;
    {
        const bool branch_taken_0x135810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135810) {
            ctx->pc = 0x1358B0u;
            goto label_1358b0;
        }
    }
    ctx->pc = 0x135818u;
    // 0x135818: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x135818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13581c: 0x0  nop
    ctx->pc = 0x13581cu;
    // NOP
    // 0x135820: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x135820u;
    {
        const bool branch_taken_0x135820 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135820) {
            ctx->pc = 0x1358B0u;
            goto label_1358b0;
        }
    }
    ctx->pc = 0x135828u;
    // 0x135828: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x135828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13582c: 0x0  nop
    ctx->pc = 0x13582cu;
    // NOP
    // 0x135830: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x135830u;
    {
        const bool branch_taken_0x135830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135830u;
        // 0x135834: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135830) {
            ctx->pc = 0x1358B0u;
            goto label_1358b0;
        }
    }
    ctx->pc = 0x135838u;
    // 0x135838: 0x4616a800  add.s       $f0, $f21, $f22
    ctx->pc = 0x135838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x13583c: 0x0  nop
    ctx->pc = 0x13583cu;
    // NOP
    // 0x135840: 0x0  nop
    ctx->pc = 0x135840u;
    // NOP
    // 0x135844: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x135844u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x135848: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13584c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x13584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135850: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135850u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135854: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x135854u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135858: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135858u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x13585c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x13585cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135860: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135864: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x135864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135868: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13586c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135870: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x135870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135874: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x135874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135878: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x135878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13587c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x13587cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x135880: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x135880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x135884: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x135884u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x135888: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13588c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x13588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135890: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135890u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135894: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x135894u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135898: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13589c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x13589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1358a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1358a4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1358a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358a8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1358A8u;
    {
        const bool branch_taken_0x1358a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1358a8) {
            ctx->pc = 0x135A9Cu;
            goto label_135a9c;
        }
    }
    ctx->pc = 0x1358B0u;
label_1358b0:
    // 0x1358b0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1358b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1358b4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1358b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1358b8: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1358b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1358bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1358bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1358c0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1358c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1358c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1358c8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1358c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358cc: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1358ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1358d0: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1358d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1358d4: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1358d4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1358d8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1358d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1358dc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1358dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1358e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1358e4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1358e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1358e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1358ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1358ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358f0: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x1358F0u;
    SET_GPR_U32(ctx, 31, 0x1358F8u);
    ctx->pc = 0x1358F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358F0u;
    // 0x1358f4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x1358F0u, 0x1358F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358F8u;
label_1358f8:
    // 0x1358f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1358f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1358fc: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x1358FCu;
    SET_GPR_U32(ctx, 31, 0x135904u);
    ctx->pc = 0x135900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358FCu;
    // 0x135900: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x1358FCu, 0x135904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135904u;
label_135904:
    // 0x135904: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x135904u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x135908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13590c: 0x0  nop
    ctx->pc = 0x13590cu;
    // NOP
    // 0x135910: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x135910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135914: 0x0  nop
    ctx->pc = 0x135914u;
    // NOP
    // 0x135918: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
    ctx->pc = 0x135918u;
    {
        const bool branch_taken_0x135918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135918) {
            ctx->pc = 0x13591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135918u;
            // 0x13591c: 0x4603a000  add.s       $f0, $f20, $f3 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1359BCu;
            goto label_1359bc;
        }
    }
    ctx->pc = 0x135920u;
    // 0x135920: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x135920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135924: 0x0  nop
    ctx->pc = 0x135924u;
    // NOP
    // 0x135928: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x135928u;
    {
        const bool branch_taken_0x135928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x135928) {
            ctx->pc = 0x13592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135928u;
            // 0x13592c: 0x4603a000  add.s       $f0, $f20, $f3 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1359BCu;
            goto label_1359bc;
        }
    }
    ctx->pc = 0x135930u;
    // 0x135930: 0x46190036  c.le.s      $f0, $f25
    ctx->pc = 0x135930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135934: 0x0  nop
    ctx->pc = 0x135934u;
    // NOP
    // 0x135938: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x135938u;
    {
        const bool branch_taken_0x135938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135938u;
        // 0x13593c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135938) {
            ctx->pc = 0x1359B8u;
            goto label_1359b8;
        }
    }
    ctx->pc = 0x135940u;
    // 0x135940: 0x4619c000  add.s       $f0, $f24, $f25
    ctx->pc = 0x135940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x135944: 0x0  nop
    ctx->pc = 0x135944u;
    // NOP
    // 0x135948: 0x0  nop
    ctx->pc = 0x135948u;
    // NOP
    // 0x13594c: 0x4600c003  div.s       $f0, $f24, $f0
    ctx->pc = 0x13594cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[0]);
    // 0x135950: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135954: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135958: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135958u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13595c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x13595cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135960: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135960u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135964: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135968: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13596c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x13596cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135970: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135974: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x135974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135978: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x135978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13597c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x13597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135980: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x135980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x135984: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x135984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x135988: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x135988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13598c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x13598cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x135990: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135994: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135998: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13599c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x13599cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1359a0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1359a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1359a4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1359a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1359a8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1359a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1359ac: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1359acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1359b0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1359B0u;
    {
        const bool branch_taken_0x1359b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359b0) {
            ctx->pc = 0x135A9Cu;
            goto label_135a9c;
        }
    }
    ctx->pc = 0x1359B8u;
label_1359b8:
    // 0x1359b8: 0x4603a000  add.s       $f0, $f20, $f3
    ctx->pc = 0x1359b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_1359bc:
    // 0x1359bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1359c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1359c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1359c4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1359c8: 0x461a0000  add.s       $f0, $f0, $f26
    ctx->pc = 0x1359c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x1359cc: 0x0  nop
    ctx->pc = 0x1359ccu;
    // NOP
    // 0x1359d0: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x1359d0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1359d4: 0x0  nop
    ctx->pc = 0x1359d4u;
    // NOP
    // 0x1359d8: 0x0  nop
    ctx->pc = 0x1359d8u;
    // NOP
    // 0x1359dc: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x1359dcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[0]);
    // 0x1359e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1359e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1359e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1359e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1359e8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1359e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1359ec: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1359ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1359f0: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1359f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1359f4: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x1359f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1359f8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1359f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1359fc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1359fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a00: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x135a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a04: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a08: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x135a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a0c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x135a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x135a10: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x135a10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x135a14: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a18: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135a1c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x135a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135a20: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135a24: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a28: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a2c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a30: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x135a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a34: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x135a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x135a38: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a3c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x135a40: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x135a40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a48: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a50: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x135a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a54: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x135a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135a58: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x135a58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x135a5c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a60: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135a64: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x135a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135a68: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135a68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135a6c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a70: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a74: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135a74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a78: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x135a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a7c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x135a7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135a80: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a84: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x135a88: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x135a88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a8c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135a90: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x135a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135a94: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135a94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a98: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x135a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_135a9c:
    // 0x135a9c: 0x12d30006  beq         $s6, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x135A9Cu;
    {
        const bool branch_taken_0x135a9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 19));
        ctx->pc = 0x135AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135A9Cu;
        // 0x135aa0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a9c) {
            ctx->pc = 0x135AB8u;
            goto label_135ab8;
        }
    }
    ctx->pc = 0x135AA4u;
    // 0x135aa4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x135aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135aa8: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x135aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135aac: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x135aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x135ab0: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x135ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x135ab4: 0xe6c20004  swc1        $f2, 0x4($s6)
    ctx->pc = 0x135ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_135ab8:
    // 0x135ab8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x135ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_135abc:
    // 0x135abc: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x135abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x135ac0: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x135ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x135ac4: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x135ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x135ac8: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x135ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x135acc: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x135accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x135ad0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x135ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x135ad4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x135ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135ad8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x135ad8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135adc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x135adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135ae0: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x135ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x135ae4: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x135ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x135ae8: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x135ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x135aec: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x135aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x135af0: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x135af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x135af4: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x135af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135af8: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x135af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135afc: 0x3e00008  jr          $ra
    ctx->pc = 0x135AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135AFCu;
        // 0x135b00: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135B04u;
    // 0x135b04: 0x0  nop
    ctx->pc = 0x135b04u;
    // NOP
    // 0x135b08: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x135b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x135b0c: 0x0  nop
    ctx->pc = 0x135b0cu;
    // NOP
    // 0x135b10: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x135b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x135b14: 0x0  nop
    ctx->pc = 0x135b14u;
    // NOP
    ctx->pc = 0x135b18u;
}
