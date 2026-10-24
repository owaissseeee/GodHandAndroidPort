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

// Function: func_00304940
// Address: 0x304940 - 0x304a48
void func_00304940_0x304940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304940_0x304940");
#endif

    switch (ctx->pc) {
        case 0x30498cu: goto label_30498c;
        case 0x3049c0u: goto label_3049c0;
        case 0x3049d0u: goto label_3049d0;
        case 0x3049e0u: goto label_3049e0;
        case 0x3049f0u: goto label_3049f0;
        case 0x304a34u: goto label_304a34;
        default: break;
    }

    ctx->pc = 0x304940u;

    // 0x304940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x304940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x304944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304948: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x304948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30494c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x304950: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x304950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x304954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x304958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30495c: 0xc600011c  lwc1        $f0, 0x11C($s0)
    ctx->pc = 0x30495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304960: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x304960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304964: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x304964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304968: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x304968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30496c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30496cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x304970: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x304970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x304974: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x304974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x304978: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x304978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30497c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x30497cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x304980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x304980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304984: 0xc0ad8c4  jal         func_2B6310
    ctx->pc = 0x304984u;
    SET_GPR_U32(ctx, 31, 0x30498Cu);
    ctx->pc = 0x304988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304984u;
    // 0x304988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6310u, 0x304984u, 0x30498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30498Cu;
label_30498c:
    // 0x30498c: 0xc60c0174  lwc1        $f12, 0x174($s0)
    ctx->pc = 0x30498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304994: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x304994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304998: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x304998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30499c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x30499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049a0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3049a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3049a4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3049a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3049a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3049a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3049ac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3049ACu;
    {
        const bool branch_taken_0x3049ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3049B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049ACu;
        // 0x3049b0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049ac) {
            ctx->pc = 0x3049C0u;
            goto label_3049c0;
        }
    }
    ctx->pc = 0x3049B4u;
    // 0x3049b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3049b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049b8: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x3049B8u;
    SET_GPR_U32(ctx, 31, 0x3049C0u);
    ctx->pc = 0x3049BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049B8u;
    // 0x3049bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x3049B8u, 0x3049C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049C0u;
label_3049c0:
    // 0x3049c0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x3049c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3049c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3049c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049c8: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x3049C8u;
    SET_GPR_U32(ctx, 31, 0x3049D0u);
    ctx->pc = 0x3049CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049C8u;
    // 0x3049cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x3049C8u, 0x3049D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049D0u;
label_3049d0:
    // 0x3049d0: 0xc60c0170  lwc1        $f12, 0x170($s0)
    ctx->pc = 0x3049d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3049d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3049d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049d8: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x3049D8u;
    SET_GPR_U32(ctx, 31, 0x3049E0u);
    ctx->pc = 0x3049DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049D8u;
    // 0x3049dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x3049D8u, 0x3049E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049E0u;
label_3049e0:
    // 0x3049e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3049e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3049e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3049e8: 0xc07dfb6  jal         func_1F7ED8
    ctx->pc = 0x3049E8u;
    SET_GPR_U32(ctx, 31, 0x3049F0u);
    ctx->pc = 0x3049ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3049E8u;
    // 0x3049ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7ED8u, 0x3049E8u, 0x3049F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049F0u;
label_3049f0:
    // 0x3049f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3049f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3049f4: 0xc6010178  lwc1        $f1, 0x178($s0)
    ctx->pc = 0x3049f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3049f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3049f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3049fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3049fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x304a00: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x304a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304a04: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x304a04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304a08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x304a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x304a0c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x304a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x304a10: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x304a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x304a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a1c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x304a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304a20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x304a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304a24: 0xe602011c  swc1        $f2, 0x11C($s0)
    ctx->pc = 0x304a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x304a28: 0xe6010120  swc1        $f1, 0x120($s0)
    ctx->pc = 0x304a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x304a2c: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x304A2Cu;
    SET_GPR_U32(ctx, 31, 0x304A34u);
    ctx->pc = 0x304A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A2Cu;
    // 0x304a30: 0xe6000124  swc1        $f0, 0x124($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x304A2Cu, 0x304A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A34u;
label_304a34:
    // 0x304a34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x304a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x304a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304a3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x304a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304a40: 0x3e00008  jr          $ra
    ctx->pc = 0x304A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A40u;
        // 0x304a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304A48u;
}
