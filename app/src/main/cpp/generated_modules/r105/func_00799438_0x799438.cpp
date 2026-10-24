#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: func_00799438
// Address: 0x799438 - 0x799508
void func_00799438_0x799438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799438_0x799438");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x799438u;

label_799438:
    // 0x799438: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79943c:
    // 0x79943c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799440:
    // 0x799440: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_799444:
    // 0x799444: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_799448:
    // 0x799448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_79944c:
    // 0x79944c: 0xc051c0a  jal         func_147028
label_799450:
    if (ctx->pc == 0x799450u) {
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799454u;
        goto label_799454;
    }
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x24841a20  addiu       $a0, $a0, 0x1A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147028u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_799458:
    // 0x799458: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_79945c:
    // 0x79945c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799460:
    // 0x799460: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_799464:
    // 0x799464: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_799468:
    // 0x799468: 0xc07fa28  jal         func_1FE8A0
label_79946c:
    if (ctx->pc == 0x79946Cu) {
        ctx->pc = 0x79946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799468u;
        // 0x79946c: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799470u;
        goto label_799470;
    }
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x240503eb  addiu       $a1, $zero, 0x3EB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x240403eb  addiu       $a0, $zero, 0x3EB
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1003));
label_799474:
    // 0x799474: 0xc0c3ea6  jal         func_30FA98
label_799478:
    if (ctx->pc == 0x799478u) {
        ctx->pc = 0x799478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799474u;
        // 0x799478: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79947Cu;
        goto label_79947c;
    }
    ctx->pc = 0x799474u;
    SET_GPR_U32(ctx, 31, 0x79947Cu);
    ctx->pc = 0x799478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799474u;
    // 0x799478: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x799474u, 0x79947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79947Cu;
label_79947c:
    // 0x79947c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799480:
    // 0x799480: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_799484:
    if (ctx->pc == 0x799484u) {
        ctx->pc = 0x799484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799480u;
        // 0x799484: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799488u;
        goto label_799488;
    }
    ctx->pc = 0x799480u;
    {
        const bool branch_taken_0x799480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799480) {
            ctx->pc = 0x799484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799480u;
            // 0x799484: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994F8u;
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79948c:
    // 0x79948c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_799490:
    // 0x799490: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_799494:
    // 0x799494: 0x40f809  jalr        $v0
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79949Cu);
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_7994a0:
    // 0x7994a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7994a4:
    // 0x7994a4: 0x3c01c118  lui         $at, 0xC118
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49432 << 16));
label_7994a8:
    // 0x7994a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7994a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_7994ac:
    // 0x7994ac: 0x3c01bfa7  lui         $at, 0xBFA7
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49063 << 16));
label_7994b0:
    // 0x7994b0: 0x3421ae15  ori         $at, $at, 0xAE15
    ctx->pc = 0x7994b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44565);
label_7994b4:
    // 0x7994b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7994b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7994b8:
    // 0x7994b8: 0x3c01426d  lui         $at, 0x426D
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17005 << 16));
label_7994bc:
    // 0x7994bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_7994c0:
    // 0x7994c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7994c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_7994c4:
    // 0x7994c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_7994c8:
    // 0x7994c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7994c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_7994cc:
    // 0x7994cc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_7994d0:
    // 0x7994d0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x7994d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_7994d4:
    // 0x7994d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x7994d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_7994d8:
    // 0x7994d8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x7994d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_7994dc:
    // 0x7994dc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x7994dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_7994e0:
    // 0x7994e0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_7994e4:
    // 0x7994e4: 0x40f809  jalr        $v0
label_7994e8:
    if (ctx->pc == 0x7994E8u) {
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994ECu;
        goto label_7994ec;
    }
    ctx->pc = 0x7994E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7994ECu);
        ctx->pc = 0x7994E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E4u;
        // 0x7994e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7994ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_7994f0:
    // 0x7994f0: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x7994f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_7994f4:
    // 0x7994f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7994f8:
    // 0x7994f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7994fc:
    // 0x7994fc: 0x3e00008  jr          $ra
label_799500:
    if (ctx->pc == 0x799500u) {
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799504u;
        goto label_799504;
    }
    ctx->pc = 0x7994FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994FCu;
        // 0x799500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x0  nop
    ctx->pc = 0x799504u;
    // NOP
    ctx->pc = 0x799508u;
}
} // namespace gh_r105
