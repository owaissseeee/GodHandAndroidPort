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

// Function: cCamera
// Address: 0x1380a8 - 0x138210
void cCamera_0x1380a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_0x1380a8");
#endif

    switch (ctx->pc) {
        case 0x1381fcu: goto label_1381fc;
        default: break;
    }

    ctx->pc = 0x1380a8u;

    // 0x1380a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1380a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1380ac: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1380acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1380b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1380b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1380b4: 0x2442d8b8  addiu       $v0, $v0, -0x2748
    ctx->pc = 0x1380b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957240));
    // 0x1380b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1380b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1380bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1380bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1380c0: 0xae02035c  sw          $v0, 0x35C($s0)
    ctx->pc = 0x1380c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x1380c4: 0xfa0001d0  sqc2        $vf0, 0x1D0($s0)
    ctx->pc = 0x1380c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 464), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380c8: 0xfa0001e0  sqc2        $vf0, 0x1E0($s0)
    ctx->pc = 0x1380c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380cc: 0xfa000200  sqc2        $vf0, 0x200($s0)
    ctx->pc = 0x1380ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380d0: 0xfa000210  sqc2        $vf0, 0x210($s0)
    ctx->pc = 0x1380d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380d4: 0xfa000220  sqc2        $vf0, 0x220($s0)
    ctx->pc = 0x1380d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380d8: 0xfa000230  sqc2        $vf0, 0x230($s0)
    ctx->pc = 0x1380d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380dc: 0xfa000240  sqc2        $vf0, 0x240($s0)
    ctx->pc = 0x1380dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380e0: 0xfa000280  sqc2        $vf0, 0x280($s0)
    ctx->pc = 0x1380e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380e4: 0xfa000290  sqc2        $vf0, 0x290($s0)
    ctx->pc = 0x1380e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380e8: 0xfa0002a0  sqc2        $vf0, 0x2A0($s0)
    ctx->pc = 0x1380e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380ec: 0xfa000300  sqc2        $vf0, 0x300($s0)
    ctx->pc = 0x1380ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380f0: 0xfa000320  sqc2        $vf0, 0x320($s0)
    ctx->pc = 0x1380f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380f4: 0xfa000330  sqc2        $vf0, 0x330($s0)
    ctx->pc = 0x1380f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380f8: 0xfa000340  sqc2        $vf0, 0x340($s0)
    ctx->pc = 0x1380f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 832), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1380fc: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1380fcu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138100: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x138100u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138104: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x138104u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138108: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x138108u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13810c: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x13810cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138110: 0xfa050020  sqc2        $vf5, 0x20($s0)
    ctx->pc = 0x138110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138114: 0xfa060010  sqc2        $vf6, 0x10($s0)
    ctx->pc = 0x138114u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x138118: 0xfa070000  sqc2        $vf7, 0x0($s0)
    ctx->pc = 0x138118u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13811c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x138120: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x138120u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138124: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x138124u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138128: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x138128u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13812c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x13812cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138130: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x138130u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138134: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x138134u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138138: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x138138u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13813c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x13813cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138140: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x138144: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x138144u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138148: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x138148u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13814c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x13814cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138150: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x138150u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138154: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x138154u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138158: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x138158u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13815c: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x13815cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x138160: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x138160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138164: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x138168: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x138168u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x13816c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x13816cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138170: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x138170u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138174: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x138174u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x138178: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x138178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13817c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x13817cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x138180: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x138180u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x138184: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x138184u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x138188: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x13818c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x13818cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x138190: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x138190u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x138194: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x138194u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x138198: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x138198u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13819c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x13819cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1381a0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1381a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1381a4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1381a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1381a8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1381a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1381ac: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1381acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x1381b0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1381b0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1381b4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1381b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1381b8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1381b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1381bc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1381bcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1381c0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1381c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1381c4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1381c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1381c8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1381c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1381cc: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1381ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1381d0: 0x26030180  addiu       $v1, $s0, 0x180
    ctx->pc = 0x1381d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x1381d4: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1381d4u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1381d8: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1381d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1381dc: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1381dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1381e0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1381e0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1381e4: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1381e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1381e8: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1381e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1381ec: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1381ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1381f0: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1381f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1381f4: 0xc04e090  jal         func_138240
    ctx->pc = 0x1381F4u;
    SET_GPR_U32(ctx, 31, 0x1381FCu);
    ctx->pc = 0x1381F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381F4u;
    // 0x1381f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138240u, 0x1381F4u, 0x1381FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381FCu;
label_1381fc:
    // 0x1381fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1381fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x138204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138208: 0x3e00008  jr          $ra
    ctx->pc = 0x138208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138208u;
        // 0x13820c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138210u;
}
