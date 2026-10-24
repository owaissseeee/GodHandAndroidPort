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

// Function: func_001B27A8
// Address: 0x1b27a8 - 0x1b3548
void func_001B27A8_0x1b27a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B27A8_0x1b27a8");
#endif

    switch (ctx->pc) {
        case 0x1b27f4u: goto label_1b27f4;
        case 0x1b2828u: goto label_1b2828;
        case 0x1b28d4u: goto label_1b28d4;
        case 0x1b2900u: goto label_1b2900;
        case 0x1b2b98u: goto label_1b2b98;
        case 0x1b2c28u: goto label_1b2c28;
        case 0x1b2cd0u: goto label_1b2cd0;
        case 0x1b2e0cu: goto label_1b2e0c;
        case 0x1b2e2cu: goto label_1b2e2c;
        case 0x1b2e50u: goto label_1b2e50;
        case 0x1b2f3cu: goto label_1b2f3c;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f70u: goto label_1b2f70;
        case 0x1b30e4u: goto label_1b30e4;
        case 0x1b314cu: goto label_1b314c;
        case 0x1b32bcu: goto label_1b32bc;
        case 0x1b32e8u: goto label_1b32e8;
        case 0x1b32fcu: goto label_1b32fc;
        case 0x1b33c4u: goto label_1b33c4;
        case 0x1b342cu: goto label_1b342c;
        case 0x1b3454u: goto label_1b3454;
        case 0x1b3468u: goto label_1b3468;
        case 0x1b3498u: goto label_1b3498;
        case 0x1b34a8u: goto label_1b34a8;
        case 0x1b34ecu: goto label_1b34ec;
        case 0x1b3504u: goto label_1b3504;
        default: break;
    }

    ctx->pc = 0x1b27a8u;

    // 0x1b27a8: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1b27a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1b27ac: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x1b27acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x1b27b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b27b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27b4: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x1b27b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x1b27b8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b27bc: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x1b27bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x1b27c0: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x1b27c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x1b27c4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1b27c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1b27c8: 0xe7b601d0  swc1        $f22, 0x1D0($sp)
    ctx->pc = 0x1b27c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1b27cc: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x1b27ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x1b27d0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x1b27d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x1b27d4: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x1b27d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x1b27d8: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x1b27d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x1b27dc: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x1b27dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x1b27e0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1b27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1b27e4: 0xe7b701d8  swc1        $f23, 0x1D8($sp)
    ctx->pc = 0x1b27e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x1b27e8: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x1b27e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x1b27ec: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B27ECu;
    SET_GPR_U32(ctx, 31, 0x1B27F4u);
    ctx->pc = 0x1B27F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27ECu;
    // 0x1b27f0: 0xe7b401c0  swc1        $f20, 0x1C0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B27ECu, 0x1B27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27F4u;
label_1b27f4:
    // 0x1b27f4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b27f8: 0x8e450600  lw          $a1, 0x600($s2)
    ctx->pc = 0x1b27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x1b27fc: 0xc4417a14  lwc1        $f1, 0x7A14($v0)
    ctx->pc = 0x1b27fcu;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2800: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b2800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2804: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1b2804u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b2808: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1b2808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b280c: 0x10a000af  beqz        $a1, . + 4 + (0xAF << 2)
    ctx->pc = 0x1B280Cu;
    {
        const bool branch_taken_0x1b280c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B280Cu;
        // 0x1b2810: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b280c) {
            ctx->pc = 0x1B2ACCu;
            goto label_1b2acc;
        }
    }
    ctx->pc = 0x1B2814u;
    // 0x1b2814: 0x9242062c  lbu         $v0, 0x62C($s2)
    ctx->pc = 0x1b2814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1580)));
    // 0x1b2818: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1B2818u;
    {
        const bool branch_taken_0x1b2818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2818) {
            ctx->pc = 0x1B2ACCu;
            goto label_1b2acc;
        }
    }
    ctx->pc = 0x1B2820u;
    // 0x1b2820: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x1B2820u;
    SET_GPR_U32(ctx, 31, 0x1B2828u);
    ctx->pc = 0x1B2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2820u;
    // 0x1b2824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1B2820u, 0x1B2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2828u;
label_1b2828:
    // 0x1b2828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b282c: 0x144300a7  bne         $v0, $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1B282Cu;
    {
        const bool branch_taken_0x1b282c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B282Cu;
        // 0x1b2830: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b282c) {
            ctx->pc = 0x1B2ACCu;
            goto label_1b2acc;
        }
    }
    ctx->pc = 0x1B2834u;
    // 0x1b2834: 0x86420548  lh          $v0, 0x548($s2)
    ctx->pc = 0x1b2834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x1b2838: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1b2838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b283c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B283Cu;
    {
        const bool branch_taken_0x1b283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B283Cu;
        // 0x1b2840: 0x96430548  lhu         $v1, 0x548($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b283c) {
            ctx->pc = 0x1B284Cu;
            goto label_1b284c;
        }
    }
    ctx->pc = 0x1B2844u;
    // 0x1b2844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2844u;
    {
        const bool branch_taken_0x1b2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2844u;
        // 0x1b2848: 0xa643054a  sh          $v1, 0x54A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2844) {
            ctx->pc = 0x1B2850u;
            goto label_1b2850;
        }
    }
    ctx->pc = 0x1B284Cu;
label_1b284c:
    // 0x1b284c: 0xa644054a  sh          $a0, 0x54A($s2)
    ctx->pc = 0x1b284cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1354), (uint16_t)GPR_U32(ctx, 4));
label_1b2850:
    // 0x1b2850: 0x8e420600  lw          $v0, 0x600($s2)
    ctx->pc = 0x1b2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x1b2854: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x1b2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1b2858: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x1b2858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x1b285c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B285Cu;
    {
        const bool branch_taken_0x1b285c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B285Cu;
        // 0x1b2860: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b285c) {
            ctx->pc = 0x1B286Cu;
            goto label_1b286c;
        }
    }
    ctx->pc = 0x1B2864u;
    // 0x1b2864: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2864u;
    {
        const bool branch_taken_0x1b2864 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2864) {
            ctx->pc = 0x1B287Cu;
            goto label_1b287c;
        }
    }
    ctx->pc = 0x1B286Cu;
