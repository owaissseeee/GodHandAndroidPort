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

// Function: func_002BFC80
// Address: 0x2bfc80 - 0x2c0038
void func_002BFC80_0x2bfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BFC80_0x2bfc80");
#endif

    switch (ctx->pc) {
        case 0x2bfcc8u: goto label_2bfcc8;
        case 0x2bfcd4u: goto label_2bfcd4;
        case 0x2bfce8u: goto label_2bfce8;
        case 0x2bfcf0u: goto label_2bfcf0;
        case 0x2bfd9cu: goto label_2bfd9c;
        case 0x2bfdf0u: goto label_2bfdf0;
        case 0x2bfe18u: goto label_2bfe18;
        case 0x2bfe3cu: goto label_2bfe3c;
        case 0x2bfe48u: goto label_2bfe48;
        case 0x2bfe54u: goto label_2bfe54;
        case 0x2bfe64u: goto label_2bfe64;
        case 0x2bfe6cu: goto label_2bfe6c;
        case 0x2bfe78u: goto label_2bfe78;
        case 0x2bfe80u: goto label_2bfe80;
        case 0x2bfea0u: goto label_2bfea0;
        case 0x2bfeacu: goto label_2bfeac;
        case 0x2bff64u: goto label_2bff64;
        case 0x2bffa0u: goto label_2bffa0;
        default: break;
    }

    ctx->pc = 0x2bfc80u;

    // 0x2bfc80: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2bfc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2bfc84: 0x7fb10270  sq          $s1, 0x270($sp)
    ctx->pc = 0x2bfc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 17));
    // 0x2bfc88: 0x7fb00280  sq          $s0, 0x280($sp)
    ctx->pc = 0x2bfc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 16));
    // 0x2bfc8c: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x2bfc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x2bfc90: 0x7fbe0200  sq          $fp, 0x200($sp)
    ctx->pc = 0x2bfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 30));
    // 0x2bfc94: 0x26309b70  addiu       $s0, $s1, -0x6490
    ctx->pc = 0x2bfc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x2bfc98: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2bfc98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc9c: 0x7fb20260  sq          $s2, 0x260($sp)
    ctx->pc = 0x2bfc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 18));
    // 0x2bfca0: 0x7fb30250  sq          $s3, 0x250($sp)
    ctx->pc = 0x2bfca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 19));
    // 0x2bfca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfca8: 0x7fb60220  sq          $s6, 0x220($sp)
    ctx->pc = 0x2bfca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 22));
    // 0x2bfcac: 0x7fb70210  sq          $s7, 0x210($sp)
    ctx->pc = 0x2bfcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 23));
    // 0x2bfcb0: 0xe7b40290  swc1        $f20, 0x290($sp)
    ctx->pc = 0x2bfcb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x2bfcb4: 0x7fb40240  sq          $s4, 0x240($sp)
    ctx->pc = 0x2bfcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 20));
    // 0x2bfcb8: 0x7fb50230  sq          $s5, 0x230($sp)
    ctx->pc = 0x2bfcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 21));
    // 0x2bfcbc: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x2bfcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x2bfcc0: 0xc07e988  jal         func_1FA620
    ctx->pc = 0x2BFCC0u;
    SET_GPR_U32(ctx, 31, 0x2BFCC8u);
    ctx->pc = 0x2BFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCC0u;
    // 0x2bfcc4: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA620u, 0x2BFCC0u, 0x2BFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCC8u;
label_2bfcc8:
    // 0x2bfcc8: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2bfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x2bfccc: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x2BFCCCu;
    SET_GPR_U32(ctx, 31, 0x2BFCD4u);
    ctx->pc = 0x2BFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCCCu;
    // 0x2bfcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x2BFCCCu, 0x2BFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCD4u;
