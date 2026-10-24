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

// Function: drawCircleLine
// Address: 0x15f2e0 - 0x15f700
void drawCircleLine_0x15f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("drawCircleLine_0x15f2e0");
#endif

    switch (ctx->pc) {
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f468u: goto label_15f468;
        case 0x15f478u: goto label_15f478;
        case 0x15f484u: goto label_15f484;
        case 0x15f608u: goto label_15f608;
        case 0x15f624u: goto label_15f624;
        case 0x15f64cu: goto label_15f64c;
        case 0x15f660u: goto label_15f660;
        case 0x15f668u: goto label_15f668;
        case 0x15f6b0u: goto label_15f6b0;
        default: break;
    }

    ctx->pc = 0x15f2e0u;

    // 0x15f2e0: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x15f2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x15f2e4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x15f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15f2e8: 0x7fb002a0  sq          $s0, 0x2A0($sp)
    ctx->pc = 0x15f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 16));
    // 0x15f2ec: 0xafa301fc  sw          $v1, 0x1FC($sp)
    ctx->pc = 0x15f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 3));
    // 0x15f2f0: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x15f2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f2f4: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x15f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x15f2f8: 0x7fb20280  sq          $s2, 0x280($sp)
    ctx->pc = 0x15f2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 18));
    // 0x15f2fc: 0xafa301dc  sw          $v1, 0x1DC($sp)
    ctx->pc = 0x15f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 3));
    // 0x15f300: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15f300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f304: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x15f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15f308: 0x7fb30270  sq          $s3, 0x270($sp)
    ctx->pc = 0x15f308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 19));
    // 0x15f30c: 0xafa301e4  sw          $v1, 0x1E4($sp)
    ctx->pc = 0x15f30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 3));
    // 0x15f310: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x15f310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15f314: 0x27a30150  addiu       $v1, $sp, 0x150
    ctx->pc = 0x15f314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x15f318: 0x7fb40260  sq          $s4, 0x260($sp)
    ctx->pc = 0x15f318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 20));
    // 0x15f31c: 0xafa301ec  sw          $v1, 0x1EC($sp)
    ctx->pc = 0x15f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 3));
    // 0x15f320: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15f324: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x15f324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x15f328: 0x7fb50250  sq          $s5, 0x250($sp)
    ctx->pc = 0x15f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 21));
    // 0x15f32c: 0xafa301f4  sw          $v1, 0x1F4($sp)
    ctx->pc = 0x15f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 3));
    // 0x15f330: 0x27b400e0  addiu       $s4, $sp, 0xE0
    ctx->pc = 0x15f330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15f334: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x15f334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x15f338: 0x7fb60240  sq          $s6, 0x240($sp)
    ctx->pc = 0x15f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 22));
    // 0x15f33c: 0xafa301f8  sw          $v1, 0x1F8($sp)
    ctx->pc = 0x15f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
    // 0x15f340: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15f344: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x15f348: 0x7fb70230  sq          $s7, 0x230($sp)
    ctx->pc = 0x15f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 23));
    // 0x15f34c: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x15f34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x15f350: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x15f350u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x15f354: 0x27a30190  addiu       $v1, $sp, 0x190
    ctx->pc = 0x15f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x15f358: 0x7fbe0220  sq          $fp, 0x220($sp)
    ctx->pc = 0x15f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 30));
    // 0x15f35c: 0xafa30204  sw          $v1, 0x204($sp)
    ctx->pc = 0x15f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 3));
    // 0x15f360: 0x27b70110  addiu       $s7, $sp, 0x110
    ctx->pc = 0x15f360u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x15f364: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x15f368: 0xe7b502b8  swc1        $f21, 0x2B8($sp)
    ctx->pc = 0x15f368u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
    // 0x15f36c: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x15f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x15f370: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x15f370u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x15f374: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x15f374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x15f378: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x15f378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x15f37c: 0xafa301e8  sw          $v1, 0x1E8($sp)
    ctx->pc = 0x15f37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 3));
    // 0x15f380: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f384: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15f388: 0xafa601d4  sw          $a2, 0x1D4($sp)
    ctx->pc = 0x15f388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 6));
    // 0x15f38c: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x15f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x15f390: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x15f390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15f394: 0x7fb10290  sq          $s1, 0x290($sp)
    ctx->pc = 0x15f394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 17));
    // 0x15f398: 0x27be0120  addiu       $fp, $sp, 0x120
    ctx->pc = 0x15f398u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x15f39c: 0xffbf0210  sd          $ra, 0x210($sp)
    ctx->pc = 0x15f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 31));
    // 0x15f3a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15f3a4: 0xe7b402b0  swc1        $f20, 0x2B0($sp)
    ctx->pc = 0x15f3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_15f3a8:
    // 0x15f3a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x15f3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15f3ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x15f3b0: 0x0  nop
    ctx->pc = 0x15f3b0u;
    // NOP
    // 0x15f3b4: 0x0  nop
    ctx->pc = 0x15f3b4u;
    // NOP
    // 0x15f3b8: 0x1483fffb  bne         $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15F3B8u;
    {
        const bool branch_taken_0x15f3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3B8u;
        // 0x15f3bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3b8) {
            ctx->pc = 0x15F3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f3a8;
        }
    }
    ctx->pc = 0x15F3C0u;
    // 0x15f3c0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x15f3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15f3c4: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x15f3c8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x15f3c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15f3cc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x15f3ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f3d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x15f3d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15f3d4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x15f3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f3d8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15f3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15f3dc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x15f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f3e0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f3e4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x15f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f3e8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x15f3e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x15f3ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x15f3ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x15f3f0: 0x4601a340  add.s       $f13, $f20, $f1
    ctx->pc = 0x15f3f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x15f3f4: 0x0  nop
    ctx->pc = 0x15f3f4u;
    // NOP
    // 0x15f3f8: 0x0  nop
    ctx->pc = 0x15f3f8u;
    // NOP
    // 0x15f3fc: 0x460d0344  c1          0xD0344
    ctx->pc = 0x15f3fcu;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x15f400: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f404: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x15f404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15f408: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x15f408u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x15f40c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x15f40cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x15f410: 0x0  nop
    ctx->pc = 0x15f410u;
    // NOP
    // 0x15f414: 0x0  nop
    ctx->pc = 0x15f414u;
    // NOP
    // 0x15f418: 0x46140504  c1          0x140504
    ctx->pc = 0x15f418u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x15f41c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x15f41cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x15f420: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x15f420u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x15f424: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x15f424u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x15f428: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x15f428u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15f42c: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x15f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15f430: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x15f430u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x15f434: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x15f434u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x15f438: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x15f438u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15f43c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x15f43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f440: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x15f440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
    // 0x15f444: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15F444u;
    SET_GPR_U32(ctx, 31, 0x15F44Cu);
    ctx->pc = 0x15F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F444u;
    // 0x15f448: 0x8fb101fc  lw          $s1, 0x1FC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15F444u, 0x15F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F44Cu;
