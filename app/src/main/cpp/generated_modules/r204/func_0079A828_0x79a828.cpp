#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r204_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r204
{
// Function: func_0079A828
// Address: 0x79a828 - 0x79a958
void func_0079A828_0x79a828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A828_0x79a828");
#endif

    switch (ctx->pc) {
        case 0x79a868u: goto label_79a868;
        case 0x79a884u: goto label_79a884;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a900u: goto label_79a900;
        case 0x79a924u: goto label_79a924;
        case 0x79a930u: goto label_79a930;
        case 0x79a93cu: goto label_79a93c;
        default: break;
    }

    ctx->pc = 0x79a828u;

    // 0x79a828: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a82c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a830: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x79a830u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x79a834: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a838: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a83c: 0x3c134000  lui         $s3, 0x4000
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
    // 0x79a840: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a848: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a84c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a850: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x79a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x79a854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79A854u;
    {
        const bool branch_taken_0x79a854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A854u;
        // 0x79a858: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a854) {
            ctx->pc = 0x79A870u;
            goto label_79a870;
        }
    }
    ctx->pc = 0x79A85Cu;
    // 0x79a85c: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x79a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79a860: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A860u;
    SET_GPR_U32(ctx, 31, 0x79A868u);
    ctx->pc = 0x79A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A860u;
    // 0x79a864: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A860u, 0x79A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A868u;
label_79a868:
    // 0x79a868: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x79A868u;
    {
        const bool branch_taken_0x79a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a868) {
            ctx->pc = 0x79A940u;
            goto label_79a940;
        }
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79a874: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79a874u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79a878: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x79a87c: 0xc07ea80  jal         func_1FAA00
    ctx->pc = 0x79A87Cu;
    SET_GPR_U32(ctx, 31, 0x79A884u);
    ctx->pc = 0x79A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A87Cu;
    // 0x79a880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA00u, 0x79A87Cu, 0x79A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A884u;
label_79a884:
    // 0x79a884: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A884u;
    {
        const bool branch_taken_0x79a884 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x79a884) {
            ctx->pc = 0x79A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A884u;
            // 0x79a888: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8B8u;
            goto label_79a8b8;
        }
    }
    ctx->pc = 0x79A88Cu;
    // 0x79a88c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a890: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x79a894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a898: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a0: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A8A0u;
    SET_GPR_U32(ctx, 31, 0x79A8A8u);
    ctx->pc = 0x79A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8A0u;
    // 0x79a8a4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A8A0u, 0x79A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A8u;
label_79a8a8:
    // 0x79a8a8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a8ac: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A8ACu;
    SET_GPR_U32(ctx, 31, 0x79A8B4u);
    ctx->pc = 0x79A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ACu;
    // 0x79a8b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A8ACu, 0x79A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8B4u;
label_79a8b4:
    // 0x79a8b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79a8b8:
    // 0x79a8b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a8b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a8c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a8c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x79a8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79a8c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a8d0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A8D0u;
    SET_GPR_U32(ctx, 31, 0x79A8D8u);
    ctx->pc = 0x79A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8D0u;
    // 0x79a8d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A8D0u, 0x79A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D8u;
label_79a8d8:
    // 0x79a8d8: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a8dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a8dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a8ec: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A8ECu;
    SET_GPR_U32(ctx, 31, 0x79A8F4u);
    ctx->pc = 0x79A8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8ECu;
    // 0x79a8f0: 0x24051001  addiu       $a1, $zero, 0x1001 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A8ECu, 0x79A8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F4u;
label_79a8f4:
    // 0x79a8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8f8: 0xc07ea6e  jal         func_1FA9B8
    ctx->pc = 0x79A8F8u;
    SET_GPR_U32(ctx, 31, 0x79A900u);
    ctx->pc = 0x79A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8F8u;
    // 0x79a8fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA9B8u, 0x79A8F8u, 0x79A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A900u;
label_79a900:
    // 0x79a900: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x79a904: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79a908: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79a908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79a90c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a910: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79a914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a918: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x79a918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x79a91c: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x79A91Cu;
    SET_GPR_U32(ctx, 31, 0x79A924u);
    ctx->pc = 0x79A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A91Cu;
    // 0x79a920: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x79A91Cu, 0x79A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A924u;
label_79a924:
    // 0x79a924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a928: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79A928u;
    SET_GPR_U32(ctx, 31, 0x79A930u);
    ctx->pc = 0x79A92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A928u;
    // 0x79a92c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79A928u, 0x79A930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A930u;
label_79a930:
    // 0x79a930: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a934: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a940:
    // 0x79a940: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a948: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a94c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a950: 0x3e00008  jr          $ra
    ctx->pc = 0x79A950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A950u;
        // 0x79a954: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A958u;
}
} // namespace gh_r204