label_2bfcd4:
    // 0x2bfcd4: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x2bfcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcdc: 0x2642b000  addiu       $v0, $s2, -0x5000
    ctx->pc = 0x2bfcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946816));
    // 0x2bfce0: 0xc07eaec  jal         func_1FABB0
    ctx->pc = 0x2BFCE0u;
    SET_GPR_U32(ctx, 31, 0x2BFCE8u);
    ctx->pc = 0x2BFCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCE0u;
    // 0x2bfce4: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x2BFCE0u, 0x2BFCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCE8u;
label_2bfce8:
    // 0x2bfce8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BFCE8u;
    SET_GPR_U32(ctx, 31, 0x2BFCF0u);
    ctx->pc = 0x2BFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCE8u;
    // 0x2bfcec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BFCE8u, 0x2BFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCF0u;
label_2bfcf0:
    // 0x2bfcf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bfcf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcf4: 0x8677054a  lh          $s7, 0x54A($s3)
    ctx->pc = 0x2bfcf4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
    // 0x2bfcf8: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2bfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2bfcfc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bfcfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfd00: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bfd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bfd04: 0x26630490  addiu       $v1, $s3, 0x490
    ctx->pc = 0x2bfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x2bfd08: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bfd08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfd0c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bfd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bfd10: 0x26620100  addiu       $v0, $s3, 0x100
    ctx->pc = 0x2bfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x2bfd14: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bfd14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfd18: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bfd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bfd1c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2bfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bfd20: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2bfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfd24: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2bfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x2bfd28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2bfd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bfd2c: 0x8e229b70  lw          $v0, -0x6490($s1)
    ctx->pc = 0x2bfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941552)));
    // 0x2bfd30: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2bfd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2bfd34: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2bfd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2bfd38: 0xafa401d4  sw          $a0, 0x1D4($sp)
    ctx->pc = 0x2bfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 4));
    // 0x2bfd3c: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x2bfd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
    // 0x2bfd40: 0x244401b0  addiu       $a0, $v0, 0x1B0
    ctx->pc = 0x2bfd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x2bfd44: 0xafa601dc  sw          $a2, 0x1DC($sp)
    ctx->pc = 0x2bfd44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 6));
    // 0x2bfd48: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2bfd48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd4c: 0xafa301d0  sw          $v1, 0x1D0($sp)
    ctx->pc = 0x2bfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 3));
    // 0x2bfd50: 0x24460270  addiu       $a2, $v0, 0x270
    ctx->pc = 0x2bfd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
    // 0x2bfd54: 0x6847001b  ldl         $a3, 0x1B($v0)
    ctx->pc = 0x2bfd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2bfd58: 0x6c470014  ldr         $a3, 0x14($v0)
    ctx->pc = 0x2bfd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2bfd5c: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x2bfd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfd60: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x2bfd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfd64: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2bfd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bfd68: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2bfd68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2bfd6c: 0xafa701bc  sw          $a3, 0x1BC($sp)
    ctx->pc = 0x2bfd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 7));
    // 0x2bfd70: 0x8c480170  lw          $t0, 0x170($v0)
    ctx->pc = 0x2bfd70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x2bfd74: 0xafa801c0  sw          $t0, 0x1C0($sp)
    ctx->pc = 0x2bfd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 8));
    // 0x2bfd78: 0x8c490174  lw          $t1, 0x174($v0)
    ctx->pc = 0x2bfd78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x2bfd7c: 0xafa901c4  sw          $t1, 0x1C4($sp)
    ctx->pc = 0x2bfd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 9));
    // 0x2bfd80: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x2bfd84: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x2bfd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
    // 0x2bfd88: 0x94420bba  lhu         $v0, 0xBBA($v0)
    ctx->pc = 0x2bfd88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3002)));
    // 0x2bfd8c: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2bfd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
    // 0x2bfd90: 0x8e6306a8  lw          $v1, 0x6A8($s3)
    ctx->pc = 0x2bfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1704)));
    // 0x2bfd94: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2bfd94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2bfd98: 0xafa301b8  sw          $v1, 0x1B8($sp)
    ctx->pc = 0x2bfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 3));
