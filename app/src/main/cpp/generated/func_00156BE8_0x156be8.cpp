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

// Function: func_00156BE8
// Address: 0x156be8 - 0x156d70
void func_00156BE8_0x156be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00156BE8_0x156be8");
#endif

    switch (ctx->pc) {
        case 0x156c24u: goto label_156c24;
        case 0x156c74u: goto label_156c74;
        default: break;
    }

    ctx->pc = 0x156be8u;

    // 0x156be8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x156bec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x156becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x156bf0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x156bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x156bf4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x156bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bf8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x156bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x156bfc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x156bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c00: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x156c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x156c04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x156c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x156c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x156c0c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x156c0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x156c10: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x156c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156c14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x156c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x156c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c1c: 0xc055ab0  jal         func_156AC0
    ctx->pc = 0x156C1Cu;
    SET_GPR_U32(ctx, 31, 0x156C24u);
    ctx->pc = 0x156C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C1Cu;
    // 0x156c20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156AC0u, 0x156C1Cu, 0x156C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C24u;
label_156c24:
    // 0x156c24: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x156c24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x156c28: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x156c2c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x156c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156c30: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x156c30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156c34: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x156c34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156c38: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156c38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156c3c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156c40: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x156c44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x156c44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156c48: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156c4c: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156C4Cu;
    {
        const bool branch_taken_0x156c4c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x156C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C4Cu;
        // 0x156c50: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c4c) {
            ctx->pc = 0x156C68u;
            goto label_156c68;
        }
    }
    ctx->pc = 0x156C54u;
    // 0x156c54: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x156c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156c58: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x156c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156c5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x156c60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x156c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156c64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x156c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_156c68:
    // 0x156c68: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x156c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x156c6c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x156C6Cu;
    SET_GPR_U32(ctx, 31, 0x156C74u);
    ctx->pc = 0x156C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C6Cu;
    // 0x156c70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x156C6Cu, 0x156C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C74u;
label_156c74:
    // 0x156c74: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x156c74u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x156c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x156c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c7c: 0x0  nop
    ctx->pc = 0x156c7cu;
    // NOP
    // 0x156c80: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x156c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x156c84: 0x0  nop
    ctx->pc = 0x156c84u;
    // NOP
    // 0x156c88: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x156C88u;
    {
        const bool branch_taken_0x156c88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C88u;
        // 0x156c8c: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156c88) {
            ctx->pc = 0x156CCCu;
            goto label_156ccc;
        }
    }
    ctx->pc = 0x156C90u;
    // 0x156c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x156c94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x156c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156c98: 0x0  nop
    ctx->pc = 0x156c98u;
    // NOP
    // 0x156c9c: 0x0  nop
    ctx->pc = 0x156c9cu;
    // NOP
    // 0x156ca0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x156ca0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x156ca4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x156ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x156ca8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x156ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156cac: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x156cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156cb0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x156cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x156cb4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x156cb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x156cb8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x156cb8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x156cbc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x156cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x156cc0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x156cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x156cc4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x156cc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x156cc8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x156cc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_156ccc:
    // 0x156ccc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x156cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156cd0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156cd4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x156cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156cd8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x156cd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x156cdc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156ce0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156ce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156ce4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x156ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x156ce8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x156ce8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x156cec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x156cecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156cf0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x156cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156cf4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x156cf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x156cf8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156cfc: 0x13b10006  beq         $sp, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x156CFCu;
    {
        const bool branch_taken_0x156cfc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 17));
        ctx->pc = 0x156D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156CFCu;
        // 0x156d00: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x156cfc) {
            ctx->pc = 0x156D18u;
            goto label_156d18;
        }
    }
    ctx->pc = 0x156D04u;
    // 0x156d04: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x156d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x156d08: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x156d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x156d0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x156d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x156d10: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x156d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x156d14: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x156d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_156d18:
    // 0x156d18: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x156d18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156d1c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156d20: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156d20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156d24: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x156d24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x156d28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x156d28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x156d2c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x156d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156d30: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x156d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x156d34: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x156d34u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x156d38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x156d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156d3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x156d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x156d40: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x156d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x156d44: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x156d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x156d48: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x156d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x156d4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x156d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x156d50: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x156d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x156d54: 0x3e00008  jr          $ra
    ctx->pc = 0x156D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156D54u;
        // 0x156d58: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156D5Cu;
    // 0x156d5c: 0x0  nop
    ctx->pc = 0x156d5cu;
    // NOP
    // 0x156d60: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x156d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156d64: 0x0  nop
    ctx->pc = 0x156d64u;
    // NOP
    // 0x156d68: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x156d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x156d6c: 0x0  nop
    ctx->pc = 0x156d6cu;
    // NOP
    ctx->pc = 0x156d70u;
}
