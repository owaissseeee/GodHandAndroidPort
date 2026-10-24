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

// Function: func_002A38E8
// Address: 0x2a38e8 - 0x2a3930
void func_002A38E8_0x2a38e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A38E8_0x2a38e8");
#endif

    ctx->pc = 0x2a38e8u;

    // 0x2a38e8: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2a38e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a38ec: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x2a38ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a38f0: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x2a38f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2a38f4: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x2a38f4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2a38f8: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x2a38f8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a38fc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x2a38fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a3900: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x2a3900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a3904: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x2a3904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2a3908: 0x4be03b0b  vmaddw.xyzw $vf12, $vf7, $vf0w
    ctx->pc = 0x2a3908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x2a390c: 0x4bcc61ff  .word       0x4BCC61FF                   # vclipw.xyz  $vf12, $vf12w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x2a390cu;
    { uint32_t fs_bits[4]; std::memcpy(fs_bits, &ctx->vu0_vf[12], sizeof(fs_bits)); float ft_w = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); uint32_t w_bits; std::memcpy(&w_bits, &ft_w, sizeof(w_bits)); const int32_t limit = (w_bits & 0x7F800000u) != 0u ? (int32_t)(w_bits & 0x7FFFFFFFu) : 0x007FFFFF; uint32_t flags = 0u; for (uint32_t c = 0; c < 3u; ++c) { if ((int32_t)fs_bits[c] > limit) flags |= 1u << (c * 2u); if ((int32_t)(fs_bits[c] ^ 0x80000000u) > limit) flags |= 2u << (c * 2u); } ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | flags) & 0xFFFFFF; }
    // 0x2a3910: 0x4a0002ff  vnop
    ctx->pc = 0x2a3910u;
    // NOP operation, no action needed for VU0
    // 0x2a3914: 0x4a0002ff  vnop
    ctx->pc = 0x2a3914u;
    // NOP operation, no action needed for VU0
    // 0x2a3918: 0x4a0002ff  vnop
    ctx->pc = 0x2a3918u;
    // NOP operation, no action needed for VU0
    // 0x2a391c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x2a391cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2a3920: 0x4a0002ff  vnop
    ctx->pc = 0x2a3920u;
    // NOP operation, no action needed for VU0
    // 0x2a3924: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x2a3924u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x2a3928: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3930u;
}
