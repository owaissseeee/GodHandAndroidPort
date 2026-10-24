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

// Function: func_002F6740
// Address: 0x2f6740 - 0x2f6af0
void func_002F6740_0x2f6740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6740_0x2f6740");
#endif

    switch (ctx->pc) {
        case 0x2f6754u: goto label_2f6754;
        case 0x2f6788u: goto label_2f6788;
        case 0x2f6808u: goto label_2f6808;
        case 0x2f6940u: goto label_2f6940;
        case 0x2f697cu: goto label_2f697c;
        case 0x2f6ab0u: goto label_2f6ab0;
        default: break;
    }

    ctx->pc = 0x2f6740u;

    // 0x2f6740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6744: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f6744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2f6748: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f6748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f674c: 0xc0bb0c4  jal         func_2EC310
    ctx->pc = 0x2F674Cu;
    SET_GPR_U32(ctx, 31, 0x2F6754u);
    ctx->pc = 0x2F6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F674Cu;
    // 0x2f6750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC310u, 0x2F674Cu, 0x2F6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6754u;
label_2f6754:
    // 0x2f6754: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x2f6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f675c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f675cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6760: 0x0  nop
    ctx->pc = 0x2f6760u;
    // NOP
    // 0x2f6764: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f6764u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6768: 0x0  nop
    ctx->pc = 0x2f6768u;
    // NOP
    // 0x2f676c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2F676Cu;
    {
        const bool branch_taken_0x2f676c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F676Cu;
        // 0x2f6770: 0x82020249  lb          $v0, 0x249($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f676c) {
            ctx->pc = 0x2F67F0u;
            goto label_2f67f0;
        }
    }
    ctx->pc = 0x2F6774u;
    // 0x2f6774: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6778: 0x5880006f  blezl       $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2F6778u;
    {
        const bool branch_taken_0x2f6778 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x2f6778) {
            ctx->pc = 0x2F677Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6778u;
            // 0x2f677c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6938u;
            goto label_2f6938;
        }
    }
    ctx->pc = 0x2F6780u;
    // 0x2f6780: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f6784: 0x0  nop
    ctx->pc = 0x2f6784u;
    // NOP
label_2f6788:
    // 0x2f6788: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2f6788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f678c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f6790: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2f6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f6794: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6794u;
    {
        const bool branch_taken_0x2f6794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6794) {
            ctx->pc = 0x2F6798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6794u;
            // 0x2f6798: 0x8e0202c0  lw          $v0, 0x2C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F67B8u;
            goto label_2f67b8;
        }
    }
    ctx->pc = 0x2F679Cu;
    // 0x2f679c: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2f679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f67a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f67a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f67a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f67a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f67a8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f67a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f67ac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f67acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f67b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f67b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f67b4: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_2f67b8:
    // 0x2f67b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f67bc: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2f67bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f67c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F67C0u;
    {
        const bool branch_taken_0x2f67c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67C0u;
        // 0x2f67c4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67c0) {
            ctx->pc = 0x2F67E0u;
            goto label_2f67e0;
        }
    }
    ctx->pc = 0x2F67C8u;
    // 0x2f67c8: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2f67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f67cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f67ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f67d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f67d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f67d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f67d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f67d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f67dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f67dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f67e0:
    // 0x2f67e0: 0x5c80ffe9  bgtzl       $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F67E0u;
    {
        const bool branch_taken_0x2f67e0 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2f67e0) {
            ctx->pc = 0x2F67E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F67E0u;
            // 0x2f67e4: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6788;
        }
    }
    ctx->pc = 0x2F67E8u;
    // 0x2f67e8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F67E8u;
    {
        const bool branch_taken_0x2f67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67E8u;
        // 0x2f67ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67e8) {
            ctx->pc = 0x2F6938u;
            goto label_2f6938;
        }
    }
    ctx->pc = 0x2F67F0u;
