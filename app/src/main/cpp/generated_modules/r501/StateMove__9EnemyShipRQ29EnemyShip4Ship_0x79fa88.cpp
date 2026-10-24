#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: StateMove__9EnemyShipRQ29EnemyShip4Ship
// Address: 0x79fa88 - 0x79fd50
void StateMove__9EnemyShipRQ29EnemyShip4Ship_0x79fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StateMove__9EnemyShipRQ29EnemyShip4Ship_0x79fa88");
#endif

    switch (ctx->pc) {
        case 0x79faf4u: goto label_79faf4;
        case 0x79fb10u: goto label_79fb10;
        case 0x79fbb8u: goto label_79fbb8;
        case 0x79fc18u: goto label_79fc18;
        case 0x79fc7cu: goto label_79fc7c;
        case 0x79fc88u: goto label_79fc88;
        case 0x79fca0u: goto label_79fca0;
        default: break;
    }

    ctx->pc = 0x79fa88u;

    // 0x79fa88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x79fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79fa8c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79fa90: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79fa94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79fa94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79fa98: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79fa9c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x79faa0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79faa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79faa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x79faa8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x79faa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x79faac: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x79faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x79fab0: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79FAB0u;
    {
        const bool branch_taken_0x79fab0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FAB0u;
        // 0x79fab4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fab0) {
            ctx->pc = 0x79FAC0u;
            goto label_79fac0;
        }
    }
    ctx->pc = 0x79FAB8u;
    // 0x79fab8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x79FAB8u;
    {
        const bool branch_taken_0x79fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FAB8u;
        // 0x79fabc: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fab8) {
            ctx->pc = 0x79FD28u;
            goto label_79fd28;
        }
    }
    ctx->pc = 0x79FAC0u;
label_79fac0:
    // 0x79fac0: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x79fac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x79fac4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x79fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x79fac8: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79facc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x79faccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79fad0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x79fad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79fad4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79fad4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79fad8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fadc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x79fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79fae0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79fae0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79fae4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fae8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79fae8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79faec: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x79FAECu;
    SET_GPR_U32(ctx, 31, 0x79FAF4u);
    ctx->pc = 0x79FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FAECu;
    // 0x79faf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79FAECu, 0x79FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FAF4u;
label_79faf4:
    // 0x79faf4: 0x46000044  c1          0x44
    ctx->pc = 0x79faf4u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x79faf8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x79faf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fafc: 0x0  nop
    ctx->pc = 0x79fafcu;
    // NOP
    // 0x79fb00: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x79FB00u;
    {
        const bool branch_taken_0x79fb00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79fb00) {
            ctx->pc = 0x79FB14u;
            goto label_79fb14;
        }
    }
    ctx->pc = 0x79FB08u;
    // 0x79fb08: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x79FB08u;
    SET_GPR_U32(ctx, 31, 0x79FB10u);
    ctx->pc = 0x79FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FB08u;
    // 0x79fb0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x79FB08u, 0x79FB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FB10u;
