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

// Function: func_0014D0E8
// Address: 0x14d0e8 - 0x14d700
void func_0014D0E8_0x14d0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014D0E8_0x14d0e8");
#endif

    switch (ctx->pc) {
        case 0x14d160u: goto label_14d160;
        case 0x14d288u: goto label_14d288;
        case 0x14d2b0u: goto label_14d2b0;
        case 0x14d2c4u: goto label_14d2c4;
        case 0x14d2dcu: goto label_14d2dc;
        case 0x14d2e4u: goto label_14d2e4;
        case 0x14d360u: goto label_14d360;
        case 0x14d3bcu: goto label_14d3bc;
        case 0x14d430u: goto label_14d430;
        case 0x14d45cu: goto label_14d45c;
        case 0x14d468u: goto label_14d468;
        case 0x14d4e8u: goto label_14d4e8;
        case 0x14d504u: goto label_14d504;
        case 0x14d558u: goto label_14d558;
        case 0x14d5b8u: goto label_14d5b8;
        case 0x14d5c8u: goto label_14d5c8;
        case 0x14d5d0u: goto label_14d5d0;
        case 0x14d6a8u: goto label_14d6a8;
        default: break;
    }

    ctx->pc = 0x14d0e8u;

    // 0x14d0e8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x14d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x14d0ec: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x14d0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x14d0f0: 0x8ca276b0  lw          $v0, 0x76B0($a1)
    ctx->pc = 0x14d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14d0f4: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x14d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
    // 0x14d0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d0fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14d0fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d100: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14d104: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x14d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x14d108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d10c: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x14d10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x14d110: 0x26c30228  addiu       $v1, $s6, 0x228
    ctx->pc = 0x14d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 552));
    // 0x14d114: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x14d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x14d118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14d118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d11c: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x14d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x14d120: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x14d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
    // 0x14d124: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x14d124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
    // 0x14d128: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x14d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
    // 0x14d12c: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x14d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x14d130: 0xe7bc02b0  swc1        $f28, 0x2B0($sp)
    ctx->pc = 0x14d130u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x14d134: 0xe7bb02a8  swc1        $f27, 0x2A8($sp)
    ctx->pc = 0x14d134u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x14d138: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x14d138u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x14d13c: 0xe7b90298  swc1        $f25, 0x298($sp)
    ctx->pc = 0x14d13cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x14d140: 0xe7b80290  swc1        $f24, 0x290($sp)
    ctx->pc = 0x14d140u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x14d144: 0xe7b70288  swc1        $f23, 0x288($sp)
    ctx->pc = 0x14d144u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x14d148: 0xe7b60280  swc1        $f22, 0x280($sp)
    ctx->pc = 0x14d148u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x14d14c: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x14d14cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x14d150: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x14d150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x14d154: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x14d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x14d158: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14D158u;
    SET_GPR_U32(ctx, 31, 0x14D160u);
    ctx->pc = 0x14D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D158u;
    // 0x14d15c: 0x8c740000  lw          $s4, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14D158u, 0x14D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D160u;