label_2bfd9c:
    // 0x2bfd9c: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x2bfd9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfda0: 0x78880010  lq          $t0, 0x10($a0)
    ctx->pc = 0x2bfda0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bfda4: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x2bfda4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x2bfda8: 0x7ca80010  sq          $t0, 0x10($a1)
    ctx->pc = 0x2bfda8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 8));
    // 0x2bfdac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bfdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bfdb0: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFDB0u;
    {
        const bool branch_taken_0x2bfdb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BFDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDB0u;
        // 0x2bfdb4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdb0) {
            ctx->pc = 0x2BFD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfd9c;
        }
    }
    ctx->pc = 0x2BFDB8u;
    // 0x2bfdb8: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bfdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bfdbc: 0x26720490  addiu       $s2, $s3, 0x490
    ctx->pc = 0x2bfdbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x2bfdc0: 0x8fa601d8  lw          $a2, 0x1D8($sp)
    ctx->pc = 0x2bfdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2bfdc4: 0x26750100  addiu       $s5, $s3, 0x100
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    // 0x2bfdc8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2bfdc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bfdcc: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2bfdccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bfdd0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2bfdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2bfdd4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x2bfdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x2bfdd8: 0xdc440098  ld          $a0, 0x98($v0)
    ctx->pc = 0x2bfdd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2bfddc: 0x24470130  addiu       $a3, $v0, 0x130
    ctx->pc = 0x2bfddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2bfde0: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x2bfde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2bfde4: 0xffa40120  sd          $a0, 0x120($sp)
    ctx->pc = 0x2bfde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 4));
    // 0x2bfde8: 0x944300a0  lhu         $v1, 0xA0($v0)
    ctx->pc = 0x2bfde8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2bfdec: 0xa7a30128  sh          $v1, 0x128($sp)
    ctx->pc = 0x2bfdecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 296), (uint16_t)GPR_U32(ctx, 3));
label_2bfdf0:
    // 0x2bfdf0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2bfdf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bfdf4: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2bfdf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2bfdf8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2bfdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2bfdfc: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x2bfdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x2bfe00: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2bfe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bfe04: 0x14a7fffa  bne         $a1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFE04u;
    {
        const bool branch_taken_0x2bfe04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x2BFE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE04u;
        // 0x2bfe08: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe04) {
            ctx->pc = 0x2BFDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfdf0;
        }
    }
    ctx->pc = 0x2BFE0Cu;
    // 0x2bfe0c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2bfe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe10: 0xc0b01b4  jal         func_2C06D0
    ctx->pc = 0x2BFE10u;
    SET_GPR_U32(ctx, 31, 0x2BFE18u);
    ctx->pc = 0x2BFE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE10u;
    // 0x2bfe14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C06D0u, 0x2BFE10u, 0x2BFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE18u;
label_2bfe18:
    // 0x2bfe18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2bfe1c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x2bfe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2bfe20: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x2bfe20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2bfe24: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2BFE24u;
    {
        const bool branch_taken_0x2bfe24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE24u;
        // 0x2bfe28: 0x8fa501b0  lw          $a1, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe24) {
            ctx->pc = 0x2BFE98u;
            goto label_2bfe98;
        }
    }
    ctx->pc = 0x2BFE2Cu;
    // 0x2bfe2c: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x2bfe2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x2bfe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe34: 0xc07e98e  jal         func_1FA638
    ctx->pc = 0x2BFE34u;
    SET_GPR_U32(ctx, 31, 0x2BFE3Cu);
    ctx->pc = 0x2BFE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE34u;
    // 0x2bfe38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA638u, 0x2BFE34u, 0x2BFE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE3Cu;
