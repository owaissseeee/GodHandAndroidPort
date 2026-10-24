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

// Function: func_002F7918
// Address: 0x2f7918 - 0x2f7c88
void func_002F7918_0x2f7918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7918_0x2f7918");
#endif

    switch (ctx->pc) {
        case 0x2f792cu: goto label_2f792c;
        case 0x2f7960u: goto label_2f7960;
        case 0x2f79e0u: goto label_2f79e0;
        case 0x2f7b18u: goto label_2f7b18;
        case 0x2f7b54u: goto label_2f7b54;
        case 0x2f7c48u: goto label_2f7c48;
        default: break;
    }

    ctx->pc = 0x2f7918u;

    // 0x2f7918: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f791c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2f7920: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f7924: 0xc0bb0c4  jal         func_2EC310
    ctx->pc = 0x2F7924u;
    SET_GPR_U32(ctx, 31, 0x2F792Cu);
    ctx->pc = 0x2F7928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7924u;
    // 0x2f7928: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC310u, 0x2F7924u, 0x2F792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F792Cu;
label_2f792c:
    // 0x2f792c: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x2f792cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7934: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7938: 0x0  nop
    ctx->pc = 0x2f7938u;
    // NOP
    // 0x2f793c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f793cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7940: 0x0  nop
    ctx->pc = 0x2f7940u;
    // NOP
    // 0x2f7944: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2F7944u;
    {
        const bool branch_taken_0x2f7944 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7944u;
        // 0x2f7948: 0x82020249  lb          $v0, 0x249($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7944) {
            ctx->pc = 0x2F79C8u;
            goto label_2f79c8;
        }
    }
    ctx->pc = 0x2F794Cu;
    // 0x2f794c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7950: 0x5880006f  blezl       $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2F7950u;
    {
        const bool branch_taken_0x2f7950 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x2f7950) {
            ctx->pc = 0x2F7954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7950u;
            // 0x2f7954: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B10u;
            goto label_2f7b10;
        }
    }
    ctx->pc = 0x2F7958u;
    // 0x2f7958: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f795c: 0x0  nop
    ctx->pc = 0x2f795cu;
    // NOP
label_2f7960:
    // 0x2f7960: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x2f7960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2f7964: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f7968: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2f7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f796c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F796Cu;
    {
        const bool branch_taken_0x2f796c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f796c) {
            ctx->pc = 0x2F7970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F796Cu;
            // 0x2f7970: 0x8e0202c0  lw          $v0, 0x2C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7990u;
            goto label_2f7990;
        }
    }
    ctx->pc = 0x2F7974u;
    // 0x2f7974: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2f7974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7978: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f7978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f797c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f797cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7980: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f7980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7984: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7988: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f7988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f798c: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_2f7990:
    // 0x2f7990: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2f7990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2f7994: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2f7994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f7998: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7998u;
    {
        const bool branch_taken_0x2f7998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7998u;
        // 0x2f799c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7998) {
            ctx->pc = 0x2F79B8u;
            goto label_2f79b8;
        }
    }
    ctx->pc = 0x2F79A0u;
    // 0x2f79a0: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2f79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f79a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f79a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f79a8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2f79a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f79ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f79acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f79b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f79b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f79b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f79b8:
    // 0x2f79b8: 0x5c80ffe9  bgtzl       $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F79B8u;
    {
        const bool branch_taken_0x2f79b8 = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2f79b8) {
            ctx->pc = 0x2F79BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F79B8u;
            // 0x2f79bc: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7960;
        }
    }
    ctx->pc = 0x2F79C0u;
    // 0x2f79c0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2F79C0u;
    {
        const bool branch_taken_0x2f79c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79C0u;
        // 0x2f79c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79c0) {
            ctx->pc = 0x2F7B10u;
            goto label_2f7b10;
        }
    }
    ctx->pc = 0x2F79C8u;
