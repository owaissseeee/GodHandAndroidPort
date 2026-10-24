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

// Function: func_002BBBA0
// Address: 0x2bbba0 - 0x2bbce0
void func_002BBBA0_0x2bbba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BBBA0_0x2bbba0");
#endif

    switch (ctx->pc) {
        case 0x2bbbd0u: goto label_2bbbd0;
        case 0x2bbcccu: goto label_2bbccc;
        default: break;
    }

    ctx->pc = 0x2bbba0u;

    // 0x2bbba0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bbba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bbba4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bbba8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bbba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bbbac: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bbbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbbb0: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2bbbb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bbbb4: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x2bbbb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbbb8: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x2bbbb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bbbbc: 0x27ac0040  addiu       $t4, $sp, 0x40
    ctx->pc = 0x2bbbbcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bbbc0: 0x27ad0050  addiu       $t5, $sp, 0x50
    ctx->pc = 0x2bbbc0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbbc4: 0x27ae0060  addiu       $t6, $sp, 0x60
    ctx->pc = 0x2bbbc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bbbc8: 0x27af0070  addiu       $t7, $sp, 0x70
    ctx->pc = 0x2bbbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bbbcc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bbbd0:
    // 0x2bbbd0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bbbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bbbd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bbbd8: 0x0  nop
    ctx->pc = 0x2bbbd8u;
    // NOP
    // 0x2bbbdc: 0x0  nop
    ctx->pc = 0x2bbbdcu;
    // NOP
    // 0x2bbbe0: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BBBE0u;
    {
        const bool branch_taken_0x2bbbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBBE0u;
        // 0x2bbbe4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbbe0) {
            ctx->pc = 0x2BBBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bbbd0;
        }
    }
    ctx->pc = 0x2BBBE8u;
    // 0x2bbbe8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2bbbe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bbbec: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbbf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2bbbf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2bbbf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bbbf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbbf8: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bbbf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bbbfc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2bbbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bbc00: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bbc00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bbc04: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bbc04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bbc08: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bbc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bbc0c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2bbc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbc10: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bbc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbc14: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2bbc14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bbc18: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x2bbc18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
    // 0x2bbc1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2bbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2bbc20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbc20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbc24: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x2bbc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bbc28: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2bbc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2bbc2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bbc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc30: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2bbc30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bbc34: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2bbc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2bbc38: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2bbc38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2bbc3c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbc40: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbc44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbc44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbc48: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2bbc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2bbc4c: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x2bbc4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x2bbc50: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2bbc50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2bbc54: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbc58: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbc5c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bbc5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bbc60: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x2bbc60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x2bbc64: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2bbc64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x2bbc68: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbc6c: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbc70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbc70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbc74: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bbc74u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bbc78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bbc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bbc7c: 0xe5810008  swc1        $f1, 0x8($t4)
    ctx->pc = 0x2bbc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 8), bits); }
    // 0x2bbc80: 0xe5830004  swc1        $f3, 0x4($t4)
    ctx->pc = 0x2bbc80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x2bbc84: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbc88: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbc8c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2bbc8cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2bbc90: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2bbc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bbc94: 0xe5a30004  swc1        $f3, 0x4($t5)
    ctx->pc = 0x2bbc94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4), bits); }
    // 0x2bbc98: 0xe5a10008  swc1        $f1, 0x8($t5)
    ctx->pc = 0x2bbc98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x2bbc9c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbca0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbca4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bbca4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bbca8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2bbca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bbcac: 0xe5c30004  swc1        $f3, 0x4($t6)
    ctx->pc = 0x2bbcacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x2bbcb0: 0xe5c10008  swc1        $f1, 0x8($t6)
    ctx->pc = 0x2bbcb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
    // 0x2bbcb4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2bbcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bbcb8: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2bbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bbcbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2bbcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bbcc0: 0xe5e10008  swc1        $f1, 0x8($t7)
    ctx->pc = 0x2bbcc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
    // 0x2bbcc4: 0xc0aedd8  jal         func_2BB760
    ctx->pc = 0x2BBCC4u;
    SET_GPR_U32(ctx, 31, 0x2BBCCCu);
    ctx->pc = 0x2BBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBCC4u;
    // 0x2bbcc8: 0xe5e30004  swc1        $f3, 0x4($t7) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB760u, 0x2BBCC4u, 0x2BBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCCCu;
label_2bbccc:
    // 0x2bbccc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bbcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bbcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBCD0u;
        // 0x2bbcd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBCD8u;
    // 0x2bbcd8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bbcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bbcdc: 0x0  nop
    ctx->pc = 0x2bbcdcu;
    // NOP
    ctx->pc = 0x2bbce0u;
}