label_15f44c:
    // 0x15f44c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15f44cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x15f450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f454: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x15F454u;
    SET_GPR_U32(ctx, 31, 0x15F45Cu);
    ctx->pc = 0x15F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F454u;
    // 0x15f458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x15F454u, 0x15F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F45Cu;
label_15f45c:
    // 0x15f45c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x15f45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15f460: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15F460u;
    SET_GPR_U32(ctx, 31, 0x15F468u);
    ctx->pc = 0x15F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F460u;
    // 0x15f464: 0xc7ad0058  lwc1        $f13, 0x58($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15F460u, 0x15F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F468u;
label_15f468:
    // 0x15f468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f46c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x15f46cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x15f470: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x15F470u;
    SET_GPR_U32(ctx, 31, 0x15F478u);
    ctx->pc = 0x15F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F470u;
    // 0x15f474: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x15F470u, 0x15F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F478u;
label_15f478:
    // 0x15f478: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x15f47c: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x15F47Cu;
    SET_GPR_U32(ctx, 31, 0x15F484u);
    ctx->pc = 0x15F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F47Cu;
    // 0x15f480: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x15F47Cu, 0x15F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x4600a8c7  neg.s       $f3, $f21
    ctx->pc = 0x15f484u;
    ctx->f[3] = FPU_NEG_S(ctx->f[21]);
    // 0x15f488: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x15f488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x15f48c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x15f48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x15f490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15f490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15f494: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x15f498: 0x0  nop
    ctx->pc = 0x15f498u;
    // NOP
    // 0x15f49c: 0x0  nop
    ctx->pc = 0x15f49cu;
    // NOP
    // 0x15f4a0: 0x4601a883  div.s       $f2, $f21, $f1
    ctx->pc = 0x15f4a0u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[1]);
    // 0x15f4a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15f4a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15f4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f4ac: 0x0  nop
    ctx->pc = 0x15f4acu;
    // NOP
    // 0x15f4b0: 0x0  nop
    ctx->pc = 0x15f4b0u;
    // NOP
    // 0x15f4b4: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x15f4b4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[1]);
    // 0x15f4b8: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x15f4b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x15f4bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15f4c0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x15f4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x15f4c4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f4c8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x15f4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x15f4cc: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x15f4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x15f4d0: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x15f4d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x15f4d4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x15f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x15f4d8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x15f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x15f4dc: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x15f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x15f4e0: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x15f4e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x15f4e4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x15f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x15f4e8: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x15f4e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x15f4ec: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x15f4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x15f4f0: 0xe6820004  swc1        $f2, 0x4($s4)
    ctx->pc = 0x15f4f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x15f4f4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x15f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x15f4f8: 0xe7b500f0  swc1        $f21, 0xF0($sp)
    ctx->pc = 0x15f4f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x15f4fc: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x15f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x15f500: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x15f500u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x15f504: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x15f504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
    // 0x15f508: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x15f508u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x15f50c: 0xe6c0000c  swc1        $f0, 0xC($s6)
    ctx->pc = 0x15f50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x15f510: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x15f510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x15f514: 0xaec00008  sw          $zero, 0x8($s6)
    ctx->pc = 0x15f514u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
    // 0x15f518: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x15f518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x15f51c: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x15f51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x15f520: 0xe6e30004  swc1        $f3, 0x4($s7)
    ctx->pc = 0x15f520u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x15f524: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x15f524u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x15f528: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x15f528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x15f52c: 0xe7c0000c  swc1        $f0, 0xC($fp)
    ctx->pc = 0x15f52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x15f530: 0xe7c10004  swc1        $f1, 0x4($fp)
    ctx->pc = 0x15f530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x15f534: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x15f534u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x15f538: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x15f538u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x15f53c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x15f540: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15f540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15f544: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15f544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15f548: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x15f548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x15f54c: 0xe7a30140  swc1        $f3, 0x140($sp)
    ctx->pc = 0x15f54cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x15f550: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x15f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x15f554: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15f554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15f558: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x15f558u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15f55c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f560: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x15f560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x15f564: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x15f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x15f568: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15f568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15f56c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15f56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15f570: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15f570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15f574: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x15f574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x15f578: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x15f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x15f57c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f580: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x15f580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15f584: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x15f584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15f588: 0xe7a20170  swc1        $f2, 0x170($sp)
    ctx->pc = 0x15f588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x15f58c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x15f590: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15f590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15f594: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x15f594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15f598: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15f598u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15f59c: 0xe7b50180  swc1        $f21, 0x180($sp)
    ctx->pc = 0x15f59cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x15f5a0: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x15f5a4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f5a8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15f5ac: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x15f5acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15f5b0: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x15f5b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x15f5b4: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x15f5b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15f5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15f5bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x15f5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15f5c0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15f5c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15f5c4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x15f5c8: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x15f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
    // 0x15f5cc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f5d0: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x15f5d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15f5d4: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x15f5d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15f5d8: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x15f5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x15f5dc: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x15f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x15f5e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x15f5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15f5e4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x15f5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15f5e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x15f5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15f5ec: 0xe7a301c0  swc1        $f3, 0x1C0($sp)
    ctx->pc = 0x15f5ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x15f5f0: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x15f5f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x15f5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x15f5f8: 0xe4740008  swc1        $f20, 0x8($v1)
    ctx->pc = 0x15f5f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15f5fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15f600: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x15f604: 0x0  nop
    ctx->pc = 0x15f604u;
    // NOP