label_2f79c8:
    // 0x2f79c8: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x2f79c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f79cc: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2F79CCu;
    {
        const bool branch_taken_0x2f79cc = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2F79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79CCu;
        // 0x2f79d0: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79cc) {
            ctx->pc = 0x2F7B0Cu;
            goto label_2f7b0c;
        }
    }
    ctx->pc = 0x2F79D4u;
    // 0x2f79d4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2f79d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f79d8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f79dc: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2f79e0:
    // 0x2f79e0: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x2f79e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2f79e4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2f79e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f79e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f79e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79ec: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2f79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f79f0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2f79f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f79f4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f79f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f79f8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f79f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f79fc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f79fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7a00: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a04: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7a08: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a0c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x2f7a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7a10: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2f7a10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f7a14: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a18: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7a1c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f7a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f7a20: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f7a20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f7a24: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f7a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7a28: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a2c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7a30: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f7a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f7a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7a38: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a3c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7a40: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x2f7a40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f7a44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f7a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7a48: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a4c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7a50: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f7a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a54: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7A54u;
    {
        const bool branch_taken_0x2f7a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F7A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A54u;
        // 0x2f7a58: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a54) {
            ctx->pc = 0x2F7A70u;
            goto label_2f7a70;
        }
    }
    ctx->pc = 0x2F7A5Cu;
    // 0x2f7a5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2f7a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2f7a60: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7a64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f7a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7a68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7a6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f7a70:
    // 0x2f7a70: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f7a74: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2f7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7a78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f7a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a7c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x2f7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2f7a80: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2f7a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f7a84: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f7a84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7a88: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2f7a88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7a8c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f7a8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7a90: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a94: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7a94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7a98: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f7a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7a9c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x2f7a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7aa0: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x2f7aa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2f7aa4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7aa8: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7aa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7aac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2f7aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2f7ab0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2f7ab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2f7ab4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2f7ab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7ab8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7abc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7ac0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2f7ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7ac4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2f7ac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7ac8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7acc: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7accu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7ad0: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x2f7ad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f7ad4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2f7ad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2f7ad8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2f7ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7adc: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x2f7adcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f7ae0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f7ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f7ae4: 0x107d0006  beq         $v1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7AE4u;
    {
        const bool branch_taken_0x2f7ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F7AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7AE4u;
        // 0x2f7ae8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ae4) {
            ctx->pc = 0x2F7B00u;
            goto label_2f7b00;
        }
    }
    ctx->pc = 0x2F7AECu;
    // 0x2f7aec: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2f7aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2f7af0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f7af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7af4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f7af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7af8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7afc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f7b00:
    // 0x2f7b00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f7b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f7b04: 0x5cc0ffb6  bgtzl       $a2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2F7B04u;
    {
        const bool branch_taken_0x2f7b04 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x2f7b04) {
            ctx->pc = 0x2F7B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B04u;
            // 0x2f7b08: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F79E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f79e0;
        }
    }
    ctx->pc = 0x2F7B0Cu;
label_2f7b0c:
    // 0x2f7b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f7b10:
    // 0x2f7b10: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F7B10u;
    SET_GPR_U32(ctx, 31, 0x2F7B18u);
    ctx->pc = 0x2F7B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B10u;
    // 0x2f7b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F7B10u, 0x2F7B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B18u;
label_2f7b18:
    // 0x2f7b18: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2f7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f7b1c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7B1Cu;
    {
        const bool branch_taken_0x2f7b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B1Cu;
        // 0x2f7b20: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b1c) {
            ctx->pc = 0x2F7B38u;
            goto label_2f7b38;
        }
    }
    ctx->pc = 0x2F7B24u;
    // 0x2f7b24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f7b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f7b28: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7b2c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f7b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7b30: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7b34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f7b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f7b38:
    // 0x2f7b38: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2f7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2f7b3c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2F7B3Cu;
    {
        const bool branch_taken_0x2f7b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7b3c) {
            ctx->pc = 0x2F7B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B3Cu;
            // 0x2f7b40: 0x8e040308  lw          $a0, 0x308($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7B78u;
            goto label_2f7b78;
        }
    }
    ctx->pc = 0x2F7B44u;
    // 0x2f7b44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f7b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f7b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7b4c: 0xc0bdc68  jal         func_2F71A0
    ctx->pc = 0x2F7B4Cu;
    SET_GPR_U32(ctx, 31, 0x2F7B54u);
    ctx->pc = 0x2F7B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7B4Cu;
    // 0x2f7b50: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F71A0u, 0x2F7B4Cu, 0x2F7B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7B54u;
label_2f7b54:
    // 0x2f7b54: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f7b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f7b58: 0x105d002d  beq         $v0, $sp, . + 4 + (0x2D << 2)
    ctx->pc = 0x2F7B58u;
    {
        const bool branch_taken_0x2f7b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B58u;
        // 0x2f7b5c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b58) {
            ctx->pc = 0x2F7C10u;
            goto label_2f7c10;
        }
    }
    ctx->pc = 0x2F7B60u;
    // 0x2f7b60: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f7b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f7b64: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f7b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7b68: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f7b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7b6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f7b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7b70: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2F7B70u;
    {
        const bool branch_taken_0x2f7b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B70u;
        // 0x2f7b74: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b70) {
            ctx->pc = 0x2F7C10u;
            goto label_2f7c10;
        }
    }
    ctx->pc = 0x2F7B78u;
