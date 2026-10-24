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

// Function: func_002E2E00
// Address: 0x2e2e00 - 0x2e3408
void func_002E2E00_0x2e2e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E2E00_0x2e2e00");
#endif

    switch (ctx->pc) {
        case 0x2e2e44u: goto label_2e2e44;
        case 0x2e2f44u: goto label_2e2f44;
        case 0x2e2fa0u: goto label_2e2fa0;
        case 0x2e3080u: goto label_2e3080;
        case 0x2e3090u: goto label_2e3090;
        case 0x2e313cu: goto label_2e313c;
        case 0x2e3168u: goto label_2e3168;
        case 0x2e3190u: goto label_2e3190;
        case 0x2e3334u: goto label_2e3334;
        case 0x2e3358u: goto label_2e3358;
        default: break;
    }

    ctx->pc = 0x2e2e00u;

    // 0x2e2e00: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2e2e04: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x2e2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x2e2e08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e2e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e0c: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x2e2e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x2e2e10: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x2e2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x2e2e14: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x2e2e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x2e2e18: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x2e2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x2e2e1c: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x2e2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x2e2e20: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2e2e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2e2e24: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2e2e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2e28: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2e2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2e2c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2e2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2e30: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e2e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2e34: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2e2e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e2e38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e2e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e3c: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E2E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2E44u);
    ctx->pc = 0x2E2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E3Cu;
    // 0x2e2e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E2E3Cu, 0x2E2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2E44u;
label_2e2e44:
    // 0x2e2e44: 0xc6230124  lwc1        $f3, 0x124($s1)
    ctx->pc = 0x2e2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2e48: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2e2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e2e4c: 0xc6220128  lwc1        $f2, 0x128($s1)
    ctx->pc = 0x2e2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2e50: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2e2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e2e54: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e2e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2e58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2e5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2e60: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2e2e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e2e64: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2e2e64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e2e68: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2e2e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e2e6c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2e2e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e2e70: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2e2e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2e74: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2e2e74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e2e78: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e2e78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e7c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e2e7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2e80: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e2e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2e84: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e2e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2e88: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e2e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2e8c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e2e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e94: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e2e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e2e98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e2e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e9c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2e2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2ea0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2e2ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2ea4: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2e2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e2ea8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e2ea8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2eac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e2eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e2eb0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2e2eb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e2eb4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E2EB4u;
    {
        const bool branch_taken_0x2e2eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EB4u;
        // 0x2e2eb8: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2eb4) {
            ctx->pc = 0x2E2EF4u;
            goto label_2e2ef4;
        }
    }
    ctx->pc = 0x2E2EBCu;
    // 0x2e2ebc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2e2ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ec0: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2e2ec0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2ec4: 0x0  nop
    ctx->pc = 0x2e2ec4u;
    // NOP
    // 0x2e2ec8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E2EC8u;
    {
        const bool branch_taken_0x2e2ec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EC8u;
        // 0x2e2ecc: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ec8) {
            ctx->pc = 0x2E2EF4u;
            goto label_2e2ef4;
        }
    }
    ctx->pc = 0x2E2ED0u;
    // 0x2e2ed0: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x2e2ed0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2ed4: 0x0  nop
    ctx->pc = 0x2e2ed4u;
    // NOP
    // 0x2e2ed8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2ED8u;
    {
        const bool branch_taken_0x2e2ed8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2ED8u;
        // 0x2e2edc: 0xc7a1007c  lwc1        $f1, 0x7C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2ed8) {
            ctx->pc = 0x2E2EF4u;
            goto label_2e2ef4;
        }
    }
    ctx->pc = 0x2E2EE0u;
    // 0x2e2ee0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2e2ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2ee4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e2ee4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e2ee8: 0x0  nop
    ctx->pc = 0x2e2ee8u;
    // NOP
    // 0x2e2eec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2EECu;
    {
        const bool branch_taken_0x2e2eec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EECu;
        // 0x2e2ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2eec) {
            ctx->pc = 0x2E2EF8u;
            goto label_2e2ef8;
        }
    }
    ctx->pc = 0x2E2EF4u;
label_2e2ef4:
    // 0x2e2ef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2ef8:
    // 0x2e2ef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e2ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e2efc: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x2E2EFCu;
    {
        const bool branch_taken_0x2e2efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2EFCu;
        // 0x2e2f00: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2efc) {
            ctx->pc = 0x2E33E4u;
            goto label_2e33e4;
        }
    }
    ctx->pc = 0x2E2F04u;
    // 0x2e2f04: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2e2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e2f08: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2e2f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2f10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e2f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f14: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e2f18: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e2f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e2f1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e2f20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e2f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e2f28: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2e2f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2f2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e2f30: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x2e2f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e2f34: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e2f38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e2f38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f3c: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E2F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E2F44u);
    ctx->pc = 0x2E2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F3Cu;
    // 0x2e2f40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E2F3Cu, 0x2E2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F44u;