label_2f67f0:
    // 0x2f67f0: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f67f4: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2F67F4u;
    {
        const bool branch_taken_0x2f67f4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2F67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67F4u;
        // 0x2f67f8: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f67f4) {
            ctx->pc = 0x2F6934u;
            goto label_2f6934;
        }
    }
    ctx->pc = 0x2F67FCu;
    // 0x2f67fc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f6800: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2f6800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f6804: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f6804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2f6808:
    // 0x2f6808: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2f6808u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f680c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2f680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6810: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f6810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6814: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2f6814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f6818: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2f6818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f681c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f681cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f6820: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f6820u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6824: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f6824u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6828: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f682c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f682cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6830: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6834: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x2f6834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6838: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2f6838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f683c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6840: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6840u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6844: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f6844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f6848: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f6848u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f684c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f684cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6850: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6854: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f6854u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6858: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f685c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f685cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f6860: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6864: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6868: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x2f6868u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f686c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f686cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6870: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6874: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f6874u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6878: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f687c: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F687Cu;
    {
        const bool branch_taken_0x2f687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F687Cu;
        // 0x2f6880: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f687c) {
            ctx->pc = 0x2F6898u;
            goto label_2f6898;
        }
    }
    ctx->pc = 0x2F6884u;
    // 0x2f6884: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2f6884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2f6888: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f688c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f688cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f6890: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6894: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f6894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f6898:
    // 0x2f6898: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f689c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2f689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f68a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f68a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68a4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2f68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f68a8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2f68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f68ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f68acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f68b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f68b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f68b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f68b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f68b8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68bc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f68bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f68c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f68c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68c4: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x2f68c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f68c8: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2f68c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f68cc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68d0: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f68d4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f68d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f68d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f68d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f68dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f68dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f68e0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68e4: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f68e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f68e8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f68e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f68ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f68f0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f68f4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f68f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f68f8: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x2f68f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f68fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f68fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f6900: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f6900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6904: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f6904u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f6908: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f6908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f690c: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F690Cu;
    {
        const bool branch_taken_0x2f690c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F690Cu;
        // 0x2f6910: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f690c) {
            ctx->pc = 0x2F6928u;
            goto label_2f6928;
        }
    }
    ctx->pc = 0x2F6914u;
    // 0x2f6914: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2f6914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2f6918: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f691c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f691cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f6920: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6924: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f6924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f6928:
    // 0x2f6928: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f6928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f692c: 0x5cc0ffb6  bgtzl       $a2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2F692Cu;
    {
        const bool branch_taken_0x2f692c = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x2f692c) {
            ctx->pc = 0x2F6930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F692Cu;
            // 0x2f6930: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6808;
        }
    }
    ctx->pc = 0x2F6934u;
label_2f6934:
    // 0x2f6934: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f6934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f6938:
    // 0x2f6938: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F6938u;
    SET_GPR_U32(ctx, 31, 0x2F6940u);
    ctx->pc = 0x2F693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6938u;
    // 0x2f693c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F6938u, 0x2F6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6940u;
label_2f6940:
    // 0x2f6940: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f6944: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6944u;
    {
        const bool branch_taken_0x2f6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6944u;
        // 0x2f6948: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6944) {
            ctx->pc = 0x2F6960u;
            goto label_2f6960;
        }
    }
    ctx->pc = 0x2F694Cu;
    // 0x2f694c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f6950: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6954: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f6958: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f695c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f695cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6960:
    // 0x2f6960: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2f6964: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6964u;
    {
        const bool branch_taken_0x2f6964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6964) {
            ctx->pc = 0x2F6968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6964u;
            // 0x2f6968: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F69A0u;
            goto label_2f69a0;
        }
    }
    ctx->pc = 0x2F696Cu;
    // 0x2f696c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f6970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6974: 0xc0bd896  jal         func_2F6258
    ctx->pc = 0x2F6974u;
    SET_GPR_U32(ctx, 31, 0x2F697Cu);
    ctx->pc = 0x2F6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6974u;
    // 0x2f6978: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6258u, 0x2F6974u, 0x2F697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F697Cu;
label_2f697c:
    // 0x2f697c: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f6980: 0x105d003e  beq         $v0, $sp, . + 4 + (0x3E << 2)
    ctx->pc = 0x2F6980u;
    {
        const bool branch_taken_0x2f6980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6980u;
        // 0x2f6984: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6980) {
            ctx->pc = 0x2F6A7Cu;
            goto label_2f6a7c;
        }
    }
    ctx->pc = 0x2F6988u;
    // 0x2f6988: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f6988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f698c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6990: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f6994: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6998: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F6998u;
    {
        const bool branch_taken_0x2f6998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6998u;
        // 0x2f699c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6998) {
            ctx->pc = 0x2F6A7Cu;
            goto label_2f6a7c;
        }
    }
    ctx->pc = 0x2F69A0u;
label_2f69a0:
    // 0x2f69a0: 0x4820026  bltzl       $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F69A0u;
    {
        const bool branch_taken_0x2f69a0 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2f69a0) {
            ctx->pc = 0x2F69A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F69A0u;
            // 0x2f69a4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6A3Cu;
            goto label_2f6a3c;
        }
    }
    ctx->pc = 0x2F69A8u;
    // 0x2f69a8: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x2f69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f69ac: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x2f69acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f69b0: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2f69b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f69b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F69B4u;
    {
        const bool branch_taken_0x2f69b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69B4u;
        // 0x2f69b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69b4) {
            ctx->pc = 0x2F69D0u;
            goto label_2f69d0;
        }
    }
    ctx->pc = 0x2F69BCu;
    // 0x2f69bc: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f69bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f69c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f69c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f69c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F69C8u;
    {
        const bool branch_taken_0x2f69c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69C8u;
        // 0x2f69cc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69c8) {
            ctx->pc = 0x2F69D4u;
            goto label_2f69d4;
        }
    }
    ctx->pc = 0x2F69D0u;