label_14d160:
    // 0x14d160: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x14d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
    // 0x14d164: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14d164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14d168: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x14d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x14d16c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x14d16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x14d170: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x14D170u;
    {
        const bool branch_taken_0x14d170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D170u;
        // 0x14d174: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d170) {
            ctx->pc = 0x14D298u;
            goto label_14d298;
        }
    }
    ctx->pc = 0x14D178u;
    // 0x14d178: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x14d178u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x14d17c: 0x26c40080  addiu       $a0, $s6, 0x80
    ctx->pc = 0x14d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x14d180: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x14d184: 0x8e63aff0  lw          $v1, -0x5010($s3)
    ctx->pc = 0x14d184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14d188: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x14d188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d18c: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x14d18cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14d190: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x14d190u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14d194: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x14d194u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x14d198: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x14d198u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d19c: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x14d19cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d1a0: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x14d1a0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14d1a4: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x14d1a4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14d1a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14d1a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14d1acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14d1b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14d1b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14d1b8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14d1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1bc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14d1bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1c0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14d1c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1c4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14d1c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14d1c8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14d1c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1cc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14d1ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1d0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d1d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1d4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14d1d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d1d8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14d1d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1dc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14d1dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1e0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14d1e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d1e4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14d1e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d1e8: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x14d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d1ec: 0xfa4d0010  sqc2        $vf13, 0x10($s2)
    ctx->pc = 0x14d1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d1f0: 0xfa4e0020  sqc2        $vf14, 0x20($s2)
    ctx->pc = 0x14d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14d1f4: 0xfa4f0030  sqc2        $vf15, 0x30($s2)
    ctx->pc = 0x14d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14d1f8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x14d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x14d1fc: 0x26910050  addiu       $s1, $s4, 0x50
    ctx->pc = 0x14d1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x14d200: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x14d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x14d204: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x14d204u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x4A6900u));
    // 0x14d208: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x14d208u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x4A6910u));
    // 0x14d20c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x14d20cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x4A6920u));
    // 0x14d210: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x14d210u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x4A6930u));
    // 0x14d214: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x14d214u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d218: 0xd8890010  lqc2        $vf9, 0x10($a0)
    ctx->pc = 0x14d218u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d21c: 0xd88a0020  lqc2        $vf10, 0x20($a0)
    ctx->pc = 0x14d21cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14d220: 0xd88b0030  lqc2        $vf11, 0x30($a0)
    ctx->pc = 0x14d220u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14d224: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14d224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d228: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14d228u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d22c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14d22cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d230: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14d230u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14d234: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14d234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d238: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14d238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d23c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14d23cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d240: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14d240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14d244: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14d244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d248: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14d248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d24c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d24cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d250: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14d250u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d254: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14d254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d258: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14d258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d25c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14d25cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d260: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14d260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d264: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x14d264u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d268: 0xfa2d0010  sqc2        $vf13, 0x10($s1)
    ctx->pc = 0x14d268u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d26c: 0xfa2e0020  sqc2        $vf14, 0x20($s1)
    ctx->pc = 0x14d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14d270: 0xfa2f0030  sqc2        $vf15, 0x30($s1)
    ctx->pc = 0x14d270u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14d274: 0x26900110  addiu       $s0, $s4, 0x110
    ctx->pc = 0x14d274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    // 0x14d278: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x14d278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x14d27c: 0x24a56940  addiu       $a1, $a1, 0x6940
    ctx->pc = 0x14d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
    // 0x14d280: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D280u;
    SET_GPR_U32(ctx, 31, 0x14D288u);
    ctx->pc = 0x14D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D280u;
    // 0x14d284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D280u, 0x14D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D288u;
label_14d288:
    // 0x14d288: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x14d288u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d28c: 0xafb101c0  sw          $s1, 0x1C0($sp)
    ctx->pc = 0x14d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 17));
    // 0x14d290: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14D290u;
    {
        const bool branch_taken_0x14d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D290u;
        // 0x14d294: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d290) {
            ctx->pc = 0x14D2DCu;
            goto label_14d2dc;
        }
    }
    ctx->pc = 0x14D298u;
label_14d298:
    // 0x14d298: 0x26910010  addiu       $s1, $s4, 0x10
    ctx->pc = 0x14d298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x14d29c: 0x8e05aff0  lw          $a1, -0x5010($s0)
    ctx->pc = 0x14d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x14d2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2a4: 0x26920050  addiu       $s2, $s4, 0x50
    ctx->pc = 0x14d2a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x14d2a8: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D2A8u;
    SET_GPR_U32(ctx, 31, 0x14D2B0u);
    ctx->pc = 0x14D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2A8u;
    // 0x14d2ac: 0x26930110  addiu       $s3, $s4, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D2A8u, 0x14D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2B0u;
label_14d2b0:
    // 0x14d2b0: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x14d2b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2b8: 0x24a56900  addiu       $a1, $a1, 0x6900
    ctx->pc = 0x14d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
    // 0x14d2bc: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D2BCu;
    SET_GPR_U32(ctx, 31, 0x14D2C4u);
    ctx->pc = 0x14D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2BCu;
    // 0x14d2c0: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D2BCu, 0x14D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2C4u;
