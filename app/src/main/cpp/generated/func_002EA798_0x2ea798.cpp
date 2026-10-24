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

// Function: func_002EA798
// Address: 0x2ea798 - 0x2ea890
void func_002EA798_0x2ea798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EA798_0x2ea798");
#endif

    switch (ctx->pc) {
        case 0x2ea7b8u: goto label_2ea7b8;
        case 0x2ea834u: goto label_2ea834;
        default: break;
    }

    ctx->pc = 0x2ea798u;

    // 0x2ea798: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ea798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ea79c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ea79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ea7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ea7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ea7a8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2ea7a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ea7ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ea7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea7b0: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EA7B0u;
    SET_GPR_U32(ctx, 31, 0x2EA7B8u);
    ctx->pc = 0x2EA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA7B0u;
    // 0x2ea7b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EA7B0u, 0x2EA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7B8u;
label_2ea7b8:
    // 0x2ea7b8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ea7bc: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2ea7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ea7c0: 0x24630210  addiu       $v1, $v1, 0x210
    ctx->pc = 0x2ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2ea7c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ea7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea7c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ea7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ea7cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2ea7ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ea7d0: 0xc60002c8  lwc1        $f0, 0x2C8($s0)
    ctx->pc = 0x2ea7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea7d4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2ea7d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea7d8: 0x0  nop
    ctx->pc = 0x2ea7d8u;
    // NOP
    // 0x2ea7dc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2EA7DCu;
    {
        const bool branch_taken_0x2ea7dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA7DCu;
        // 0x2ea7e0: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7dc) {
            ctx->pc = 0x2EA874u;
            goto label_2ea874;
        }
    }
    ctx->pc = 0x2EA7E4u;
    // 0x2ea7e4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ea7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea7e8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2ea7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ea7ec: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x2ea7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ea7f0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x2ea7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ea7f4: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x2ea7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ea7f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ea7f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ea7fc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ea7fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ea800: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2ea804: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ea804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ea808: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2ea808u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2ea80c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ea80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ea810: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2ea810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ea814: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ea814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ea818: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ea818u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea81c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x2ea81cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ea820: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ea820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ea824: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ea824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ea828: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ea828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ea82c: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2EA82Cu;
    SET_GPR_U32(ctx, 31, 0x2EA834u);
    ctx->pc = 0x2EA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA82Cu;
    // 0x2ea830: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2EA82Cu, 0x2EA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA834u;
label_2ea834:
    // 0x2ea834: 0xc60102c8  lwc1        $f1, 0x2C8($s0)
    ctx->pc = 0x2ea834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ea838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ea83c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ea83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ea840: 0x0  nop
    ctx->pc = 0x2ea840u;
    // NOP
    // 0x2ea844: 0x0  nop
    ctx->pc = 0x2ea844u;
    // NOP
    // 0x2ea848: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ea848u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ea84c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ea84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea850: 0x0  nop
    ctx->pc = 0x2ea850u;
    // NOP
    // 0x2ea854: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA854u;
    {
        const bool branch_taken_0x2ea854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea854) {
            ctx->pc = 0x2EA858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA854u;
            // 0x2ea858: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA85Cu;
            goto label_2ea85c;
        }
    }
    ctx->pc = 0x2EA85Cu;
label_2ea85c:
    // 0x2ea85c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2ea85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea860: 0x0  nop
    ctx->pc = 0x2ea860u;
    // NOP
    // 0x2ea864: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA864u;
    {
        const bool branch_taken_0x2ea864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea864) {
            ctx->pc = 0x2EA868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA864u;
            // 0x2ea868: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA86Cu;
            goto label_2ea86c;
        }
    }
    ctx->pc = 0x2EA86Cu;
label_2ea86c:
    // 0x2ea86c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA86Cu;
    {
        const bool branch_taken_0x2ea86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA86Cu;
        // 0x2ea870: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea86c) {
            ctx->pc = 0x2EA87Cu;
            goto label_2ea87c;
        }
    }
    ctx->pc = 0x2EA874u;
label_2ea874:
    // 0x2ea874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ea874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ea878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ea878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ea87c:
    // 0x2ea87c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ea880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea884: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2ea884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ea888: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA888u;
        // 0x2ea88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA890u;
}
