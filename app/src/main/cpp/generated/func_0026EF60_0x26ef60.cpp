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

// Function: func_0026EF60
// Address: 0x26ef60 - 0x26f0e0
void func_0026EF60_0x26ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026EF60_0x26ef60");
#endif

    switch (ctx->pc) {
        case 0x26eff4u: goto label_26eff4;
        case 0x26f01cu: goto label_26f01c;
        case 0x26f054u: goto label_26f054;
        case 0x26f09cu: goto label_26f09c;
        default: break;
    }

    ctx->pc = 0x26ef60u;

    // 0x26ef60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26ef64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26ef68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26ef6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ef6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef70: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x26ef70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x26ef74: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26ef74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ef78: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ef7c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x26ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x26ef80: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x26ef84: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x26ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x26ef88: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EF88u;
    {
        const bool branch_taken_0x26ef88 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ef88) {
            ctx->pc = 0x26EF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EF88u;
            // 0x26ef8c: 0x8c82aff0  lw          $v0, -0x5010($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EFACu;
            goto label_26efac;
        }
    }
    ctx->pc = 0x26EF90u;
    // 0x26ef90: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x26ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26ef94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ef98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ef9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x26ef9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26efa0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efa4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26efa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26efa8: 0x8c82aff0  lw          $v0, -0x5010($a0)
    ctx->pc = 0x26efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294946800)));
label_26efac:
    // 0x26efac: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x26efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x26efb0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x26efb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26efb4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x26efb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26efb8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x26efb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26efbc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26efbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26efc0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26efc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26efc4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26efc8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x26efc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26efcc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26efccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26efd0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x26efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efd4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x26efd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26efd8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x26efd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26efdc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26efdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x26efe0: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x26efe0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x26efe4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26efe8: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x26efe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26efec: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26EFECu;
    SET_GPR_U32(ctx, 31, 0x26EFF4u);
    ctx->pc = 0x26EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFECu;
    // 0x26eff0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26EFECu, 0x26EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFF4u;
label_26eff4:
    // 0x26eff4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x26eff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x26eff8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26effc: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x26EFFCu;
    {
        const bool branch_taken_0x26effc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFFCu;
        // 0x26f000: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26effc) {
            ctx->pc = 0x26F0C4u;
            goto label_26f0c4;
        }
    }
    ctx->pc = 0x26F004u;
    // 0x26f004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f008: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F008u;
    {
        const bool branch_taken_0x26f008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f008) {
            ctx->pc = 0x26F00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F008u;
            // 0x26f00c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F0CCu;
            goto label_26f0cc;
        }
    }
    ctx->pc = 0x26F010u;
    // 0x26f010: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26f014: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x26F014u;
    SET_GPR_U32(ctx, 31, 0x26F01Cu);
    ctx->pc = 0x26F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F014u;
    // 0x26f018: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x26F014u, 0x26F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F01Cu;
label_26f01c:
    // 0x26f01c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x26f01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x26f020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f024: 0x0  nop
    ctx->pc = 0x26f024u;
    // NOP
    // 0x26f028: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26f028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f02c: 0x0  nop
    ctx->pc = 0x26f02cu;
    // NOP
    // 0x26f030: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x26F030u;
    {
        const bool branch_taken_0x26f030 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F030u;
        // 0x26f034: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f030) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F038u;
    // 0x26f038: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x26f038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26f03c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f03cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26f040: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x26f040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x26f044: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f048: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26f048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26f04c: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x26F04Cu;
    SET_GPR_U32(ctx, 31, 0x26F054u);
    ctx->pc = 0x26F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F04Cu;
    // 0x26f050: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x26F04Cu, 0x26F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F054u;
label_26f054:
    // 0x26f054: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x26f054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f058: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26f058u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26f05c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x26f05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f060: 0x0  nop
    ctx->pc = 0x26f060u;
    // NOP
    // 0x26f064: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26F064u;
    {
        const bool branch_taken_0x26f064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F064u;
        // 0x26f068: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f064) {
            ctx->pc = 0x26F070u;
            goto label_26f070;
        }
    }
    ctx->pc = 0x26F06Cu;
    // 0x26f06c: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x26f06cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
label_26f070:
    // 0x26f070: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x26f070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x26f074: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x26f074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x26f078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f07c: 0x0  nop
    ctx->pc = 0x26f07cu;
    // NOP
    // 0x26f080: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x26f080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f084: 0x0  nop
    ctx->pc = 0x26f084u;
    // NOP
    // 0x26f088: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x26F088u;
    {
        const bool branch_taken_0x26f088 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F088u;
        // 0x26f08c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f088) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F090u;
    // 0x26f090: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26f094: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x26F094u;
    SET_GPR_U32(ctx, 31, 0x26F09Cu);
    ctx->pc = 0x26F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F094u;
    // 0x26f098: 0x26050490  addiu       $a1, $s0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x26F094u, 0x26F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F09Cu;
label_26f09c:
    // 0x26f09c: 0x3c013a6b  lui         $at, 0x3A6B
    ctx->pc = 0x26f09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14955 << 16));
    // 0x26f0a0: 0x3421edfa  ori         $at, $at, 0xEDFA
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60922);
    // 0x26f0a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f0a8: 0x0  nop
    ctx->pc = 0x26f0a8u;
    // NOP
    // 0x26f0ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f0b0: 0x0  nop
    ctx->pc = 0x26f0b0u;
    // NOP
    // 0x26f0b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x26F0B4u;
    {
        const bool branch_taken_0x26f0b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0B4u;
        // 0x26f0b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0b4) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F0BCu;
    // 0x26f0bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F0BCu;
    {
        const bool branch_taken_0x26f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0BCu;
        // 0x26f0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0bc) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26F0C4u;
label_26f0c4:
    // 0x26f0c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f0c8:
    // 0x26f0c8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26f0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26f0cc:
    // 0x26f0cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26f0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f0d0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x26f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x26F0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0D4u;
        // 0x26f0d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F0DCu;
    // 0x26f0dc: 0x0  nop
    ctx->pc = 0x26f0dcu;
    // NOP
    ctx->pc = 0x26f0e0u;
}
