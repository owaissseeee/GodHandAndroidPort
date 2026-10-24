#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_0079A288
// Address: 0x79a288 - 0x79a3c0
void func_0079A288_0x79a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A288_0x79a288");
#endif

    switch (ctx->pc) {
        case 0x79a2b0u: goto label_79a2b0;
        case 0x79a2d8u: goto label_79a2d8;
        case 0x79a2e4u: goto label_79a2e4;
        case 0x79a310u: goto label_79a310;
        case 0x79a330u: goto label_79a330;
        case 0x79a340u: goto label_79a340;
        case 0x79a34cu: goto label_79a34c;
        case 0x79a364u: goto label_79a364;
        case 0x79a38cu: goto label_79a38c;
        case 0x79a398u: goto label_79a398;
        case 0x79a3a4u: goto label_79a3a4;
        default: break;
    }

    ctx->pc = 0x79a288u;

    // 0x79a288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a28c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a290: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a294: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a298: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a29c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a2a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a2a8: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A2A8u;
    SET_GPR_U32(ctx, 31, 0x79A2B0u);
    ctx->pc = 0x79A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2A8u;
    // 0x79a2ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A2A8u, 0x79A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B0u;
label_79a2b0:
    // 0x79a2b0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x79a2b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a2b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A2B4u;
    {
        const bool branch_taken_0x79a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2B4u;
        // 0x79a2b8: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2b4) {
            ctx->pc = 0x79A2ECu;
            goto label_79a2ec;
        }
    }
    ctx->pc = 0x79A2BCu;
    // 0x79a2bc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79a2c0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a2c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a2c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d0: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A2D0u;
    SET_GPR_U32(ctx, 31, 0x79A2D8u);
    ctx->pc = 0x79A2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D0u;
    // 0x79a2d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A2D0u, 0x79A2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2D8u;
label_79a2d8:
    // 0x79a2d8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a2dc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A2DCu;
    SET_GPR_U32(ctx, 31, 0x79A2E4u);
    ctx->pc = 0x79A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2DCu;
    // 0x79a2e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A2DCu, 0x79A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E4u;
label_79a2e4:
    // 0x79a2e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A3A8u;
            goto label_79a3a8;
        }
    }
    ctx->pc = 0x79A2ECu;
label_79a2ec:
    // 0x79a2ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a2f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a2f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a2f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a2fc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a300: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a304: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a308: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A308u;
    SET_GPR_U32(ctx, 31, 0x79A310u);
    ctx->pc = 0x79A30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A308u;
    // 0x79a30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A308u, 0x79A310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A310u;
label_79a310:
    // 0x79a310: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a314: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a31c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a320: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a324: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79a324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a328: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A328u;
    SET_GPR_U32(ctx, 31, 0x79A330u);
    ctx->pc = 0x79A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A328u;
    // 0x79a32c: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A328u, 0x79A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A330u;
label_79a330:
    // 0x79a330: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x79a330u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x79a334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a338: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A338u;
    SET_GPR_U32(ctx, 31, 0x79A340u);
    ctx->pc = 0x79A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A338u;
    // 0x79a33c: 0x26248658  addiu       $a0, $s1, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A338u, 0x79A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A340u;
label_79a340:
    // 0x79a340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a344: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A344u;
    SET_GPR_U32(ctx, 31, 0x79A34Cu);
    ctx->pc = 0x79A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A344u;
    // 0x79a348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A344u, 0x79A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A34Cu;
label_79a34c:
    // 0x79a34c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a35c: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79A35Cu;
    SET_GPR_U32(ctx, 31, 0x79A364u);
    ctx->pc = 0x79A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A35Cu;
    // 0x79a360: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79A35Cu, 0x79A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A364u;
label_79a364:
    // 0x79a364: 0x8e238658  lw          $v1, -0x79A8($s1)
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936152)));
    // 0x79a368: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x79a36c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a370: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a374: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a378: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a380: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x79a380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79a384: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A384u;
    SET_GPR_U32(ctx, 31, 0x79A38Cu);
    ctx->pc = 0x79A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A384u;
    // 0x79a388: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A384u, 0x79A38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A38Cu;
label_79a38c:
    // 0x79a38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a390: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79A390u;
    SET_GPR_U32(ctx, 31, 0x79A398u);
    ctx->pc = 0x79A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A390u;
    // 0x79a394: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79A390u, 0x79A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A398u;
label_79a398:
    // 0x79a398: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a39c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A39Cu;
    SET_GPR_U32(ctx, 31, 0x79A3A4u);
    ctx->pc = 0x79A3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A39Cu;
    // 0x79a3a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A39Cu, 0x79A3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3A4u;
label_79a3a4:
    // 0x79a3a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a3a8:
    // 0x79a3a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a3ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a3b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3B8u;
        // 0x79a3bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3C0u;
}
} // namespace gh_r200
