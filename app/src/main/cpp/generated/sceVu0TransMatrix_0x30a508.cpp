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

// Function: sceVu0TransMatrix
// Address: 0x30a508 - 0x30a538
void sceVu0TransMatrix_0x30a508(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0TransMatrix_0x30a508");
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    {
        uint8_t* const d = ps2TryFastSpan(rdram, GPR_U32(ctx, 4) & ~0xFu, 64u);
        const uint8_t* const m = ps2TryFastSpan(rdram, GPR_U32(ctx, 5) & ~0xFu, 64u);
        const uint8_t* const tv = ps2TryFastSpan(rdram, GPR_U32(ctx, 6) & ~0xFu, 16u);
        if (__builtin_expect(d != nullptr && m != nullptr && tv != nullptr, 1)) {
            const float32x4_t c0 = ps2LoadVec4(m + 0);
            const float32x4_t c1 = ps2LoadVec4(m + 16);
            const float32x4_t c2 = ps2LoadVec4(m + 32);
            const float32x4_t c3 = ps2LoadVec4(m + 48);
            const float32x4_t t  = ps2LoadVec4(tv);
            const float32x4_t out3 = vsetq_lane_f32(vgetq_lane_f32(c3, 3), vaddq_f32(c3, t), 3);
            ps2StoreVec4(d + 0, c0);
            ps2StoreVec4(d + 16, c1);
            ps2StoreVec4(d + 32, c2);
            ps2StoreVec4(d + 48, out3);
            ps2FastReturn(rdram, ctx, runtime, 0x30A530u);
            return;
        }
    }
#endif


    // 0x30a508: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x30a508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30a50c: 0xd8a50030  lqc2        $vf5, 0x30($a1)
    ctx->pc = 0x30a50cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x30a510: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x30a510u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a514: 0x78a80010  lq          $t0, 0x10($a1)
    ctx->pc = 0x30a514u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30a518: 0x78a90020  lq          $t1, 0x20($a1)
    ctx->pc = 0x30a518u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30a51c: 0x4bc42968  vadd.xyz    $vf5, $vf5, $vf4
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30a520: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x30a520u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x30a524: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x30a524u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x30a528: 0x7c890020  sq          $t1, 0x20($a0)
    ctx->pc = 0x30a528u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 9));
    // 0x30a52c: 0xf8850030  sqc2        $vf5, 0x30($a0)
    ctx->pc = 0x30a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x30a530: 0x3e00008  jr          $ra
    ctx->pc = 0x30A530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A538u;
}