label_1b286c:
    // 0x1b286c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b286cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b2870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2874: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2874u;
    {
        const bool branch_taken_0x1b2874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2874u;
        // 0x1b2878: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2874) {
            ctx->pc = 0x1B288Cu;
            goto label_1b288c;
        }
    }
    ctx->pc = 0x1B287Cu;
label_1b287c:
    // 0x1b287c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b2880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2884: 0x0  nop
    ctx->pc = 0x1b2884u;
    // NOP
    // 0x1b2888: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x1b2888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
label_1b288c:
    // 0x1b288c: 0x8e420600  lw          $v0, 0x600($s2)
    ctx->pc = 0x1b288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x1b2890: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b2890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b2894: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2898: 0xc454004c  lwc1        $f20, 0x4C($v0)
    ctx->pc = 0x1b2898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b289c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1b289cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1b28a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b28a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b28a4: 0x0  nop
    ctx->pc = 0x1b28a4u;
    // NOP
    // 0x1b28a8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1B28A8u;
    {
        const bool branch_taken_0x1b28a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B28A8u;
        // 0x1b28ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b28a8) {
            ctx->pc = 0x1B28DCu;
            goto label_1b28dc;
        }
    }
    ctx->pc = 0x1B28B0u;
    // 0x1b28b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b28b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b28b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b28b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b28b8: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1b28bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b28bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b28c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b28c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b28c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B28CCu;
    SET_GPR_U32(ctx, 31, 0x1B28D4u);
    ctx->pc = 0x1B28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28CCu;
    // 0x1b28d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B28CCu, 0x1B28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B28D4u;
label_1b28d4:
    // 0x1b28d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B28D4u;
    {
        const bool branch_taken_0x1b28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b28d4) {
            ctx->pc = 0x1B2900u;
            goto label_1b2900;
        }
    }
    ctx->pc = 0x1B28DCu;
label_1b28dc:
    // 0x1b28dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b28dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b28e0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b28e4: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x1b28e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1b28e8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b28e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b28ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b28f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b28f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b28f8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B28F8u;
    SET_GPR_U32(ctx, 31, 0x1B2900u);
    ctx->pc = 0x1B28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B28F8u;
    // 0x1b28fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B28F8u, 0x1B2900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2900u;
label_1b2900:
    // 0x1b2900: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1b2900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b2904: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1b2904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1b2908: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b290c: 0x4603a001  sub.s       $f0, $f20, $f3
    ctx->pc = 0x1b290cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x1b2910: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x1b2910u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x1b2914: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1b2914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2918: 0x0  nop
    ctx->pc = 0x1b2918u;
    // NOP
    // 0x1b291c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B291Cu;
    {
        const bool branch_taken_0x1b291c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B291Cu;
        // 0x1b2920: 0xe7a20100  swc1        $f2, 0x100($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b291c) {
            ctx->pc = 0x1B2928u;
            goto label_1b2928;
        }
    }
    ctx->pc = 0x1B2924u;
    // 0x1b2924: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x1b2924u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_1b2928:
    // 0x1b2928: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b2928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b292c: 0x0  nop
    ctx->pc = 0x1b292cu;
    // NOP
    // 0x1b2930: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2930u;
    {
        const bool branch_taken_0x1b2930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2930u;
        // 0x1b2934: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2930) {
            ctx->pc = 0x1B293Cu;
            goto label_1b293c;
        }
    }
    ctx->pc = 0x1B2938u;
    // 0x1b2938: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1b2938u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_1b293c:
    // 0x1b293c: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x1b293cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1b2940: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1b2940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1b2944: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b2948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b294c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1b294cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1b2950: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b2950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b2954: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1b2954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2958: 0x0  nop
    ctx->pc = 0x1b2958u;
    // NOP
    // 0x1b295c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B295Cu;
    {
        const bool branch_taken_0x1b295c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B295Cu;
        // 0x1b2960: 0x460300c0  add.s       $f3, $f0, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b295c) {
            ctx->pc = 0x1B2968u;
            goto label_1b2968;
        }
    }
    ctx->pc = 0x1B2964u;
    // 0x1b2964: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x1b2964u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_1b2968:
    // 0x1b2968: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b2968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b296c: 0x0  nop
    ctx->pc = 0x1b296cu;
    // NOP
    // 0x1b2970: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2970u;
    {
        const bool branch_taken_0x1b2970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2970u;
        // 0x1b2974: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2970) {
            ctx->pc = 0x1B297Cu;
            goto label_1b297c;
        }
    }
    ctx->pc = 0x1B2978u;
    // 0x1b2978: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x1b2978u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_1b297c:
    // 0x1b297c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1b2980: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2984: 0x3c013c83  lui         $at, 0x3C83
    ctx->pc = 0x1b2984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15491 << 16));
    // 0x1b2988: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b2988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b298c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b298cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2990: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b2990u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b2994: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1b2994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1b2998: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1b2998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1b299c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1b299cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b29a0: 0x0  nop
    ctx->pc = 0x1b29a0u;
    // NOP
    // 0x1b29a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B29A4u;
    {
        const bool branch_taken_0x1b29a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29A4u;
        // 0x1b29a8: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29a4) {
            ctx->pc = 0x1B29B0u;
            goto label_1b29b0;
        }
    }
    ctx->pc = 0x1B29ACu;
    // 0x1b29ac: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1b29acu;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1b29b0:
    // 0x1b29b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b29b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b29b4: 0x0  nop
    ctx->pc = 0x1b29b4u;
    // NOP
    // 0x1b29b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B29B8u;
    {
        const bool branch_taken_0x1b29b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29B8u;
        // 0x1b29bc: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29b8) {
            ctx->pc = 0x1B29C4u;
            goto label_1b29c4;
        }
    }
    ctx->pc = 0x1B29C0u;
    // 0x1b29c0: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x1b29c0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_1b29c4:
    // 0x1b29c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b29c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b29c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b29c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b29cc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1b29ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1b29d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b29d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b29d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b29d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b29d8: 0x4602a041  sub.s       $f1, $f20, $f2
    ctx->pc = 0x1b29d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x1b29dc: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x1b29dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1b29e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1b29e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1b29e4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1b29e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b29e8: 0x0  nop
    ctx->pc = 0x1b29e8u;
    // NOP
    // 0x1b29ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B29ECu;
    {
        const bool branch_taken_0x1b29ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29ECu;
        // 0x1b29f0: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29ec) {
            ctx->pc = 0x1B29F8u;
            goto label_1b29f8;
        }
    }
    ctx->pc = 0x1B29F4u;
    // 0x1b29f4: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x1b29f4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_1b29f8:
    // 0x1b29f8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1b29f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b29fc: 0x0  nop
    ctx->pc = 0x1b29fcu;
    // NOP
    // 0x1b2a00: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2A00u;
    {
        const bool branch_taken_0x1b2a00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A00u;
        // 0x1b2a04: 0x46001146  mov.s       $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a00) {
            ctx->pc = 0x1B2A0Cu;
            goto label_1b2a0c;
        }
    }
    ctx->pc = 0x1B2A08u;
    // 0x1b2a08: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x1b2a08u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_1b2a0c:
    // 0x1b2a0c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1b2a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a14: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1b2a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1b2a18: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b2a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b2a1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2a20: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1b2a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1b2a24: 0x3c0143dc  lui         $at, 0x43DC
    ctx->pc = 0x1b2a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17372 << 16));
    // 0x1b2a28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b2a2c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x1b2a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x1b2a30: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x1b2a30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1b2a34: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x1b2a34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2a38: 0x0  nop
    ctx->pc = 0x1b2a38u;
    // NOP
    // 0x1b2a3c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2A3Cu;
    {
        const bool branch_taken_0x1b2a3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A3Cu;
        // 0x1b2a40: 0x460118c0  add.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a3c) {
            ctx->pc = 0x1B2A48u;
            goto label_1b2a48;
        }
    }
    ctx->pc = 0x1B2A44u;
    // 0x1b2a44: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x1b2a44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_1b2a48:
    // 0x1b2a48: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b2a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2a4c: 0x0  nop
    ctx->pc = 0x1b2a4cu;
    // NOP
    // 0x1b2a50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2A50u;
    {
        const bool branch_taken_0x1b2a50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A50u;
        // 0x1b2a54: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a50) {
            ctx->pc = 0x1B2A5Cu;
            goto label_1b2a5c;
        }
    }
    ctx->pc = 0x1B2A58u;
    // 0x1b2a58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b2a58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1b2a5c:
    // 0x1b2a5c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b2a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1b2a60: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b2a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a68: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2a6c: 0x8e420600  lw          $v0, 0x600($s2)
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1536)));
    // 0x1b2a70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b2a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2a74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1b2a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b2a78: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1b2a78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1b2a7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b2a7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a80: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b2a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2a84: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1b2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b2a88: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b2a88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2a8c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2a90: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2a94: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x1b2a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2a98: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2a98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2a9c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2a9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2aa0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2aa4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b2aa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2aa8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2aac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b2ab0: 0xda440610  lqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2ab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1b2ab4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b2ab4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ab8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2abc: 0xfa440610  sqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2abcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ac0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ac4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1b2ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ac8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b2ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2acc:
    // 0x1b2acc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2ad0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1b2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2ad8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b2ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b2adc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1b2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b2ae0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1b2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1b2ae4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b2ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b2ae8: 0xe4750004  swc1        $f21, 0x4($v1)
    ctx->pc = 0x1b2ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1b2aec: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1b2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1b2af0: 0x8e4600f0  lw          $a2, 0xF0($s2)
    ctx->pc = 0x1b2af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b2af4: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x1b2af4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b2af8: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1b2af8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2afc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2b00: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2b00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2b04: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x1b2b04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2b08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2b0c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2b10: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x1b2b10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2b14: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2b18: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b2b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b2b1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b2b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b24: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1b2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b2b28: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1b2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1b2b2c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b2b30: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b2b34: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1b2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1b2b38: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x1b2b38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b2b3c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1b2b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2b40: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1b2b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2b44: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b2b44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2b48: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2b48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2b4c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b2b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2b50: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b2b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2b54: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2b58: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1b2b58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b5c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1b2b5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2b64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2b68: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b2b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1b2b6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b2b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b2b74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b2b74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b78: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b2b7c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b2b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b80: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b2b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b2b84: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1b2b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b2b88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b2b88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b2b8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b90: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1B2B90u;
    SET_GPR_U32(ctx, 31, 0x1B2B98u);
    ctx->pc = 0x1B2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B90u;
    // 0x1b2b94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B2B90u, 0x1B2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2B98u;