label_79fb10:
    // 0x79fb10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79fb10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_79fb14:
    // 0x79fb14: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79fb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79fb18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79fb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79fb1c: 0x0  nop
    ctx->pc = 0x79fb1cu;
    // NOP
    // 0x79fb20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79fb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fb24: 0x0  nop
    ctx->pc = 0x79fb24u;
    // NOP
    // 0x79fb28: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x79FB28u;
    {
        const bool branch_taken_0x79fb28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FB28u;
        // 0x79fb2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fb28) {
            ctx->pc = 0x79FBC8u;
            goto label_79fbc8;
        }
    }
    ctx->pc = 0x79FB30u;
    // 0x79fb30: 0x0  nop
    ctx->pc = 0x79fb30u;
    // NOP
    // 0x79fb34: 0x0  nop
    ctx->pc = 0x79fb34u;
    // NOP
    // 0x79fb38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x79fb38u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x79fb3c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x79fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x79fb40: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x79fb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79fb44: 0xa0620091  sb          $v0, 0x91($v1)
    ctx->pc = 0x79fb44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 145), (uint8_t)GPR_U32(ctx, 2));
    // 0x79fb48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79fb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79fb4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79fb4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79fb50: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x79fb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x79fb54: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x79fb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fb58: 0x0  nop
    ctx->pc = 0x79fb58u;
    // NOP
    // 0x79fb5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x79FB5Cu;
    {
        const bool branch_taken_0x79fb5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FB5Cu;
        // 0x79fb60: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fb5c) {
            ctx->pc = 0x79FB68u;
            goto label_79fb68;
        }
    }
    ctx->pc = 0x79FB64u;
    // 0x79fb64: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x79fb64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_79fb68:
    // 0x79fb68: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x79fb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fb6c: 0x0  nop
    ctx->pc = 0x79fb6cu;
    // NOP
    // 0x79fb70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79FB70u;
    {
        const bool branch_taken_0x79fb70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79fb70) {
            ctx->pc = 0x79FB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79FB70u;
            // 0x79fb74: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79FB78u;
            goto label_79fb78;
        }
    }
    ctx->pc = 0x79FB78u;
label_79fb78:
    // 0x79fb78: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79fb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79fb7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79fb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79fb80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79fb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79fb84: 0x0  nop
    ctx->pc = 0x79fb84u;
    // NOP
    // 0x79fb88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79fb88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fb8c: 0x0  nop
    ctx->pc = 0x79fb8cu;
    // NOP
    // 0x79fb90: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x79FB90u;
    {
        const bool branch_taken_0x79fb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FB90u;
        // 0x79fb94: 0xe602006c  swc1        $f2, 0x6C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fb90) {
            ctx->pc = 0x79FBF0u;
            goto label_79fbf0;
        }
    }
    ctx->pc = 0x79FB98u;
    // 0x79fb98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x79fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79fb9c: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x79fb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x79fba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79fba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79fba4: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x79fba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x79fba8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79fba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79fbac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x79fbb0: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79FBB0u;
    SET_GPR_U32(ctx, 31, 0x79FBB8u);
    ctx->pc = 0x79FBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FBB0u;
    // 0x79fbb4: 0xe603006c  swc1        $f3, 0x6C($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79FBB0u, 0x79FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FBB8u;
label_79fbb8:
    // 0x79fbb8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x79fbb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x79fbbc: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x79fbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x79fbc0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79FBC0u;
    {
        const bool branch_taken_0x79fbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FBC0u;
        // 0x79fbc4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fbc0) {
            ctx->pc = 0x79FBF4u;
            goto label_79fbf4;
        }
    }
    ctx->pc = 0x79FBC8u;
label_79fbc8:
    // 0x79fbc8: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x79fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fbcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79fbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79fbd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79fbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79fbd4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79fbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x79fbd8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79fbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79fbdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79fbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79fbe0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x79fbe0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79fbe4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79fbe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x79fbe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79fbe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79fbec: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x79fbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_79fbf0:
    // 0x79fbf0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79fbf4:
    // 0x79fbf4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x79fbf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79fbf8: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x79fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x79fbfc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79fbfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79fc00: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79fc00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fc04: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x79fc04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79fc08: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79fc0c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79fc0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79fc10: 0xc1e7618  jal         func_79D860
    ctx->pc = 0x79FC10u;
    SET_GPR_U32(ctx, 31, 0x79FC18u);
    ctx->pc = 0x79FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FC10u;
    // 0x79fc14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D860u, 0x79FC10u, 0x79FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FC18u;