label_14d2c4:
    // 0x14d2c4: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x14d2c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2c8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x14d2cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d0: 0x24a56940  addiu       $a1, $a1, 0x6940
    ctx->pc = 0x14d2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
    // 0x14d2d4: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D2D4u;
    SET_GPR_U32(ctx, 31, 0x14D2DCu);
    ctx->pc = 0x14D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2D4u;
    // 0x14d2d8: 0xafb201c0  sw          $s2, 0x1C0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D2D4u, 0x14D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2DCu;
label_14d2dc:
    // 0x14d2dc: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14D2DCu;
    SET_GPR_U32(ctx, 31, 0x14D2E4u);
    ctx->pc = 0x14D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2DCu;
    // 0x14d2e0: 0x26840090  addiu       $a0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14D2DCu, 0x14D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2E4u;
label_14d2e4:
    // 0x14d2e4: 0x8ec20250  lw          $v0, 0x250($s6)
    ctx->pc = 0x14d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 592)));
    // 0x14d2e8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14d2ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14d2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14d2f0: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x14D2F0u;
    {
        const bool branch_taken_0x14d2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2F0u;
        // 0x14d2f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2f0) {
            ctx->pc = 0x14D6A8u;
            goto label_14d6a8;
        }
    }
    ctx->pc = 0x14D2F8u;
    // 0x14d2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d2fc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14d2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14d300: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14d300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14d304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d308: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14d30c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x14d310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d314: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14d314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14d318: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x14d318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14d31c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x14d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14d320: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14d320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14d324: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x14d324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x14d328: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14d328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14d32c: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x14d32cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x14d330: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14d330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14d334: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x14d338: 0xe7b8005c  swc1        $f24, 0x5C($sp)
    ctx->pc = 0x14d338u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14d33c: 0x26d50080  addiu       $s5, $s6, 0x80
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x14d340: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x14d340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x14d344: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x14d344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x14d348: 0xe7b8006c  swc1        $f24, 0x6C($sp)
    ctx->pc = 0x14d348u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x14d34c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x14d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x14d350: 0xe7b80074  swc1        $f24, 0x74($sp)
    ctx->pc = 0x14d350u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x14d354: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x14d354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x14d358: 0xc0c2a32  jal         func_30A8C8
    ctx->pc = 0x14D358u;
    SET_GPR_U32(ctx, 31, 0x14D360u);
    ctx->pc = 0x14D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D358u;
    // 0x14d35c: 0xe7b8007c  swc1        $f24, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8C8u, 0x14D358u, 0x14D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D360u;
label_14d360:
    // 0x14d360: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x14d364: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x14d368: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14d368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14d36c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14d370: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x14d370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x14d374: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14d374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14d378: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14d37c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14d380: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x14d380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x14d384: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14d384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d388: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x14d38c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x14d38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x14d390: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14d390u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14d394: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14d394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14d398: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x14d398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x14d39c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14d39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14d3a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14d3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14d3a4: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x14d3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x14d3a8: 0x0  nop
    ctx->pc = 0x14d3a8u;
    // NOP
    // 0x14d3ac: 0x0  nop
    ctx->pc = 0x14d3acu;
    // NOP
    // 0x14d3b0: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14d3b0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14d3b4: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14D3B4u;
    SET_GPR_U32(ctx, 31, 0x14D3BCu);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14D3B4u, 0x14D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D3BCu;