label_2e2f44:
    // 0x2e2f44: 0x50400127  beql        $v0, $zero, . + 4 + (0x127 << 2)
    ctx->pc = 0x2E2F44u;
    {
        const bool branch_taken_0x2e2f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f44) {
            ctx->pc = 0x2E2F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2F44u;
            // 0x2e2f48: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E33E4u;
            goto label_2e33e4;
        }
    }
    ctx->pc = 0x2E2F4Cu;
    // 0x2e2f4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e2f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2f50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2f58: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e2f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e2f5c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2f60: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e2f60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2f64: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e2f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e2f68: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e2f68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e2f6c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e2f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2f70: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2f74: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2e2f74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e2f78: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2f7c: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2e2f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e2f80: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e2f80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e2f84: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e2f84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2f88: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e2f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e2f8c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e2f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e2f90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e2f90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e2f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f98: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2E2F98u;
    SET_GPR_U32(ctx, 31, 0x2E2FA0u);
    ctx->pc = 0x2E2F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F98u;
    // 0x2e2f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2E2F98u, 0x2E2FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FA0u;
label_2e2fa0:
    // 0x2e2fa0: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x2e2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x2e2fa4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e2fa8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e2fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e2fac: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E2FACu;
    {
        const bool branch_taken_0x2e2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FACu;
        // 0x2e2fb0: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fac) {
            ctx->pc = 0x2E3178u;
            goto label_2e3178;
        }
    }
    ctx->pc = 0x2E2FB4u;
    // 0x2e2fb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2fbc: 0x0  nop
    ctx->pc = 0x2e2fbcu;
    // NOP
    // 0x2e2fc0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e2fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e2fc4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2e2fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e2fc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e2fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e2fcc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2e2fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e2fd0: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2e2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2fd4: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x2e2fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e2fd8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2e2fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e2fdc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2e2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e2fe0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e2fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e2fe4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2fe8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e2fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e2fec: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2e2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e2ff0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e2ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e2ff4: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2e2ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2e2ff8: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2e2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2e2ffc: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x2e2ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x2e3000: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x2e3000u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e3004: 0xa3a000fd  sb          $zero, 0xFD($sp)
    ctx->pc = 0x2e3004u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3008: 0xa3a000fe  sb          $zero, 0xFE($sp)
    ctx->pc = 0x2e3008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e300c: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x2e300cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e3010: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2e3010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2e3014: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x2e3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e3018: 0xa7a00120  sh          $zero, 0x120($sp)
    ctx->pc = 0x2e3018u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e301c: 0xa7a00122  sh          $zero, 0x122($sp)
    ctx->pc = 0x2e301cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3020: 0xa3a00124  sb          $zero, 0x124($sp)
    ctx->pc = 0x2e3020u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3024: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x2e3024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x2e3028: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e3028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e302c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e302cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3030: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x2e3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3034: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e3034u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3038: 0x0  nop
    ctx->pc = 0x2e3038u;
    // NOP
    // 0x2e303c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E303Cu;
    {
        const bool branch_taken_0x2e303c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E303Cu;
        // 0x2e3040: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e303c) {
            ctx->pc = 0x2E3068u;
            goto label_2e3068;
        }
    }
    ctx->pc = 0x2E3044u;
    // 0x2e3044: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e3044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3048: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e3048u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e304c: 0x0  nop
    ctx->pc = 0x2e304cu;
    // NOP
    // 0x2e3050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3050u;
    {
        const bool branch_taken_0x2e3050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3050) {
            ctx->pc = 0x2E3068u;
            goto label_2e3068;
        }
    }
    ctx->pc = 0x2E3058u;
    // 0x2e3058: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2e3058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e305c: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2e305cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e3060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3060u;
    {
        const bool branch_taken_0x2e3060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3060u;
        // 0x2e3064: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3060) {
            ctx->pc = 0x2E3084u;
            goto label_2e3084;
        }
    }
    ctx->pc = 0x2E3068u;
label_2e3068:
    // 0x2e3068: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e306c: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x2e306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3070: 0xc62d012c  lwc1        $f13, 0x12C($s1)
    ctx->pc = 0x2e3070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e3074: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e3074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e3078: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E3078u;
    SET_GPR_U32(ctx, 31, 0x2E3080u);
    ctx->pc = 0x2E307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3078u;
    // 0x2e307c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E3078u, 0x2E3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3080u;
