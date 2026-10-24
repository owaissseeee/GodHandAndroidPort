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

// Function: func_002BCB80
// Address: 0x2bcb80 - 0x2bccc0
void func_002BCB80_0x2bcb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BCB80_0x2bcb80");
#endif

    switch (ctx->pc) {
        case 0x2bcbb0u: goto label_2bcbb0;
        case 0x2bccacu: goto label_2bccac;
        default: break;
    }

    ctx->pc = 0x2bcb80u;

    // 0x2bcb80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bcb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bcb84: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bcb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bcb88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bcb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bcb8c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bcb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb90: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2bcb90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcb94: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2bcb94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bcb98: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2bcb98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bcb9c: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x2bcb9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bcba0: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x2bcba0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bcba4: 0x27ae0060  addiu       $t6, $sp, 0x60
    ctx->pc = 0x2bcba4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bcba8: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x2bcba8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bcbac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bcbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bcbb0:
    // 0x2bcbb0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bcbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bcbb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bcbb8: 0x0  nop
    ctx->pc = 0x2bcbb8u;
    // NOP
    // 0x2bcbbc: 0x0  nop
    ctx->pc = 0x2bcbbcu;
    // NOP
    // 0x2bcbc0: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BCBC0u;
    {
        const bool branch_taken_0x2bcbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCBC0u;
        // 0x2bcbc4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcbc0) {
            ctx->pc = 0x2BCBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bcbb0;
        }
    }
    ctx->pc = 0x2BCBC8u;
    // 0x2bcbc8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2bcbc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bcbcc: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bcbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcbd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bcbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bcbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bcbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcbd8: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bcbd8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bcbdc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2bcbdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bcbe0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bcbe0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bcbe4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bcbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcbe8: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bcbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcbec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2bcbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcbf0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bcbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcbf4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bcbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bcbf8: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2bcbf8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2bcbfc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bcbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bcc00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcc00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcc04: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2bcc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcc08: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bcc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bcc0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bcc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc10: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bcc10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bcc14: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2bcc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2bcc18: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2bcc18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2bcc1c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc20: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcc24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcc28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bcc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bcc2c: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2bcc2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bcc30: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2bcc30u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2bcc34: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc38: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc3c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bcc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bcc40: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x2bcc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2bcc44: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2bcc44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x2bcc48: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc4c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcc50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcc54: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bcc54u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bcc58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bcc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bcc5c: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2bcc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2bcc60: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x2bcc60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2bcc64: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc68: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bcc6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bcc70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bcc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bcc74: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x2bcc74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2bcc78: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2bcc78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2bcc7c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc80: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bcc84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bcc88: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bcc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bcc8c: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x2bcc8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2bcc90: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2bcc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2bcc94: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bcc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc98: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bcc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc9c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bcc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bcca0: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x2bcca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2bcca4: 0xc0af1b2  jal         func_2BC6C8
    ctx->pc = 0x2BCCA4u;
    SET_GPR_U32(ctx, 31, 0x2BCCACu);
    ctx->pc = 0x2BCCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCCA4u;
    // 0x2bcca8: 0xe5e30004  swc1        $f3, 0x4($t7) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC6C8u, 0x2BCCA4u, 0x2BCCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCCACu;
label_2bccac:
    // 0x2bccac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCCB0u;
        // 0x2bccb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCCB8u;
    // 0x2bccb8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bccb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bccbc: 0x0  nop
    ctx->pc = 0x2bccbcu;
    // NOP
    ctx->pc = 0x2bccc0u;
}
