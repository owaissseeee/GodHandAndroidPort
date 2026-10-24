#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799380
// Address: 0x799380 - 0x7994c0
void func_00799380_0x799380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799380_0x799380");
#endif

    switch (ctx->pc) {
        case 0x7993acu: goto label_7993ac;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993dcu: goto label_7993dc;
        case 0x799400u: goto label_799400;
        case 0x799420u: goto label_799420;
        case 0x79942cu: goto label_79942c;
        case 0x799438u: goto label_799438;
        case 0x799450u: goto label_799450;
        case 0x799478u: goto label_799478;
        case 0x799498u: goto label_799498;
        case 0x7994a4u: goto label_7994a4;
        default: break;
    }

    ctx->pc = 0x799380u;

    // 0x799380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799384: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79938c: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799390: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799394: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79939c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7993a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7993a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7993a4: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x7993A4u;
    SET_GPR_U32(ctx, 31, 0x7993ACu);
    ctx->pc = 0x7993A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A4u;
    // 0x7993a8: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x7993A4u, 0x7993ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x7993b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993B8u;
    // 0x7993b8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7993bc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x7993c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7993d4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7993e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7993e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7993ec: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7993f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993f8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7993F8u;
    SET_GPR_U32(ctx, 31, 0x799400u);
    ctx->pc = 0x7993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F8u;
    // 0x7993fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7993F8u, 0x799400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x799404: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79940c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799414: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799418: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799424: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x26248658  addiu       $a0, $s1, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79943c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799448: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x799454: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x799458: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79945c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799460: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799464: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79946c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799470: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799470u;
    SET_GPR_U32(ctx, 31, 0x799478u);
    ctx->pc = 0x799474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799470u;
    // 0x799474: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799470u, 0x799478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x79947c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799484: 0x24e794c0  addiu       $a3, $a3, -0x6B40
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939840));
    // 0x799488: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79948c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0xc0b09d4  jal         func_2C2750
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79949c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7994a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7994a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7994ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7994b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994C0u;
}
} // namespace gh_r205
