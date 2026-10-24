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
// Function: ChkPlCannonBallHit__15cR301CannonGame
// Address: 0x79cbf0 - 0x79cd88
void ChkPlCannonBallHit__15cR301CannonGame_0x79cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChkPlCannonBallHit__15cR301CannonGame_0x79cbf0");
#endif

    switch (ctx->pc) {
        case 0x79cc20u: goto label_79cc20;
        case 0x79cc48u: goto label_79cc48;
        case 0x79cd18u: goto label_79cd18;
        case 0x79cd30u: goto label_79cd30;
        case 0x79cd38u: goto label_79cd38;
        default: break;
    }

    ctx->pc = 0x79cbf0u;

    // 0x79cbf0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79cbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x79cbf4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79cbf8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79cbfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79cbfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cc00: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79cc04: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79cc08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79cc0c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79cc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79cc10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79cc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79cc14: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x79cc14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x79cc18: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79CC18u;
    SET_GPR_U32(ctx, 31, 0x79CC20u);
    ctx->pc = 0x79CC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CC18u;
    // 0x79cc1c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79CC18u, 0x79CC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CC20u;
label_79cc20:
    // 0x79cc20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79cc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cc24: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x79CC24u;
    {
        const bool branch_taken_0x79cc24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC24u;
        // 0x79cc28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc24) {
            ctx->pc = 0x79CD58u;
            goto label_79cd58;
        }
    }
    ctx->pc = 0x79CC2Cu;
    // 0x79cc2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79cc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79cc30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79cc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79cc34: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x79cc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x79cc38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79cc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79cc3c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x79cc3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79cc40: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79cc40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79cc44: 0x2670004c  addiu       $s0, $s3, 0x4C
    ctx->pc = 0x79cc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
label_79cc48:
    // 0x79cc48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79cc4c: 0x5060003f  beql        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x79CC4Cu;
    {
        const bool branch_taken_0x79cc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cc4c) {
            ctx->pc = 0x79CC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CC4Cu;
            // 0x79cc50: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CD4Cu;
            goto label_79cd4c;
        }
    }
    ctx->pc = 0x79CC54u;
    // 0x79cc54: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x79cc54u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79cc58: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x79cc58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x79cc5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79cc60: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x79CC60u;
    {
        const bool branch_taken_0x79cc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cc60) {
            ctx->pc = 0x79CC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CC60u;
            // 0x79cc64: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CD4Cu;
            goto label_79cd4c;
        }
    }
    ctx->pc = 0x79CC68u;
    // 0x79cc68: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79cc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79cc6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79cc70: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79CC70u;
    {
        const bool branch_taken_0x79cc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cc70) {
            ctx->pc = 0x79CC74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CC70u;
            // 0x79cc74: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CCA0u;
            goto label_79cca0;
        }
    }
    ctx->pc = 0x79CC78u;
    // 0x79cc78: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x79cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x79cc7c: 0x53a20013  beql        $sp, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79CC7Cu;
    {
        const bool branch_taken_0x79cc7c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x79cc7c) {
            ctx->pc = 0x79CC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CC7Cu;
            // 0x79cc80: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CCCCu;
            goto label_79cccc;
        }
    }
    ctx->pc = 0x79CC84u;
    // 0x79cc84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x79cc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79cc88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79cc88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79cc8c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79cc90: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79cc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79cc94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79cc98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x79CC98u;
    {
        const bool branch_taken_0x79cc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC98u;
        // 0x79cc9c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cc98) {
            ctx->pc = 0x79CCC8u;
            goto label_79ccc8;
        }
    }
    ctx->pc = 0x79CCA0u;
label_79cca0:
    // 0x79cca0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x79cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x79cca4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79cca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79cca8: 0x13b20007  beq         $sp, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CCA8u;
    {
        const bool branch_taken_0x79cca8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 18));
        ctx->pc = 0x79CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CCA8u;
        // 0x79ccac: 0xe655000c  swc1        $f21, 0xC($s2) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cca8) {
            ctx->pc = 0x79CCC8u;
            goto label_79ccc8;
        }
    }
    ctx->pc = 0x79CCB0u;
    // 0x79ccb0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x79ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ccb4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ccb8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x79ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79ccbc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x79ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79ccc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79ccc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79ccc4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x79ccc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79ccc8:
    // 0x79ccc8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x79ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_79cccc:
    // 0x79cccc: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x79ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79ccd0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ccd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ccd4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79ccd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79ccd8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ccd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79ccdc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79cce0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x79cce0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x79cce4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79cce8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x79cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ccec: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ccf0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79ccf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x79ccf4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x79ccf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x79ccf8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x79ccf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79ccfc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x79ccfcu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x79cd00: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x79cd00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79cd04: 0x0  nop
    ctx->pc = 0x79cd04u;
    // NOP
    // 0x79cd08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x79CD08u;
    {
        const bool branch_taken_0x79cd08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79cd08) {
            ctx->pc = 0x79CD18u;
            goto label_79cd18;
        }
    }
    ctx->pc = 0x79CD10u;
    // 0x79cd10: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79CD10u;
    SET_GPR_U32(ctx, 31, 0x79CD18u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79CD10u, 0x79CD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CD18u;
label_79cd18:
    // 0x79cd18: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x79cd18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79cd1c: 0x0  nop
    ctx->pc = 0x79cd1cu;
    // NOP
    // 0x79cd20: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x79CD20u;
    {
        const bool branch_taken_0x79cd20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD20u;
        // 0x79cd24: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd20) {
            ctx->pc = 0x79CD4Cu;
            goto label_79cd4c;
        }
    }
    ctx->pc = 0x79CD28u;
    // 0x79cd28: 0xc042f4a  jal         func_10BD28
    ctx->pc = 0x79CD28u;
    SET_GPR_U32(ctx, 31, 0x79CD30u);
    ctx->pc = 0x79CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CD28u;
    // 0x79cd2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD28u, 0x79CD28u, 0x79CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CD30u;
label_79cd30:
    // 0x79cd30: 0xc1e6ca8  jal         func_79B2A0
    ctx->pc = 0x79CD30u;
    SET_GPR_U32(ctx, 31, 0x79CD38u);
    ctx->pc = 0x79CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CD30u;
    // 0x79cd34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2A0u, 0x79CD30u, 0x79CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CD38u;
label_79cd38:
    // 0x79cd38: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x79cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x79cd3c: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x79cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x79cd40: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x79cd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x79cd44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79CD44u;
    {
        const bool branch_taken_0x79cd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD44u;
        // 0x79cd48: 0xae62009c  sw          $v0, 0x9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd44) {
            ctx->pc = 0x79CD58u;
            goto label_79cd58;
        }
    }
    ctx->pc = 0x79CD4Cu;
label_79cd4c:
    // 0x79cd4c: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x79cd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x79cd50: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x79CD50u;
    {
        const bool branch_taken_0x79cd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD50u;
        // 0x79cd54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cd50) {
            ctx->pc = 0x79CC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79cc48;
        }
    }
    ctx->pc = 0x79CD58u;
label_79cd58:
    // 0x79cd58: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79cd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79cd5c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79cd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79cd60: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79cd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79cd64: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79cd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79cd68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79cd68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79cd6c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79cd6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79cd70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79cd70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79cd74: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x79cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79cd78: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79cd7c: 0x3e00008  jr          $ra
    ctx->pc = 0x79CD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CD7Cu;
        // 0x79cd80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CD84u;
    // 0x79cd84: 0x0  nop
    ctx->pc = 0x79cd84u;
    // NOP
    ctx->pc = 0x79cd88u;
}
} // namespace gh_r301
