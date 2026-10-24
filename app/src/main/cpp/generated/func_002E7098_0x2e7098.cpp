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

// Function: func_002E7098
// Address: 0x2e7098 - 0x2e76a0
void func_002E7098_0x2e7098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E7098_0x2e7098");
#endif

    switch (ctx->pc) {
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e75ccu: goto label_2e75cc;
        case 0x2e75f0u: goto label_2e75f0;
        default: break;
    }

    ctx->pc = 0x2e7098u;

    // 0x2e7098: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2e7098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2e709c: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x2e709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x2e70a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e70a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70a4: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x2e70a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x2e70a8: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x2e70a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x2e70ac: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x2e70acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x2e70b0: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x2e70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x2e70b4: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x2e70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x2e70b8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2e70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2e70bc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2e70bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e70c0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2e70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e70c4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2e70c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e70c8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2e70c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e70cc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x2e70ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e70d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e70d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70d4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E70D4u;
    SET_GPR_U32(ctx, 31, 0x2E70DCu);
    ctx->pc = 0x2E70D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70D4u;
    // 0x2e70d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E70D4u, 0x2E70DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70DCu;
label_2e70dc:
    // 0x2e70dc: 0xc6230124  lwc1        $f3, 0x124($s1)
    ctx->pc = 0x2e70dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e70e0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2e70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e70e4: 0xc6220128  lwc1        $f2, 0x128($s1)
    ctx->pc = 0x2e70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e70e8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e70ec: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e70f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e70f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e70f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e70f8: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2e70f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e70fc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2e70fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e7100: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2e7100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e7104: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2e7104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e7108: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2e7108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e710c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2e710cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e7110: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e7110u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7114: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e7114u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7118: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e7118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e711c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e711cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7120: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e7120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7124: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2e7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e712c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7130: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2e7130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7134: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2e7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7138: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2e7138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e713c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2e713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7140: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e7140u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7144: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e7144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e7148: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2e7148u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e714c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E714Cu;
    {
        const bool branch_taken_0x2e714c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E714Cu;
        // 0x2e7150: 0xe7a30058  swc1        $f3, 0x58($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e714c) {
            ctx->pc = 0x2E718Cu;
            goto label_2e718c;
        }
    }
    ctx->pc = 0x2E7154u;
    // 0x2e7154: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2e7154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7158: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2e7158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e715c: 0x0  nop
    ctx->pc = 0x2e715cu;
    // NOP
    // 0x2e7160: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E7160u;
    {
        const bool branch_taken_0x2e7160 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7160u;
        // 0x2e7164: 0xc7a00078  lwc1        $f0, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7160) {
            ctx->pc = 0x2E718Cu;
            goto label_2e718c;
        }
    }
    ctx->pc = 0x2E7168u;
    // 0x2e7168: 0x46030032  c.eq.s      $f0, $f3
    ctx->pc = 0x2e7168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e716c: 0x0  nop
    ctx->pc = 0x2e716cu;
    // NOP
    // 0x2e7170: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7170u;
    {
        const bool branch_taken_0x2e7170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7170u;
        // 0x2e7174: 0xc7a1007c  lwc1        $f1, 0x7C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7170) {
            ctx->pc = 0x2E718Cu;
            goto label_2e718c;
        }
    }
    ctx->pc = 0x2E7178u;
    // 0x2e7178: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2e7178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e717c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e717cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7180: 0x0  nop
    ctx->pc = 0x2e7180u;
    // NOP
    // 0x2e7184: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E7184u;
    {
        const bool branch_taken_0x2e7184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7184u;
        // 0x2e7188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7184) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E718Cu;
label_2e718c:
    // 0x2e718c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e718cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7190:
    // 0x2e7190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e7190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e7194: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x2E7194u;
    {
        const bool branch_taken_0x2e7194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7194u;
        // 0x2e7198: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7194) {
            ctx->pc = 0x2E767Cu;
            goto label_2e767c;
        }
    }
    ctx->pc = 0x2E719Cu;
    // 0x2e719c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2e719cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e71a0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2e71a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e71a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e71a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e71a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e71a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71ac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2e71acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2e71b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e71b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e71b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e71b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e71b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e71c0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e71c4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2e71c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2e71c8: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x2e71c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2e71cc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2e71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2e71d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e71d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e71d4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2E71D4u;
    SET_GPR_U32(ctx, 31, 0x2E71DCu);
    ctx->pc = 0x2E71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E71D4u;
    // 0x2e71d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2E71D4u, 0x2E71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E71DCu;
