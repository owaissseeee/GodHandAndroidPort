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

// Function: sceVu0RotMatrixZ
// Address: 0x30a650 - 0x30a700
void sceVu0RotMatrixZ_0x30a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrixZ_0x30a650");
#endif

    switch (ctx->pc) {
        case 0x30a69cu: goto label_30a69c;
        case 0x30a6ccu: goto label_30a6cc;
        default: break;
    }

    ctx->pc = 0x30a650u;

    // 0x30a650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a654: 0x0  nop
    ctx->pc = 0x30a654u;
    // NOP
    // 0x30a658: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x30a658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a65c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x30a660: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x30a660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x30a664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a668: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x30A668u;
    {
        const bool branch_taken_0x30a668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a668) {
            ctx->pc = 0x30A680u;
            goto label_30a680;
        }
    }
    ctx->pc = 0x30A670u;
    // 0x30a670: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x30a670u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x30a674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a678: 0x80c29a2  j           func_30A688
    ctx->pc = 0x30A678u;
    ctx->pc = 0x30A688u;
    goto label_30a688;
    ctx->pc = 0x30A680u;
label_30a680:
    // 0x30a680: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x30a680u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30a684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a688:
    // 0x30a688: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x30a688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30a68c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x30a68cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30a690: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x30a690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a694: 0xc0c2974  jal         func_30A5D0
    ctx->pc = 0x30A694u;
    SET_GPR_U32(ctx, 31, 0x30A69Cu);
    ctx->pc = 0x30A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5D0u, 0x30A694u, 0x30A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A69Cu;
label_30a69c:
    // 0x30a69c: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x30a69cu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a6a0: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x30a6a0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a6a4: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x30a6a4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a6a8: 0x4be9033c  vmove.xyzw  $vf9, $vf0
    ctx->pc = 0x30a6a8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x30a6ac: 0x4bc94a6c  vsub.xyz    $vf9, $vf9, $vf9
    ctx->pc = 0x30a6acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[9], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30a6b0: 0x4be84b3d  vmr32.xyzw  $vf8, $vf9
    ctx->pc = 0x30a6b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30a6b4: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x30a6b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a6b8: 0x4a842980  vaddx.y     $vf6, $vf5, $vf4x
    ctx->pc = 0x30a6b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a6bc: 0x4b042981  vaddy.x     $vf6, $vf5, $vf4y
    ctx->pc = 0x30a6bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a6c0: 0x4b0429c4  vsubx.x     $vf7, $vf5, $vf4x
    ctx->pc = 0x30a6c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a6c4: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x30a6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a6c8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30a6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30a6cc:
    // 0x30a6cc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a6ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a6d0: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x30a6d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a6d4: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x30a6d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a6d8: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x30a6d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a6dc: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x30a6dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a6e0: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x30a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a6e4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30a6e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x30a6e8: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x30a6e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x30a6ec: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x30a6ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x30a6f0: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x30A6F0u;
    {
        const bool branch_taken_0x30a6f0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x30a6f0) {
            ctx->pc = 0x30A6CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a6cc;
        }
    }
    ctx->pc = 0x30A6F8u;
    // 0x30a6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30A6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A700u;
}