label_1b2b98:
    // 0x1b2b98: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1B2B98u;
    {
        const bool branch_taken_0x1b2b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B98u;
        // 0x1b2b9c: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b98) {
            ctx->pc = 0x1B2DE0u;
            goto label_1b2de0;
        }
    }
    ctx->pc = 0x1B2BA0u;
    // 0x1b2ba0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x1b2ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x1b2ba4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b2ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2ba8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b2bac: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b2bb0: 0x2623d8b0  addiu       $v1, $s1, -0x2750
    ctx->pc = 0x1b2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957232));
    // 0x1b2bb4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b2bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b2bb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b2bbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b2bbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x1b2bc0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1b2bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2bc4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1b2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2bc8: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x1b2bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2bcc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1b2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2bd0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1b2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b2bd4: 0xc7a700b8  lwc1        $f7, 0xB8($sp)
    ctx->pc = 0x1b2bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b2bd8: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1b2bd8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b2bdc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b2bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2be0: 0xc7a500b0  lwc1        $f5, 0xB0($sp)
    ctx->pc = 0x1b2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b2be4: 0x460720c2  mul.s       $f3, $f4, $f7
    ctx->pc = 0x1b2be4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x1b2be8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b2be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2bec: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x1b2becu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1b2bf0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1b2bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1b2bf4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1b2bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1b2bf8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x1b2bf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1b2bfc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x1b2bfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1b2c00: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1b2c00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2c04: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1b2c04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b2c08: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b2c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b2c0c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1b2c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1b2c10: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x1b2c10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1b2c14: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x1b2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2c18: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b2c18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c1c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b2c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c20: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B2C20u;
    SET_GPR_U32(ctx, 31, 0x1B2C28u);
    ctx->pc = 0x1B2C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C20u;
    // 0x1b2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B2C20u, 0x1B2C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2C28u;
