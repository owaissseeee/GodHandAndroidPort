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

// Function: cCamera__calcRotation
// Address: 0x138358 - 0x138470
void cCamera__calcRotation_0x138358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera__calcRotation_0x138358");
#endif

    switch (ctx->pc) {
        case 0x1383d4u: goto label_1383d4;
        case 0x1383ecu: goto label_1383ec;
        case 0x1383fcu: goto label_1383fc;
        case 0x138438u: goto label_138438;
        default: break;
    }

    ctx->pc = 0x138358u;

    // 0x138358: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x138358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13835c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x13835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x138360: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x138360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x138364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138368: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x138368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x13836c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x138370: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x138370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138374: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x138374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x138378: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x138378u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13837c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x13837cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x138380: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x138380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138384: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138388: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x138388u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13838c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x138390: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x138390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x138394: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x138394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138398: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x138398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13839c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x13839cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1383a0: 0x0  nop
    ctx->pc = 0x1383a0u;
    // NOP
    // 0x1383a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1383A4u;
    {
        const bool branch_taken_0x1383a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1383A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A4u;
        // 0x1383a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a4) {
            ctx->pc = 0x1383C8u;
            goto label_1383c8;
        }
    }
    ctx->pc = 0x1383ACu;
    // 0x1383ac: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1383acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1383b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1383b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1383b4: 0x0  nop
    ctx->pc = 0x1383b4u;
    // NOP
    // 0x1383b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1383B8u;
    {
        const bool branch_taken_0x1383b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1383BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383B8u;
        // 0x1383bc: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383b8) {
            ctx->pc = 0x1383CCu;
            goto label_1383cc;
        }
    }
    ctx->pc = 0x1383C0u;
    // 0x1383c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1383C0u;
    {
        const bool branch_taken_0x1383c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383C0u;
        // 0x1383c4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383c0) {
            ctx->pc = 0x1383D8u;
            goto label_1383d8;
        }
    }
    ctx->pc = 0x1383C8u;
label_1383c8:
    // 0x1383c8: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x1383c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1383cc:
    // 0x1383cc: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1383CCu;
    SET_GPR_U32(ctx, 31, 0x1383D4u);
    ctx->pc = 0x1383D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1383CCu;
    // 0x1383d0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1383CCu, 0x1383D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1383D4u;
label_1383d4:
    // 0x1383d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1383d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1383d8:
    // 0x1383d8: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1383d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1383dc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1383dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1383e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1383e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383e4: 0xc051e62  jal         func_147988
    ctx->pc = 0x1383E4u;
    SET_GPR_U32(ctx, 31, 0x1383ECu);
    ctx->pc = 0x1383E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1383E4u;
    // 0x1383e8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1383E4u, 0x1383ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1383ECu;
label_1383ec:
    // 0x1383ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1383ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1383f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1383f4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1383F4u;
    SET_GPR_U32(ctx, 31, 0x1383FCu);
    ctx->pc = 0x1383F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1383F4u;
    // 0x1383f8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1383F4u, 0x1383FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1383FCu;
label_1383fc:
    // 0x1383fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1383fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x138400: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x138400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138404: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x138404u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138408: 0x0  nop
    ctx->pc = 0x138408u;
    // NOP
    // 0x13840c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13840Cu;
    {
        const bool branch_taken_0x13840c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13840Cu;
        // 0x138410: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13840c) {
            ctx->pc = 0x13842Cu;
            goto label_13842c;
        }
    }
    ctx->pc = 0x138414u;
    // 0x138414: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x138414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138418: 0x0  nop
    ctx->pc = 0x138418u;
    // NOP
    // 0x13841c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13841Cu;
    {
        const bool branch_taken_0x13841c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x138420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13841Cu;
        // 0x138420: 0xc7ac0004  lwc1        $f12, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13841c) {
            ctx->pc = 0x138430u;
            goto label_138430;
        }
    }
    ctx->pc = 0x138424u;
    // 0x138424: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138424u;
        // 0x138428: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138424) {
            ctx->pc = 0x138440u;
            goto label_138440;
        }
    }
    ctx->pc = 0x13842Cu;
label_13842c:
    // 0x13842c: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x13842cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138430:
    // 0x138430: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x138430u;
    SET_GPR_U32(ctx, 31, 0x138438u);
    ctx->pc = 0x138434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138430u;
    // 0x138434: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x138430u, 0x138438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138438u;
label_138438:
    // 0x138438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x138438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13843c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x13843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_138440:
    // 0x138440: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x138440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x138444: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x138444u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x138448: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x138448u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13844c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13844cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138450: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x138450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x138454: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x138454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138458: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x138458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13845c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138460: 0x3e00008  jr          $ra
    ctx->pc = 0x138460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138460u;
        // 0x138464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138468u;
    // 0x138468: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x13846c: 0x0  nop
    ctx->pc = 0x13846cu;
    // NOP
    ctx->pc = 0x138470u;
}