label_2e71dc:
    // 0x2e71dc: 0x50400127  beql        $v0, $zero, . + 4 + (0x127 << 2)
    ctx->pc = 0x2E71DCu;
    {
        const bool branch_taken_0x2e71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e71dc) {
            ctx->pc = 0x2E71E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E71DCu;
            // 0x2e71e0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E767Cu;
            goto label_2e767c;
        }
    }
    ctx->pc = 0x2E71E4u;
    // 0x2e71e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e71e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e71e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e71e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e71ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e71ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e71f0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e71f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e71f4: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e71f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e71f8: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e71f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e71fc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e71fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e7200: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e7200u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e7204: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e7204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7208: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e7208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e720c: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2e720cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e7210: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e7210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7214: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e7218: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e7218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e721c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e721cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7220: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e7220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7224: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2e7224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7228: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e7228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e722c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e722cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7230: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2E7230u;
    SET_GPR_U32(ctx, 31, 0x2E7238u);
    ctx->pc = 0x2E7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7230u;
    // 0x2e7234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2E7230u, 0x2E7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7238u;
label_2e7238:
    // 0x2e7238: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x2e7238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x2e723c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e7240: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e7240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e7244: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2E7244u;
    {
        const bool branch_taken_0x2e7244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7244u;
        // 0x2e7248: 0x27a300b0  addiu       $v1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7244) {
            ctx->pc = 0x2E7410u;
            goto label_2e7410;
        }
    }
    ctx->pc = 0x2E724Cu;
    // 0x2e724c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e724cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7254: 0x0  nop
    ctx->pc = 0x2e7254u;
    // NOP
    // 0x2e7258: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2e7258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e725c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2e725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2e7260: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2e7260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2e7264: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2e7264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2e7268: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2e7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e726c: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x2e726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e7270: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2e7270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2e7274: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2e7274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e7278: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2e7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e727c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7280: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2e7280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e7284: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e7288: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e728c: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2e728cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2e7290: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2e7290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x2e7294: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x2e7294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x2e7298: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x2e7298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e729c: 0xa3a000fd  sb          $zero, 0xFD($sp)
    ctx->pc = 0x2e729cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 253), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e72a0: 0xa3a000fe  sb          $zero, 0xFE($sp)
    ctx->pc = 0x2e72a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e72a4: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x2e72a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e72a8: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2e72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2e72ac: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x2e72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e72b0: 0xa7a00120  sh          $zero, 0x120($sp)
    ctx->pc = 0x2e72b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e72b4: 0xa7a00122  sh          $zero, 0x122($sp)
    ctx->pc = 0x2e72b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e72b8: 0xa3a00124  sb          $zero, 0x124($sp)
    ctx->pc = 0x2e72b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e72bc: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x2e72bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x2e72c0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e72c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e72c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e72c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e72c8: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x2e72c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e72cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e72ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e72d0: 0x0  nop
    ctx->pc = 0x2e72d0u;
    // NOP
    // 0x2e72d4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2E72D4u;
    {
        const bool branch_taken_0x2e72d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72D4u;
        // 0x2e72d8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72d4) {
            ctx->pc = 0x2E7300u;
            goto label_2e7300;
        }
    }
    ctx->pc = 0x2E72DCu;
    // 0x2e72dc: 0xc620012c  lwc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e72e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e72e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e72e4: 0x0  nop
    ctx->pc = 0x2e72e4u;
    // NOP
    // 0x2e72e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E72E8u;
    {
        const bool branch_taken_0x2e72e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e72e8) {
            ctx->pc = 0x2E7300u;
            goto label_2e7300;
        }
    }
    ctx->pc = 0x2E72F0u;
    // 0x2e72f0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2e72f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e72f4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2e72f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e72f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E72F8u;
    {
        const bool branch_taken_0x2e72f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72F8u;
        // 0x2e72fc: 0xe7a10094  swc1        $f1, 0x94($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72f8) {
            ctx->pc = 0x2E731Cu;
            goto label_2e731c;
        }
    }
    ctx->pc = 0x2E7300u;
