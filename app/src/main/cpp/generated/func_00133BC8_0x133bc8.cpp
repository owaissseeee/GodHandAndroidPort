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

// Function: func_00133BC8
// Address: 0x133bc8 - 0x133da0
void func_00133BC8_0x133bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00133BC8_0x133bc8");
#endif

    switch (ctx->pc) {
        case 0x133ca8u: goto label_133ca8;
        case 0x133cbcu: goto label_133cbc;
        case 0x133cd8u: goto label_133cd8;
        case 0x133d08u: goto label_133d08;
        default: break;
    }

    ctx->pc = 0x133bc8u;

    // 0x133bc8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x133bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x133bcc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x133bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x133bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bd4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x133bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x133bd8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x133bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x133bdc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x133bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x133be0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x133be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x133be4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x133be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x133be8: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x133be8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x133bec: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x133becu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133bf0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x133bf0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x133bf4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x133bf4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x133bf8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x133bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x133bfc: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x133bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133c00: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x133c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x133c04: 0xfba70000  sqc2        $vf7, 0x0($sp)
    ctx->pc = 0x133c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x133c08: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x133c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133c0c: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x133c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133c10: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x133c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133c14: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x133c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x133c18: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x133c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x133c1c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x133c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x133c20: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x133c24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x133c24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133c28: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x133c28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x133c2c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x133c2cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x133c30: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x133c30u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133c34: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x133c34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133c38: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x133c38u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133c3c: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x133c3cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133c40: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x133c40u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133c44: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x133c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c48: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x133c48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c4c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x133c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c50: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x133c50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x133c54: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x133c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c58: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x133c58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c5c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x133c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c60: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x133c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x133c64: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x133c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c68: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x133c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c6c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x133c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c70: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x133c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x133c74: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x133c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c78: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x133c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c7c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x133c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x133c80: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x133c80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x133c84: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x133c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x133c88: 0xfbad0010  sqc2        $vf13, 0x10($sp)
    ctx->pc = 0x133c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x133c8c: 0xfbae0020  sqc2        $vf14, 0x20($sp)
    ctx->pc = 0x133c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x133c90: 0xfbaf0030  sqc2        $vf15, 0x30($sp)
    ctx->pc = 0x133c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x133c94: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x133c98: 0x26120070  addiu       $s2, $s0, 0x70
    ctx->pc = 0x133c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x133c9c: 0x261100f0  addiu       $s1, $s0, 0xF0
    ctx->pc = 0x133c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x133ca0: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x133ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x133ca4: 0x0  nop
    ctx->pc = 0x133ca4u;
    // NOP
label_133ca8:
    // 0x133ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x133cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x133cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133cb4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x133CB4u;
    SET_GPR_U32(ctx, 31, 0x133CBCu);
    ctx->pc = 0x133CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CB4u;
    // 0x133cb8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x133CB4u, 0x133CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CBCu;
label_133cbc:
    // 0x133cbc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x133cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x133cc0: 0x661fff9  bgez        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x133CC0u;
    {
        const bool branch_taken_0x133cc0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x133CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CC0u;
        // 0x133cc4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cc0) {
            ctx->pc = 0x133CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133ca8;
        }
    }
    ctx->pc = 0x133CC8u;
    // 0x133cc8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x133cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x133ccc: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x133cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x133cd0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x133CD0u;
    SET_GPR_U32(ctx, 31, 0x133CD8u);
    ctx->pc = 0x133CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CD0u;
    // 0x133cd4: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x133CD0u, 0x133CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CD8u;
label_133cd8:
    // 0x133cd8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x133cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x133cdc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x133cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133ce0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x133ce0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x133ce4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x133ce4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x133ce8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x133ce8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133cec: 0xfa840000  sqc2        $vf4, 0x0($s4)
    ctx->pc = 0x133cecu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x133cf0: 0xfa850010  sqc2        $vf5, 0x10($s4)
    ctx->pc = 0x133cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133cf4: 0xfa860020  sqc2        $vf6, 0x20($s4)
    ctx->pc = 0x133cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x133cf8: 0xfa870030  sqc2        $vf7, 0x30($s4)
    ctx->pc = 0x133cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x133cfc: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x133cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x133d00: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x133D00u;
    SET_GPR_U32(ctx, 31, 0x133D08u);
    ctx->pc = 0x133D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D00u;
    // 0x133d04: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x133D00u, 0x133D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D08u;
label_133d08:
    // 0x133d08: 0x260301d0  addiu       $v1, $s0, 0x1D0
    ctx->pc = 0x133d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x133d0c: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x133d10: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x133D10u;
    {
        const bool branch_taken_0x133d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d10) {
            ctx->pc = 0x133D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D10u;
            // 0x133d14: 0xc6000170  lwc1        $f0, 0x170($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x133D34u;
            goto label_133d34;
        }
    }
    ctx->pc = 0x133D18u;
    // 0x133d18: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x133d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133d1c: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x133d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x133d20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x133d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d24: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x133d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x133d28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x133d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133d2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x133d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x133d30: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x133d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133d34:
    // 0x133d34: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x133d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x133d38: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x133d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133d3c: 0xc6020184  lwc1        $f2, 0x184($s0)
    ctx->pc = 0x133d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133d40: 0xc6030188  lwc1        $f3, 0x188($s0)
    ctx->pc = 0x133d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133d44: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x133d44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133d48: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x133d48u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x133d4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x133d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x133d50: 0x46001940  add.s       $f5, $f3, $f0
    ctx->pc = 0x133d50u;
    ctx->f[5] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x133d54: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x133d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x133d58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133d58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133d5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x133d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x133d60: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x133d60u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x133d64: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x133d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x133d68: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x133d68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x133d6c: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x133d6cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x133d70: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x133d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x133d74: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x133d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x133d78: 0xe6030018  swc1        $f3, 0x18($s0)
    ctx->pc = 0x133d78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x133d7c: 0xe6060024  swc1        $f6, 0x24($s0)
    ctx->pc = 0x133d7cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x133d80: 0xe6050028  swc1        $f5, 0x28($s0)
    ctx->pc = 0x133d80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x133d84: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x133d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x133d88: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x133d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x133d8c: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x133d8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x133d90: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x133d90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x133d94: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x133d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133d98: 0x3e00008  jr          $ra
    ctx->pc = 0x133D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D98u;
        // 0x133d9c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133DA0u;
}