label_14d3bc:
    // 0x14d3bc: 0xc6616b88  lwc1        $f1, 0x6B88($s3)
    ctx->pc = 0x14d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d3c0: 0xc64d1180  lwc1        $f13, 0x1180($s2)
    ctx->pc = 0x14d3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14d3c4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x14d3c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x14d3c8: 0xc68c1190  lwc1        $f12, 0x1190($s4)
    ctx->pc = 0x14d3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d3cc: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x14d3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14d3d0: 0xc6cf0130  lwc1        $f15, 0x130($s6)
    ctx->pc = 0x14d3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14d3d4: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x14d3d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x14d3d8: 0x0  nop
    ctx->pc = 0x14d3d8u;
    // NOP
    // 0x14d3dc: 0x0  nop
    ctx->pc = 0x14d3dcu;
    // NOP
    // 0x14d3e0: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x14d3e0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x14d3e4: 0xc6d00134  lwc1        $f16, 0x134($s6)
    ctx->pc = 0x14d3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x14d3e8: 0x0  nop
    ctx->pc = 0x14d3e8u;
    // NOP
    // 0x14d3ec: 0x461b6b43  div.s       $f13, $f13, $f27
    ctx->pc = 0x14d3ecu;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[27]);
    // 0x14d3f0: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x14d3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x14d3f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d3f8: 0x46197bc0  add.s       $f15, $f15, $f25
    ctx->pc = 0x14d3f8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[25]);
    // 0x14d3fc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x14d3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x14d400: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x14d400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x14d404: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x14d404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x14d408: 0x46198400  add.s       $f16, $f16, $f25
    ctx->pc = 0x14d408u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[25]);
    // 0x14d40c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14d40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14d410: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x14d410u;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x14d414: 0x4600d4c6  mov.s       $f19, $f26
    ctx->pc = 0x14d414u;
    ctx->f[19] = FPU_MOV_S(ctx->f[26]);
    // 0x14d418: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x14d418u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x14d41c: 0x0  nop
    ctx->pc = 0x14d41cu;
    // NOP
    // 0x14d420: 0x0  nop
    ctx->pc = 0x14d420u;
    // NOP
    // 0x14d424: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x14d424u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x14d428: 0xc0c2a90  jal         func_30AA40
    ctx->pc = 0x14D428u;
    SET_GPR_U32(ctx, 31, 0x14D430u);
    ctx->pc = 0x14D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D428u;
    // 0x14d42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA40u, 0x14D428u, 0x14D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D430u;
label_14d430:
    // 0x14d430: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14d430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d434: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x14d434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14d438: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x14d438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d43c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14d43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d440: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14d440u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14d444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d448: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14d448u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14d44c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d450: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x14d450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14d454: 0xc051d52  jal         func_147548
    ctx->pc = 0x14D454u;
    SET_GPR_U32(ctx, 31, 0x14D45Cu);
    ctx->pc = 0x14D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D454u;
    // 0x14d458: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x14D454u, 0x14D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D45Cu;
label_14d45c:
    // 0x14d45c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d460: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D460u;
    SET_GPR_U32(ctx, 31, 0x14D468u);
    ctx->pc = 0x14D464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D460u;
    // 0x14d464: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D460u, 0x14D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D468u;
label_14d468:
    // 0x14d468: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x14d468u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14d46c: 0xdae50010  lqc2        $vf5, 0x10($s7)
    ctx->pc = 0x14d46cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x14d470: 0xdae60020  lqc2        $vf6, 0x20($s7)
    ctx->pc = 0x14d470u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x14d474: 0xdae70030  lqc2        $vf7, 0x30($s7)
    ctx->pc = 0x14d474u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x14d478: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x14d478u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d47c: 0xdaa90010  lqc2        $vf9, 0x10($s5)
    ctx->pc = 0x14d47cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14d480: 0xdaaa0020  lqc2        $vf10, 0x20($s5)
    ctx->pc = 0x14d480u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x14d484: 0xdaab0030  lqc2        $vf11, 0x30($s5)
    ctx->pc = 0x14d484u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x14d488: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14d488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d48c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14d48cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d490: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14d490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d494: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14d494u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14d498: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14d498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d49c: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14d49cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4a0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14d4a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4a4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14d4a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14d4a8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14d4a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4ac: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14d4acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4b0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d4b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4b4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14d4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d4b8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14d4b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4bc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14d4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4c0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14d4c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d4c4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14d4c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d4c8: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x14d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d4cc: 0xfaed0010  sqc2        $vf13, 0x10($s7)
    ctx->pc = 0x14d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d4d0: 0xfaee0020  sqc2        $vf14, 0x20($s7)
    ctx->pc = 0x14d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14d4d4: 0xfaef0030  sqc2        $vf15, 0x30($s7)
    ctx->pc = 0x14d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14d4d8: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14d4dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14d4e0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x14D4E0u;
    SET_GPR_U32(ctx, 31, 0x14D4E8u);
    ctx->pc = 0x14D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D4E0u;
    // 0x14d4e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x14D4E0u, 0x14D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D4E8u;