label_2e7300:
    // 0x2e7300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7304: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x2e7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7308: 0xc62d012c  lwc1        $f13, 0x12C($s1)
    ctx->pc = 0x2e7308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e730c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e7310: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2E7310u;
    SET_GPR_U32(ctx, 31, 0x2E7318u);
    ctx->pc = 0x2E7314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7310u;
    // 0x2e7314: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2E7310u, 0x2E7318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7318u;
label_2e7318:
    // 0x2e7318: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2e7318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_2e731c:
    // 0x2e731c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7320: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2E7320u;
    SET_GPR_U32(ctx, 31, 0x2E7328u);
    ctx->pc = 0x2E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7320u;
    // 0x2e7324: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2E7320u, 0x2E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7328u;
label_2e7328:
    // 0x2e7328: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e7328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e732c: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x2e732cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x2e7330: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x2e7330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x2e7334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7338: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x2e7338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e733c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e733cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7340: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2e7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7344: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e7344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7348: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2e7348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e734c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x2e734cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7350: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x2e7350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e7354: 0xe7a500d0  swc1        $f5, 0xD0($sp)
    ctx->pc = 0x2e7354u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e7358: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x2e7358u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2e735c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2e735cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2e7360: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2e7360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2e7364: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x2e7364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2e7368: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2E7368u;
    {
        const bool branch_taken_0x2e7368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7368u;
        // 0x2e736c: 0xe7a400c8  swc1        $f4, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7368) {
            ctx->pc = 0x2E73A4u;
            goto label_2e73a4;
        }
    }
    ctx->pc = 0x2E7370u;
    // 0x2e7370: 0x822402d0  lb          $a0, 0x2D0($s1)
    ctx->pc = 0x2e7370u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2e7374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e7378: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7378u;
    {
        const bool branch_taken_0x2e7378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7378) {
            ctx->pc = 0x2E737Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7378u;
            // 0x2e737c: 0x922202e6  lbu         $v0, 0x2E6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 742)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7388u;
            goto label_2e7388;
        }
    }
    ctx->pc = 0x2E7380u;
    // 0x2e7380: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E7380u;
    {
        const bool branch_taken_0x2e7380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7380u;
        // 0x2e7384: 0x922502d1  lbu         $a1, 0x2D1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 721)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7380) {
            ctx->pc = 0x2E73B8u;
            goto label_2e73b8;
        }
    }
    ctx->pc = 0x2E7388u;
label_2e7388:
    // 0x2e7388: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e738c: 0x8624023a  lh          $a0, 0x23A($s1)
    ctx->pc = 0x2e738cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2e7390: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e7390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7394: 0x9625023c  lhu         $a1, 0x23C($s1)
    ctx->pc = 0x2e7394u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e7398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e739c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E739Cu;
    {
        const bool branch_taken_0x2e739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E739Cu;
        // 0x2e73a0: 0xa3a20124  sb          $v0, 0x124($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e739c) {
            ctx->pc = 0x2E73C8u;
            goto label_2e73c8;
        }
    }
    ctx->pc = 0x2E73A4u;