label_2bfe3c:
    // 0x2bfe3c: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x2bfe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x2bfe40: 0xc07e9be  jal         func_1FA6F8
    ctx->pc = 0x2BFE40u;
    SET_GPR_U32(ctx, 31, 0x2BFE48u);
    ctx->pc = 0x2BFE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE40u;
    // 0x2bfe44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6F8u, 0x2BFE40u, 0x2BFE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE48u;
label_2bfe48:
    // 0x2bfe48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bfe48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfe4c: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x2BFE4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFE54u);
    ctx->pc = 0x2BFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE4Cu;
    // 0x2bfe50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x2BFE4Cu, 0x2BFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE54u;
label_2bfe54:
    // 0x2bfe54: 0x3c09005d  lui         $t1, 0x5D
    ctx->pc = 0x2bfe54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)93 << 16));
    // 0x2bfe58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bfe58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bfe5c: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x2BFE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BFE64u);
    ctx->pc = 0x2BFE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE5Cu;
    // 0x2bfe60: 0x2524b000  addiu       $a0, $t1, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x2BFE5Cu, 0x2BFE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE64u;
label_2bfe64:
    // 0x2bfe64: 0xc07eaca  jal         func_1FAB28
    ctx->pc = 0x2BFE64u;
    SET_GPR_U32(ctx, 31, 0x2BFE6Cu);
    ctx->pc = 0x2BFE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE64u;
    // 0x2bfe68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB28u, 0x2BFE64u, 0x2BFE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE6Cu;
label_2bfe6c:
    // 0x2bfe6c: 0x12c00018  beqz        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BFE6Cu;
    {
        const bool branch_taken_0x2bfe6c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE6Cu;
        // 0x2bfe70: 0x8e829b70  lw          $v0, -0x6490($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe6c) {
            ctx->pc = 0x2BFED0u;
            goto label_2bfed0;
        }
    }
    ctx->pc = 0x2BFE74u;
    // 0x2bfe74: 0x26849b70  addiu       $a0, $s4, -0x6490
    ctx->pc = 0x2bfe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_2bfe78:
    // 0x2bfe78: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x2BFE78u;
    SET_GPR_U32(ctx, 31, 0x2BFE80u);
    ctx->pc = 0x2BFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE78u;
    // 0x2bfe7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x2BFE78u, 0x2BFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE80u;
label_2bfe80:
    // 0x2bfe80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2bfe80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2bfe84: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x2bfe84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2bfe88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BFE88u;
    {
        const bool branch_taken_0x2bfe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE88u;
        // 0x2bfe8c: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe88) {
            ctx->pc = 0x2BFE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfe78;
        }
    }
    ctx->pc = 0x2BFE90u;
    // 0x2bfe90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BFE90u;
    {
        const bool branch_taken_0x2bfe90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE90u;
        // 0x2bfe94: 0x8e829b70  lw          $v0, -0x6490($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe90) {
            ctx->pc = 0x2BFED0u;
            goto label_2bfed0;
        }
    }
    ctx->pc = 0x2BFE98u;
label_2bfe98:
    // 0x2bfe98: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2BFE98u;
    SET_GPR_U32(ctx, 31, 0x2BFEA0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2BFE98u, 0x2BFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEA0u;
label_2bfea0:
    // 0x2bfea0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bfea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfea4: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x2BFEA4u;
    SET_GPR_U32(ctx, 31, 0x2BFEACu);
    ctx->pc = 0x2BFEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFEA4u;
    // 0x2bfea8: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x2BFEA4u, 0x2BFEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEACu;
label_2bfeac:
    // 0x2bfeac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bfeacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfeb0: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x2bfeb4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2bfeb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bfeb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFEB8u;
    {
        const bool branch_taken_0x2bfeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEB8u;
        // 0x2bfebc: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfeb8) {
            ctx->pc = 0x2BFEC8u;
            goto label_2bfec8;
        }
    }
    ctx->pc = 0x2BFEC0u;
    // 0x2bfec0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFEC0u;
    {
        const bool branch_taken_0x2bfec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEC0u;
        // 0x2bfec4: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfec0) {
            ctx->pc = 0x2BFECCu;
            goto label_2bfecc;
        }
    }
    ctx->pc = 0x2BFEC8u;