label_1b2c28:
    // 0x1b2c28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b2c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2c2c: 0x0  nop
    ctx->pc = 0x1b2c2cu;
    // NOP
    // 0x1b2c30: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B2C30u;
    {
        const bool branch_taken_0x1b2c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C30u;
        // 0x1b2c34: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c30) {
            ctx->pc = 0x1B2C6Cu;
            goto label_1b2c6c;
        }
    }
    ctx->pc = 0x1B2C38u;
    // 0x1b2c38: 0x0  nop
    ctx->pc = 0x1b2c38u;
    // NOP
    // 0x1b2c3c: 0x0  nop
    ctx->pc = 0x1b2c3cu;
    // NOP
    // 0x1b2c40: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1b2c40u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1b2c44: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x1b2c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b2c48: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b2c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2c4c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1b2c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2c50: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1b2c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1b2c54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b2c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b2c58: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1b2c58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b2c5c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1b2c5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1b2c60: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1b2c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1b2c64: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1b2c64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b2c68: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x1b2c68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1b2c6c:
    // 0x1b2c6c: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x1b2c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b2c70: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b2c70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2c74: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b2c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2c78: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x1b2c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2c7c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1b2c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2c80: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x1b2c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b2c84: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x1b2c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b2c88: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1b2c88u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b2c8c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1b2c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2c90: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x1b2c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b2c94: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x1b2c94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1b2c98: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b2c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2c9c: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x1b2c9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x1b2ca0: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1b2ca0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1b2ca4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1b2ca4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1b2ca8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1b2ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1b2cac: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x1b2cacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x1b2cb0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1b2cb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1b2cb4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1b2cb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b2cb8: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x1b2cb8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b2cbc: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x1b2cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1b2cc0: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x1b2cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1b2cc4: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x1b2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2cc8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B2CC8u;
    SET_GPR_U32(ctx, 31, 0x1B2CD0u);
    ctx->pc = 0x1B2CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CC8u;
    // 0x1b2ccc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B2CC8u, 0x1B2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CD0u;
label_1b2cd0:
    // 0x1b2cd0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b2cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2cd4: 0x0  nop
    ctx->pc = 0x1b2cd4u;
    // NOP
    // 0x1b2cd8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1B2CD8u;
    {
        const bool branch_taken_0x1b2cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CD8u;
        // 0x1b2cdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cd8) {
            ctx->pc = 0x1B2D18u;
            goto label_1b2d18;
        }
    }
    ctx->pc = 0x1B2CE0u;
    // 0x1b2ce0: 0x0  nop
    ctx->pc = 0x1b2ce0u;
    // NOP
    // 0x1b2ce4: 0x0  nop
    ctx->pc = 0x1b2ce4u;
    // NOP
    // 0x1b2ce8: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1b2ce8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1b2cec: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1b2cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b2cf0: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x1b2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b2cf4: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1b2cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2cf8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1b2cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2cfc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1b2cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1b2d00: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b2d00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b2d04: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1b2d04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b2d08: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1b2d08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1b2d0c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1b2d0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1b2d10: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x1b2d10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b2d14: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x1b2d14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1b2d18:
    // 0x1b2d18: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b2d18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2d1c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1b2d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2d20: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b2d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1b2d24: 0xe6d50004  swc1        $f21, 0x4($s6)
    ctx->pc = 0x1b2d24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x1b2d28: 0xe7b400b8  swc1        $f20, 0xB8($sp)
    ctx->pc = 0x1b2d28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1b2d2c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1b2d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2d30: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1b2d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2d34: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1b2d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2d38: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1b2d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b2d3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b2d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b2d40: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x1b2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b2d44: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1b2d44u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2d48: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1b2d48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1b2d4c: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x1b2d4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x1b2d50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b2d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b2d54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b2d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b2d58: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b2d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b2d5c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1b2d5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2d60: 0x0  nop
    ctx->pc = 0x1b2d60u;
    // NOP
    // 0x1b2d64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B2D64u;
    {
        const bool branch_taken_0x1b2d64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2D64u;
        // 0x1b2d68: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d64) {
            ctx->pc = 0x1B2D70u;
            goto label_1b2d70;
        }
    }
    ctx->pc = 0x1B2D6Cu;
    // 0x1b2d6c: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x1b2d6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
label_1b2d70:
    // 0x1b2d70: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1b2d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1b2d74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2d74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b2d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2d7c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b2d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1b2d80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b2d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1b2d84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2d88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b2d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b2d8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b2d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b2d90: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1b2d90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b2d94: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b2d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2d98: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2d98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2d9c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2da0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1b2da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2da4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1b2da4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2da8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2dac: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b2dacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b2db0: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1b2db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2db4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2db4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2db8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2dbc: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b2dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2dc0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b2dc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2dc4: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1b2dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2dc8: 0xda440610  lqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2dc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1b2dcc: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1b2dccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b2dd0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2dd4: 0xfa440610  sqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2dd8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B2DD8u;
    {
        const bool branch_taken_0x1b2dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2DD8u;
        // 0x1b2ddc: 0x26440610  addiu       $a0, $s2, 0x610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2dd8) {
            ctx->pc = 0x1B2E04u;
            goto label_1b2e04;
        }
    }
    ctx->pc = 0x1B2DE0u;
label_1b2de0:
    // 0x1b2de0: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1b2de4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b2de8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2dec: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x1b2decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b2df0: 0xc6400614  lwc1        $f0, 0x614($s2)
    ctx->pc = 0x1b2df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2df4: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x1b2df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x1b2df8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b2df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b2dfc: 0xe6400614  swc1        $f0, 0x614($s2)
    ctx->pc = 0x1b2dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
    // 0x1b2e00: 0x26440610  addiu       $a0, $s2, 0x610
    ctx->pc = 0x1b2e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_1b2e04:
    // 0x1b2e04: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B2E04u;
    SET_GPR_U32(ctx, 31, 0x1B2E0Cu);
    ctx->pc = 0x1B2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E04u;
    // 0x1b2e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B2E04u, 0x1B2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E0Cu;
label_1b2e0c:
    // 0x1b2e0c: 0xc6410620  lwc1        $f1, 0x620($s2)
    ctx->pc = 0x1b2e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2e10: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1b2e10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1b2e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2e18: 0x0  nop
    ctx->pc = 0x1b2e18u;
    // NOP
    // 0x1b2e1c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2E1Cu;
    {
        const bool branch_taken_0x1b2e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2e1c) {
            ctx->pc = 0x1B2E78u;
            goto label_1b2e78;
        }
    }
    ctx->pc = 0x1B2E24u;
    // 0x1b2e24: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B2E24u;
    SET_GPR_U32(ctx, 31, 0x1B2E2Cu);
    ctx->pc = 0x1B2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E24u;
    // 0x1b2e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B2E24u, 0x1B2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E2Cu;