label_2e73a4:
    // 0x2e73a4: 0x822402d2  lb          $a0, 0x2D2($s1)
    ctx->pc = 0x2e73a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 722)));
    // 0x2e73a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e73a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e73ac: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E73ACu;
    {
        const bool branch_taken_0x2e73ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e73ac) {
            ctx->pc = 0x2E73B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E73ACu;
            // 0x2e73b0: 0x922202e7  lbu         $v0, 0x2E7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 743)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E73DCu;
            goto label_2e73dc;
        }
    }
    ctx->pc = 0x2E73B4u;
    // 0x2e73b4: 0x922502d3  lbu         $a1, 0x2D3($s1)
    ctx->pc = 0x2e73b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 723)));
label_2e73b8:
    // 0x2e73b8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e73b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e73bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e73bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e73c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e73c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e73c8:
    // 0x2e73c8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e73cc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E73CCu;
    SET_GPR_U32(ctx, 31, 0x2E73D4u);
    ctx->pc = 0x2E73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73CCu;
    // 0x2e73d0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E73CCu, 0x2E73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73D4u;
label_2e73d4:
    // 0x2e73d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E73D4u;
    {
        const bool branch_taken_0x2e73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D4u;
        // 0x2e73d8: 0x8e2302d8  lw          $v1, 0x2D8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73d4) {
            ctx->pc = 0x2E7404u;
            goto label_2e7404;
        }
    }
    ctx->pc = 0x2E73DCu;
label_2e73dc:
    // 0x2e73dc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2e73dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2e73e0: 0x8624023a  lh          $a0, 0x23A($s1)
    ctx->pc = 0x2e73e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2e73e4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e73e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73e8: 0x9625023c  lhu         $a1, 0x23C($s1)
    ctx->pc = 0x2e73e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e73ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e73ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e73f0: 0xa3a20124  sb          $v0, 0x124($sp)
    ctx->pc = 0x2e73f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 292), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e73f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e73f8: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2E73F8u;
    SET_GPR_U32(ctx, 31, 0x2E7400u);
    ctx->pc = 0x2E73FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73F8u;
    // 0x2e73fc: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2E73F8u, 0x2E7400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7400u;
label_2e7400:
    // 0x2e7400: 0x8e2302d8  lw          $v1, 0x2D8($s1)
    ctx->pc = 0x2e7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
label_2e7404:
    // 0x2e7404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7408: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7408u;
    {
        const bool branch_taken_0x2e7408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7408) {
            ctx->pc = 0x2E7420u;
            goto label_2e7420;
        }
    }
    ctx->pc = 0x2E7410u;
label_2e7410:
    // 0x2e7410: 0x8e2302d8  lw          $v1, 0x2D8($s1)
    ctx->pc = 0x2e7410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x2e7414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e7414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7418: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7418u;
    {
        const bool branch_taken_0x2e7418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7418) {
            ctx->pc = 0x2E741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7418u;
            // 0x2e741c: 0xc6200124  lwc1        $f0, 0x124($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7430u;
            goto label_2e7430;
        }
    }
    ctx->pc = 0x2E7420u;
label_2e7420:
    // 0x2e7420: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2E7420u;
    SET_GPR_U32(ctx, 31, 0x2E7428u);
    ctx->pc = 0x2E7424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7420u;
    // 0x2e7424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2E7420u, 0x2E7428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7428u;
label_2e7428:
    // 0x2e7428: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x2E7428u;
    {
        const bool branch_taken_0x2e7428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7428u;
        // 0x2e742c: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7428) {
            ctx->pc = 0x2E767Cu;
            goto label_2e767c;
        }
    }
    ctx->pc = 0x2E7430u;
