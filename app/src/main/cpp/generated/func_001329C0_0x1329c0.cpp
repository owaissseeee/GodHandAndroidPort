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

// Function: func_001329C0
// Address: 0x1329c0 - 0x132da0
void func_001329C0_0x1329c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001329C0_0x1329c0");
#endif

    switch (ctx->pc) {
        case 0x132a74u: goto label_132a74;
        case 0x132a98u: goto label_132a98;
        case 0x132aa8u: goto label_132aa8;
        case 0x132b68u: goto label_132b68;
        case 0x132c34u: goto label_132c34;
        case 0x132d4cu: goto label_132d4c;
        default: break;
    }

    ctx->pc = 0x1329c0u;

    // 0x1329c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1329c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1329c4: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1329c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1329c8: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1329c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1329cc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1329ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1329d0: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x1329d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x1329d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1329d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1329d8: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1329d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1329dc: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1329dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1329e0: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1329e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1329e4: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1329e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1329e8: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x1329e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x1329ec: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x1329ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x1329f0: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x1329f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x1329f4: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1329f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x1329f8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1329f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1329fc: 0xe7b90168  swc1        $f25, 0x168($sp)
    ctx->pc = 0x1329fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x132a00: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x132a00u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x132a04: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x132a04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x132a08: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x132a08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x132a0c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x132a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x132a10: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x132a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x132a14: 0xafa60094  sw          $a2, 0x94($sp)
    ctx->pc = 0x132a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 6));
    // 0x132a18: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x132a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x132a1c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x132a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132a20: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x132a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132a24: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x132a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132a28: 0x26910490  addiu       $s1, $s4, 0x490
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 1168));
    // 0x132a2c: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x132a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x132a30: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x132a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132a34: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x132a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132a38: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x132a38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132a3c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132a3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132a40: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x132a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132a44: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x132a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x132a48: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x132a48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132a4c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x132a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132a50: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x132a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132a54: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x132a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a58: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x132a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132a5c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x132a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x132a60: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x132a60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x132a64: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x132a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a68: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x132a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x132a6c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x132A6Cu;
    SET_GPR_U32(ctx, 31, 0x132A74u);
    ctx->pc = 0x132A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A6Cu;
    // 0x132a70: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x132A6Cu, 0x132A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A74u;
label_132a74:
    // 0x132a74: 0x0  nop
    ctx->pc = 0x132a74u;
    // NOP
    // 0x132a78: 0x0  nop
    ctx->pc = 0x132a78u;
    // NOP
    // 0x132a7c: 0x46000584  c1          0x584
    ctx->pc = 0x132a7cu;
    ctx->f[22] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x132a80: 0x4616b032  c.eq.s      $f22, $f22
    ctx->pc = 0x132a80u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132a84: 0x0  nop
    ctx->pc = 0x132a84u;
    // NOP
    // 0x132a88: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x132A88u;
    {
        const bool branch_taken_0x132a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132a88) {
            ctx->pc = 0x132A9Cu;
            goto label_132a9c;
        }
    }
    ctx->pc = 0x132A90u;
    // 0x132a90: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x132A90u;
    SET_GPR_U32(ctx, 31, 0x132A98u);
    ctx->pc = 0x132A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A90u;
    // 0x132a94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x132A90u, 0x132A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A98u;
label_132a98:
    // 0x132a98: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x132a98u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_132a9c:
    // 0x132a9c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x132a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132aa0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x132AA0u;
    SET_GPR_U32(ctx, 31, 0x132AA8u);
    ctx->pc = 0x132AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132AA0u;
    // 0x132aa4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x132AA0u, 0x132AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132AA8u;
