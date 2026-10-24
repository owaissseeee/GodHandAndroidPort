#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r104_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r104
{
// Function: func_00799400
// Address: 0x799400 - 0x799538
void func_00799400_0x799400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799400_0x799400");
#endif

    switch (ctx->pc) {
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        case 0x799510u: goto label_799510;
        case 0x799514u: goto label_799514;
        case 0x799518u: goto label_799518;
        case 0x79951cu: goto label_79951c;
        case 0x799520u: goto label_799520;
        case 0x799524u: goto label_799524;
        case 0x799528u: goto label_799528;
        case 0x79952cu: goto label_79952c;
        case 0x799530u: goto label_799530;
        case 0x799534u: goto label_799534;
        default: break;
    }

    ctx->pc = 0x799400u;

label_799400:
    // 0x799400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_799404:
    // 0x799404: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799408:
    // 0x799408: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_79940c:
    // 0x79940c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799410:
    // 0x799410: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_799414:
    // 0x799414: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
label_799418:
    // 0x799418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79941c:
    // 0x79941c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
label_799420:
    // 0x799420: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x799420u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_799424:
    // 0x799424: 0xc0a58dc  jal         func_296370
label_799428:
    if (ctx->pc == 0x799428u) {
        ctx->pc = 0x799428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799424u;
        // 0x799428: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79942Cu;
        goto label_79942c;
    }
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_799430:
    // 0x799430: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31284)));
label_799434:
    // 0x799434: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_799438:
    // 0x799438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_79943c:
    if (ctx->pc == 0x79943Cu) {
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799440u;
        goto label_799440;
    }
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799458u;
            goto label_799458;
        }
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799444:
    // 0x799444: 0xc0807a0  jal         func_201E80
label_799448:
    if (ctx->pc == 0x799448u) {
        ctx->pc = 0x799448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799444u;
        // 0x799448: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79944Cu;
        goto label_79944c;
    }
    ctx->pc = 0x799444u;
    SET_GPR_U32(ctx, 31, 0x79944Cu);
    ctx->pc = 0x799448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799444u;
    // 0x799448: 0x24845038  addiu       $a0, $a0, 0x5038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E80u, 0x799444u, 0x79944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79944Cu;
label_79944c:
    // 0x79944c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799450:
    // 0x799450: 0xc0b5692  jal         func_2D5A48
label_799454:
    if (ctx->pc == 0x799454u) {
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799458u;
        goto label_799458;
    }
    ctx->pc = 0x799450u;
    SET_GPR_U32(ctx, 31, 0x799458u);
    ctx->pc = 0x799454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799450u;
    // 0x799454: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799450u, 0x799458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799458u;
label_799458:
    // 0x799458: 0xc0b6dac  jal         func_2DB6B0
label_79945c:
    if (ctx->pc == 0x79945Cu) {
        ctx->pc = 0x799460u;
        goto label_799460;
    }
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_799464:
    // 0x799464: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_799468:
    // 0x799468: 0x3c01bfb8  lui         $at, 0xBFB8
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49080 << 16));
label_79946c:
    // 0x79946c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_799470:
    // 0x799470: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799474:
    // 0x799474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799478:
    // 0x799478: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_79947c:
    // 0x79947c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_799480:
    // 0x799480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_799484:
    // 0x799484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x799484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799488:
    // 0x799488: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x799488u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79948c:
    // 0x79948c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79948cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_799490:
    // 0x799490: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799494:
    // 0x799494: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x799494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_799498:
    // 0x799498: 0x3c01bfbc  lui         $at, 0xBFBC
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49084 << 16));
label_79949c:
    // 0x79949c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
label_7994a0:
    // 0x7994a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7994a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_7994a4:
    // 0x7994a4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7994a8:
    // 0x7994a8: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_7994ac:
    // 0x7994ac: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_7994b0:
    // 0x7994b0: 0x60f809  jalr        $v1
label_7994b4:
    if (ctx->pc == 0x7994B4u) {
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B8u;
        goto label_7994b8;
    }
    ctx->pc = 0x7994B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x7994B8u);
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7994bc:
    // 0x7994bc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7994c0:
    // 0x7994c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x7994c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7994c4:
    // 0x7994c4: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_7994c8:
    // 0x7994c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_7994cc:
    // 0x7994cc: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x7994ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_7994d0:
    // 0x7994d0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_7994d4:
    // 0x7994d4: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x7994d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_7994d8:
    // 0x7994d8: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_7994dc:
    // 0x7994dc: 0x40f809  jalr        $v0
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7994E4u);
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_7994e8:
    // 0x7994e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994ec:
    // 0x7994ec: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
label_7994f0:
    // 0x7994f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994f4:
    // 0x7994f4: 0xc0b016c  jal         func_2C05B0
label_7994f8:
    if (ctx->pc == 0x7994F8u) {
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994FCu;
        goto label_7994fc;
    }
    ctx->pc = 0x7994F4u;
    SET_GPR_U32(ctx, 31, 0x7994FCu);
    ctx->pc = 0x7994F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F4u;
    // 0x7994f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7994F4u, 0x7994FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994FCu;
label_7994fc:
    // 0x7994fc: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799500:
    // 0x799500: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799504:
    // 0x799504: 0x24a595c0  addiu       $a1, $a1, -0x6A40
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940096));
label_799508:
    // 0x799508: 0xc0b0e24  jal         func_2C3890
label_79950c:
    if (ctx->pc == 0x79950Cu) {
        ctx->pc = 0x79950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799508u;
        // 0x79950c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799510u;
        goto label_799510;
    }
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799514:
    // 0x799514: 0xc0b5692  jal         func_2D5A48
label_799518:
    if (ctx->pc == 0x799518u) {
        ctx->pc = 0x799518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799514u;
        // 0x799518: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79951Cu;
        goto label_79951c;
    }
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79951cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799520:
    // 0x799520: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799524:
    // 0x799524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799528:
    // 0x799528: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x799528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79952c:
    // 0x79952c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x79952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_799530:
    // 0x799530: 0x3e00008  jr          $ra
label_799534:
    if (ctx->pc == 0x799534u) {
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799538u;
        goto label_fallthrough_0x799530;
    }
    ctx->pc = 0x799530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799530u;
        // 0x799534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799530:
    ctx->pc = 0x799538u;
}
} // namespace gh_r104
