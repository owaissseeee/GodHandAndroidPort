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

// Function: capVu0ApplyMatrixXYZ
// Address: 0x1f8350 - 0x1f83e8
void capVu0ApplyMatrixXYZ_0x1f8350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("capVu0ApplyMatrixXYZ_0x1f8350");
#endif

    ctx->pc = 0x1f8350u;

    // 0x1f8350: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1f8350u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8354: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x1f8354u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f8358: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x1f8358u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1f835c: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x1f835cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f8360: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x1f8360u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f8364: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x1f8364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1f8368: 0x4be43a0a  vmaddz.xyzw $vf8, $vf7, $vf4z
    ctx->pc = 0x1f8368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1f836c: 0xf8880000  sqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1f836cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x1f8370: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8378u;
    // 0x1f8378: 0x0  nop
    ctx->pc = 0x1f8378u;
    // NOP
    // 0x1f837c: 0x0  nop
    ctx->pc = 0x1f837cu;
    // NOP
    // 0x1f8380: 0x0  nop
    ctx->pc = 0x1f8380u;
    // NOP
    // 0x1f8384: 0x0  nop
    ctx->pc = 0x1f8384u;
    // NOP
    // 0x1f8388: 0x0  nop
    ctx->pc = 0x1f8388u;
    // NOP
    // 0x1f838c: 0x0  nop
    ctx->pc = 0x1f838cu;
    // NOP
    // 0x1f8390: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f8390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8394: 0x0  nop
    ctx->pc = 0x1f8394u;
    // NOP
    // 0x1f8398: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f8398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f839c: 0x0  nop
    ctx->pc = 0x1f839cu;
    // NOP
    // 0x1f83a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f83a4: 0x0  nop
    ctx->pc = 0x1f83a4u;
    // NOP
    // 0x1f83a8: 0x0  nop
    ctx->pc = 0x1f83a8u;
    // NOP
    // 0x1f83ac: 0x0  nop
    ctx->pc = 0x1f83acu;
    // NOP
    // 0x1f83b0: 0x0  nop
    ctx->pc = 0x1f83b0u;
    // NOP
    // 0x1f83b4: 0x0  nop
    ctx->pc = 0x1f83b4u;
    // NOP
    // 0x1f83b8: 0x0  nop
    ctx->pc = 0x1f83b8u;
    // NOP
    // 0x1f83bc: 0x0  nop
    ctx->pc = 0x1f83bcu;
    // NOP
    // 0x1f83c0: 0x0  nop
    ctx->pc = 0x1f83c0u;
    // NOP
    // 0x1f83c4: 0x0  nop
    ctx->pc = 0x1f83c4u;
    // NOP
    // 0x1f83c8: 0x0  nop
    ctx->pc = 0x1f83c8u;
    // NOP
    // 0x1f83cc: 0x0  nop
    ctx->pc = 0x1f83ccu;
    // NOP
    // 0x1f83d0: 0x0  nop
    ctx->pc = 0x1f83d0u;
    // NOP
    // 0x1f83d4: 0x0  nop
    ctx->pc = 0x1f83d4u;
    // NOP
    // 0x1f83d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f83dc: 0x0  nop
    ctx->pc = 0x1f83dcu;
    // NOP
    // 0x1f83e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f83e4: 0x0  nop
    ctx->pc = 0x1f83e4u;
    // NOP
    ctx->pc = 0x1f83e8u;
}