label_132aa8:
    // 0x132aa8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x132aa8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x132aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132ab0: 0x0  nop
    ctx->pc = 0x132ab0u;
    // NOP
    // 0x132ab4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x132ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132ab8: 0x0  nop
    ctx->pc = 0x132ab8u;
    // NOP
    // 0x132abc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x132ABCu;
    {
        const bool branch_taken_0x132abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132ABCu;
        // 0x132ac0: 0xc7a40050  lwc1        $f4, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132abc) {
            ctx->pc = 0x132B00u;
            goto label_132b00;
        }
    }
    ctx->pc = 0x132AC4u;
    // 0x132ac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x132ac8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x132ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132acc: 0x0  nop
    ctx->pc = 0x132accu;
    // NOP
    // 0x132ad0: 0x0  nop
    ctx->pc = 0x132ad0u;
    // NOP
    // 0x132ad4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x132ad4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x132ad8: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x132ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132adc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x132adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132ae0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x132ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ae4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x132ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x132ae8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x132ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x132aec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x132aecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x132af0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x132af0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x132af4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x132af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x132af8: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x132af8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x132afc: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x132afcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_132b00:
    // 0x132b00: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x132b00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x132b04: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x132b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132b08: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x132b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x132b0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x132b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x132b10: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x132b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132b14: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x132b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132b18: 0x46161836  c.le.s      $f3, $f22
    ctx->pc = 0x132b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132b1c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x132b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132b20: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x132b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x132b24: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x132b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x132b28: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
    ctx->pc = 0x132B28u;
    {
        const bool branch_taken_0x132b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B28u;
        // 0x132b2c: 0xe7a10058  swc1        $f1, 0x58($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132b28) {
            ctx->pc = 0x132CA8u;
            goto label_132ca8;
        }
    }
    ctx->pc = 0x132B30u;
    // 0x132b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x132b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x132b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132b38: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x132b38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x132b3c: 0xc6810494  lwc1        $f1, 0x494($s4)
    ctx->pc = 0x132b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132b40: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x132b40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132b44: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x132b44u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
    // 0x132b48: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x132b48u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x132b4c: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x132b4cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132b50: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x132b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x132b54: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x132b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132b58: 0x3c1e005d  lui         $fp, 0x5D
    ctx->pc = 0x132b58u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)93 << 16));
    // 0x132b5c: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x132b5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x132b60: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x132b60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132b64: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x132b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_132b68:
    // 0x132b68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x132b68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132b6c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132b70: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132b74: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x132b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x132b78: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x132b78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x132b7c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x132b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132b80: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132b84: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x132b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132b88: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x132b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132b8c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x132b8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x132b90: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132b94: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132b94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x132b98: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x132b98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x132b9c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x132b9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x132ba0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x132ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132ba4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x132ba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x132ba8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x132ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x132bac: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x132BACu;
    {
        const bool branch_taken_0x132bac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x132BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BACu;
        // 0x132bb0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bac) {
            ctx->pc = 0x132BC8u;
            goto label_132bc8;
        }
    }
    ctx->pc = 0x132BB4u;
    // 0x132bb4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x132bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132bb8: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x132bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132bbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132bc0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x132bc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x132bc4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x132bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_132bc8:
    // 0x132bc8: 0x12300007  beq         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132BC8u;
    {
        const bool branch_taken_0x132bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x132BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132BC8u;
        // 0x132bcc: 0xe7b50034  swc1        $f21, 0x34($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132bc8) {
            ctx->pc = 0x132BE8u;
            goto label_132be8;
        }
    }
    ctx->pc = 0x132BD0u;
    // 0x132bd0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x132bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132bd4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x132bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132bd8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x132bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132bdc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132be0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x132be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132be4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x132be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_132be8:
    // 0x132be8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x132be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132bec: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x132becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x132bf0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x132bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132bf4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x132bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x132bf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x132bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x132bfc: 0x27c4ae50  addiu       $a0, $fp, -0x51B0
    ctx->pc = 0x132bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946384));
    // 0x132c00: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x132c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x132c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c08: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x132c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x132c0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x132c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c10: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x132c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x132c14: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x132c14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c18: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x132c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x132c1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x132c1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132c20: 0xafb70028  sw          $s7, 0x28($sp)
    ctx->pc = 0x132c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 23));
    // 0x132c24: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x132c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132c28: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x132c28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x132c2c: 0xc04bb58  jal         func_12ED60
    ctx->pc = 0x132C2Cu;
    SET_GPR_U32(ctx, 31, 0x132C34u);
    ctx->pc = 0x132C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132C2Cu;
    // 0x132c30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED60u, 0x132C2Cu, 0x132C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132C34u;