label_2e7430:
    // 0x2e7430: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x2e7430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7434: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x2e7434u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e7438: 0xc622012c  lwc1        $f2, 0x12C($s1)
    ctx->pc = 0x2e7438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e743c: 0x46010902  mul.s       $f4, $f1, $f1
    ctx->pc = 0x2e743cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2e7440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e7440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7444: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e7444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e7448: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2e7448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2e744c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e744cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e7450: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e7450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e7454: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2e7454u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2e7458: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e7458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e745c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2e745cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e7460: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2e7460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2e7464: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2e7464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2e7468: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2e7468u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2e746c: 0xe686000c  swc1        $f6, 0xC($s4)
    ctx->pc = 0x2e746cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e7470: 0x0  nop
    ctx->pc = 0x2e7470u;
    // NOP
    // 0x2e7474: 0x0  nop
    ctx->pc = 0x2e7474u;
    // NOP
    // 0x2e7478: 0x46030144  c1          0x30144
    ctx->pc = 0x2e7478u;
    ctx->f[5] = ps2FpuSqrt(ctx->fcr31, ctx->f[3]);
    // 0x2e747c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e747cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e7480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e7480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7484: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e7484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7488: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e7488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e748c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e748cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e7490: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e7490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7494: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e7494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7498: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e7498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e749c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e74a0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2e74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e74a4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2e74a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e74a8: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e74a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e74ac: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2e74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e74b0: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2e74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e74b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e74b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e74b8: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x2e74b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e74bc: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x2e74bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e74c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e74c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e74c4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2e74c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e74c8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2e74c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e74cc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e74ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e74d0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e74d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e74d4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2e74d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2e74d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2e74d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2e74dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e74dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2e74e0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e74e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e74e4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e74e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e74e8: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e74e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e74ec: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e74ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e74f0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e74f0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e74f4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e74f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e74f8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e74fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e74fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7500: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7504: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e7504u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7508: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e7508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e750c: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e750cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e7510: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x2e7510u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e7514: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e7514u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7518: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2e7518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e751c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e751cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7520: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e7520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7524: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2e7524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e7528: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7528u;
    {
        const bool branch_taken_0x2e7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x2E752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7528u;
        // 0x2e752c: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7528) {
            ctx->pc = 0x2E7544u;
            goto label_2e7544;
        }
    }
    ctx->pc = 0x2E7530u;
    // 0x2e7530: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7534: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e7534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e7538: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2e7538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e753c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7540: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2e7540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2e7544:
    // 0x2e7544: 0xc62002c4  lwc1        $f0, 0x2C4($s1)
    ctx->pc = 0x2e7544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7548: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2e7548u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2e754c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e754cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7550: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e7550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7554: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e7554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e7558: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x2e7558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e755c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e755cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e7560: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e7560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e7564: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e7564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7568: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2e7568u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e756c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e7570: 0xc6230178  lwc1        $f3, 0x178($s1)
    ctx->pc = 0x2e7570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7574: 0xc624017c  lwc1        $f4, 0x17C($s1)
    ctx->pc = 0x2e7574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e7578: 0xc6250180  lwc1        $f5, 0x180($s1)
    ctx->pc = 0x2e7578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e757c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2e757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7580: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2e7580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7584: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2e7584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7588: 0xe666000c  swc1        $f6, 0xC($s3)
    ctx->pc = 0x2e7588u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2e758c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2e758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e7590: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2e7590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2e7594: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2e7594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2e7598: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x2e7598u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2e759c: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x2e759cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2e75a0: 0xe7a500a8  swc1        $f5, 0xA8($sp)
    ctx->pc = 0x2e75a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2e75a4: 0x3c01bf4c  lui         $at, 0xBF4C
    ctx->pc = 0x2e75a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48972 << 16));
    // 0x2e75a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e75a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e75ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e75acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e75b0: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e75b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e75b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e75b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e75b8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e75b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e75bc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e75bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e75c0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e75c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e75c4: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x2E75C4u;
    SET_GPR_U32(ctx, 31, 0x2E75CCu);
    ctx->pc = 0x2E75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75C4u;
    // 0x2e75c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x2E75C4u, 0x2E75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75CCu;