label_2f69d0:
    // 0x2f69d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f69d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f69d4:
    // 0x2f69d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F69D4u;
    {
        const bool branch_taken_0x2f69d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69D4u;
        // 0x2f69d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69d4) {
            ctx->pc = 0x2F6A38u;
            goto label_2f6a38;
        }
    }
    ctx->pc = 0x2F69DCu;
    // 0x2f69dc: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x2f69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f69e0: 0x8e040308  lw          $a0, 0x308($s0)
    ctx->pc = 0x2f69e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x2f69e4: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f69e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f69e8: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F69E8u;
    {
        const bool branch_taken_0x2f69e8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69E8u;
        // 0x2f69ec: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69e8) {
            ctx->pc = 0x2F69F4u;
            goto label_2f69f4;
        }
    }
    ctx->pc = 0x2F69F0u;
    // 0x2f69f0: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f69f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f69f4:
    // 0x2f69f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f69f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f69f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F69F8u;
    {
        const bool branch_taken_0x2f69f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69F8u;
        // 0x2f69fc: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f69f8) {
            ctx->pc = 0x2F6A10u;
            goto label_2f6a10;
        }
    }
    ctx->pc = 0x2F6A00u;
    // 0x2f6a00: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f6a04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f6a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6A08u;
    {
        const bool branch_taken_0x2f6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A08u;
        // 0x2f6a0c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a08) {
            ctx->pc = 0x2F6A14u;
            goto label_2f6a14;
        }
    }
    ctx->pc = 0x2F6A10u;
label_2f6a10:
    // 0x2f6a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6a14:
    // 0x2f6a14: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x2f6a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6a18: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x2f6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6a1c: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6a20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6a24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f6a28: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f6a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f6a2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6a30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F6A30u;
    {
        const bool branch_taken_0x2f6a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A30u;
        // 0x2f6a34: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a30) {
            ctx->pc = 0x2F6A5Cu;
            goto label_2f6a5c;
        }
    }
    ctx->pc = 0x2F6A38u;
label_2f6a38:
    // 0x2f6a38: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2f6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2f6a3c:
    // 0x2f6a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6a40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f6a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f6a44: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x2f6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f6a48: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x2f6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6a4c: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2f6a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6a50: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f6a54: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f6a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6a58: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f6a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f6a5c:
    // 0x2f6a5c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2f6a5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f6a60: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6A60u;
    {
        const bool branch_taken_0x2f6a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A60u;
        // 0x2f6a64: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a60) {
            ctx->pc = 0x2F6A7Cu;
            goto label_2f6a7c;
        }
    }
    ctx->pc = 0x2F6A68u;
    // 0x2f6a68: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2f6a68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f6a6c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f6a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6a70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f6a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f6a74: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2f6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6a78: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2f6a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f6a7c:
    // 0x2f6a7c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2f6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2f6a80: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2f6a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f6a88: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F6A88u;
    {
        const bool branch_taken_0x2f6a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6a88) {
            ctx->pc = 0x2F6A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6A88u;
            // 0x2f6a8c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6AE4u;
            goto label_2f6ae4;
        }
    }
    ctx->pc = 0x2F6A90u;
    // 0x2f6a90: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f6a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f6a94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6a98: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F6A98u;
    {
        const bool branch_taken_0x2f6a98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A98u;
        // 0x2f6a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a98) {
            ctx->pc = 0x2F6AE0u;
            goto label_2f6ae0;
        }
    }
    ctx->pc = 0x2F6AA0u;
    // 0x2f6aa0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2f6aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2f6aa4: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x2f6aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x2f6aa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6aac: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x2f6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2f6ab0:
    // 0x2f6ab0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2f6ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f6ab4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f6ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f6ab8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f6abc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f6abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f6ac0: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f6ac4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f6ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6ac8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2f6ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f6acc: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f6accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f6ad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f6ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f6ad4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f6ad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f6ad8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F6AD8u;
    {
        const bool branch_taken_0x2f6ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6ad8) {
            ctx->pc = 0x2F6ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6AD8u;
            // 0x2f6adc: 0x8e0302bc  lw          $v1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6ab0;
        }
    }
    ctx->pc = 0x2F6AE0u;
label_2f6ae0:
    // 0x2f6ae0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f6ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f6ae4:
    // 0x2f6ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6AE8u;
        // 0x2f6aec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6AF0u;
}