label_132c34:
    // 0x132c34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x132C34u;
    {
        const bool branch_taken_0x132c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C34u;
        // 0x132c38: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c34) {
            ctx->pc = 0x132C40u;
            goto label_132c40;
        }
    }
    ctx->pc = 0x132C3Cu;
    // 0x132c3c: 0x46180540  add.s       $f21, $f0, $f24
    ctx->pc = 0x132c3cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_132c40:
    // 0x132c40: 0x4619a500  add.s       $f20, $f20, $f25
    ctx->pc = 0x132c40u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[25]);
    // 0x132c44: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x132c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132c48: 0x0  nop
    ctx->pc = 0x132c48u;
    // NOP
    // 0x132c4c: 0x4500ffc6  bc1f        . + 4 + (-0x3A << 2)
    ctx->pc = 0x132C4Cu;
    {
        const bool branch_taken_0x132c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x132C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C4Cu;
        // 0x132c50: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c4c) {
            ctx->pc = 0x132B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132b68;
        }
    }
    ctx->pc = 0x132C54u;
    // 0x132c54: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x132c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x132c58: 0x12240007  beq         $s1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132C58u;
    {
        const bool branch_taken_0x132c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x132c58) {
            ctx->pc = 0x132C78u;
            goto label_132c78;
        }
    }
    ctx->pc = 0x132C60u;
    // 0x132c60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x132c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x132c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132c68: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x132c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c6c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132c70: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x132c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c74: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x132c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_132c78:
    // 0x132c78: 0x12110006  beq         $s0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132C78u;
    {
        const bool branch_taken_0x132c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x132C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132C78u;
        // 0x132c7c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132c78) {
            ctx->pc = 0x132C94u;
            goto label_132c94;
        }
    }
    ctx->pc = 0x132C80u;
    // 0x132c80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132c84: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x132c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c88: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x132c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x132c8c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x132c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c90: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x132c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_132c94:
    // 0x132c94: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x132c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c98: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x132c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x132c9c: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x132c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x132ca0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x132CA0u;
    {
        const bool branch_taken_0x132ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CA0u;
        // 0x132ca4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ca0) {
            ctx->pc = 0x132D0Cu;
            goto label_132d0c;
        }
    }
    ctx->pc = 0x132CA8u;
label_132ca8:
    // 0x132ca8: 0x8e8400f0  lw          $a0, 0xF0($s4)
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x132cac: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x132cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x132cb0: 0x12240007  beq         $s1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x132CB0u;
    {
        const bool branch_taken_0x132cb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x132cb0) {
            ctx->pc = 0x132CD0u;
            goto label_132cd0;
        }
    }
    ctx->pc = 0x132CB8u;
    // 0x132cb8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x132cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132cbc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x132cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x132cc0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x132cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132cc4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132cc8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x132cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ccc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x132cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_132cd0:
    // 0x132cd0: 0x12510006  beq         $s2, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132CD0u;
    {
        const bool branch_taken_0x132cd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x132CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CD0u;
        // 0x132cd4: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cd0) {
            ctx->pc = 0x132CECu;
            goto label_132cec;
        }
    }
    ctx->pc = 0x132CD8u;
    // 0x132cd8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x132cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x132cdc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x132cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ce0: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x132ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x132ce4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x132ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ce8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x132ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_132cec:
    // 0x132cec: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x132cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132cf0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x132cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132cf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x132cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x132cf8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x132cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x132cfc: 0x46170841  sub.s       $f1, $f1, $f23
    ctx->pc = 0x132cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
    // 0x132d00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x132d00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x132d04: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x132d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x132d08: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x132d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_132d0c:
    // 0x132d0c: 0x8faa0098  lw          $t2, 0x98($sp)
    ctx->pc = 0x132d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x132d10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x132d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132d14: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x132d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x132d18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x132d18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d1c: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x132d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x132d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x132d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d24: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x132d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x132d28: 0x20a580b  movn        $t3, $s0, $t2
    ctx->pc = 0x132d28u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 16));
    // 0x132d2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x132d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x132d30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x132d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x132d34: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x132d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x132d38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x132d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132d3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x132d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x132d40: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x132d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x132d44: 0xc04c784  jal         func_131E10
    ctx->pc = 0x132D44u;
    SET_GPR_U32(ctx, 31, 0x132D4Cu);
    ctx->pc = 0x132D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D44u;
    // 0x132d48: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x132D44u, 0x132D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D4Cu;
label_132d4c:
    // 0x132d4c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x132d4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x132d50: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x132d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x132d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132d58: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x132d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x132d5c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x132d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x132d60: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x132d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x132d64: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x132d64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x132d68: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x132d68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x132d6c: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x132d6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x132d70: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x132d70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x132d74: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x132d74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x132d78: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x132d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x132d7c: 0xc7b90168  lwc1        $f25, 0x168($sp)
    ctx->pc = 0x132d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x132d80: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x132d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x132d84: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x132d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x132d88: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x132d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x132d8c: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x132d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x132d90: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x132d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x132d94: 0x3e00008  jr          $ra
    ctx->pc = 0x132D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D94u;
        // 0x132d98: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132D9Cu;
    // 0x132d9c: 0x0  nop
    ctx->pc = 0x132d9cu;
    // NOP
    ctx->pc = 0x132da0u;
}