label_14d4e8:
    // 0x14d4e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14d4ec: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14d4f0: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14d4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14d4f4: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14d4f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14d4f8: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14d4f8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14d4fc: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14D4FCu;
    SET_GPR_U32(ctx, 31, 0x14D504u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14D4FCu, 0x14D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D504u;
label_14d504:
    // 0x14d504: 0xc6756b88  lwc1        $f21, 0x6B88($s3)
    ctx->pc = 0x14d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14d508: 0xc6571180  lwc1        $f23, 0x1180($s2)
    ctx->pc = 0x14d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14d50c: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x14d50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x14d510: 0xc6941190  lwc1        $f20, 0x1190($s4)
    ctx->pc = 0x14d510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d514: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x14d514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14d518: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x14d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x14d51c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14d51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14d520: 0x0  nop
    ctx->pc = 0x14d520u;
    // NOP
    // 0x14d524: 0x0  nop
    ctx->pc = 0x14d524u;
    // NOP
    // 0x14d528: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x14d528u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x14d52c: 0x0  nop
    ctx->pc = 0x14d52cu;
    // NOP
    // 0x14d530: 0x0  nop
    ctx->pc = 0x14d530u;
    // NOP
    // 0x14d534: 0x461bbdc3  div.s       $f23, $f23, $f27
    ctx->pc = 0x14d534u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[27]);
    // 0x14d538: 0x461ca502  mul.s       $f20, $f20, $f28
    ctx->pc = 0x14d538u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x14d53c: 0x0  nop
    ctx->pc = 0x14d53cu;
    // NOP
    // 0x14d540: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x14d540u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x14d544: 0x0  nop
    ctx->pc = 0x14d544u;
    // NOP
    // 0x14d548: 0x0  nop
    ctx->pc = 0x14d548u;
    // NOP
    // 0x14d54c: 0x4614b583  div.s       $f22, $f22, $f20
    ctx->pc = 0x14d54cu;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[20]);
    // 0x14d550: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14D550u;
    SET_GPR_U32(ctx, 31, 0x14D558u);
    ctx->pc = 0x14D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D550u;
    // 0x14d554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14D550u, 0x14D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D558u;
label_14d558:
    // 0x14d558: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x14d55c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14d55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14d560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d564: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14d564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d56c: 0x34210aec  ori         $at, $at, 0xAEC
    ctx->pc = 0x14d56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2796);
    // 0x14d570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d578: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x14d57c: 0x3421d58a  ori         $at, $at, 0xD58A
    ctx->pc = 0x14d57cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54666);
    // 0x14d580: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14d580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14d584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d588: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x14d588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x14d58c: 0x4616b0c0  add.s       $f3, $f22, $f22
    ctx->pc = 0x14d58cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x14d590: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x14d590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x14d594: 0xe7b8012c  swc1        $f24, 0x12C($sp)
    ctx->pc = 0x14d594u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x14d598: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x14d598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x14d59c: 0x0  nop
    ctx->pc = 0x14d59cu;
    // NOP
    // 0x14d5a0: 0x0  nop
    ctx->pc = 0x14d5a0u;
    // NOP
    // 0x14d5a4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x14d5a4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x14d5a8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14d5a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14d5ac: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x14d5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x14d5b0: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x14D5B0u;
    SET_GPR_U32(ctx, 31, 0x14D5B8u);
    ctx->pc = 0x14D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5B0u;
    // 0x14d5b4: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x14D5B0u, 0x14D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5B8u;
label_14d5b8:
    // 0x14d5b8: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14d5bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d5c0: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x14D5C0u;
    SET_GPR_U32(ctx, 31, 0x14D5C8u);
    ctx->pc = 0x14D5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5C0u;
    // 0x14d5c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x14D5C0u, 0x14D5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5C8u;
label_14d5c8:
    // 0x14d5c8: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14D5C8u;
    SET_GPR_U32(ctx, 31, 0x14D5D0u);
    ctx->pc = 0x14D5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D5C8u;
    // 0x14d5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14D5C8u, 0x14D5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5D0u;
