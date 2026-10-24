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

// Function: func_00148250
// Address: 0x148250 - 0x1482c0
void func_00148250_0x148250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148250_0x148250");
#endif

    ctx->pc = 0x148250u;

    // 0x148250: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x148250u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x148254: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x148254u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x148258: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x148258u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14825c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x14825cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x148260: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x148260u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x148264: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x148264u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x148268: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x148268u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x14826c: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x14826cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x148270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148278: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x148278u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14827c: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x14827cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x148280: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x148280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x148284: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x148284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x148288: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x148288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x14828c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x14828cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x148290: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x148290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x148294: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x148294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x148298: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x148298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x14829c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x14829cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1482a0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1482a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1482a4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1482a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1482a8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1482ac: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1482acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1482b0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1482b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1482B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1482B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482B4u;
        // 0x1482b8: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1482B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1482BCu;
    // 0x1482bc: 0x0  nop
    ctx->pc = 0x1482bcu;
    // NOP
    ctx->pc = 0x1482c0u;
}
