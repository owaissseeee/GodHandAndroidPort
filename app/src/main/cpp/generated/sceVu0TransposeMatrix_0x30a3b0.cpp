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

// Function: sceVu0TransposeMatrix
// Address: 0x30a3b0 - 0x30a3f8
void sceVu0TransposeMatrix_0x30a3b0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0TransposeMatrix_0x30a3b0");
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
    {
        uint8_t* const d = ps2TryFastSpan(rdram, GPR_U32(ctx, 4) & ~0xFu, 64u);
        const uint8_t* const s = ps2TryFastSpan(rdram, GPR_U32(ctx, 5) & ~0xFu, 64u);
        if (__builtin_expect(d != nullptr && s != nullptr, 1)) {
            const float32x4_t c0 = ps2LoadVec4(s + 0);
            const float32x4_t c1 = ps2LoadVec4(s + 16);
            const float32x4_t c2 = ps2LoadVec4(s + 32);
            const float32x4_t c3 = ps2LoadVec4(s + 48);
            const float32x4x2_t t01 = vtrnq_f32(c0, c1);
            const float32x4x2_t t23 = vtrnq_f32(c2, c3);
            ps2StoreVec4(d + 0,  vcombine_f32(vget_low_f32(t01.val[0]), vget_low_f32(t23.val[0])));
            ps2StoreVec4(d + 16, vcombine_f32(vget_low_f32(t01.val[1]), vget_low_f32(t23.val[1])));
            ps2StoreVec4(d + 32, vcombine_f32(vget_high_f32(t01.val[0]), vget_high_f32(t23.val[0])));
            ps2StoreVec4(d + 48, vcombine_f32(vget_high_f32(t01.val[1]), vget_high_f32(t23.val[1])));
            ps2FastReturn(rdram, ctx, runtime, 0x30A3F0u);
            return;
        }
    }
#endif


    // 0x30a3b0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x30a3b0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a3b4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x30a3b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30a3b8: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x30a3b8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30a3bc: 0x78ab0030  lq          $t3, 0x30($a1)
    ctx->pc = 0x30a3bcu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x30a3c0: 0x71286488  pextlw      $t4, $t1, $t0
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x30a3c4: 0x71286ca8  pextuw      $t5, $t1, $t0
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x30a3c8: 0x716a7488  pextlw      $t6, $t3, $t2
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x30a3cc: 0x716a7ca8  pextuw      $t7, $t3, $t2
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x30a3d0: 0x71cc4389  pcpyld      $t0, $t6, $t4
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x30a3d4: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x30a3d8: 0x71ed5389  pcpyld      $t2, $t7, $t5
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x30a3dc: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x30a3e0: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x30a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x30a3e4: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x30a3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x30a3e8: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x30a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x30a3ec: 0x7c8b0030  sq          $t3, 0x30($a0)
    ctx->pc = 0x30a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 11));
    // 0x30a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A3F8u;
}