label_1b2e2c:
    // 0x1b2e2c: 0x0  nop
    ctx->pc = 0x1b2e2cu;
    // NOP
    // 0x1b2e30: 0x0  nop
    ctx->pc = 0x1b2e30u;
    // NOP
    // 0x1b2e34: 0x46000044  c1          0x44
    ctx->pc = 0x1b2e34u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b2e38: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x1b2e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2e3c: 0x0  nop
    ctx->pc = 0x1b2e3cu;
    // NOP
    // 0x1b2e40: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2E40u;
    {
        const bool branch_taken_0x1b2e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2e40) {
            ctx->pc = 0x1B2E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2E40u;
            // 0x1b2e44: 0xc6400620  lwc1        $f0, 0x620($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E58u;
            goto label_1b2e58;
        }
    }
    ctx->pc = 0x1B2E48u;
    // 0x1b2e48: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1B2E48u;
    SET_GPR_U32(ctx, 31, 0x1B2E50u);
    ctx->pc = 0x1B2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2E48u;
    // 0x1b2e4c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1B2E48u, 0x1B2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2E50u;
label_1b2e50:
    // 0x1b2e50: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1b2e50u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2e54: 0xc6400620  lwc1        $f0, 0x620($s2)
    ctx->pc = 0x1b2e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2e58:
    // 0x1b2e58: 0x0  nop
    ctx->pc = 0x1b2e58u;
    // NOP
    // 0x1b2e5c: 0x0  nop
    ctx->pc = 0x1b2e5cu;
    // NOP
    // 0x1b2e60: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b2e60u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1b2e64: 0xda440610  lqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1b2e68: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b2e68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2e6c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2e6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2e70: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2e74: 0xfa440610  sqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2e74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
label_1b2e78:
    // 0x1b2e78: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b2e78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2e7c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2e80: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2e84: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1b2e84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2e88: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2e88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2e8c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2e90: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2e94: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b2e94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2e98: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2e9c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b2e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b2ea0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b2ea0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ea4: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1b2ea4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2ea8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2eac: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b2eacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2eb0: 0xc6400628  lwc1        $f0, 0x628($s2)
    ctx->pc = 0x1b2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2eb4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b2eb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2eb8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ebc: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2ebcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2ec0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b2ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2ec4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2ec4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2ec8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2ecc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ed0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1b2ed0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b2ed4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ed8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b2ed8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2edc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ee0: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2ee4: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1b2ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2ee8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2ee8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2eec: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2ef0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ef4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1b2ef4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b2ef8: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2efc: 0xda440610  lqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1552)));
    // 0x1b2f00: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x1b2f00u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2f04: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b2f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2f08: 0xfa440610  sqc2        $vf4, 0x610($s2)
    ctx->pc = 0x1b2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1552), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2f0c: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b2f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b2f10: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1b2f14: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b2f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b2f18: 0x26560490  addiu       $s6, $s2, 0x490
    ctx->pc = 0x1b2f18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x1b2f1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b2f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f24: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b2f28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b2f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b2f30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f34: 0xc04cb68  jal         func_132DA0
    ctx->pc = 0x1B2F34u;
    SET_GPR_U32(ctx, 31, 0x1B2F3Cu);
    ctx->pc = 0x1B2F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F34u;
    // 0x1b2f38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x1B2F34u, 0x1B2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F3Cu;
label_1b2f3c:
    // 0x1b2f3c: 0x504000ca  beql        $v0, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x1B2F3Cu;
    {
        const bool branch_taken_0x1b2f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f3c) {
            ctx->pc = 0x1B2F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2F3Cu;
            // 0x1b2f40: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B3268u;
            goto label_1b3268;
        }
    }
    ctx->pc = 0x1B2F44u;
    // 0x1b2f44: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B2F44u;
    SET_GPR_U32(ctx, 31, 0x1B2F4Cu);
    ctx->pc = 0x1B2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F44u;
    // 0x1b2f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B2F44u, 0x1B2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F4Cu;
label_1b2f4c:
    // 0x1b2f4c: 0x0  nop
    ctx->pc = 0x1b2f4cu;
    // NOP
    // 0x1b2f50: 0x0  nop
    ctx->pc = 0x1b2f50u;
    // NOP
    // 0x1b2f54: 0x46000544  c1          0x544
    ctx->pc = 0x1b2f54u;
    ctx->f[21] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1b2f58: 0x4615a832  c.eq.s      $f21, $f21
    ctx->pc = 0x1b2f58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2f5c: 0x0  nop
    ctx->pc = 0x1b2f5cu;
    // NOP
    // 0x1b2f60: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2F60u;
    {
        const bool branch_taken_0x1b2f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f60) {
            ctx->pc = 0x1B2F74u;
            goto label_1b2f74;
        }
    }
    ctx->pc = 0x1B2F68u;
    // 0x1b2f68: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1B2F68u;
    SET_GPR_U32(ctx, 31, 0x1B2F70u);
    ctx->pc = 0x1B2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F68u;
    // 0x1b2f6c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1B2F68u, 0x1B2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F70u;