label_15f608:
    // 0x15f608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f60c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15f60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f610: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15f614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15f618: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x15f61c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15F61Cu;
    SET_GPR_U32(ctx, 31, 0x15F624u);
    ctx->pc = 0x15F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F61Cu;
    // 0x15f620: 0xafa201d8  sw          $v0, 0x1D8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15F61Cu, 0x15F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F624u;
label_15f624:
    // 0x15f624: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x15f624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x15f628: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0x15f628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x15f62c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x15F62Cu;
    {
        const bool branch_taken_0x15f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F62Cu;
        // 0x15f630: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f62c) {
            ctx->pc = 0x15F608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f608;
        }
    }
    ctx->pc = 0x15F634u;
    // 0x15f634: 0x8fa401fc  lw          $a0, 0x1FC($sp)
    ctx->pc = 0x15f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x15f638: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f63c: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x15f63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x15f640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f644: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F644u;
    SET_GPR_U32(ctx, 31, 0x15F64Cu);
    ctx->pc = 0x15F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F644u;
    // 0x15f648: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F644u, 0x15F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F64Cu;
label_15f64c:
    // 0x15f64c: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x15f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x15f650: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15f650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f654: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x15f658: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F658u;
    SET_GPR_U32(ctx, 31, 0x15F660u);
    ctx->pc = 0x15F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F658u;
    // 0x15f65c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F658u, 0x15F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F660u;