label_2e3080:
    // 0x2e3080: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e3080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e3084:
    // 0x2e3084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e3084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3088: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E3088u;
    SET_GPR_U32(ctx, 31, 0x2E3090u);
    ctx->pc = 0x2E308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3088u;
    // 0x2e308c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E3088u, 0x2E3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3090u;
label_2e3090:
    // 0x2e3090: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3094: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x2e3094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x2e3098: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2e3098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x2e309c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e309cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e30a0: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2e30a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e30a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e30a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e30a8: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2e30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e30ac: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e30b0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2e30b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e30b4: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2e30b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e30b8: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x2e30b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e30bc: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x2e30bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e30c0: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x2e30c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2e30c4: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e30c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e30c8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2e30c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e30cc: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x2e30ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e30d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2E30D0u;
    {
        const bool branch_taken_0x2e30d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E30D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30D0u;
        // 0x2e30d4: 0xe7a400c8  swc1        $f4, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30d0) {
            ctx->pc = 0x2E310Cu;
            goto label_2e310c;
        }
    }
    ctx->pc = 0x2E30D8u;
    // 0x2e30d8: 0x822402c0  lb          $a0, 0x2C0($s1)
    ctx->pc = 0x2e30d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e30dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e30e0: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E30E0u;
    {
        const bool branch_taken_0x2e30e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e30e0) {
            ctx->pc = 0x2E30E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E30E0u;
            // 0x2e30e4: 0x922202d6  lbu         $v0, 0x2D6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 726)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E30F0u;
            goto label_2e30f0;
        }
    }
    ctx->pc = 0x2E30E8u;
    // 0x2e30e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E30E8u;
    {
        const bool branch_taken_0x2e30e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E30E8u;
        // 0x2e30ec: 0x922502c1  lbu         $a1, 0x2C1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 705)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e30e8) {
            ctx->pc = 0x2E3120u;
            goto label_2e3120;
        }
    }
    ctx->pc = 0x2E30F0u;
label_2e30f0:
    // 0x2e30f0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e30f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e30f4: 0x8624023a  lh          $a0, 0x23A($s1)
    ctx->pc = 0x2e30f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2e30f8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e30f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e30fc: 0x9625023c  lhu         $a1, 0x23C($s1)
    ctx->pc = 0x2e30fcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e3100: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3104: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E3104u;
    {
        const bool branch_taken_0x2e3104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3104u;
        // 0x2e3108: 0xa3a20124  sb          $v0, 0x124($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3104) {
            ctx->pc = 0x2E3130u;
            goto label_2e3130;
        }
    }
    ctx->pc = 0x2E310Cu;
label_2e310c:
    // 0x2e310c: 0x822402c2  lb          $a0, 0x2C2($s1)
    ctx->pc = 0x2e310cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 706)));
    // 0x2e3110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e3110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3114: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3114u;
    {
        const bool branch_taken_0x2e3114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3114) {
            ctx->pc = 0x2E3118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3114u;
            // 0x2e3118: 0x922202d7  lbu         $v0, 0x2D7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 727)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3144u;
            goto label_2e3144;
        }
    }
    ctx->pc = 0x2E311Cu;
    // 0x2e311c: 0x922502c3  lbu         $a1, 0x2C3($s1)
    ctx->pc = 0x2e311cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 707)));
label_2e3120:
    // 0x2e3120: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e3120u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3124: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e3124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e312c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e3130:
    // 0x2e3130: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e3130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3134: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E3134u;
    SET_GPR_U32(ctx, 31, 0x2E313Cu);
    ctx->pc = 0x2E3138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3134u;
    // 0x2e3138: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E3134u, 0x2E313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E313Cu;
label_2e313c:
    // 0x2e313c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E313Cu;
    {
        const bool branch_taken_0x2e313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E313Cu;
        // 0x2e3140: 0x8e2302c8  lw          $v1, 0x2C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e313c) {
            ctx->pc = 0x2E316Cu;
            goto label_2e316c;
        }
    }
    ctx->pc = 0x2E3144u;
