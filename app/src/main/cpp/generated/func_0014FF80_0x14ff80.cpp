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

// Function: func_0014FF80
// Address: 0x14ff80 - 0x150048
void func_0014FF80_0x14ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014FF80_0x14ff80");
#endif

    ctx->pc = 0x14ff80u;

    // 0x14ff80: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x14ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x14ff84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x14ff84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff88: 0x2463eca0  addiu       $v1, $v1, -0x1360
    ctx->pc = 0x14ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962336));
    // 0x14ff8c: 0xac430214  sw          $v1, 0x214($v0)
    ctx->pc = 0x14ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 3));
    // 0x14ff90: 0xf84000c0  sqc2        $vf0, 0xC0($v0)
    ctx->pc = 0x14ff90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ff94: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x14ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x14ff98: 0xac4300d0  sw          $v1, 0xD0($v0)
    ctx->pc = 0x14ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 3));
    // 0x14ff9c: 0xf84000e0  sqc2        $vf0, 0xE0($v0)
    ctx->pc = 0x14ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ffa0: 0x244300b0  addiu       $v1, $v0, 0xB0
    ctx->pc = 0x14ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x14ffa4: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x14ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    // 0x14ffa8: 0xf8400100  sqc2        $vf0, 0x100($v0)
    ctx->pc = 0x14ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ffac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14ffb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14ffb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ffb4: 0x24430110  addiu       $v1, $v0, 0x110
    ctx->pc = 0x14ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x14ffb8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x14ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x14ffbc: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x14ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x14ffc0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x14ffc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x14ffc4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x14ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14ffc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x14ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x14ffcc: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x14ffccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x14ffd0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14ffd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14ffd4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14ffd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14ffd8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x14ffd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14ffdc: 0xf8400130  sqc2        $vf0, 0x130($v0)
    ctx->pc = 0x14ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14ffe0: 0xa0400140  sb          $zero, 0x140($v0)
    ctx->pc = 0x14ffe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ffe4: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x14ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x14ffe8: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x14ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
    // 0x14ffec: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x14ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    // 0x14fff0: 0xac400158  sw          $zero, 0x158($v0)
    ctx->pc = 0x14fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    // 0x14fff4: 0xf84001a0  sqc2        $vf0, 0x1A0($v0)
    ctx->pc = 0x14fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 416), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14fff8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x14fff8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x14fffc: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x14fffcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150000: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x150000u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x150004: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x150004u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x150008: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x150008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15000c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x15000cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150010: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x150010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x150014: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x150014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x150018: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15001c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x15001cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x150020: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x150020u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150024: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x150024u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x150028: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x150028u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15002c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x15002cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x150030: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x150030u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150034: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x150034u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x150038: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x150038u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x15003c: 0x3e00008  jr          $ra
    ctx->pc = 0x15003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150044u;
    // 0x150044: 0x0  nop
    ctx->pc = 0x150044u;
    // NOP
    ctx->pc = 0x150048u;
}