label_1b2f70:
    // 0x1b2f70: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1b2f70u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1b2f74:
    // 0x1b2f74: 0x3c013400  lui         $at, 0x3400
    ctx->pc = 0x1b2f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13312 << 16));
    // 0x1b2f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2f7c: 0x0  nop
    ctx->pc = 0x1b2f7cu;
    // NOP
    // 0x1b2f80: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1b2f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2f84: 0x0  nop
    ctx->pc = 0x1b2f84u;
    // NOP
    // 0x1b2f88: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x1B2F88u;
    {
        const bool branch_taken_0x1b2f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F88u;
        // 0x1b2f8c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f88) {
            ctx->pc = 0x1B3250u;
            goto label_1b3250;
        }
    }
    ctx->pc = 0x1B2F90u;
    // 0x1b2f90: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b2f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2f94: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2f98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2f9c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1b2f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b2fa0: 0x0  nop
    ctx->pc = 0x1b2fa0u;
    // NOP
    // 0x1b2fa4: 0x4615b003  div.s       $f0, $f22, $f21
    ctx->pc = 0x1b2fa4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[21]);
    // 0x1b2fa8: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2fa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2fac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b2facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2fb0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2fb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2fb4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2fb8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b2fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2fbc: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1b2fbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b2fc0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b2fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2fc4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b2fc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2fc8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2fcc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2fccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b2fd0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b2fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b2fd4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b2fd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b2fd8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b2fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b2fdc: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2fe0: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1b2fe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1b2fe4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1b2fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2fe8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b2fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b2fec: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1b2fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1b2ff0: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1b2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b2ff4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b2ff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2ff8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b2ffc: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b2ffcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3000: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x1b3000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b3004: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b3004u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b3008: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b3008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b300c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b300cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3010: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1b3010u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1b3014: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b3014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3018: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x1b3018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b301c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1b301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1b3020: 0xe6f40004  swc1        $f20, 0x4($s7)
    ctx->pc = 0x1b3020u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x1b3024: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1b3024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1b3028: 0xe6f6000c  swc1        $f22, 0xC($s7)
    ctx->pc = 0x1b3028u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x1b302c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1b302cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b3030: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b3030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3034: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b3034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3038: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1b3038u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b303c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b303cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b3040: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b3040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3044: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1b3044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b3048: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b3048u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b304c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1b304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3050: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b3054: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1b3054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b3058: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1b3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b305c: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1b305cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b3060: 0xdaa50000  lqc2        $vf5, 0x0($s5)
    ctx->pc = 0x1b3060u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b3064: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b3064u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b3068: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1b3068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b306c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b306cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3070: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x1b3070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3074: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1b3074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1b3078: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x1b3078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b307c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b307cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b3080: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1b3080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1b3084: 0xe456000c  swc1        $f22, 0xC($v0)
    ctx->pc = 0x1b3084u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b3088: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1b3088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b308c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3090: 0xdba400c0  lqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b3090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b3094: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b3094u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3098: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b3098u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b309c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b309cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b30a0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b30a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b30a4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b30a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b30a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b30ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b30acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b30b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1b30b4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1b30b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b30b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1b30bc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b30bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1b30c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1b30c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b30c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30c8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b30c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b30cc: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1b30ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b30d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b30d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b30d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b30d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b30d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b30dc: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1B30DCu;
    SET_GPR_U32(ctx, 31, 0x1B30E4u);
    ctx->pc = 0x1B30E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B30DCu;
    // 0x1b30e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1B30DCu, 0x1B30E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30E4u;
label_1b30e4:
    // 0x1b30e4: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1B30E4u;
    {
        const bool branch_taken_0x1b30e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B30E4u;
        // 0x1b30e8: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30e4) {
            ctx->pc = 0x1B324Cu;
            goto label_1b324c;
        }
    }
    ctx->pc = 0x1B30ECu;
    // 0x1b30ec: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1b30ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30f0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1b30f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b30f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b30f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b30f8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b30f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1b30fc: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1b30fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1b3100: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1b3100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1b3104: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b3108: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1b3108u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1b310c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1b310cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b3110: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1b3110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1b3114: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x1b3114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1b3118: 0xe676000c  swc1        $f22, 0xC($s3)
    ctx->pc = 0x1b3118u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1b311c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1b311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3120: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1b3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3124: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1b3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3128: 0xc7a400c4  lwc1        $f4, 0xC4($sp)
    ctx->pc = 0x1b3128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b312c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1b312cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b3130: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1b3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3134: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b3134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b3138: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1b3138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b313c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b313cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3140: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1b3140u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1b3144: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x1B3144u;
    SET_GPR_U32(ctx, 31, 0x1B314Cu);
    ctx->pc = 0x1B3148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3144u;
    // 0x1b3148: 0x46011500  add.s       $f20, $f2, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x1B3144u, 0x1B314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B314Cu;
label_1b314c:
    // 0x1b314c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1b314cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3150: 0x0  nop
    ctx->pc = 0x1b3150u;
    // NOP
    // 0x1b3154: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x1B3154u;
    {
        const bool branch_taken_0x1b3154 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3154u;
        // 0x1b3158: 0x27a200f0  addiu       $v0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3154) {
            ctx->pc = 0x1B324Cu;
            goto label_1b324c;
        }
    }
    ctx->pc = 0x1B315Cu;
    // 0x1b315c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1b315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3160: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b3160u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3164: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b3164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3168: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b3168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b316c: 0x4408b800  mfc1        $t0, $f23
    ctx->pc = 0x1b316cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b3170: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b3170u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b3174: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b3174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b3178: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b3178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b317c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b317cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3180: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b3180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3184: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1b3184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b3188: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b3188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b318c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3190: 0xdba400f0  lqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b3190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1b3194: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b3194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b3198: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b3198u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b319c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b319cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b31a0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b31a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b31a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b31a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b31a8: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1b31a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b31ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b31acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b31b0: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x1b31b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b31b4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b31b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b31b8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1b31b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b31bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b31bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b31c0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1b31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b31c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b31c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b31c8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b31c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b31cc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1b31ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b31d0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1b31d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b31d4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1b31d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b31d8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1b31d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b31dc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1b31dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b31e0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1b31e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b31e4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1b31e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b31e8: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b31ec: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b31ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b31f0: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x1b31f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b31f4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b31f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b31f8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b31f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b31fc: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3200: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b3200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b3204: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1b3204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3208: 0xc6400624  lwc1        $f0, 0x624($s2)
    ctx->pc = 0x1b3208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b320c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b320cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b3210: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b3210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3214: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b3214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1b3218: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b3218u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b321c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b321cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b3220: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b3220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b3224: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1b3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3228: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b3228u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b322c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1b322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3230: 0x12130006  beq         $s0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3230u;
    {
        const bool branch_taken_0x1b3230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1B3234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3230u;
        // 0x1b3234: 0xc7a000c0  lwc1        $f0, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3230) {
            ctx->pc = 0x1B324Cu;
            goto label_1b324c;
        }
    }
    ctx->pc = 0x1B3238u;
    // 0x1b3238: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1b3238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b323c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1b323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3240: 0xe6400610  swc1        $f0, 0x610($s2)
    ctx->pc = 0x1b3240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1552), bits); }
    // 0x1b3244: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b3244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b3248: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1b3248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b324c:
    // 0x1b324c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1b324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b3250:
    // 0x1b3250: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b3250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b3254: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b3258: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1b3258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1b325c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1b325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3260: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b3260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1b3264: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1b3264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1b3268:
    // 0x1b3268: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1b3268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b326c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b326cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3270: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x1b3270u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b3274: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b3274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b3278: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x1b3278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b327c: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1b327cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b3280: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b3280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3284: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1b3284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3288: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1b3288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b328c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1b328cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1b3290: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1b3290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1b3294: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b3294u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b3298: 0x0  nop
    ctx->pc = 0x1b3298u;
    // NOP
    // 0x1b329c: 0x0  nop
    ctx->pc = 0x1b329cu;
    // NOP
    // 0x1b32a0: 0x460c0504  c1          0xC0504
    ctx->pc = 0x1b32a0u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x1b32a4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x1b32a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b32a8: 0x0  nop
    ctx->pc = 0x1b32a8u;
    // NOP
    // 0x1b32ac: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1B32ACu;
    {
        const bool branch_taken_0x1b32ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b32ac) {
            ctx->pc = 0x1B32B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B32ACu;
            // 0x1b32b0: 0x924202b4  lbu         $v0, 0x2B4($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B32C4u;
            goto label_1b32c4;
        }
    }
    ctx->pc = 0x1B32B4u;
    // 0x1b32b4: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x1B32B4u;
    SET_GPR_U32(ctx, 31, 0x1B32BCu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x1B32B4u, 0x1B32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32BCu;
label_1b32bc:
    // 0x1b32bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b32bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b32c0: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1b32c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1b32c4:
    // 0x1b32c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B32C4u;
    {
        const bool branch_taken_0x1b32c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32C4u;
        // 0x1b32c8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32c4) {
            ctx->pc = 0x1B32D8u;
            goto label_1b32d8;
        }
    }
    ctx->pc = 0x1B32CCu;
    // 0x1b32cc: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1b32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1b32d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B32D0u;
    {
        const bool branch_taken_0x1b32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32D0u;
        // 0x1b32d4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32d0) {
            ctx->pc = 0x1B32DCu;
            goto label_1b32dc;
        }
    }
    ctx->pc = 0x1B32D8u;