label_2e3144:
    // 0x2e3144: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e3144u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e3148: 0x8624023a  lh          $a0, 0x23A($s1)
    ctx->pc = 0x2e3148u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2e314c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e314cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3150: 0x9625023c  lhu         $a1, 0x23C($s1)
    ctx->pc = 0x2e3150u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e3154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e3154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3158: 0xa3a20124  sb          $v0, 0x124($sp)
    ctx->pc = 0x2e3158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e315c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e315cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e3160: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E3160u;
    SET_GPR_U32(ctx, 31, 0x2E3168u);
    ctx->pc = 0x2E3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3160u;
    // 0x2e3164: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E3160u, 0x2E3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3168u;
label_2e3168:
    // 0x2e3168: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x2e3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_2e316c:
    // 0x2e316c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3170: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3170u;
    {
        const bool branch_taken_0x2e3170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3170) {
            ctx->pc = 0x2E3188u;
            goto label_2e3188;
        }
    }
    ctx->pc = 0x2E3178u;
label_2e3178:
    // 0x2e3178: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x2e3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    // 0x2e317c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3180: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3180u;
    {
        const bool branch_taken_0x2e3180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3180) {
            ctx->pc = 0x2E3184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3180u;
            // 0x2e3184: 0xc6200124  lwc1        $f0, 0x124($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3198u;
            goto label_2e3198;
        }
    }
    ctx->pc = 0x2E3188u;
label_2e3188:
    // 0x2e3188: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E3188u;
    SET_GPR_U32(ctx, 31, 0x2E3190u);
    ctx->pc = 0x2E318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3188u;
    // 0x2e318c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E3188u, 0x2E3190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3190u;
label_2e3190:
    // 0x2e3190: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2E3190u;
    {
        const bool branch_taken_0x2e3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3190u;
        // 0x2e3194: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3190) {
            ctx->pc = 0x2E33E4u;
            goto label_2e33e4;
        }
    }
    ctx->pc = 0x2E3198u;
label_2e3198:
    // 0x2e3198: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e319c: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2e319cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e31a0: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x2e31a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e31a4: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2e31a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e31a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e31a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e31ac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e31acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e31b0: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2e31b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2e31b4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e31b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e31b8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e31b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e31bc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2e31bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2e31c0: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e31c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e31c4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e31c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e31c8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2e31c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e31cc: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2e31ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e31d0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2e31d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2e31d4: 0xe686000c  swc1        $f6, 0xC($s4)
    ctx->pc = 0x2e31d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e31d8: 0x0  nop
    ctx->pc = 0x2e31d8u;
    // NOP
    // 0x2e31dc: 0x0  nop
    ctx->pc = 0x2e31dcu;
    // NOP
    // 0x2e31e0: 0x46030144  c1          0x30144
    ctx->pc = 0x2e31e0u;
    ctx->f[5] = ps2FpuSqrt(ctx->fcr31, ctx->f[3]);
    // 0x2e31e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e31e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e31e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e31e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e31ec: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e31ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e31f0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e31f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e31f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e31f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e31f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e31f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e31fc: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3200: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e3200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e3204: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e3204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3208: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e320c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2e320cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3210: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3214: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2e3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3218: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2e3218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e321c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3220: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x2e3220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3224: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x2e3224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e3228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e322c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2e322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3230: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2e3230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e3234: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e3234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3238: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e3238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e323c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2e323cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2e3240: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e3240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e3244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e3244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e3248: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e3248u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e324c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3250: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e3250u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3254: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e3254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e3258: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e3258u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e325c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e325cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e3260: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3264: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e3264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3268: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e326c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e326cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3270: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e3270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3274: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e3274u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3278: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2e3278u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e327c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e327cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e3280: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e3280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e3284: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e3284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3288: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e3288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e328c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3290: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3290u;
    {
        const bool branch_taken_0x2e3290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E3294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3290u;
        // 0x2e3294: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3290) {
            ctx->pc = 0x2E32ACu;
            goto label_2e32ac;
        }
    }
    ctx->pc = 0x2E3298u;
    // 0x2e3298: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e3298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e329c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e329cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e32a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e32a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e32a4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e32a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32a8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e32a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e32ac:
    // 0x2e32ac: 0xc62002b4  lwc1        $f0, 0x2B4($s1)
    ctx->pc = 0x2e32acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32b0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2e32b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2e32b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e32b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e32b8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e32b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e32bc: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e32bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e32c0: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x2e32c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e32c4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e32c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e32c8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e32c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e32cc: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e32ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e32d0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e32d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e32d4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e32d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e32d8: 0xc6230178  lwc1        $f3, 0x178($s1)
    ctx->pc = 0x2e32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e32dc: 0xc624017c  lwc1        $f4, 0x17C($s1)
    ctx->pc = 0x2e32dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e32e0: 0xc6250180  lwc1        $f5, 0x180($s1)
    ctx->pc = 0x2e32e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e32e4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e32e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32e8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e32ec: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2e32ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e32f0: 0xe666000c  swc1        $f6, 0xC($s3)
    ctx->pc = 0x2e32f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2e32f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e32f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e32f8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e32f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e32fc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e32fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e3300: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2e3300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e3304: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x2e3304u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e3308: 0xe7a500a8  swc1        $f5, 0xA8($sp)
    ctx->pc = 0x2e3308u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e330c: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x2e330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x2e3310: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3318: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e3318u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e331c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e331cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e3320: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e3320u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e3324: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e3324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e3328: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e332c: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2E332Cu;
    SET_GPR_U32(ctx, 31, 0x2E3334u);
    ctx->pc = 0x2E3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E332Cu;
    // 0x2e3330: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2E332Cu, 0x2E3334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3334u;
