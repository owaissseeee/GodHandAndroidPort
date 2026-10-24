#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: QuoitsEventTask__5cR500
// Address: 0x799320 - 0x799478
void QuoitsEventTask__5cR500_0x799320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuoitsEventTask__5cR500_0x799320");
#endif

    switch (ctx->pc) {
        case 0x79935cu: goto label_79935c;
        case 0x799384u: goto label_799384;
        case 0x79939cu: goto label_79939c;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993fcu: goto label_7993fc;
        case 0x799408u: goto label_799408;
        case 0x799414u: goto label_799414;
        case 0x799420u: goto label_799420;
        case 0x799448u: goto label_799448;
        case 0x799454u: goto label_799454;
        default: break;
    }

    ctx->pc = 0x799320u;

    // 0x799320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799324: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799328: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79932c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799330: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799334: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799338: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x79933c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79933cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799340: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799348: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x799348u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x79934c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799354: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799360: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799364: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799368: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x79936c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x79936Cu;
    {
        const bool branch_taken_0x79936c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79936Cu;
        // 0x799370: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79936c) {
            ctx->pc = 0x7993C0u;
            goto label_7993c0;
        }
    }
    ctx->pc = 0x799374u;
    // 0x799374: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x799378: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x79937c: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x799380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79937Cu;
    // 0x799380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x799388: 0x24054e20  addiu       $a1, $zero, 0x4E20
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
    // 0x79938c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x79938cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x799390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799394: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x799394u;
    SET_GPR_U32(ctx, 31, 0x79939Cu);
    ctx->pc = 0x799398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799394u;
    // 0x799398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x799394u, 0x79939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79939Cu;
label_79939c:
    // 0x79939c: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x7993a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7993a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x7993b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x7993b4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x7993b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x7993b8: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7993B8u;
    SET_GPR_U32(ctx, 31, 0x7993C0u);
    ctx->pc = 0x7993BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B8u;
    // 0x7993bc: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7993B8u, 0x7993C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993C0u;
label_7993c0:
    // 0x7993c0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7993c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7993C4u;
    {
        const bool branch_taken_0x7993c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C4u;
        // 0x7993c8: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c4) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993CCu;
    // 0x7993cc: 0x0  nop
    ctx->pc = 0x7993ccu;
    // NOP
label_7993d0:
    // 0x7993d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7993d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7993e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e4: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ECu;
        // 0x7993f0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x7993D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993d0;
        }
    }
    ctx->pc = 0x7993F4u;
    // 0x7993f4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7993F4u;
    SET_GPR_U32(ctx, 31, 0x7993FCu);
    ctx->pc = 0x7993F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F4u;
    // 0x7993f8: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7993F4u, 0x7993FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993FCu;
label_7993fc:
    // 0x7993fc: 0x26246af0  addiu       $a0, $s1, 0x6AF0
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    // 0x799400: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79940c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x799410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79940Cu;
    // 0x799410: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799418: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799418u;
    SET_GPR_U32(ctx, 31, 0x799420u);
    ctx->pc = 0x79941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799418u;
    // 0x79941c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799418u, 0x799420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799420u;
label_799420:
    // 0x799420: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799424: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x799428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799438: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79943c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79943cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799440: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799440u;
    SET_GPR_U32(ctx, 31, 0x799448u);
    ctx->pc = 0x799444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799440u;
    // 0x799444: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799440u, 0x799448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799448u;
label_799448:
    // 0x799448: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79944c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799458: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79945c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79945cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799460: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799464: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79946c: 0x3e00008  jr          $ra
    ctx->pc = 0x79946Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79946Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799474u;
    // 0x799474: 0x0  nop
    ctx->pc = 0x799474u;
    // NOP
    ctx->pc = 0x799478u;
}
} // namespace gh_r500