label_2bfec8:
    // 0x2bfec8: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x2bfec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_2bfecc:
    // 0x2bfecc: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
label_2bfed0:
    // 0x2bfed0: 0x6ba30037  ldl         $v1, 0x37($sp)
    ctx->pc = 0x2bfed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2bfed4: 0x6fa30030  ldr         $v1, 0x30($sp)
    ctx->pc = 0x2bfed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2bfed8: 0xb043001b  sdl         $v1, 0x1B($v0)
    ctx->pc = 0x2bfed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfedc: 0xb4430014  sdr         $v1, 0x14($v0)
    ctx->pc = 0x2bfedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2bfee0: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x2bfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x2bfee4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFEE4u;
    {
        const bool branch_taken_0x2bfee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2BFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEE4u;
        // 0x2bfee8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfee4) {
            ctx->pc = 0x2BFF00u;
            goto label_2bff00;
        }
    }
    ctx->pc = 0x2BFEECu;
    // 0x2bfeec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2bfeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2bfef0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2bfef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfef4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2bfef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2bfef8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2bfef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfefc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2bfefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2bff00:
    // 0x2bff00: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x2bff00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2bff04: 0x12470006  beq         $s2, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFF04u;
    {
        const bool branch_taken_0x2bff04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF04u;
        // 0x2bff08: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff04) {
            ctx->pc = 0x2BFF20u;
            goto label_2bff20;
        }
    }
    ctx->pc = 0x2BFF0Cu;
    // 0x2bff0c: 0xe6600490  swc1        $f0, 0x490($s3)
    ctx->pc = 0x2bff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1168), bits); }
    // 0x2bff10: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2bff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bff14: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2bff14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2bff18: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2bff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bff1c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2bff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2bff20:
    // 0x2bff20: 0x8fa801d4  lw          $t0, 0x1D4($sp)
    ctx->pc = 0x2bff20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x2bff24: 0x12a80006  beq         $s5, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFF24u;
    {
        const bool branch_taken_0x2bff24 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 8));
        ctx->pc = 0x2BFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF24u;
        // 0x2bff28: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff24) {
            ctx->pc = 0x2BFF40u;
            goto label_2bff40;
        }
    }
    ctx->pc = 0x2BFF2Cu;
    // 0x2bff2c: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x2bff2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x2bff30: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bff34: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2bff34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2bff38: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bff3c: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2bff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2bff40:
    // 0x2bff40: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bff44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bff48: 0x8fa901b8  lw          $t1, 0x1B8($sp)
    ctx->pc = 0x2bff48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x2bff4c: 0xa0490157  sb          $t1, 0x157($v0)
    ctx->pc = 0x2bff4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 343), (uint8_t)GPR_U32(ctx, 9));
    // 0x2bff50: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x2bff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x2bff54: 0x8e839b70  lw          $v1, -0x6490($s4)
    ctx->pc = 0x2bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bff58: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2bff58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x2bff5c: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bff60: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x2bff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_2bff64:
    // 0x2bff64: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2bff64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bff68: 0x78850010  lq          $a1, 0x10($a0)
    ctx->pc = 0x2bff68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bff6c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2bff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2bff70: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x2bff70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x2bff74: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2bff74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2bff78: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2bff78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2bff7c: 0x1488fff9  bne         $a0, $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BFF7Cu;
    {
        const bool branch_taken_0x2bff7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF7Cu;
        // 0x2bff80: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff7c) {
            ctx->pc = 0x2BFF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bff64;
        }
    }
    ctx->pc = 0x2BFF84u;
    // 0x2bff84: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x2bff84u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bff88: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x2bff88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bff8c: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2bff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x2bff90: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x2bff90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x2bff94: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bff98: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x2bff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2bff9c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2bff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2bffa0:
    // 0x2bffa0: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2bffa0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bffa4: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x2bffa4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bffa8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2bffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x2bffac: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x2bffacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x2bffb0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2bffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2bffb4: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x2bffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x2bffb8: 0x1465fff9  bne         $v1, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BFFB8u;
    {
        const bool branch_taken_0x2bffb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFB8u;
        // 0x2bffbc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffb8) {
            ctx->pc = 0x2BFFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bffa0;
        }
    }
    ctx->pc = 0x2BFFC0u;
    // 0x2bffc0: 0x8e849b70  lw          $a0, -0x6490($s4)
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bffc4: 0xdfa20120  ld          $v0, 0x120($sp)
    ctx->pc = 0x2bffc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bffc8: 0x7bb00280  lq          $s0, 0x280($sp)
    ctx->pc = 0x2bffc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2bffcc: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x2bffccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
    // 0x2bffd0: 0x7bb10270  lq          $s1, 0x270($sp)
    ctx->pc = 0x2bffd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2bffd4: 0x97a30128  lhu         $v1, 0x128($sp)
    ctx->pc = 0x2bffd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2bffd8: 0x7bb20260  lq          $s2, 0x260($sp)
    ctx->pc = 0x2bffd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2bffdc: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x2bffdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bffe0: 0x7bb30250  lq          $s3, 0x250($sp)
    ctx->pc = 0x2bffe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2bffe4: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2bffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bffe8: 0x8fa601c0  lw          $a2, 0x1C0($sp)
    ctx->pc = 0x2bffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2bffec: 0x7bb50230  lq          $s5, 0x230($sp)
    ctx->pc = 0x2bffecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2bfff0: 0xac460170  sw          $a2, 0x170($v0)
    ctx->pc = 0x2bfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 6));
    // 0x2bfff4: 0x7bb60220  lq          $s6, 0x220($sp)
    ctx->pc = 0x2bfff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2bfff8: 0x8e839b70  lw          $v1, -0x6490($s4)
    ctx->pc = 0x2bfff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2bfffc: 0x8fa701c4  lw          $a3, 0x1C4($sp)
    ctx->pc = 0x2bfffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x2c0000: 0x7bb70210  lq          $s7, 0x210($sp)
    ctx->pc = 0x2c0000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c0004: 0xac670174  sw          $a3, 0x174($v1)
    ctx->pc = 0x2c0004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 7));
    // 0x2c0008: 0x7bbe0200  lq          $fp, 0x200($sp)
    ctx->pc = 0x2c0008u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c000c: 0x8e829b70  lw          $v0, -0x6490($s4)
    ctx->pc = 0x2c000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2c0010: 0x8fa801c8  lw          $t0, 0x1C8($sp)
    ctx->pc = 0x2c0010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2c0014: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x2c0014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c0018: 0xac480178  sw          $t0, 0x178($v0)
    ctx->pc = 0x2c0018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 8));
    // 0x2c001c: 0xc7b40290  lwc1        $f20, 0x290($sp)
    ctx->pc = 0x2c001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0020: 0x8e839b70  lw          $v1, -0x6490($s4)
    ctx->pc = 0x2c0020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
    // 0x2c0024: 0x8fa901cc  lw          $t1, 0x1CC($sp)
    ctx->pc = 0x2c0024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x2c0028: 0x7bb40240  lq          $s4, 0x240($sp)
    ctx->pc = 0x2c0028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c002c: 0xa4690bba  sh          $t1, 0xBBA($v1)
    ctx->pc = 0x2c002cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3002), (uint16_t)GPR_U32(ctx, 9));
    // 0x2c0030: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0030u;
        // 0x2c0034: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0038u;
}
