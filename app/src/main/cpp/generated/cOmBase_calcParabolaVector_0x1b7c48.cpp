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

// Function: cOmBase_calcParabolaVector
// Address: 0x1b7c48 - 0x1b7de8
void cOmBase_calcParabolaVector_0x1b7c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_calcParabolaVector_0x1b7c48");
#endif

    ctx->pc = 0x1b7c48u;

    // 0x1b7c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b7c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7c4c: 0x0  nop
    ctx->pc = 0x1b7c4cu;
    // NOP
    // 0x1b7c50: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1b7c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7c54: 0x0  nop
    ctx->pc = 0x1b7c54u;
    // NOP
    // 0x1b7c58: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7C58u;
    {
        const bool branch_taken_0x1b7c58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C58u;
        // 0x1b7c5c: 0x27bdffd0  addiu       $sp, $sp, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c58) {
            ctx->pc = 0x1B7CA0u;
            goto label_1b7ca0;
        }
    }
    ctx->pc = 0x1B7C60u;
    // 0x1b7c60: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b7c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b7c64: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1b7c64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b7c68: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1b7c68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b7c6c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b7c6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b7c70: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7c74: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1b7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b7c78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b7c78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7c7c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b7c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7c80: 0x10bd0056  beq         $a1, $sp, . + 4 + (0x56 << 2)
    ctx->pc = 0x1B7C80u;
    {
        const bool branch_taken_0x1b7c80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 29));
        ctx->pc = 0x1B7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C80u;
        // 0x1b7c84: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c80) {
            ctx->pc = 0x1B7DDCu;
            goto label_1b7ddc;
        }
    }
    ctx->pc = 0x1B7C88u;
    // 0x1b7c88: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b7c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7c8c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1b7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7c90: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1b7c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1b7c94: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1b7c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1b7c98: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1B7C98u;
    {
        const bool branch_taken_0x1b7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7C98u;
        // 0x1b7c9c: 0xe4a20004  swc1        $f2, 0x4($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c98) {
            ctx->pc = 0x1B7DDCu;
            goto label_1b7ddc;
        }
    }
    ctx->pc = 0x1B7CA0u;
label_1b7ca0:
    // 0x1b7ca0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1b7ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7ca4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1b7ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7ca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b7ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7cac: 0x0  nop
    ctx->pc = 0x1b7cacu;
    // NOP
    // 0x1b7cb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7CB0u;
    {
        const bool branch_taken_0x1b7cb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CB0u;
        // 0x1b7cb4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cb0) {
            ctx->pc = 0x1B7CC0u;
            goto label_1b7cc0;
        }
    }
    ctx->pc = 0x1B7CB8u;
    // 0x1b7cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7CB8u;
    {
        const bool branch_taken_0x1b7cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7CB8u;
        // 0x1b7cbc: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cb8) {
            ctx->pc = 0x1B7CC8u;
            goto label_1b7cc8;
        }
    }
    ctx->pc = 0x1B7CC0u;
label_1b7cc0:
    // 0x1b7cc0: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x1b7cc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x1b7cc4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1b7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b7cc8:
    // 0x1b7cc8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1b7cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1b7ccc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b7cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b7cd0: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x1b7cd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b7cd4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b7cd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b7cd8: 0x460d0843  div.s       $f1, $f1, $f13
    ctx->pc = 0x1b7cd8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[13]);
    // 0x1b7cdc: 0x0  nop
    ctx->pc = 0x1b7cdcu;
    // NOP
    // 0x1b7ce0: 0x0  nop
    ctx->pc = 0x1b7ce0u;
    // NOP
    // 0x1b7ce4: 0x460100c4  c1          0x100C4
    ctx->pc = 0x1b7ce4u;
    ctx->f[3] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1b7ce8: 0x46026001  sub.s       $f0, $f12, $f2
    ctx->pc = 0x1b7ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1b7cec: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b7cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b7cf0: 0x460d0003  div.s       $f0, $f0, $f13
    ctx->pc = 0x1b7cf0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[13]);
    // 0x1b7cf4: 0x0  nop
    ctx->pc = 0x1b7cf4u;
    // NOP
    // 0x1b7cf8: 0x0  nop
    ctx->pc = 0x1b7cf8u;
    // NOP
    // 0x1b7cfc: 0x46000004  c1          0x4
    ctx->pc = 0x1b7cfcu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b7d00: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1b7d00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1b7d04: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1b7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b7d08: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1b7d08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b7d0c: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x1b7d0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b7d10: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b7d10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b7d14: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d18: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1b7d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b7d1c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b7d1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b7d20: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d24: 0x10bd0006  beq         $a1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7D24u;
    {
        const bool branch_taken_0x1b7d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 29));
        ctx->pc = 0x1B7D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7D24u;
        // 0x1b7d28: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7d24) {
            ctx->pc = 0x1B7D40u;
            goto label_1b7d40;
        }
    }
    ctx->pc = 0x1B7D2Cu;
    // 0x1b7d2c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7d30: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7d34: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1b7d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1b7d38: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7d38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1b7d3c: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x1b7d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1b7d40:
    // 0x1b7d40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b7d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b7d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7d48: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1b7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b7d4c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1b7d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b7d50: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d54: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7d58: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b7d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b7d5c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b7d5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b7d60: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b7d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b7d64: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b7d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d6c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d70: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b7d70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b7d74: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d78: 0x0  nop
    ctx->pc = 0x1b7d78u;
    // NOP
    // 0x1b7d7c: 0x0  nop
    ctx->pc = 0x1b7d7cu;
    // NOP
    // 0x1b7d80: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1b7d80u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x1b7d84: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7d88: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b7d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b7d8c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b7d8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b7d90: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b7d90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b7d94: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7d98: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b7d98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b7d9c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1b7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b7da0: 0x10bd0006  beq         $a1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7DA0u;
    {
        const bool branch_taken_0x1b7da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 29));
        ctx->pc = 0x1B7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DA0u;
        // 0x1b7da4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7da0) {
            ctx->pc = 0x1B7DBCu;
            goto label_1b7dbc;
        }
    }
    ctx->pc = 0x1B7DA8u;
    // 0x1b7da8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1b7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7dac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1b7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b7db0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1b7db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1b7db4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x1b7db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1b7db8: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x1b7db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1b7dbc:
    // 0x1b7dbc: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1b7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7dc0: 0x46046802  mul.s       $f0, $f13, $f4
    ctx->pc = 0x1b7dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[4]);
    // 0x1b7dc4: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x1b7dc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b7dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b7dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b7dcc: 0x0  nop
    ctx->pc = 0x1b7dccu;
    // NOP
    // 0x1b7dd0: 0x0  nop
    ctx->pc = 0x1b7dd0u;
    // NOP
    // 0x1b7dd4: 0x46000004  c1          0x4
    ctx->pc = 0x1b7dd4u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b7dd8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1b7dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1b7ddc:
    // 0x1b7ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7DDCu;
        // 0x1b7de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7DE4u;
    // 0x1b7de4: 0x0  nop
    ctx->pc = 0x1b7de4u;
    // NOP
    ctx->pc = 0x1b7de8u;
}