label_2f7b78:
    // 0x2f7b78: 0x4820015  bltzl       $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F7B78u;
    {
        const bool branch_taken_0x2f7b78 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x2f7b78) {
            ctx->pc = 0x2F7B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7B78u;
            // 0x2f7b7c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7BD0u;
            goto label_2f7bd0;
        }
    }
    ctx->pc = 0x2F7B80u;
    // 0x2f7b80: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x2f7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f7b84: 0x90a202b4  lbu         $v0, 0x2B4($a1)
    ctx->pc = 0x2f7b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f7b88: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2f7b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f7b8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7B8Cu;
    {
        const bool branch_taken_0x2f7b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7B8Cu;
        // 0x2f7b90: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7b8c) {
            ctx->pc = 0x2F7BA8u;
            goto label_2f7ba8;
        }
    }
    ctx->pc = 0x2F7B94u;
    // 0x2f7b94: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f7b98: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2f7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2f7b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7ba0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7BA0u;
    {
        const bool branch_taken_0x2f7ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BA0u;
        // 0x2f7ba4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ba0) {
            ctx->pc = 0x2F7BACu;
            goto label_2f7bac;
        }
    }
    ctx->pc = 0x2F7BA8u;
label_2f7ba8:
    // 0x2f7ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7bac:
    // 0x2f7bac: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x2f7bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7bb0: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x2f7bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f7bb4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7bbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f7bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7bc0: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f7bc4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f7bc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f7bc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7BC8u;
    {
        const bool branch_taken_0x2f7bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BC8u;
        // 0x2f7bcc: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bc8) {
            ctx->pc = 0x2F7BF0u;
            goto label_2f7bf0;
        }
    }
    ctx->pc = 0x2F7BD0u;
label_2f7bd0:
    // 0x2f7bd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7bd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f7bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7bd8: 0xc44300b0  lwc1        $f3, 0xB0($v0)
    ctx->pc = 0x2f7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f7bdc: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x2f7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7be0: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x2f7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7be4: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f7be8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2f7be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f7bec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f7becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f7bf0:
    // 0x2f7bf0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2f7bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f7bf4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7BF4u;
    {
        const bool branch_taken_0x2f7bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7BF4u;
        // 0x2f7bf8: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7bf4) {
            ctx->pc = 0x2F7C10u;
            goto label_2f7c10;
        }
    }
    ctx->pc = 0x2F7BFCu;
    // 0x2f7bfc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2f7bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f7c00: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2f7c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7c04: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f7c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f7c08: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2f7c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7c0c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2f7c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f7c10:
    // 0x2f7c10: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2f7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2f7c14: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2f7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2f7c18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f7c1c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F7C1Cu;
    {
        const bool branch_taken_0x2f7c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c1c) {
            ctx->pc = 0x2F7C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7C1Cu;
            // 0x2f7c20: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C7Cu;
            goto label_2f7c7c;
        }
    }
    ctx->pc = 0x2F7C24u;
    // 0x2f7c24: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f7c24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f7c28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7c2c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F7C2Cu;
    {
        const bool branch_taken_0x2f7c2c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2F7C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C2Cu;
        // 0x2f7c30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c2c) {
            ctx->pc = 0x2F7C78u;
            goto label_2f7c78;
        }
    }
    ctx->pc = 0x2F7C34u;
    // 0x2f7c34: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2f7c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2f7c38: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x2f7c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x2f7c3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f7c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7c40: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x2f7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2f7c44: 0x0  nop
    ctx->pc = 0x2f7c44u;
    // NOP
label_2f7c48:
    // 0x2f7c48: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2f7c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2f7c4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f7c50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f7c54: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f7c58: 0x8e0202c0  lw          $v0, 0x2C0($s0)
    ctx->pc = 0x2f7c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
    // 0x2f7c5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7c60: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2f7c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f7c64: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2f7c64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2f7c68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f7c6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f7c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f7c70: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F7C70u;
    {
        const bool branch_taken_0x2f7c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c70) {
            ctx->pc = 0x2F7C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7C70u;
            // 0x2f7c74: 0x8e0302bc  lw          $v1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7c48;
        }
    }
    ctx->pc = 0x2F7C78u;
label_2f7c78:
    // 0x2f7c78: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f7c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f7c7c:
    // 0x2f7c7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7c80: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C80u;
        // 0x2f7c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7C88u;
}
