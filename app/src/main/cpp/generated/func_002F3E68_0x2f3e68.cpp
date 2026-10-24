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

// Function: func_002F3E68
// Address: 0x2f3e68 - 0x2f3f30
void func_002F3E68_0x2f3e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F3E68_0x2f3e68");
#endif

    switch (ctx->pc) {
        case 0x2f3e84u: goto label_2f3e84;
        case 0x2f3f08u: goto label_2f3f08;
        default: break;
    }

    ctx->pc = 0x2f3e68u;

    // 0x2f3e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f3e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f3e6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f3e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f3e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f3e78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e7c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F3E84u);
    ctx->pc = 0x2F3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E7Cu;
    // 0x2f3e80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F3E7Cu, 0x2F3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E84u;
label_2f3e84:
    // 0x2f3e84: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2f3e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2f3e88: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x2f3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3e8c: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2f3e90: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f3e90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3e94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f3e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3e98: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x2f3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3e9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f3e9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ea0: 0x0  nop
    ctx->pc = 0x2f3ea0u;
    // NOP
    // 0x2f3ea4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f3ea4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3ea8: 0x0  nop
    ctx->pc = 0x2f3ea8u;
    // NOP
    // 0x2f3eac: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x2F3EACu;
    {
        const bool branch_taken_0x2f3eac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EACu;
        // 0x2f3eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eac) {
            ctx->pc = 0x2F3F20u;
            goto label_2f3f20;
        }
    }
    ctx->pc = 0x2F3EB4u;
    // 0x2f3eb4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f3eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3eb8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f3eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3ebc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2f3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f3ec0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2f3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3ec4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2f3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f3ec8: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2f3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f3ecc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2f3eccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2f3ed0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2f3ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2f3ed4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2f3ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2f3ed8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f3ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f3edc: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2f3edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2f3ee0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f3ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f3ee4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f3ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f3ee8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f3ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f3eec: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f3eecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3ef0: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x2f3ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f3ef4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f3ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f3ef8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f3ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f3efc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f3efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f3f00: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2F3F00u;
    SET_GPR_U32(ctx, 31, 0x2F3F08u);
    ctx->pc = 0x2F3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F00u;
    // 0x2f3f04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2F3F00u, 0x2F3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F08u;
label_2f3f08:
    // 0x2f3f08: 0xc60102b8  lwc1        $f1, 0x2B8($s0)
    ctx->pc = 0x2f3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f3f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f3f10: 0x0  nop
    ctx->pc = 0x2f3f10u;
    // NOP
    // 0x2f3f14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3F14u;
    {
        const bool branch_taken_0x2f3f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F14u;
        // 0x2f3f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f14) {
            ctx->pc = 0x2F3F20u;
            goto label_2f3f20;
        }
    }
    ctx->pc = 0x2F3F1Cu;
    // 0x2f3f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3f20:
    // 0x2f3f20: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f3f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f3f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3f28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F28u;
        // 0x2f3f2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3F30u;
}
