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

// Function: func_001F8080
// Address: 0x1f8080 - 0x1f8140
void func_001F8080_0x1f8080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F8080_0x1f8080");
#endif

    ctx->pc = 0x1f8080u;

    // 0x1f8080: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8084: 0x0  nop
    ctx->pc = 0x1f8084u;
    // NOP
    // 0x1f8088: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f8088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f808c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1f808cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f8090: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f8090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f8094: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f8094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8098: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8098u;
    {
        const bool branch_taken_0x1f8098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8098) {
            ctx->pc = 0x1F80B0u;
            goto label_1f80b0;
        }
    }
    ctx->pc = 0x1F80A0u;
    // 0x1f80a0: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1f80a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1f80a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f80a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f80a8: 0x807e02e  j           func_1F80B8
    ctx->pc = 0x1F80A8u;
    ctx->pc = 0x1F80B8u;
    goto label_1f80b8;
    ctx->pc = 0x1F80B0u;
label_1f80b0:
    // 0x1f80b0: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1f80b0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f80b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f80b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f80b8:
    // 0x1f80b8: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x1f80b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f80bc: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x1f80bcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f80c0: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1f80c4: 0x2508f140  addiu       $t0, $t0, -0xEC0
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963520));
    // 0x1f80c8: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x1f80c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x3BF140u));
    // 0x1f80cc: 0x4a26333d  vmr32.w     $vf6, $vf6
    ctx->pc = 0x1f80ccu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f80d0: 0x4b060100  vaddx.x     $vf4, $vf0, $vf6x
    ctx->pc = 0x1f80d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f80d4: 0x4b0631aa  vmul.x      $vf6, $vf6, $vf6
    ctx->pc = 0x1f80d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f80d8: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    ctx->pc = 0x1f80d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f80dc: 0x4be62a1b  vmulw.xyzw  $vf8, $vf5, $vf6w
    ctx->pc = 0x1f80dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f80e0: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1f80e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f80e4: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    ctx->pc = 0x1f80e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f80e8: 0x4bc64218  vmulx.xyz   $vf8, $vf8, $vf6x
    ctx->pc = 0x1f80e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f80ec: 0x4b082103  vaddw.x     $vf4, $vf4, $vf8w
    ctx->pc = 0x1f80ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f80f0: 0x4b864218  vmulx.xy    $vf8, $vf8, $vf6x
    ctx->pc = 0x1f80f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f80f4: 0x4b082102  vaddz.x     $vf4, $vf4, $vf8z
    ctx->pc = 0x1f80f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f80f8: 0x4b064218  vmulx.x     $vf8, $vf8, $vf6x
    ctx->pc = 0x1f80f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f80fc: 0x4b082101  vaddy.x     $vf4, $vf4, $vf8y
    ctx->pc = 0x1f80fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8100: 0x4b082100  vaddx.x     $vf4, $vf4, $vf8x
    ctx->pc = 0x1f8100u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8104: 0x4b842900  vaddx.xy    $vf4, $vf5, $vf4x
    ctx->pc = 0x1f8104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8108: 0x4b0421ea  vmul.x      $vf7, $vf4, $vf4
    ctx->pc = 0x1f8108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f810c: 0x4a2701c4  vsubx.w     $vf7, $vf0, $vf7x
    ctx->pc = 0x1f810cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f8110: 0x4b8703bd  .word       0x4B8703BD                   # vsqrt       $Q, $vf7w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1f8110u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2VuSqrt(ctx->vu0_status, ft); }
    // 0x1f8114: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f8114u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f8118: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x1f8118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f811c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F811Cu;
    {
        const bool branch_taken_0x1f811c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f811c) {
            ctx->pc = 0x1F8130u;
            goto label_1f8130;
        }
    }
    ctx->pc = 0x1F8124u;
    // 0x1f8124: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x1f8124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f8128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8128u;
    {
        const bool branch_taken_0x1f8128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8128) {
            ctx->pc = 0x1F8134u;
            goto label_1f8134;
        }
    }
    ctx->pc = 0x1F8130u;
label_1f8130:
    // 0x1f8130: 0x4b072904  vsubx.x     $vf4, $vf5, $vf7x
    ctx->pc = 0x1f8130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f8134:
    // 0x1f8134: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1f8134u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f8138: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8140u;
}