label_1b32d8:
    // 0x1b32d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b32d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b32dc:
    // 0x1b32dc: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x1b32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1b32e0: 0xc056964  jal         func_15A590
    ctx->pc = 0x1B32E0u;
    SET_GPR_U32(ctx, 31, 0x1B32E8u);
    ctx->pc = 0x1B32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32E0u;
    // 0x1b32e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A590u, 0x1B32E0u, 0x1B32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32E8u;
label_1b32e8:
    // 0x1b32e8: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1b32e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1b32ec: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x1b32ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b32f0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1b32f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1b32f4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B32F4u;
    SET_GPR_U32(ctx, 31, 0x1B32FCu);
    ctx->pc = 0x1B32F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32F4u;
    // 0x1b32f8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B32F4u, 0x1B32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32FCu;
label_1b32fc:
    // 0x1b32fc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1b32fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3300: 0x0  nop
    ctx->pc = 0x1b3300u;
    // NOP
    // 0x1b3304: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1B3304u;
    {
        const bool branch_taken_0x1b3304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3304u;
        // 0x1b3308: 0xc7a40040  lwc1        $f4, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3304) {
            ctx->pc = 0x1B3348u;
            goto label_1b3348;
        }
    }
    ctx->pc = 0x1B330Cu;
    // 0x1b330c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3314: 0x0  nop
    ctx->pc = 0x1b3314u;
    // NOP
    // 0x1b3318: 0x0  nop
    ctx->pc = 0x1b3318u;
    // NOP
    // 0x1b331c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b331cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1b3320: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x1b3320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3324: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x1b3324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3328: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1b3328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b332c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1b332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1b3330: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1b3330u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3334: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1b3334u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1b3338: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1b3338u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b333c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1b333cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b3340: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1b3340u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b3344: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1b3344u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1b3348:
    // 0x1b3348: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1b3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b334c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b334cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3350: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3354: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1b3354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1b3358: 0x2462d8b0  addiu       $v0, $v1, -0x2750
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957232));
    // 0x1b335c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b335cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x1b3360: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b3360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3364: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1b3364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b3368: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1b3368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b336c: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x1b336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b3370: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x1b3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b3374: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x1b3374u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1b3378: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1b3378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b337c: 0xc7a50090  lwc1        $f5, 0x90($sp)
    ctx->pc = 0x1b337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b3380: 0x46071902  mul.s       $f4, $f3, $f7
    ctx->pc = 0x1b3380u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x1b3384: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b3384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b3388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b338c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b338cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b3390: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1b3390u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1b3394: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1b3394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1b3398: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x1b3398u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x1b339c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1b339cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1b33a0: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x1b33a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x1b33a4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1b33a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1b33a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1b33a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1b33ac: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x1b33acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b33b0: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1b33b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b33b4: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1b33b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b33b8: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1b33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b33bc: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1B33BCu;
    SET_GPR_U32(ctx, 31, 0x1B33C4u);
    ctx->pc = 0x1B33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B33BCu;
    // 0x1b33c0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1B33BCu, 0x1B33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B33C4u;
label_1b33c4:
    // 0x1b33c4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1b33c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b33c8: 0x0  nop
    ctx->pc = 0x1b33c8u;
    // NOP
    // 0x1b33cc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1B33CCu;
    {
        const bool branch_taken_0x1b33cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B33CCu;
        // 0x1b33d0: 0xc7a30070  lwc1        $f3, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33cc) {
            ctx->pc = 0x1B3408u;
            goto label_1b3408;
        }
    }
    ctx->pc = 0x1B33D4u;
    // 0x1b33d4: 0x0  nop
    ctx->pc = 0x1b33d4u;
    // NOP
    // 0x1b33d8: 0x0  nop
    ctx->pc = 0x1b33d8u;
    // NOP
    // 0x1b33dc: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1b33dcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x1b33e0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x1b33e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b33e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1b33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b33e8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b33e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b33ec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1b33ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1b33f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b33f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b33f4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1b33f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b33f8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x1b33f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1b33fc: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x1b33fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1b3400: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x1b3400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1b3404: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1b3404u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1b3408:
    // 0x1b3408: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1b3408u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b340c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1b340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b3410: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1b3410u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1b3414: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x1b3414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x1b3418: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b3418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b341c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1b341cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3420: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1b3420u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x1b3424: 0xc056810  jal         func_15A040
    ctx->pc = 0x1B3424u;
    SET_GPR_U32(ctx, 31, 0x1B342Cu);
    ctx->pc = 0x1B3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3424u;
    // 0x1b3428: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A040u, 0x1B3424u, 0x1B342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B342Cu;
