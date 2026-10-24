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

// Function: SphereTriangle
// Address: 0x135b18 - 0x135d50
void SphereTriangle_0x135b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphereTriangle_0x135b18");
#endif

    switch (ctx->pc) {
        case 0x135cd0u: goto label_135cd0;
        default: break;
    }

    ctx->pc = 0x135b18u;

    // 0x135b18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x135b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x135b1c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x135b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b20: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x135b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x135b24: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x135b24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b28: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x135b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x135b2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x135b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x135b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x135b34: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x135b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b38: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x135b38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x135b3c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x135b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x135b40: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135b44: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x135b44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135b48: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b4c: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135b50: 0xd9250000  lqc2        $vf5, 0x0($t1)
    ctx->pc = 0x135b50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x135b54: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135b54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135b58: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b5c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135b5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135b60: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x135b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b64: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x135b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135b68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135b68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135b6c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b70: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135b74: 0xd9450000  lqc2        $vf5, 0x0($t2)
    ctx->pc = 0x135b74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x135b78: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x135b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135b7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b80: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135b80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135b84: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x135b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b88: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135b8c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x135b8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135b90: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135b94: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x135b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x135b98: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x135b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x135b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135ba0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135ba0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135ba4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x135ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x135ba8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x135ba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x135bac: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x135bacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x135bb0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x135bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135bb4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x135bb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135bb8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x135bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135bbc: 0xc7a90010  lwc1        $f9, 0x10($sp)
    ctx->pc = 0x135bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x135bc0: 0xc7aa0014  lwc1        $f10, 0x14($sp)
    ctx->pc = 0x135bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x135bc4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x135bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135bc8: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x135bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x135bcc: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x135bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135bd0: 0x46024881  sub.s       $f2, $f9, $f2
    ctx->pc = 0x135bd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[2]);
    // 0x135bd4: 0xc5240004  lwc1        $f4, 0x4($t1)
    ctx->pc = 0x135bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135bd8: 0x460751c1  sub.s       $f7, $f10, $f7
    ctx->pc = 0x135bd8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x135bdc: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x135bdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x135be0: 0xc7ab0018  lwc1        $f11, 0x18($sp)
    ctx->pc = 0x135be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x135be4: 0x46045101  sub.s       $f4, $f10, $f4
    ctx->pc = 0x135be4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
    // 0x135be8: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x135be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135bec: 0xc5280008  lwc1        $f8, 0x8($t1)
    ctx->pc = 0x135becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x135bf0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x135bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135bf4: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x135bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135bf8: 0x460739c2  mul.s       $f7, $f7, $f7
    ctx->pc = 0x135bf8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x135bfc: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x135bfcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x135c00: 0xc5430004  lwc1        $f3, 0x4($t2)
    ctx->pc = 0x135c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135c04: 0x46055941  sub.s       $f5, $f11, $f5
    ctx->pc = 0x135c04u;
    ctx->f[5] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
    // 0x135c08: 0xc5460008  lwc1        $f6, 0x8($t2)
    ctx->pc = 0x135c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x135c0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x135c0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x135c10: 0x46085a01  sub.s       $f8, $f11, $f8
    ctx->pc = 0x135c10u;
    ctx->f[8] = FPU_SUB_S(ctx->f[11], ctx->f[8]);
    // 0x135c14: 0x46004801  sub.s       $f0, $f9, $f0
    ctx->pc = 0x135c14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x135c18: 0x460350c1  sub.s       $f3, $f10, $f3
    ctx->pc = 0x135c18u;
    ctx->f[3] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
    // 0x135c1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x135c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x135c20: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x135c20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x135c24: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x135c24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x135c28: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x135c28u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x135c2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x135c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x135c30: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x135c30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x135c34: 0x46065981  sub.s       $f6, $f11, $f6
    ctx->pc = 0x135c34u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x135c38: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x135c38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x135c3c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x135c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x135c40: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x135c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x135c44: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x135c44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x135c48: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x135c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c4c: 0x0  nop
    ctx->pc = 0x135c4cu;
    // NOP
    // 0x135c50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x135C50u;
    {
        const bool branch_taken_0x135c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C50u;
        // 0x135c54: 0x46060100  add.s       $f4, $f0, $f6 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c50) {
            ctx->pc = 0x135C5Cu;
            goto label_135c5c;
        }
    }
    ctx->pc = 0x135C58u;
    // 0x135c58: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x135c58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_135c5c:
    // 0x135c5c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x135c5cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x135c60: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x135c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c64: 0x0  nop
    ctx->pc = 0x135c64u;
    // NOP
    // 0x135c68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x135C68u;
    {
        const bool branch_taken_0x135c68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C68u;
        // 0x135c6c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c68) {
            ctx->pc = 0x135C74u;
            goto label_135c74;
        }
    }
    ctx->pc = 0x135C70u;
    // 0x135c70: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x135c70u;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_135c74:
    // 0x135c74: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x135c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135c78: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x135c78u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x135c7c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x135c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135c80: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x135c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x135c84: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x135c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135c88: 0x460a1081  sub.s       $f2, $f2, $f10
    ctx->pc = 0x135c88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[10]);
    // 0x135c8c: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x135c8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x135c90: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x135c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x135c94: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x135c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135c98: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x135c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x135c9c: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x135c9cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x135ca0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x135ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x135ca4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135ca8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x135ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135cac: 0x0  nop
    ctx->pc = 0x135cacu;
    // NOP
    // 0x135cb0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x135CB0u;
    {
        const bool branch_taken_0x135cb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CB0u;
        // 0x135cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135cb0) {
            ctx->pc = 0x135D34u;
            goto label_135d34;
        }
    }
    ctx->pc = 0x135CB8u;
    // 0x135cb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x135cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cbc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x135cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cc0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x135cc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135cc8: 0xc04d4d2  jal         func_135348
    ctx->pc = 0x135CC8u;
    SET_GPR_U32(ctx, 31, 0x135CD0u);
    ctx->pc = 0x135CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CC8u;
    // 0x135ccc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135348u, 0x135CC8u, 0x135CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CD0u;
