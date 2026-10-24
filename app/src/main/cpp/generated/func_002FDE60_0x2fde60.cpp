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

// Function: func_002FDE60
// Address: 0x2fde60 - 0x2fe0d8
void func_002FDE60_0x2fde60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FDE60_0x2fde60");
#endif

    switch (ctx->pc) {
        case 0x2fdec4u: goto label_2fdec4;
        case 0x2fded4u: goto label_2fded4;
        case 0x2fdee4u: goto label_2fdee4;
        case 0x2fdf64u: goto label_2fdf64;
        case 0x2fe01cu: goto label_2fe01c;
        case 0x2fe02cu: goto label_2fe02c;
        case 0x2fe040u: goto label_2fe040;
        case 0x2fe04cu: goto label_2fe04c;
        default: break;
    }

    ctx->pc = 0x2fde60u;

    // 0x2fde60: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2fde60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2fde64: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x2fde64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fde68: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2fde68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2fde6c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2fde6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2fde70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fde70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde74: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2fde74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2fde78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fde78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fde7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fde80: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fde80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fde84: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2fde84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fde88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fde8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fde8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fde90: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2fde90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2fde94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fde94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fde98: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2fde98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2fde9c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2fde9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdea0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2fdea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2fdea4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fdea4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2fdea8: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x2fdea8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2fdeac: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2fdeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2fdeb0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2fdeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2fdeb4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2fdeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2fdeb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2fdeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2fdebc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FDEBCu;
    SET_GPR_U32(ctx, 31, 0x2FDEC4u);
    ctx->pc = 0x2FDEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDEBCu;
    // 0x2fdec0: 0xe7b5001c  swc1        $f21, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FDEBCu, 0x2FDEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDEC4u;
label_2fdec4:
    // 0x2fdec4: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x2fdec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fdec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fdec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdecc: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2FDECCu;
    SET_GPR_U32(ctx, 31, 0x2FDED4u);
    ctx->pc = 0x2FDED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDECCu;
    // 0x2fded0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2FDECCu, 0x2FDED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDED4u;
label_2fded4:
    // 0x2fded4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fded4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fded8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fded8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdedc: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FDEDCu;
    SET_GPR_U32(ctx, 31, 0x2FDEE4u);
    ctx->pc = 0x2FDEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDEDCu;
    // 0x2fdee0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FDEDCu, 0x2FDEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDEE4u;
label_2fdee4:
    // 0x2fdee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2fdee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fdee8: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x2fdee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fdeec: 0x0  nop
    ctx->pc = 0x2fdeecu;
    // NOP
    // 0x2fdef0: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x2fdef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x2fdef4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FDEF4u;
    {
        const bool branch_taken_0x2fdef4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2FDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDEF4u;
        // 0x2fdef8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdef4) {
            ctx->pc = 0x2FDF10u;
            goto label_2fdf10;
        }
    }
    ctx->pc = 0x2FDEFCu;
    // 0x2fdefc: 0x3404fec0  ori         $a0, $zero, 0xFEC0
    ctx->pc = 0x2fdefcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65216);
    // 0x2fdf00: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x2fdf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x2fdf04: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2fdf04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fdf08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDF08u;
    {
        const bool branch_taken_0x2fdf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF08u;
        // 0x2fdf0c: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf08) {
            ctx->pc = 0x2FDF18u;
            goto label_2fdf18;
        }
    }
    ctx->pc = 0x2FDF10u;
label_2fdf10:
    // 0x2fdf10: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2FDF10u;
    {
        const bool branch_taken_0x2fdf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF10u;
        // 0x2fdf14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf10) {
            ctx->pc = 0x2FE0A0u;
            goto label_2fe0a0;
        }
    }
    ctx->pc = 0x2FDF18u;
label_2fdf18:
    // 0x2fdf18: 0x2462ff60  addiu       $v0, $v1, -0xA0
    ctx->pc = 0x2fdf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x2fdf1c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2fdf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fdf20: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2FDF20u;
    {
        const bool branch_taken_0x2fdf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF20u;
        // 0x2fdf24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf20) {
            ctx->pc = 0x2FE0A0u;
            goto label_2fe0a0;
        }
    }
    ctx->pc = 0x2FDF28u;
    // 0x2fdf28: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x2fdf28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x2fdf2c: 0x8e62aff0  lw          $v0, -0x5010($s3)
    ctx->pc = 0x2fdf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2fdf30: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2fdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2fdf34: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2fdf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fdf38: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2fdf38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdf3c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2fdf3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdf40: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fdf40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdf44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fdf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdf48: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2fdf48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fdf4c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2fdf4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fdf50: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2fdf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdf54: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2fdf54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fdf58: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2fdf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fdf5c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2FDF5Cu;
    SET_GPR_U32(ctx, 31, 0x2FDF64u);
    ctx->pc = 0x2FDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDF5Cu;
    // 0x2fdf60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2FDF5Cu, 0x2FDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDF64u;