label_14d5d0:
    // 0x14d5d0: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x14d5d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x14d5d4: 0x3c01c6ff  lui         $at, 0xC6FF
    ctx->pc = 0x14d5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50943 << 16));
    // 0x14d5d8: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x14d5d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x14d5dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d5e0: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x14d5e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x14d5e4: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14d5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14d5e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d5ec: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x14d5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x14d5f0: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x14d5f0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x14d5f4: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x14d5f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x14d5f8: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x14d5f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x14d5fc: 0xe7b90174  swc1        $f25, 0x174($sp)
    ctx->pc = 0x14d5fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x14d600: 0xe7b8017c  swc1        $f24, 0x17C($sp)
    ctx->pc = 0x14d600u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x14d604: 0x0  nop
    ctx->pc = 0x14d604u;
    // NOP
    // 0x14d608: 0x0  nop
    ctx->pc = 0x14d608u;
    // NOP
    // 0x14d60c: 0x461aad43  div.s       $f21, $f21, $f26
    ctx->pc = 0x14d60cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[26]);
    // 0x14d610: 0xe7b90170  swc1        $f25, 0x170($sp)
    ctx->pc = 0x14d610u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x14d614: 0x0  nop
    ctx->pc = 0x14d614u;
    // NOP
    // 0x14d618: 0x0  nop
    ctx->pc = 0x14d618u;
    // NOP
    // 0x14d61c: 0x461aa503  div.s       $f20, $f20, $f26
    ctx->pc = 0x14d61cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[26]);
    // 0x14d620: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14d624: 0xe7b50154  swc1        $f21, 0x154($sp)
    ctx->pc = 0x14d624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x14d628: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x14d628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x14d62c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x14d62cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14d630: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x14d630u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14d634: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x14d634u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x14d638: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x14d638u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x14d63c: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x14d63cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14d640: 0xdaa90010  lqc2        $vf9, 0x10($s5)
    ctx->pc = 0x14d640u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x14d644: 0xdaaa0020  lqc2        $vf10, 0x20($s5)
    ctx->pc = 0x14d644u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x14d648: 0xdaab0030  lqc2        $vf11, 0x30($s5)
    ctx->pc = 0x14d648u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x14d64c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14d64cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d650: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14d650u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d654: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14d654u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d658: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14d658u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14d65c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14d65cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d660: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14d660u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d664: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14d664u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d668: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14d668u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14d66c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14d66cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d670: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14d670u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d674: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d674u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d678: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14d678u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d67c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14d67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d680: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14d680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d684: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14d684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d688: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14d688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d68c: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x14d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d690: 0xf84d0010  sqc2        $vf13, 0x10($v0)
    ctx->pc = 0x14d690u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d694: 0xf84e0020  sqc2        $vf14, 0x20($v0)
    ctx->pc = 0x14d694u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14d698: 0xf84f0030  sqc2        $vf15, 0x30($v0)
    ctx->pc = 0x14d698u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14d69c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d6a0: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D6A0u;
    SET_GPR_U32(ctx, 31, 0x14D6A8u);
    ctx->pc = 0x14D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6A0u;
    // 0x14d6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D6A0u, 0x14D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6A8u;
label_14d6a8:
    // 0x14d6a8: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x14d6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x14d6ac: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x14d6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x14d6b0: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x14d6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x14d6b4: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x14d6b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x14d6b8: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x14d6b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x14d6bc: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x14d6bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x14d6c0: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x14d6c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x14d6c4: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x14d6c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x14d6c8: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x14d6c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14d6cc: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x14d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x14d6d0: 0xc7bc02b0  lwc1        $f28, 0x2B0($sp)
    ctx->pc = 0x14d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x14d6d4: 0xc7bb02a8  lwc1        $f27, 0x2A8($sp)
    ctx->pc = 0x14d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x14d6d8: 0xc7ba02a0  lwc1        $f26, 0x2A0($sp)
    ctx->pc = 0x14d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x14d6dc: 0xc7b90298  lwc1        $f25, 0x298($sp)
    ctx->pc = 0x14d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14d6e0: 0xc7b80290  lwc1        $f24, 0x290($sp)
    ctx->pc = 0x14d6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14d6e4: 0xc7b70288  lwc1        $f23, 0x288($sp)
    ctx->pc = 0x14d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14d6e8: 0xc7b60280  lwc1        $f22, 0x280($sp)
    ctx->pc = 0x14d6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14d6ec: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x14d6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14d6f0: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x14d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6F4u;
        // 0x14d6f8: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D6FCu;
    // 0x14d6fc: 0x0  nop
    ctx->pc = 0x14d6fcu;
    // NOP
    ctx->pc = 0x14d700u;
}