label_135cd0:
    // 0x135cd0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x135cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135cd4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x135cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135cd8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x135cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135cdc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x135cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135ce0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x135ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x135ce4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x135ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135ce8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x135ce8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x135cec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x135cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135cf0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x135cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x135cf4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x135cf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x135cf8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x135cf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135cfc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x135cfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x135d00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x135d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x135d04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135d08: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x135d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135d0c: 0x0  nop
    ctx->pc = 0x135d0cu;
    // NOP
    // 0x135d10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x135D10u;
    {
        const bool branch_taken_0x135d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x135D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D10u;
        // 0x135d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d10) {
            ctx->pc = 0x135D34u;
            goto label_135d34;
        }
    }
    ctx->pc = 0x135D18u;
    // 0x135d18: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135D18u;
    {
        const bool branch_taken_0x135d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x135D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D18u;
        // 0x135d1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d18) {
            ctx->pc = 0x135D34u;
            goto label_135d34;
        }
    }
    ctx->pc = 0x135D20u;
    // 0x135d20: 0x123d0005  beq         $s1, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x135D20u;
    {
        const bool branch_taken_0x135d20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x135D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D20u;
        // 0x135d24: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d20) {
            ctx->pc = 0x135D38u;
            goto label_135d38;
        }
    }
    ctx->pc = 0x135D28u;
    // 0x135d28: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x135d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x135d2c: 0xe6240000  swc1        $f4, 0x0($s1)
    ctx->pc = 0x135d2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x135d30: 0xe6250004  swc1        $f5, 0x4($s1)
    ctx->pc = 0x135d30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_135d34:
    // 0x135d34: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x135d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_135d38:
    // 0x135d38: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x135d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135d3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x135d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135d40: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x135d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135d44: 0x3e00008  jr          $ra
    ctx->pc = 0x135D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D44u;
        // 0x135d48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135D4Cu;
    // 0x135d4c: 0x0  nop
    ctx->pc = 0x135d4cu;
    // NOP
    ctx->pc = 0x135d50u;
}
