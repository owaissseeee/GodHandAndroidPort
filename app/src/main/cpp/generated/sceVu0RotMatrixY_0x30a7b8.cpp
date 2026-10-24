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

// Function: sceVu0RotMatrixY
// Address: 0x30a7b8 - 0x30a870
void sceVu0RotMatrixY_0x30a7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrixY_0x30a7b8");
#endif

    switch (ctx->pc) {
        case 0x30a804u: goto label_30a804;
        case 0x30a838u: goto label_30a838;
        default: break;
    }

    ctx->pc = 0x30a7b8u;

    // 0x30a7b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a7bc: 0x0  nop
    ctx->pc = 0x30a7bcu;
    // NOP
    // 0x30a7c0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x30a7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a7c4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30a7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x30a7c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x30a7c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x30a7cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a7d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x30A7D0u;
    {
        const bool branch_taken_0x30a7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a7d0) {
            ctx->pc = 0x30A7E8u;
            goto label_30a7e8;
        }
    }
    ctx->pc = 0x30A7D8u;
    // 0x30a7d8: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x30a7d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x30a7dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a7dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a7e0: 0x80c29fc  j           func_30A7F0
    ctx->pc = 0x30A7E0u;
    ctx->pc = 0x30A7F0u;
    goto label_30a7f0;
    ctx->pc = 0x30A7E8u;
label_30a7e8:
    // 0x30a7e8: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x30a7e8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30a7ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a7f0:
    // 0x30a7f0: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x30a7f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30a7f4: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x30a7f4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30a7f8: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x30a7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a7fc: 0xc0c2974  jal         func_30A5D0
    ctx->pc = 0x30A7FCu;
    SET_GPR_U32(ctx, 31, 0x30A804u);
    ctx->pc = 0x30A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5D0u, 0x30A7FCu, 0x30A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A804u;
label_30a804:
    // 0x30a804: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x30a804u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a808: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x30a808u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a80c: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x30a80cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a810: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x30a810u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a814: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x30a814u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a818: 0x4a8029c3  vaddw.y     $vf7, $vf5, $vf0w
    ctx->pc = 0x30a818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a81c: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x30a81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30a820: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x30a820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a824: 0x4a442984  vsubx.z     $vf6, $vf5, $vf4x
    ctx->pc = 0x30a824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a828: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x30a828u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a82c: 0x4b042a00  vaddx.x     $vf8, $vf5, $vf4x
    ctx->pc = 0x30a82cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30a830: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x30a830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30a834: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30a838:
    // 0x30a838: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a83c: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x30a83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a840: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x30a840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a844: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x30a844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a848: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x30a848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a84c: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x30a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a850: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30a850u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x30a854: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x30a854u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x30a858: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x30a858u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x30a85c: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x30A85Cu;
    {
        const bool branch_taken_0x30a85c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x30a85c) {
            ctx->pc = 0x30A838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a838;
        }
    }
    ctx->pc = 0x30A864u;
    // 0x30a864: 0x3e00008  jr          $ra
    ctx->pc = 0x30A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A86Cu;
    // 0x30a86c: 0x0  nop
    ctx->pc = 0x30a86cu;
    // NOP
    ctx->pc = 0x30a870u;
}