label_2e75cc:
    // 0x2e75cc: 0x0  nop
    ctx->pc = 0x2e75ccu;
    // NOP
    // 0x2e75d0: 0x0  nop
    ctx->pc = 0x2e75d0u;
    // NOP
    // 0x2e75d4: 0x46000044  c1          0x44
    ctx->pc = 0x2e75d4u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x2e75d8: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x2e75d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e75dc: 0x0  nop
    ctx->pc = 0x2e75dcu;
    // NOP
    // 0x2e75e0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E75E0u;
    {
        const bool branch_taken_0x2e75e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e75e0) {
            ctx->pc = 0x2E75F4u;
            goto label_2e75f4;
        }
    }
    ctx->pc = 0x2E75E8u;
    // 0x2e75e8: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x2E75E8u;
    SET_GPR_U32(ctx, 31, 0x2E75F0u);
    ctx->pc = 0x2E75ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E75E8u;
    // 0x2e75ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x2E75E8u, 0x2E75F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E75F0u;
label_2e75f0:
    // 0x2e75f0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2e75f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2e75f4:
    // 0x2e75f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e75f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e75f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e75f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e75fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e75fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7600: 0x0  nop
    ctx->pc = 0x2e7600u;
    // NOP
    // 0x2e7604: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e7604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e7608: 0x0  nop
    ctx->pc = 0x2e7608u;
    // NOP
    // 0x2e760c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E760Cu;
    {
        const bool branch_taken_0x2e760c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E7610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E760Cu;
        // 0x2e7610: 0xc7a10090  lwc1        $f1, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e760c) {
            ctx->pc = 0x2E764Cu;
            goto label_2e764c;
        }
    }
    ctx->pc = 0x2E7614u;
    // 0x2e7614: 0x8e2202dc  lw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x2e7618: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e7618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e761c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e761cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e7620: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x2e7620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x2e7624: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x2e7624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
    // 0x2e7628: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x2e7628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e762c: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x2e762cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e7630: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2e7630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2e7634: 0xe620013c  swc1        $f0, 0x13C($s1)
    ctx->pc = 0x2e7634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
    // 0x2e7638: 0xe6200138  swc1        $f0, 0x138($s1)
    ctx->pc = 0x2e7638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x2e763c: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x2e763cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x2e7640: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x2e7640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x2e7644: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E7644u;
    {
        const bool branch_taken_0x2e7644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7644u;
        // 0x2e7648: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7644) {
            ctx->pc = 0x2E7678u;
            goto label_2e7678;
        }
    }
    ctx->pc = 0x2E764Cu;
label_2e764c:
    // 0x2e764c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2e764cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e7650: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2e7650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e7654: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x2e7654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e7658: 0xc7a500a4  lwc1        $f5, 0xA4($sp)
    ctx->pc = 0x2e7658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e765c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2e765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e7660: 0xe6210124  swc1        $f1, 0x124($s1)
    ctx->pc = 0x2e7660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x2e7664: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x2e7664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x2e7668: 0xe6220128  swc1        $f2, 0x128($s1)
    ctx->pc = 0x2e7668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x2e766c: 0xe623012c  swc1        $f3, 0x12C($s1)
    ctx->pc = 0x2e766cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x2e7670: 0xe6240178  swc1        $f4, 0x178($s1)
    ctx->pc = 0x2e7670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x2e7674: 0xe625017c  swc1        $f5, 0x17C($s1)
    ctx->pc = 0x2e7674u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
label_2e7678:
    // 0x2e7678: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x2e7678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_2e767c:
    // 0x2e767c: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x2e767cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2e7680: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x2e7680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2e7684: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x2e7684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2e7688: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x2e7688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e768c: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x2e768cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e7690: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2e7690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e7694: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7694u;
        // 0x2e7698: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E769Cu;
    // 0x2e769c: 0x0  nop
    ctx->pc = 0x2e769cu;
    // NOP
    ctx->pc = 0x2e76a0u;
}
