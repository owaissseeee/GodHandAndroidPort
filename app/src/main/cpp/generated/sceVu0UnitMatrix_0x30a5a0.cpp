#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "sdk_arm64_fast.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceVu0UnitMatrix
// Address: 0x30a5a0 - 0x30a5d0
void sceVu0UnitMatrix_0x30a5a0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0UnitMatrix_0x30a5a0");
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    {
        uint8_t* const d = ps2TryFastSpan(rdram, GPR_U32(ctx, 4) & ~0xFu, 64u);
        if (__builtin_expect(d != nullptr, 1)) {
            static constexpr float kId[16] = {
                1.0f, 0.0f, 0.0f, 0.0f,
                0.0f, 1.0f, 0.0f, 0.0f,
                0.0f, 0.0f, 1.0f, 0.0f,
                0.0f, 0.0f, 0.0f, 1.0f,
            };
            std::memcpy(d, kId, sizeof(kId));
            ps2FastReturn(rdram, ctx, runtime, 0x30A5C4u);
            return;
        }
    }
#endif


    // 0x30a5a0: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a5a4: 0x4a202128  vadd.w      $vf4, $vf4, $vf0
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a5a8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a5ac: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30a5b0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x30a5b4: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x30a5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30a5b8: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x30a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a5bc: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x30a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x30a5c0: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x30a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x30a5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30A5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x30a5cc: 0x0  nop
    // NOP
    ctx->pc = 0x30a5d0u;
}