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

// Function: sceVu0RotMatrixX
// Address: 0x30a700 - 0x30a7b8
void sceVu0RotMatrixX_0x30a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0RotMatrixX_0x30a700");
#endif

    switch (ctx->pc) {
        case 0x30a74cu: goto label_30a74c;
        case 0x30a780u: goto label_30a780;
        default: break;
    }

    ctx->pc = 0x30a700u;

    // 0x30a700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a704: 0x0  nop
    ctx->pc = 0x30a704u;
    // NOP
    // 0x30a708: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x30a708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30a70c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x30a710: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x30a710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x30a714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a718: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x30A718u;
    {
        const bool branch_taken_0x30a718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30a718) {
            ctx->pc = 0x30A730u;
            goto label_30a730;
        }
    }
    ctx->pc = 0x30A720u;
    // 0x30a720: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x30a720u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x30a724: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30a724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30a728: 0x80c29ce  j           func_30A738
    ctx->pc = 0x30A728u;
    ctx->pc = 0x30A738u;
    goto label_30a738;
    ctx->pc = 0x30A730u;
label_30a730:
    // 0x30a730: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x30a730u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30a734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30a734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a738:
    // 0x30a738: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x30a738u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30a73c: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x30a73cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30a740: 0x3e0302d  daddu       $a2, $ra, $zero
    ctx->pc = 0x30a740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 31) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a744: 0xc0c2974  jal         func_30A5D0
    ctx->pc = 0x30A744u;
    SET_GPR_U32(ctx, 31, 0x30A74Cu);
    ctx->pc = 0x30A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5D0u, 0x30A744u, 0x30A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A74Cu;
label_30a74c:
    // 0x30a74c: 0xc0f82d  daddu       $ra, $a2, $zero
    ctx->pc = 0x30a74cu;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a750: 0x4be62b3c  vmove.xyzw  $vf6, $vf5
    ctx->pc = 0x30a750u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a754: 0x4be72b3c  vmove.xyzw  $vf7, $vf5
    ctx->pc = 0x30a754u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a758: 0x4be82b3c  vmove.xyzw  $vf8, $vf5
    ctx->pc = 0x30a758u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a75c: 0x4be92b3c  vmove.xyzw  $vf9, $vf5
    ctx->pc = 0x30a75cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], ctx->vu0_vf[5], _mm_castsi128_ps(mask)); }
    // 0x30a760: 0x4b002983  vaddw.x     $vf6, $vf5, $vf0w
    ctx->pc = 0x30a760u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a764: 0x4a202a43  vaddw.w     $vf9, $vf5, $vf0w
    ctx->pc = 0x30a764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x30a768: 0x4a64212c  vsub.zw     $vf4, $vf4, $vf4
    ctx->pc = 0x30a768u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a76c: 0x4a4429c0  vaddx.z     $vf7, $vf5, $vf4x
    ctx->pc = 0x30a76cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a770: 0x4a8429c1  vaddy.y     $vf7, $vf5, $vf4y
    ctx->pc = 0x30a770u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a774: 0x4a842a04  vsubx.y     $vf8, $vf5, $vf4x
    ctx->pc = 0x30a774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30a778: 0x4a442a01  vaddy.z     $vf8, $vf5, $vf4y
    ctx->pc = 0x30a778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x30a77c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x30a77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30a780:
    // 0x30a780: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a784: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x30a784u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a788: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x30a788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a78c: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x30a78cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x30a790: 0x4be4494b  vmaddw.xyzw $vf5, $vf9, $vf4w
    ctx->pc = 0x30a790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a794: 0xf8850000  sqc2        $vf5, 0x0($a0)
    ctx->pc = 0x30a794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a798: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x30a798u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x30a79c: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x30a79cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x30a7a0: 0x20840010  addi        $a0, $a0, 0x10
    ctx->pc = 0x30a7a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x30a7a4: 0x1407fff6  bne         $zero, $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x30A7A4u;
    {
        const bool branch_taken_0x30a7a4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        if (branch_taken_0x30a7a4) {
            ctx->pc = 0x30A780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a780;
        }
    }
    ctx->pc = 0x30A7ACu;
    // 0x30a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30A7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A7B4u;
    // 0x30a7b4: 0x0  nop
    ctx->pc = 0x30a7b4u;
    // NOP
    ctx->pc = 0x30a7b8u;
}