label_79fc18:
    // 0x79fc18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79fc18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fc1c: 0x0  nop
    ctx->pc = 0x79fc1cu;
    // NOP
    // 0x79fc20: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x79FC20u;
    {
        const bool branch_taken_0x79fc20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FC20u;
        // 0x79fc24: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fc20) {
            ctx->pc = 0x79FC60u;
            goto label_79fc60;
        }
    }
    ctx->pc = 0x79FC28u;
    // 0x79fc28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79fc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79fc2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79fc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79fc30: 0x0  nop
    ctx->pc = 0x79fc30u;
    // NOP
    // 0x79fc34: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x79fc34u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x79fc38: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x79fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79fc3c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x79fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79fc40: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x79fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fc44: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x79fc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x79fc48: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x79fc48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x79fc4c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x79fc4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x79fc50: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x79fc50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x79fc54: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x79fc54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x79fc58: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x79fc58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x79fc5c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x79fc5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79fc60:
    // 0x79fc60: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x79fc60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79fc64: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79fc64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79fc68: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79fc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fc6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79fc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79fc70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79fc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79fc74: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x79FC74u;
    SET_GPR_U32(ctx, 31, 0x79FC7Cu);
    ctx->pc = 0x79FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FC74u;
    // 0x79fc78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x79FC74u, 0x79FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FC7Cu;
label_79fc7c:
    // 0x79fc7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79fc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79fc80: 0xc0568fa  jal         func_15A3E8
    ctx->pc = 0x79FC80u;
    SET_GPR_U32(ctx, 31, 0x79FC88u);
    ctx->pc = 0x79FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FC80u;
    // 0x79fc84: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A3E8u, 0x79FC80u, 0x79FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FC88u;
label_79fc88:
    // 0x79fc88: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x79fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fc8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x79fc8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x79fc90: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x79fc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x79fc94: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x79fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79fc98: 0xc1e7618  jal         func_79D860
    ctx->pc = 0x79FC98u;
    SET_GPR_U32(ctx, 31, 0x79FCA0u);
    ctx->pc = 0x79FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79FC98u;
    // 0x79fc9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D860u, 0x79FC98u, 0x79FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79FCA0u;
label_79fca0:
    // 0x79fca0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79fca0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79fca4: 0x0  nop
    ctx->pc = 0x79fca4u;
    // NOP
    // 0x79fca8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x79FCA8u;
    {
        const bool branch_taken_0x79fca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FCA8u;
        // 0x79fcac: 0xc7a40000  lwc1        $f4, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79fca8) {
            ctx->pc = 0x79FCE8u;
            goto label_79fce8;
        }
    }
    ctx->pc = 0x79FCB0u;
    // 0x79fcb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79fcb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79fcb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79fcb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79fcb8: 0x0  nop
    ctx->pc = 0x79fcb8u;
    // NOP
    // 0x79fcbc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x79fcbcu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x79fcc0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x79fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x79fcc4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x79fcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79fcc8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x79fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fccc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x79fcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x79fcd0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x79fcd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x79fcd4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x79fcd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x79fcd8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x79fcd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x79fcdc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x79fcdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x79fce0: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x79fce0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x79fce4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x79fce4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79fce8:
    // 0x79fce8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79fce8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79fcec: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79fcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fcf0: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x79fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79fcf4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79fcf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x79fcf8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79fcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fcfc: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79fcfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79fd00: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79fd00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x79fd04: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79fd04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x79fd08: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79fd08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79fd0c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79fd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fd10: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79fd10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79fd14: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79fd18: 0xda040010  lqc2        $vf4, 0x10($s0)
    ctx->pc = 0x79fd18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79fd1c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x79fd1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x79fd20: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79fd20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79fd24: 0xfa040010  sqc2        $vf4, 0x10($s0)
    ctx->pc = 0x79fd24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_79fd28:
    // 0x79fd28: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79fd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79fd2c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79fd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79fd30: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79fd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79fd34: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79fd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79fd38: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79fd38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79fd3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79fd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79fd40: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x79fd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79fd44: 0x3e00008  jr          $ra
    ctx->pc = 0x79FD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79FD44u;
        // 0x79fd48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79FD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79FD4Cu;
    // 0x79fd4c: 0x0  nop
    ctx->pc = 0x79fd4cu;
    // NOP
    ctx->pc = 0x79fd50u;
}
} // namespace gh_r501
