#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_00799850
// Address: 0x799850 - 0x799988
void func_00799850_0x799850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799850_0x799850");
#endif

    switch (ctx->pc) {
        case 0x799888u: goto label_799888;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998f8u: goto label_7998f8;
        case 0x799908u: goto label_799908;
        case 0x799910u: goto label_799910;
        case 0x799920u: goto label_799920;
        case 0x799948u: goto label_799948;
        case 0x799958u: goto label_799958;
        case 0x799964u: goto label_799964;
        default: break;
    }

    ctx->pc = 0x799850u;

    // 0x799850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799854: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799858: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79985c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799860: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799864: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799868: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79986cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799870: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799874: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799878: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79987c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799880: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799880u;
    SET_GPR_U32(ctx, 31, 0x799888u);
    ctx->pc = 0x799884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799880u;
    // 0x799884: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799880u, 0x799888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799888u;
label_799888:
    // 0x799888: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x79988c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x799890: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799894: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799898: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79989c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x7998B0u;
            goto label_7998b0;
        }
    }
    ctx->pc = 0x7998A4u;
    // 0x7998a4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998a8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7998b4: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x7998b8: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x7998bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7998BCu;
    {
        const bool branch_taken_0x7998bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998bc) {
            ctx->pc = 0x7998D4u;
            goto label_7998d4;
        }
    }
    ctx->pc = 0x7998C4u;
    // 0x7998c4: 0x0  nop
    ctx->pc = 0x7998c4u;
    // NOP
label_7998c8:
    // 0x7998c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7998d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7998dc: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x7998E4u;
    {
        const bool branch_taken_0x7998e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E4u;
        // 0x7998e8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e4) {
            ctx->pc = 0x7998C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998c8;
        }
    }
    ctx->pc = 0x7998ECu;
    // 0x7998ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7998ECu;
    {
        const bool branch_taken_0x7998ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ECu;
        // 0x7998f0: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ec) {
            ctx->pc = 0x799908u;
            goto label_799908;
        }
    }
    ctx->pc = 0x7998F4u;
    // 0x7998f4: 0x0  nop
    ctx->pc = 0x7998f4u;
    // NOP
label_7998f8:
    // 0x7998f8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7998f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799900: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799900u;
    SET_GPR_U32(ctx, 31, 0x799908u);
    ctx->pc = 0x799904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799900u;
    // 0x799904: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799900u, 0x799908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x799908u;
    SET_GPR_U32(ctx, 31, 0x799910u);
    ctx->pc = 0x79990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799908u;
    // 0x79990c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x799908u, 0x799910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799910u;
    {
        const bool branch_taken_0x799910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799910u;
        // 0x799914: 0x26446af0  addiu       $a0, $s2, 0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799910) {
            ctx->pc = 0x7998F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998f8;
        }
    }
    ctx->pc = 0x799918u;
    // 0x799918: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799918u;
    SET_GPR_U32(ctx, 31, 0x799920u);
    ctx->pc = 0x79991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799918u;
    // 0x79991c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799918u, 0x799920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799920u;
label_799920:
    // 0x799920: 0x8ea38658  lw          $v1, -0x79A8($s5)
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x799924: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x799928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79992c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79992cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799930: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799938: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x79993c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79993cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x799940: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79994c: 0x26859988  addiu       $a1, $s4, -0x6678
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941064));
    // 0x799950: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x799954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799950u;
    // 0x799954: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79995c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79995Cu;
    SET_GPR_U32(ctx, 31, 0x799964u);
    ctx->pc = 0x799960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79995Cu;
    // 0x799960: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79995Cu, 0x799964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799964u;
label_799964:
    // 0x799964: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799968: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79996c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79996cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799970: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799974: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799974u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799978: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79997c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79997cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799980: 0x3e00008  jr          $ra
    ctx->pc = 0x799980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799980u;
        // 0x799984: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799988u;
}
} // namespace gh_r301
