#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ScaleCtrl__15cR301CannonBall
// Address: 0x79b340 - 0x79b428
void ScaleCtrl__15cR301CannonBall_0x79b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScaleCtrl__15cR301CannonBall_0x79b340");
#endif

    switch (ctx->pc) {
        case 0x79b394u: goto label_79b394;
        case 0x79b3b4u: goto label_79b3b4;
        default: break;
    }

    ctx->pc = 0x79b340u;

    // 0x79b340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b344: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79b34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x79b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b354: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x79B354u;
    {
        const bool branch_taken_0x79b354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B354u;
        // 0x79b358: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b354) {
            ctx->pc = 0x79B414u;
            goto label_79b414;
        }
    }
    ctx->pc = 0x79B35Cu;
    // 0x79b35c: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x79b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x79b360: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x79B360u;
    {
        const bool branch_taken_0x79b360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B360u;
        // 0x79b364: 0x24630210  addiu       $v1, $v1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b360) {
            ctx->pc = 0x79B414u;
            goto label_79b414;
        }
    }
    ctx->pc = 0x79B368u;
    // 0x79b368: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x79b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x79b36c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79b370: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x79b370u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b374: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x79b374u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b378: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79b378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79b37c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b380: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79b380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b384: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b384u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79b388: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b38c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x79B38Cu;
    SET_GPR_U32(ctx, 31, 0x79B394u);
    ctx->pc = 0x79B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B38Cu;
    // 0x79b390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79B38Cu, 0x79B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B394u;
label_79b394:
    // 0x79b394: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x79b394u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x79b398: 0x460c0004  c1          0xC0004
    ctx->pc = 0x79b398u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79b39c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x79b39cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b3a0: 0x0  nop
    ctx->pc = 0x79b3a0u;
    // NOP
    // 0x79b3a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x79B3A4u;
    {
        const bool branch_taken_0x79b3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79b3a4) {
            ctx->pc = 0x79B3B4u;
            goto label_79b3b4;
        }
    }
    ctx->pc = 0x79B3ACu;
    // 0x79b3ac: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79B3ACu;
    SET_GPR_U32(ctx, 31, 0x79B3B4u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79B3ACu, 0x79B3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3B4u;
label_79b3b4:
    // 0x79b3b4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x79b3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x79b3b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b3bc: 0x0  nop
    ctx->pc = 0x79b3bcu;
    // NOP
    // 0x79b3c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79b3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b3c4: 0x0  nop
    ctx->pc = 0x79b3c4u;
    // NOP
    // 0x79b3c8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x79B3C8u;
    {
        const bool branch_taken_0x79b3c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79b3c8) {
            ctx->pc = 0x79B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B3C8u;
            // 0x79b3cc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B3F0u;
            goto label_79b3f0;
        }
    }
    ctx->pc = 0x79B3D0u;
    // 0x79b3d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79b3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b3d4: 0x0  nop
    ctx->pc = 0x79b3d4u;
    // NOP
    // 0x79b3d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79b3dc: 0x0  nop
    ctx->pc = 0x79b3dcu;
    // NOP
    // 0x79b3e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79B3E0u;
    {
        const bool branch_taken_0x79b3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79b3e0) {
            ctx->pc = 0x79B3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B3E0u;
            // 0x79b3e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B3E8u;
            goto label_79b3e8;
        }
    }
    ctx->pc = 0x79B3E8u;
label_79b3e8:
    // 0x79b3e8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x79b3ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b3f0:
    // 0x79b3f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b3f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b3f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x79b3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79b3fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79b400: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x79b400u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x79b404: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79b404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79b408: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x79b408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x79b40c: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x79b40cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x79b410: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x79b410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_79b414:
    // 0x79b414: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b41c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B41Cu;
        // 0x79b420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B424u;
    // 0x79b424: 0x0  nop
    ctx->pc = 0x79b424u;
    // NOP
    ctx->pc = 0x79b428u;
}
} // namespace gh_r301
