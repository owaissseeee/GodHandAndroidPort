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

// Function: sceVu0DivVector
// Address: 0x30a468 - 0x30a4a0
void sceVu0DivVector_0x30a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0DivVector_0x30a468");
#endif

    ctx->pc = 0x30a468u;

    // 0x30a468: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x30a468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30a46c: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x30a46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30a470: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x30a470u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x30a474: 0x4a6503bc  vdiv        $Q, $vf0w, $vf5x
    ctx->pc = 0x30a474u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = ps2VuDivide(ctx->vu0_status, fs, ft); }
    // 0x30a478: 0x4a0003bf  vwaitq
    ctx->pc = 0x30a478u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x30a47c: 0x4be0211c  vmulq.xyzw  $vf4, $vf4, $Q
    ctx->pc = 0x30a47cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x30a480: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x30a480u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x30a484: 0x3e00008  jr          $ra
    ctx->pc = 0x30A484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A48Cu;
    // 0x30a48c: 0x0  nop
    ctx->pc = 0x30a48cu;
    // NOP
    // 0x30a490: 0x0  nop
    ctx->pc = 0x30a490u;
    // NOP
    // 0x30a494: 0x0  nop
    ctx->pc = 0x30a494u;
    // NOP
    // 0x30a498: 0x0  nop
    ctx->pc = 0x30a498u;
    // NOP
    // 0x30a49c: 0x0  nop
    ctx->pc = 0x30a49cu;
    // NOP
    ctx->pc = 0x30a4a0u;
}
