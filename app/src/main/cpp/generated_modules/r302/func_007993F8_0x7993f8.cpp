#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_007993F8
// Address: 0x7993f8 - 0x799510
void func_007993F8_0x7993f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007993F8_0x7993f8");
#endif

    switch (ctx->pc) {
        case 0x799434u: goto label_799434;
        case 0x799444u: goto label_799444;
        case 0x799458u: goto label_799458;
        case 0x799464u: goto label_799464;
        case 0x79946cu: goto label_79946c;
        case 0x799488u: goto label_799488;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994f0u: goto label_7994f0;
        default: break;
    }

    ctx->pc = 0x7993f8u;

    // 0x7993f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7993fc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799400: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799404: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799408: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79940c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799410: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799418: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79941c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799420: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799420u;
    {
        const bool branch_taken_0x799420 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x799424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799420u;
        // 0x799424: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799420) {
            ctx->pc = 0x799434u;
            goto label_799434;
        }
    }
    ctx->pc = 0x799428u;
    // 0x799428: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79942c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79942Cu;
    SET_GPR_U32(ctx, 31, 0x799434u);
    ctx->pc = 0x799430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79942Cu;
    // 0x799430: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79942Cu, 0x799434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799434u;
label_799434:
    // 0x799434: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799438: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79943c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79943Cu;
    SET_GPR_U32(ctx, 31, 0x799444u);
    ctx->pc = 0x799440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79943Cu;
    // 0x799440: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79943Cu, 0x799444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799444u;
label_799444:
    // 0x799444: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799448: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79944c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x3c120074  lui         $s2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x799464u;
            goto label_799464;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x0  nop
    ctx->pc = 0x799454u;
    // NOP
label_799458:
    // 0x799458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79945c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79945Cu;
    SET_GPR_U32(ctx, 31, 0x799464u);
    ctx->pc = 0x799460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79945Cu;
    // 0x799460: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79945Cu, 0x799464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799464u;
label_799464:
    // 0x799464: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799470: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x799458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799458;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79947c: 0x26259630  addiu       $a1, $s1, -0x69D0
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940208));
    // 0x799480: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x79948c: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799490: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799494: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799494u;
    SET_GPR_U32(ctx, 31, 0x79949Cu);
    ctx->pc = 0x799498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799494u;
    // 0x799498: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0x8e638658  lw          $v1, -0x79A8($s3)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
label_7994a0:
    // 0x7994a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7994a4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x7994a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x7994C4u;
            goto label_7994c4;
        }
    }
    ctx->pc = 0x7994B0u;
    // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x8e638658  lw          $v1, -0x79A8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x7994A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994a0;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7994c8: 0x26467b00  addiu       $a2, $s2, 0x7B00
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 31488));
    // 0x7994cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7994ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7994d0: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x7994d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7994e8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994E8u;
    SET_GPR_U32(ctx, 31, 0x7994F0u);
    ctx->pc = 0x7994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E8u;
    // 0x7994ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994E8u, 0x7994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F0u;
label_7994f0:
    // 0x7994f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7994f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7994fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799504: 0x3e00008  jr          $ra
    ctx->pc = 0x799504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79950Cu;
    // 0x79950c: 0x0  nop
    ctx->pc = 0x79950cu;
    // NOP
    ctx->pc = 0x799510u;
}
} // namespace gh_r302
