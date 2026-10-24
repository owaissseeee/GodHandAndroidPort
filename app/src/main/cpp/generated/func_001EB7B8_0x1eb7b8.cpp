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

// Function: func_001EB7B8
// Address: 0x1eb7b8 - 0x1eb9f8
void func_001EB7B8_0x1eb7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EB7B8_0x1eb7b8");
#endif

    switch (ctx->pc) {
        case 0x1eb824u: goto label_1eb824;
        case 0x1eb8ecu: goto label_1eb8ec;
        default: break;
    }

    ctx->pc = 0x1eb7b8u;

    // 0x1eb7b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1eb7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1eb7bc: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1eb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x1eb7c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1eb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1eb7c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1eb7c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1eb7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1eb7cc: 0x24638230  addiu       $v1, $v1, -0x7DD0
    ctx->pc = 0x1eb7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935088));
    // 0x1eb7d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb7d4: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
    // 0x1eb7d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb7dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1eb7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1eb7e0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1eb7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eb7e4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1eb7e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x568230u));
    // 0x1eb7e8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1eb7e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x568220u));
    // 0x1eb7ec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1eb7ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1eb7f0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1eb7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb7f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1eb7f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1eb7f8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1eb7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1eb7fc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1eb7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb800: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x1eb800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
    // 0x1eb804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb808: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x1eb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb80c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb810: 0x0  nop
    ctx->pc = 0x1eb810u;
    // NOP
    // 0x1eb814: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1EB814u;
    {
        const bool branch_taken_0x1eb814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB814u;
        // 0x1eb818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb814) {
            ctx->pc = 0x1EB8E4u;
            goto label_1eb8e4;
        }
    }
    ctx->pc = 0x1EB81Cu;
    // 0x1eb81c: 0xc07b0e2  jal         func_1EC388
    ctx->pc = 0x1EB81Cu;
    SET_GPR_U32(ctx, 31, 0x1EB824u);
    ctx->pc = 0x1EB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB81Cu;
    // 0x1eb820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC388u, 0x1EB81Cu, 0x1EB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB824u;
label_1eb824:
    // 0x1eb824: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x1EB824u;
    {
        const bool branch_taken_0x1eb824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb824) {
            ctx->pc = 0x1EB828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB824u;
            // 0x1eb828: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB82Cu;
    // 0x1eb82c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1eb82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eb830: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb834: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB834u;
    {
        const bool branch_taken_0x1eb834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb834) {
            ctx->pc = 0x1EB838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB834u;
            // 0x1eb838: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB864u;
            goto label_1eb864;
        }
    }
    ctx->pc = 0x1EB83Cu;
    // 0x1eb83c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eb83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eb840: 0x52020014  beql        $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB840u;
    {
        const bool branch_taken_0x1eb840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eb840) {
            ctx->pc = 0x1EB844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB840u;
            // 0x1eb844: 0x8e220200  lw          $v0, 0x200($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB894u;
            goto label_1eb894;
        }
    }
    ctx->pc = 0x1EB848u;
    // 0x1eb848: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eb848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb84c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1eb84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1eb850: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eb850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb854: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1eb854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1eb858: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eb858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb85c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EB85Cu;
    {
        const bool branch_taken_0x1eb85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB85Cu;
        // 0x1eb860: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb85c) {
            ctx->pc = 0x1EB890u;
            goto label_1eb890;
        }
    }
    ctx->pc = 0x1EB864u;
