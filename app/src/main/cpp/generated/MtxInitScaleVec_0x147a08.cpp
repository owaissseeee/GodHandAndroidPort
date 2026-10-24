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

// Function: MtxInitScaleVec
// Address: 0x147a08 - 0x147a48
void MtxInitScaleVec_0x147a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MtxInitScaleVec_0x147a08");
#endif

    ctx->pc = 0x147a08u;

    // 0x147a08: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x147a08u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x147a0c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x147a0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x147a10: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x147a10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x147a14: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x147a14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x147a18: 0xf8840030  sqc2        $vf4, 0x30($a0)
    ctx->pc = 0x147a18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x147a1c: 0xf8850020  sqc2        $vf5, 0x20($a0)
    ctx->pc = 0x147a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x147a20: 0xf8860010  sqc2        $vf6, 0x10($a0)
    ctx->pc = 0x147a20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x147a24: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x147a24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x147a28: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x147a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147a2c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x147a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x147a30: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x147a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147a34: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x147a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x147a38: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x147a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x147A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147A3Cu;
        // 0x147a40: 0xe4800028  swc1        $f0, 0x28($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147A44u;
    // 0x147a44: 0x0  nop
    ctx->pc = 0x147a44u;
    // NOP
    ctx->pc = 0x147a48u;
}
