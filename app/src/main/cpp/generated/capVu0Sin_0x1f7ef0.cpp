#include <cmath>
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

// Function: capVu0Sin
// Address: 0x1f7ef0 - 0x1f7fb8
void capVu0Sin_0x1f7ef0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0Sin_0x1f7ef0");
#endif

    ctx->pc = 0x1f7ef0u;

#if defined(__aarch64__) || defined(_M_ARM64)
    ctx->f[0] = std::sinf(ctx->f[12]);

    const uint32_t jumpTarget = GPR_U32(ctx, 31);
    ctx->pc = jumpTarget;
    #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
    (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
    return;
    #else
    return;
    #endif
#else

    // 0x1f7ef0: 0x44800000  mtc1        $zero, $f0
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7ef4: 0x0  nop
    // NOP
    // 0x1f7ef8: 0x46006034  c.lt.s      $f12, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7efc: 0x3c013fc9  lui         $at, 0x3FC9
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1f7f00: 0x34210fdb  ori         $at, $at, 0xFDB
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1f7f04: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7f08: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7F08u;
    {
        const bool branch_taken_0x1f7f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7f08) {
            ctx->pc = 0x1F7F20u;
            goto label_1f7f20;
        }
    }
    // 0x1f7f10: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1f7f14: 0x24070001  addiu       $a3, $zero, 0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7f18: 0x807dfca  j           func_1F7F28
    ctx->pc = 0x1F7F28u;
    goto label_1f7f28;
label_1f7f20:
    // 0x1f7f20: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1f7f24: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7f28:
    // 0x1f7f28: 0x44086000  mfc1        $t0, $f12
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1f7f2c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1f7f30: 0x3c08003c  lui         $t0, 0x3C
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1f7f34: 0x2508f140  addiu       $t0, $t0, -0xEC0
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963520));
    // 0x1f7f38: 0xd9050000  lqc2        $vf5, 0x0($t0)
    ctx->pc = 0x1f7f38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x3BF140u));
    // 0x1f7f3c: 0x4a26333d  vmr32.w     $vf6, $vf6
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f40: 0x4b060100  vaddx.x     $vf4, $vf0, $vf6x
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f44: 0x4b0631aa  vmul.x      $vf6, $vf6, $vf6
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f48: 0x4ae02118  vmulx.yzw   $vf4, $vf4, $vf0x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f4c: 0x4be62a1b  vmulw.xyzw  $vf8, $vf5, $vf6w
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f50: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f54: 0x4be64218  vmulx.xyzw  $vf8, $vf8, $vf6x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f58: 0x4bc64218  vmulx.xyz   $vf8, $vf8, $vf6x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f5c: 0x4b082103  vaddw.x     $vf4, $vf4, $vf8w
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f60: 0x4b864218  vmulx.xy    $vf8, $vf8, $vf6x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f64: 0x4b082102  vaddz.x     $vf4, $vf4, $vf8z
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f68: 0x4b064218  vmulx.x     $vf8, $vf8, $vf6x
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f6c: 0x4b082101  vaddy.x     $vf4, $vf4, $vf8y
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f70: 0x4b082100  vaddx.x     $vf4, $vf4, $vf8x
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f74: 0x4b842900  vaddx.xy    $vf4, $vf5, $vf4x
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f78: 0x4b0421ea  vmul.x      $vf7, $vf4, $vf4
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f7c: 0x4a2701c4  vsubx.w     $vf7, $vf0, $vf7x
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f80: 0x4b8703bd  .word       0x4B8703BD                   # vsqrt       $Q, $vf7w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = ps2VuSqrt(ctx->vu0_status, ft); }
    // 0x1f7f84: 0x4a0003bf  vwaitq
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f7f88: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f8c: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7F8Cu;
    {
        const bool branch_taken_0x1f7f8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f8c) {
            ctx->pc = 0x1F7FA0u;
            goto label_1f7fa0;
        }
    }
    // 0x1f7f94: 0x4b072900  vaddx.x     $vf4, $vf5, $vf7x
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7F98u;
    {
        const bool branch_taken_0x1f7f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7f98) {
            ctx->pc = 0x1F7FA4u;
            goto label_1f7fa4;
        }
    }
label_1f7fa0:
    // 0x1f7fa0: 0x4b072904  vsubx.x     $vf4, $vf5, $vf7x
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1f7fa4:
    // 0x1f7fa4: 0x48292000  qmfc2.ni    $t1, $vf4
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f7fa8: 0x44896000  mtc1        $t1, $f12
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7fac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FACu;
        // 0x1f7fb0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1f7fb4: 0x0  nop
    // NOP
    ctx->pc = 0x1f7fb8u;
#endif
}