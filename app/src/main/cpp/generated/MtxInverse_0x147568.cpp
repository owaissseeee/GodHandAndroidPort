#include <cstring>
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

#if defined(__aarch64__) || defined(_M_ARM64)
#include <arm_neon.h>
#endif

// Function: MtxInverse
// Address: 0x147568 - 0x1476d0
void MtxInverse_0x147568(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInverse_0x147568");
#endif

    ctx->pc = 0x147568u;

#if defined(__aarch64__) || defined(_M_ARM64)
    const uint32_t a0 = GPR_U32(ctx, 4);
    const uint32_t a1 = GPR_U32(ctx, 5);

    const __m128i mr0 = READ128(ADD32(a1, 0));
    const __m128i mr1 = READ128(ADD32(a1, 16));
    const __m128i mr2 = READ128(ADD32(a1, 32));
    const __m128i mr3 = READ128(ADD32(a1, 48));

    const float* r0 = reinterpret_cast<const float*>(&mr0);
    const float* r1 = reinterpret_cast<const float*>(&mr1);
    const float* r2 = reinterpret_cast<const float*>(&mr2);
    const float* r3 = reinterpret_cast<const float*>(&mr3);

    const float32x4_t v0 = vld1q_f32(r0);
    const float32x4_t v1 = vld1q_f32(r1);
    const float32x4_t v2 = vld1q_f32(r2);

    // Cross products for the 3 cofactor columns (same algebra as VU0 vopmula/vopmsub)
    auto cross3 = [](float32x4_t a, float32x4_t b) noexcept -> float32x4_t {
        const float32x4_t a_yzx = { vgetq_lane_f32(a, 1), vgetq_lane_f32(a, 2), vgetq_lane_f32(a, 0), 0.0f };
        const float32x4_t b_zxy = { vgetq_lane_f32(b, 2), vgetq_lane_f32(b, 0), vgetq_lane_f32(b, 1), 0.0f };
        const float32x4_t a_zxy = { vgetq_lane_f32(a, 2), vgetq_lane_f32(a, 0), vgetq_lane_f32(a, 1), 0.0f };
        const float32x4_t b_yzx = { vgetq_lane_f32(b, 1), vgetq_lane_f32(b, 2), vgetq_lane_f32(b, 0), 0.0f };
        return vmlsq_f32(vmulq_f32(a_yzx, b_zxy), a_zxy, b_yzx);
    };

    const float32x4_t c0 = cross3(v1, v2);
    const float det = r0[0] * vgetq_lane_f32(c0, 0) + r1[0] * vgetq_lane_f32(cross3(v2, v0), 0) + r2[0] * vgetq_lane_f32(cross3(v0, v1), 0);

    if (det == 0.0f) {
        static constexpr float kId[4][4] = {
            {1.0f, 0.0f, 0.0f, 0.0f},
            {0.0f, 1.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 1.0f, 0.0f},
            {0.0f, 0.0f, 0.0f, 1.0f}
        };
        __m128i q;
        std::memcpy(&q, kId[0], 16); WRITE128(ADD32(a0, 0),  q);
        std::memcpy(&q, kId[1], 16); WRITE128(ADD32(a0, 16), q);
        std::memcpy(&q, kId[2], 16); WRITE128(ADD32(a0, 32), q);
        std::memcpy(&q, kId[3], 16); WRITE128(ADD32(a0, 48), q);
    } else {
        const float32x4_t invDetV = vdupq_n_f32(1.0f / det);
        const float32x4_t ic0 = vmulq_f32(c0, invDetV);
        const float32x4_t ic1 = vmulq_f32(cross3(v2, v0), invDetV);
        const float32x4_t ic2 = vmulq_f32(cross3(v0, v1), invDetV);

        const float ic0x = vgetq_lane_f32(ic0, 0), ic0y = vgetq_lane_f32(ic0, 1), ic0z = vgetq_lane_f32(ic0, 2);
        const float ic1x = vgetq_lane_f32(ic1, 0), ic1y = vgetq_lane_f32(ic1, 1), ic1z = vgetq_lane_f32(ic1, 2);
        const float ic2x = vgetq_lane_f32(ic2, 0), ic2y = vgetq_lane_f32(ic2, 1), ic2z = vgetq_lane_f32(ic2, 2);

        const float32x4_t col0 = { ic0x, ic1x, ic2x, 0.0f };
        const float32x4_t col1 = { ic0y, ic1y, ic2y, 0.0f };
        const float32x4_t col2 = { ic0z, ic1z, ic2z, 0.0f };
        float32x4_t row3 = vmulq_n_f32(col0, -r3[0]);
        row3 = vfmsq_n_f32(row3, col1, r3[1]);
        row3 = vfmsq_n_f32(row3, col2, r3[2]);
        row3 = vsetq_lane_f32(1.0f, row3, 3);

        __m128i q;
        vst1q_f32(reinterpret_cast<float*>(&q), col0); WRITE128(ADD32(a0, 0),  q);
        vst1q_f32(reinterpret_cast<float*>(&q), col1); WRITE128(ADD32(a0, 16), q);
        vst1q_f32(reinterpret_cast<float*>(&q), col2); WRITE128(ADD32(a0, 32), q);
        vst1q_f32(reinterpret_cast<float*>(&q), row3); WRITE128(ADD32(a0, 48), q);
    }

    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
    #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
    return;
    #else
    return;
    #endif
#else

    // 0x147568: 0xc4a80010  lwc1        $f8, 0x10($a1)
    ctx->pc = 0x147568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x14756c: 0xc4aa0024  lwc1        $f10, 0x24($a1)
    ctx->pc = 0x14756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x147570: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x147570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x147574: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x147574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x147578: 0x460a40c2  mul.s       $f3, $f8, $f10
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x14757c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x14757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147580: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x147584: 0xc4a90028  lwc1        $f9, 0x28($a1)
    ctx->pc = 0x147584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x147588: 0xc4a70020  lwc1        $f7, 0x20($a1)
    ctx->pc = 0x147588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14758c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x147590: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x147590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147594: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x147598: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x14759c: 0xc4a60018  lwc1        $f6, 0x18($a1)
    ctx->pc = 0x14759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1475a0: 0x46023842  mul.s       $f1, $f7, $f2
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x1475a4: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1475a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1475ac: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1475b0: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x1475b4: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1475b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1475bc: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x1475c0: 0x460a2942  mul.s       $f5, $f5, $f10
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x1475c4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1475c8: 0x44805800  mtc1        $zero, $f11
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1475cc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1475d0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x1475d4: 0x460b0032  c.eq.s      $f0, $f11
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1475d8: 0x0  nop
    // NOP
    // 0x1475dc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1475DCu;
    {
        const bool branch_taken_0x1475dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1475dc) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    // 0x1475e4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1475e8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1475ec: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1475f0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1475f4: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1475f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1475f8: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x1475f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1475fc: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x1475fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x147600: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x147600u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x147604: 0x3e00008  jr          $ra
    ctx->pc = 0x147604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_14760c:
    // 0x14760c: 0x44080000  mfc1        $t0, $f0
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x147610: 0x48a85000  qmtc2.ni    $t0, $vf10
    ctx->vu0_vf[10] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x147614: 0x4a6a03bc  vdiv        $Q, $vf0w, $vf10x
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = ps2VuDivide(ctx->vu0_status, fs, ft); }
    // 0x147618: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x147618u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14761c: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x14761cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x147620: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x147620u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x147624: 0x4bc62afe  vopmula.xyz $ACC, $vf5, $vf6
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x147628: 0x4bc531ee  vopmsub.xyz $vf7, $vf6, $vf5
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14762c: 0x4bc432fe  vopmula.xyz $ACC, $vf6, $vf4
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x147630: 0x4bc6222e  vopmsub.xyz $vf8, $vf4, $vf6
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x147634: 0x4bc522fe  vopmula.xyz $ACC, $vf4, $vf5
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x147638: 0x4bc42a6e  vopmsub.xyz $vf9, $vf5, $vf4
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x14763c: 0x4a0003bf  vwaitq
    // VWAITQ (Q already resolved in this runtime)
    // 0x147640: 0xd8aa0030  lqc2        $vf10, 0x30($a1)
    ctx->pc = 0x147640u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x147644: 0x4bc0391c  vmulq.xyz   $vf4, $vf7, $Q
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x147648: 0x4bc0415c  vmulq.xyz   $vf5, $vf8, $Q
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x14764c: 0x4bc0499c  vmulq.xyz   $vf6, $vf9, $Q
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x147650: 0x4bca21ea  vmul.xyz    $vf7, $vf4, $vf10
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x147654: 0x4bca2a2a  vmul.xyz    $vf8, $vf5, $vf10
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x147658: 0x4bca326a  vmul.xyz    $vf9, $vf6, $vf10
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x14765c: 0x4b0739c2  vaddz.x     $vf7, $vf7, $vf7z
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x147660: 0x4b084202  vaddz.x     $vf8, $vf8, $vf8z
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x147664: 0x4b094a42  vaddz.x     $vf9, $vf9, $vf9z
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x147668: 0x4a200287  vsubw.w     $vf10, $vf0, $vf0w
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x14766c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x147670: 0x4b084201  vaddy.x     $vf8, $vf8, $vf8y
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x147674: 0x4b094a41  vaddy.x     $vf9, $vf9, $vf9y
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x147678: 0x4a275104  vsubx.w     $vf4, $vf10, $vf7x
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x14767c: 0x4a285144  vsubx.w     $vf5, $vf10, $vf8x
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x147680: 0x4a295184  vsubx.w     $vf6, $vf10, $vf9x
    { __m128 res = PS2_VSUB(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x147684: 0x48282000  qmfc2.ni    $t0, $vf4
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147688: 0x48292800  qmfc2.ni    $t1, $vf5
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x14768c: 0x482a3000  qmfc2.ni    $t2, $vf6
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x147690: 0x482b0000  qmfc2.ni    $t3, $vf0
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x147694: 0x71286488  pextlw      $t4, $t1, $t0
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x147698: 0x71286ca8  pextuw      $t5, $t1, $t0
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x14769c: 0x716a7488  pextlw      $t6, $t3, $t2
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1476a0: 0x716a7ca8  pextuw      $t7, $t3, $t2
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1476a4: 0x71cc4389  pcpyld      $t0, $t6, $t4
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1476a8: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1476ac: 0x71ed5389  pcpyld      $t2, $t7, $t5
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1476b0: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x1476b4: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x1476b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x1476b8: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x1476b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x1476bc: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x1476bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x1476c0: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x1476c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x1476c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1476C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1476C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1476cc: 0x0  nop
    // NOP
    ctx->pc = 0x1476d0u;
#endif
}