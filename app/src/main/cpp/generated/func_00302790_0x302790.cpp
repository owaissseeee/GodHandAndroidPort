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

// Function: func_00302790
// Address: 0x302790 - 0x3028e8
void func_00302790_0x302790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302790_0x302790");
#endif

    switch (ctx->pc) {
        case 0x3027acu: goto label_3027ac;
        default: break;
    }

    ctx->pc = 0x302790u;

    // 0x302790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x302794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x302798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30279c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30279cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3027a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3027a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3027a4: 0xc0ad708  jal         func_2B5C20
    ctx->pc = 0x3027A4u;
    SET_GPR_U32(ctx, 31, 0x3027ACu);
    ctx->pc = 0x3027A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3027A4u;
    // 0x3027a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C20u, 0x3027A4u, 0x3027ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3027ACu;
label_3027ac:
    // 0x3027ac: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3027acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x3027b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3027b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3027b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3027b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3027b8: 0x2463fd58  addiu       $v1, $v1, -0x2A8
    ctx->pc = 0x3027b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966616));
    // 0x3027bc: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x3027bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x3027c0: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x3027c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x3027c4: 0x260401a0  addiu       $a0, $s0, 0x1A0
    ctx->pc = 0x3027c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x3027c8: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x3027c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x3027cc: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x3027ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x3027d0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x3027d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x3027d4: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x3027d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x3027d8: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x3027d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x3027dc: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x3027dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x3027e0: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x3027e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x3027e4: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x3027e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x3027e8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x3027e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x3027ec: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x3027ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x3027f0: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x3027f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x3027f4: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x3027f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x3027f8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x3027f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x3027fc: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x3027fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x302800: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x302800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x302804: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x302804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x302808: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x302808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x30280c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x30280cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x302810: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x302810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x302814: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x302814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
    // 0x302818: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x302818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x30281c: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x30281cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x302820: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x302820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x302824: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x302824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x302828: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x302828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x30282c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x30282cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x302830: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x302830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x302834: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x302834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x302838: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x302838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x30283c: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x30283cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x302840: 0xa6000184  sh          $zero, 0x184($s0)
    ctx->pc = 0x302840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 388), (uint16_t)GPR_U32(ctx, 0));
    // 0x302844: 0xa6000186  sh          $zero, 0x186($s0)
    ctx->pc = 0x302844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 390), (uint16_t)GPR_U32(ctx, 0));
    // 0x302848: 0xa6000188  sh          $zero, 0x188($s0)
    ctx->pc = 0x302848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 392), (uint16_t)GPR_U32(ctx, 0));
    // 0x30284c: 0xa600018a  sh          $zero, 0x18A($s0)
    ctx->pc = 0x30284cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 394), (uint16_t)GPR_U32(ctx, 0));
    // 0x302850: 0xa600018e  sh          $zero, 0x18E($s0)
    ctx->pc = 0x302850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 398), (uint16_t)GPR_U32(ctx, 0));
    // 0x302854: 0xa2000190  sb          $zero, 0x190($s0)
    ctx->pc = 0x302854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 400), (uint8_t)GPR_U32(ctx, 0));
    // 0x302858: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x302858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x30285c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x30285cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x302860: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x302860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x302864: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x302864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x302868: 0xfa0001b0  sqc2        $vf0, 0x1B0($s0)
    ctx->pc = 0x302868u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 432), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x30286c: 0xfa0001c0  sqc2        $vf0, 0x1C0($s0)
    ctx->pc = 0x30286cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x302870: 0xe60001d0  swc1        $f0, 0x1D0($s0)
    ctx->pc = 0x302870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 464), bits); }
    // 0x302874: 0x260201d0  addiu       $v0, $s0, 0x1D0
    ctx->pc = 0x302874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x302878: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x302878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x30287c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x302880: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x302880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x302884: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x302884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x302888: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x302888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x30288c: 0xa085004c  sb          $a1, 0x4C($a0)
    ctx->pc = 0x30288cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 5));
    // 0x302890: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x302890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x302894: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x302894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x302898: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x302898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x30289c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x30289cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3028a0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x3028a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x3028a4: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x3028a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x3028a8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x3028a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x3028ac: 0xfa000200  sqc2        $vf0, 0x200($s0)
    ctx->pc = 0x3028acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3028b0: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x3028b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x3028b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3028b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3028b8: 0xa4800070  sh          $zero, 0x70($a0)
    ctx->pc = 0x3028b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x3028bc: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x3028bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x3028c0: 0xa0800074  sb          $zero, 0x74($a0)
    ctx->pc = 0x3028c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x3028c4: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x3028c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x3028c8: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x3028c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x3028cc: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x3028ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x3028d0: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x3028d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x3028d4: 0xa2000230  sb          $zero, 0x230($s0)
    ctx->pc = 0x3028d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 560), (uint8_t)GPR_U32(ctx, 0));
    // 0x3028d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3028d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3028dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3028dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3028e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3028E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3028E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3028E0u;
        // 0x3028e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3028E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3028E8u;
}