label_1b342c:
    // 0x1b342c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1b342cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1b3430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3430u;
    {
        const bool branch_taken_0x1b3430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3430u;
        // 0x1b3434: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3430) {
            ctx->pc = 0x1B3444u;
            goto label_1b3444;
        }
    }
    ctx->pc = 0x1B3438u;
    // 0x1b3438: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1b3438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1b343c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B343Cu;
    {
        const bool branch_taken_0x1b343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B343Cu;
        // 0x1b3440: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b343c) {
            ctx->pc = 0x1B3448u;
            goto label_1b3448;
        }
    }
    ctx->pc = 0x1B3444u;
label_1b3444:
    // 0x1b3444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b3444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b3448:
    // 0x1b3448: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x1b3448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1b344c: 0xc0568fa  jal         func_15A3E8
    ctx->pc = 0x1B344Cu;
    SET_GPR_U32(ctx, 31, 0x1B3454u);
    ctx->pc = 0x1B3450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B344Cu;
    // 0x1b3450: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A3E8u, 0x1B344Cu, 0x1B3454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3454u;
label_1b3454:
    // 0x1b3454: 0x9242062d  lbu         $v0, 0x62D($s2)
    ctx->pc = 0x1b3454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1581)));
    // 0x1b3458: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B3458u;
    {
        const bool branch_taken_0x1b3458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3458) {
            ctx->pc = 0x1B34A0u;
            goto label_1b34a0;
        }
    }
    ctx->pc = 0x1B3460u;
    // 0x1b3460: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B3460u;
    SET_GPR_U32(ctx, 31, 0x1B3468u);
    ctx->pc = 0x1B3464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3460u;
    // 0x1b3464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B3460u, 0x1B3468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3468u;
label_1b3468:
    // 0x1b3468: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b346c: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1b346cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x1b3470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3474: 0x0  nop
    ctx->pc = 0x1b3474u;
    // NOP
    // 0x1b3478: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b3478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b347c: 0x0  nop
    ctx->pc = 0x1b347cu;
    // NOP
    // 0x1b3480: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B3480u;
    {
        const bool branch_taken_0x1b3480 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B3484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3480u;
        // 0x1b3484: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3480) {
            ctx->pc = 0x1B34F8u;
            goto label_1b34f8;
        }
    }
    ctx->pc = 0x1B3488u;
    // 0x1b3488: 0x8e450630  lw          $a1, 0x630($s2)
    ctx->pc = 0x1b3488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1584)));
    // 0x1b348c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b3490: 0xc0b2f08  jal         func_2CBC20
    ctx->pc = 0x1B3490u;
    SET_GPR_U32(ctx, 31, 0x1B3498u);
    ctx->pc = 0x1B3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3490u;
    // 0x1b3494: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC20u, 0x1B3490u, 0x1B3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3498u;
label_1b3498:
    // 0x1b3498: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B3498u;
    {
        const bool branch_taken_0x1b3498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3498u;
        // 0x1b349c: 0xa240062d  sb          $zero, 0x62D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1581), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3498) {
            ctx->pc = 0x1B34F8u;
            goto label_1b34f8;
        }
    }
    ctx->pc = 0x1B34A0u;
label_1b34a0:
    // 0x1b34a0: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x1B34A0u;
    SET_GPR_U32(ctx, 31, 0x1B34A8u);
    ctx->pc = 0x1B34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34A0u;
    // 0x1b34a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x1B34A0u, 0x1B34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34A8u;
label_1b34a8:
    // 0x1b34a8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b34ac: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x1b34acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x1b34b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b34b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b34b4: 0x0  nop
    ctx->pc = 0x1b34b4u;
    // NOP
    // 0x1b34b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b34b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b34bc: 0x0  nop
    ctx->pc = 0x1b34bcu;
    // NOP
    // 0x1b34c0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B34C0u;
    {
        const bool branch_taken_0x1b34c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B34C0u;
        // 0x1b34c4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34c0) {
            ctx->pc = 0x1B34F8u;
            goto label_1b34f8;
        }
    }
    ctx->pc = 0x1B34C8u;
    // 0x1b34c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b34c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b34cc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b34ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b34d0: 0x24060071  addiu       $a2, $zero, 0x71
    ctx->pc = 0x1b34d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x1b34d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1b34d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b34d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b34dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b34e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B34E4u;
    SET_GPR_U32(ctx, 31, 0x1B34ECu);
    ctx->pc = 0x1B34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34E4u;
    // 0x1b34e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B34E4u, 0x1B34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B34ECu;
label_1b34ec:
    // 0x1b34ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b34f0: 0xae420630  sw          $v0, 0x630($s2)
    ctx->pc = 0x1b34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1584), GPR_U32(ctx, 2));
    // 0x1b34f4: 0xa243062d  sb          $v1, 0x62D($s2)
    ctx->pc = 0x1b34f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1581), (uint8_t)GPR_U32(ctx, 3));
label_1b34f8:
    // 0x1b34f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b34f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34fc: 0xc0aa1fa  jal         func_2A87E8
    ctx->pc = 0x1B34FCu;
    SET_GPR_U32(ctx, 31, 0x1B3504u);
    ctx->pc = 0x1B3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B34FCu;
    // 0x1b3500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1B34FCu, 0x1B3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3504u;
label_1b3504:
    // 0x1b3504: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x1b3504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b3508: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x1b3508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b350c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x1b350cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1b3510: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x1b3510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1b3514: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x1b3514u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1b3518: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x1b3518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1b351c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x1b351cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b3520: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x1b3520u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1b3524: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x1b3524u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b3528: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1b3528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b352c: 0xc7b701d8  lwc1        $f23, 0x1D8($sp)
    ctx->pc = 0x1b352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1b3530: 0xc7b601d0  lwc1        $f22, 0x1D0($sp)
    ctx->pc = 0x1b3530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b3534: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x1b3534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b3538: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x1b3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b353c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B353Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B353Cu;
        // 0x1b3540: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B353Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3544u;
    // 0x1b3544: 0x0  nop
    ctx->pc = 0x1b3544u;
    // NOP
    ctx->pc = 0x1b3548u;
}