label_15f660:
    // 0x15f660: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x15f660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x15f664: 0xc600ff70  lwc1        $f0, -0x90($s0)
    ctx->pc = 0x15f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f668:
    // 0x15f668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f66c: 0x8fa601d4  lw          $a2, 0x1D4($sp)
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x15f670: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f674: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15f678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f67c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x15f680: 0xc600ff74  lwc1        $f0, -0x8C($s0)
    ctx->pc = 0x15f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f684: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x15f684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f688: 0xc601ff78  lwc1        $f1, -0x88($s0)
    ctx->pc = 0x15f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f68c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x15f68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15f690: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f694: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f698: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x15f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f69c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f6a0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f6a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15f6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15f6a8: 0xc057bc4  jal         func_15EF10
    ctx->pc = 0x15F6A8u;
    SET_GPR_U32(ctx, 31, 0x15F6B0u);
    ctx->pc = 0x15F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F6A8u;
    // 0x15f6ac: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EF10u, 0x15F6A8u, 0x15F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6B0u;
label_15f6b0:
    // 0x15f6b0: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x15F6B0u;
    {
        const bool branch_taken_0x15f6b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6b0) {
            ctx->pc = 0x15F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F6B0u;
            // 0x15f6b4: 0xc600ff70  lwc1        $f0, -0x90($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f668;
        }
    }
    ctx->pc = 0x15F6B8u;
    // 0x15f6b8: 0x7bb002a0  lq          $s0, 0x2A0($sp)
    ctx->pc = 0x15f6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x15f6bc: 0x7bb10290  lq          $s1, 0x290($sp)
    ctx->pc = 0x15f6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x15f6c0: 0x7bb20280  lq          $s2, 0x280($sp)
    ctx->pc = 0x15f6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15f6c4: 0x7bb30270  lq          $s3, 0x270($sp)
    ctx->pc = 0x15f6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x15f6c8: 0x7bb40260  lq          $s4, 0x260($sp)
    ctx->pc = 0x15f6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x15f6cc: 0x7bb50250  lq          $s5, 0x250($sp)
    ctx->pc = 0x15f6ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x15f6d0: 0x7bb60240  lq          $s6, 0x240($sp)
    ctx->pc = 0x15f6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x15f6d4: 0x7bb70230  lq          $s7, 0x230($sp)
    ctx->pc = 0x15f6d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x15f6d8: 0x7bbe0220  lq          $fp, 0x220($sp)
    ctx->pc = 0x15f6d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x15f6dc: 0xdfbf0210  ld          $ra, 0x210($sp)
    ctx->pc = 0x15f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x15f6e0: 0xc7b502b8  lwc1        $f21, 0x2B8($sp)
    ctx->pc = 0x15f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15f6e4: 0xc7b402b0  lwc1        $f20, 0x2B0($sp)
    ctx->pc = 0x15f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x15F6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6E8u;
        // 0x15f6ec: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F6F0u;
    // 0x15f6f0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15f6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15f6f4: 0x0  nop
    ctx->pc = 0x15f6f4u;
    // NOP
    // 0x15f6f8: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x15f6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x15f6fc: 0x0  nop
    ctx->pc = 0x15f6fcu;
    // NOP
    ctx->pc = 0x15f700u;
}