label_1eb864:
    // 0x1eb864: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1eb864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1eb868: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1eb86c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eb86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb874: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1eb874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb878: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1eb878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb87c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1eb87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eb880: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1eb880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1eb884: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1eb884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1eb888: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1eb888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1eb88c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1eb88cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1eb890:
    // 0x1eb890: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1eb894:
    // 0x1eb894: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1eb894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb898: 0xc4420208  lwc1        $f2, 0x208($v0)
    ctx->pc = 0x1eb898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb89c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1eb89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb8a0: 0x0  nop
    ctx->pc = 0x1eb8a0u;
    // NOP
    // 0x1eb8a4: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x1EB8A4u;
    {
        const bool branch_taken_0x1eb8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EB8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8A4u;
        // 0x1eb8a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8a4) {
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB8ACu;
    // 0x1eb8ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1eb8acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1eb8b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1eb8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1eb8b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eb8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eb8b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb8bc: 0x0  nop
    ctx->pc = 0x1eb8bcu;
    // NOP
    // 0x1eb8c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb8c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb8c4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1eb8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1eb8c8: 0xe4400208  swc1        $f0, 0x208($v0)
    ctx->pc = 0x1eb8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 520), bits); }
    // 0x1eb8cc: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb8d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1eb8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb8d4: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x1eb8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1eb8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1eb8dc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1EB8DCu;
    {
        const bool branch_taken_0x1eb8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8DCu;
        // 0x1eb8e0: 0xe4400218  swc1        $f0, 0x218($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8dc) {
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB8E4u;
label_1eb8e4:
    // 0x1eb8e4: 0xc07b0e2  jal         func_1EC388
    ctx->pc = 0x1EB8E4u;
    SET_GPR_U32(ctx, 31, 0x1EB8ECu);
    ctx->pc = 0x1EB8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8E4u;
    // 0x1eb8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC388u, 0x1EB8E4u, 0x1EB8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8ECu;
label_1eb8ec:
    // 0x1eb8ec: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB8ECu;
            // 0x1eb8f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB8F4u;
    // 0x1eb8f4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1eb8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1eb8f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb8fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB8FCu;
    {
        const bool branch_taken_0x1eb8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8fc) {
            ctx->pc = 0x1EB900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB8FCu;
            // 0x1eb900: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB92Cu;
            goto label_1eb92c;
        }
    }
    ctx->pc = 0x1EB904u;
    // 0x1eb904: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1eb904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1eb908: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB908u;
    {
        const bool branch_taken_0x1eb908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB908u;
        // 0x1eb90c: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb908) {
            ctx->pc = 0x1EB95Cu;
            goto label_1eb95c;
        }
    }
    ctx->pc = 0x1EB910u;
    // 0x1eb910: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1eb910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb914: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1eb914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1eb918: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1eb918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb91c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1eb91cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1eb920: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1eb920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb924: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EB924u;
    {
        const bool branch_taken_0x1eb924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB924u;
        // 0x1eb928: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb924) {
            ctx->pc = 0x1EB958u;
            goto label_1eb958;
        }
    }
    ctx->pc = 0x1EB92Cu;
label_1eb92c:
    // 0x1eb92c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1eb92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1eb930: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1eb930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1eb934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1eb934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1eb938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb93c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1eb93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb940: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1eb940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb944: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1eb944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eb948: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1eb948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1eb94c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1eb94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1eb950: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1eb950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1eb954: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x1eb954u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1eb958:
    // 0x1eb958: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1eb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eb95c:
    // 0x1eb95c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1eb95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1eb960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1eb960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb964: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1eb964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb968: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb96c: 0xc4420208  lwc1        $f2, 0x208($v0)
    ctx->pc = 0x1eb96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb970: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1eb970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb974: 0x0  nop
    ctx->pc = 0x1eb974u;
    // NOP
    // 0x1eb978: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1EB978u;
    {
        const bool branch_taken_0x1eb978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb978) {
            ctx->pc = 0x1EB9A4u;
            goto label_1eb9a4;
        }
    }
    ctx->pc = 0x1EB980u;
    // 0x1eb980: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1eb980u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1eb984: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1eb984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1eb988: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1eb988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1eb98c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eb98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eb990: 0x0  nop
    ctx->pc = 0x1eb990u;
    // NOP
    // 0x1eb994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb998: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1eb998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1eb99c: 0xe4400208  swc1        $f0, 0x208($v0)
    ctx->pc = 0x1eb99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 520), bits); }
    // 0x1eb9a0: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_1eb9a4:
    // 0x1eb9a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1eb9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1eb9a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1eb9a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1eb9ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1eb9acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb9b0: 0xc4410218  lwc1        $f1, 0x218($v0)
    ctx->pc = 0x1eb9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9b4: 0xc4400208  lwc1        $f0, 0x208($v0)
    ctx->pc = 0x1eb9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb9b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1eb9b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1eb9bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1eb9bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1eb9c0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1eb9c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb9c4: 0xe4410218  swc1        $f1, 0x218($v0)
    ctx->pc = 0x1eb9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 536), bits); }
    // 0x1eb9c8: 0x8e240200  lw          $a0, 0x200($s1)
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1eb9cc: 0xc4810208  lwc1        $f1, 0x208($a0)
    ctx->pc = 0x1eb9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb9d0: 0xc4800218  lwc1        $f0, 0x218($a0)
    ctx->pc = 0x1eb9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb9d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eb9d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb9d8: 0x0  nop
    ctx->pc = 0x1eb9d8u;
    // NOP
    // 0x1eb9dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB9DCu;
    {
        const bool branch_taken_0x1eb9dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb9dc) {
            ctx->pc = 0x1EB9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB9DCu;
            // 0x1eb9e0: 0xe4810218  swc1        $f1, 0x218($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 536), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9E4u;
            goto label_1eb9e4;
        }
    }
    ctx->pc = 0x1EB9E4u;
label_1eb9e4:
    // 0x1eb9e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1eb9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1eb9e8:
    // 0x1eb9e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1eb9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eb9ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1eb9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9F0u;
        // 0x1eb9f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB9F8u;
}