label_2fdf64:
    // 0x2fdf64: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2fdf64u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2fdf68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fdf68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fdf6c: 0x0  nop
    ctx->pc = 0x2fdf6cu;
    // NOP
    // 0x2fdf70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fdf70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdf74: 0x0  nop
    ctx->pc = 0x2fdf74u;
    // NOP
    // 0x2fdf78: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2FDF78u;
    {
        const bool branch_taken_0x2fdf78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDF78u;
        // 0x2fdf7c: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdf78) {
            ctx->pc = 0x2FDFB4u;
            goto label_2fdfb4;
        }
    }
    ctx->pc = 0x2FDF80u;
    // 0x2fdf80: 0x0  nop
    ctx->pc = 0x2fdf80u;
    // NOP
    // 0x2fdf84: 0x0  nop
    ctx->pc = 0x2fdf84u;
    // NOP
    // 0x2fdf88: 0x4602a883  div.s       $f2, $f21, $f2
    ctx->pc = 0x2fdf88u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[2]);
    // 0x2fdf8c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x2fdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdf90: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2fdf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdf94: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2fdf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdf98: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2fdf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2fdf9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fdf9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fdfa0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2fdfa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2fdfa4: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2fdfa4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2fdfa8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2fdfa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fdfac: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2fdfacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fdfb0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2fdfb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2fdfb4:
    // 0x2fdfb4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fdfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fdfb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2fdfb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdfbc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2fdfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdfc0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2fdfc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fdfc4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdfc8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdfc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fdfcc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2fdfccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2fdfd0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2fdfd0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2fdfd4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2fdfd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdfd8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdfdc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2fdfdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdfe0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2fdfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdfe4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2fdfe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fdfe8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdfec: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdfecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fdff0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2fdff0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fdff4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2fdff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2fdff8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2fdff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fdffc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2fdffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe000: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2fe000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2fe004: 0x8e65aff0  lw          $a1, -0x5010($s3)
    ctx->pc = 0x2fe004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294946800)));
    // 0x2fe008: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2fe008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fe00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe010: 0x24a60140  addiu       $a2, $a1, 0x140
    ctx->pc = 0x2fe010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2fe014: 0xc051d52  jal         func_147548
    ctx->pc = 0x2FE014u;
    SET_GPR_U32(ctx, 31, 0x2FE01Cu);
    ctx->pc = 0x2FE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE014u;
    // 0x2fe018: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2FE014u, 0x2FE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE01Cu;
label_2fe01c:
    // 0x2fe01c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2fe01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe024: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2FE024u;
    SET_GPR_U32(ctx, 31, 0x2FE02Cu);
    ctx->pc = 0x2FE028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE024u;
    // 0x2fe028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2FE024u, 0x2FE02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE02Cu;
label_2fe02c:
    // 0x2fe02c: 0xc7b4002c  lwc1        $f20, 0x2C($sp)
    ctx->pc = 0x2fe02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fe030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fe034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe038: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2FE038u;
    SET_GPR_U32(ctx, 31, 0x2FE040u);
    ctx->pc = 0x2FE03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE038u;
    // 0x2fe03c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2FE038u, 0x2FE040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE040u;
label_2fe040:
    // 0x2fe040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fe040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe044: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2FE044u;
    SET_GPR_U32(ctx, 31, 0x2FE04Cu);
    ctx->pc = 0x2FE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE044u;
    // 0x2fe048: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2FE044u, 0x2FE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE04Cu;
label_2fe04c:
    // 0x2fe04c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2fe04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2fe050: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FE050u;
    {
        const bool branch_taken_0x2fe050 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2FE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE050u;
        // 0x2fe054: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe050) {
            ctx->pc = 0x2FE06Cu;
            goto label_2fe06c;
        }
    }
    ctx->pc = 0x2FE058u;
    // 0x2fe058: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2fe058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2fe05c: 0x8c443bbc  lw          $a0, 0x3BBC($v0)
    ctx->pc = 0x2fe05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15292)));
    // 0x2fe060: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2fe060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2fe064: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE064u;
    {
        const bool branch_taken_0x2fe064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE064u;
        // 0x2fe068: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe064) {
            ctx->pc = 0x2FE08Cu;
            goto label_2fe08c;
        }
    }
    ctx->pc = 0x2FE06Cu;
label_2fe06c:
    // 0x2fe06c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2fe06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2fe070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe074: 0x0  nop
    ctx->pc = 0x2fe074u;
    // NOP
    // 0x2fe078: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2fe078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fe07c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fe07cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2fe080: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2fe080u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fe084: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2fe084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2fe088: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2fe088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2fe08c:
    // 0x2fe08c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2fe08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2fe090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2fe094: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe098: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2fe098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2fe09c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2fe09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_2fe0a0:
    // 0x2fe0a0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2fe0a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fe0a4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2fe0a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fe0a8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2fe0a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fe0ac: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2fe0acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fe0b0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2fe0b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fe0b4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2fe0b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fe0b8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2fe0b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fe0bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2fe0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fe0c0: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x2fe0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fe0c4: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2fe0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fe0c8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2fe0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fe0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0CCu;
        // 0x2fe0d0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE0D4u;
    // 0x2fe0d4: 0x0  nop
    ctx->pc = 0x2fe0d4u;
    // NOP
    ctx->pc = 0x2fe0d8u;
}