label_2e3334:
    // 0x2e3334: 0x0  nop
    ctx->pc = 0x2e3334u;
    // NOP
    // 0x2e3338: 0x0  nop
    ctx->pc = 0x2e3338u;
    // NOP
    // 0x2e333c: 0x46000044  c1          0x44
    ctx->pc = 0x2e333cu;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2e3340: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2e3340u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3344: 0x0  nop
    ctx->pc = 0x2e3344u;
    // NOP
    // 0x2e3348: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3348u;
    {
        const bool branch_taken_0x2e3348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e3348) {
            ctx->pc = 0x2E335Cu;
            goto label_2e335c;
        }
    }
    ctx->pc = 0x2E3350u;
    // 0x2e3350: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2E3350u;
    SET_GPR_U32(ctx, 31, 0x2E3358u);
    ctx->pc = 0x2E3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3350u;
    // 0x2e3354: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2E3350u, 0x2E3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3358u;
label_2e3358:
    // 0x2e3358: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e3358u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2e335c:
    // 0x2e335c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e335cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e3360: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3364: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3368: 0x0  nop
    ctx->pc = 0x2e3368u;
    // NOP
    // 0x2e336c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e336cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e3370: 0x0  nop
    ctx->pc = 0x2e3370u;
    // NOP
    // 0x2e3374: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E3374u;
    {
        const bool branch_taken_0x2e3374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3374u;
        // 0x2e3378: 0xc7a10090  lwc1        $f1, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3374) {
            ctx->pc = 0x2E33B4u;
            goto label_2e33b4;
        }
    }
    ctx->pc = 0x2E337Cu;
    // 0x2e337c: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x2e337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x2e3380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e3380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e3384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e3388: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x2e3388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x2e338c: 0xae2202cc  sw          $v0, 0x2CC($s1)
    ctx->pc = 0x2e338cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
    // 0x2e3390: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e3390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e3394: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e3394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e3398: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2e3398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2e339c: 0xe620013c  swc1        $f0, 0x13C($s1)
    ctx->pc = 0x2e339cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
    // 0x2e33a0: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x2e33a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x2e33a4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x2e33a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x2e33a8: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x2e33a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x2e33ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E33ACu;
    {
        const bool branch_taken_0x2e33ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33ACu;
        // 0x2e33b0: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e33ac) {
            ctx->pc = 0x2E33E0u;
            goto label_2e33e0;
        }
    }
    ctx->pc = 0x2E33B4u;
label_2e33b4:
    // 0x2e33b4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2e33b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e33b8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2e33b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e33bc: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2e33bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e33c0: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2e33c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e33c4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e33c8: 0xe6210124  swc1        $f1, 0x124($s1)
    ctx->pc = 0x2e33c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2e33cc: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x2e33ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x2e33d0: 0xe6220128  swc1        $f2, 0x128($s1)
    ctx->pc = 0x2e33d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e33d4: 0xe623012c  swc1        $f3, 0x12C($s1)
    ctx->pc = 0x2e33d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e33d8: 0xe6240178  swc1        $f4, 0x178($s1)
    ctx->pc = 0x2e33d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x2e33dc: 0xe625017c  swc1        $f5, 0x17C($s1)
    ctx->pc = 0x2e33dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
label_2e33e0:
    // 0x2e33e0: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x2e33e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2e33e4:
    // 0x2e33e4: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x2e33e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2e33e8: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x2e33e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e33ec: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x2e33ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2e33f0: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x2e33f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e33f4: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x2e33f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e33f8: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2e33f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E33FCu;
        // 0x2e3400: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3404u;
    // 0x2e3404: 0x0  nop
    ctx->pc = 0x2e3404u;
    // NOP
    ctx->pc = 0x2e3408u;
}
