#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_0079A5E0
// Address: 0x79a5e0 - 0x79a808
void func_0079A5E0_0x79a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A5E0_0x79a5e0");
#endif

    switch (ctx->pc) {
        case 0x79a628u: goto label_79a628;
        case 0x79a658u: goto label_79a658;
        case 0x79a680u: goto label_79a680;
        case 0x79a6b0u: goto label_79a6b0;
        case 0x79a6ccu: goto label_79a6cc;
        case 0x79a6ecu: goto label_79a6ec;
        case 0x79a6f4u: goto label_79a6f4;
        case 0x79a700u: goto label_79a700;
        case 0x79a708u: goto label_79a708;
        case 0x79a710u: goto label_79a710;
        case 0x79a71cu: goto label_79a71c;
        case 0x79a73cu: goto label_79a73c;
        case 0x79a744u: goto label_79a744;
        case 0x79a74cu: goto label_79a74c;
        case 0x79a754u: goto label_79a754;
        case 0x79a760u: goto label_79a760;
        case 0x79a770u: goto label_79a770;
        case 0x79a778u: goto label_79a778;
        case 0x79a788u: goto label_79a788;
        case 0x79a794u: goto label_79a794;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7ecu: goto label_79a7ec;
        default: break;
    }

    ctx->pc = 0x79a5e0u;

    // 0x79a5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a5e4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a5e8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a5ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a5f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a5f4: 0x2446abf0  addiu       $a2, $v0, -0x5410
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945776));
    // 0x79a5f8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a5fc: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a600: 0x8044abf0  lb          $a0, -0x5410($v0)
    ctx->pc = 0x79a600u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79ABF0u));
    // 0x79a604: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x79a604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a608: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a618: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x79a61c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79A61Cu;
    {
        const bool branch_taken_0x79a61c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A61Cu;
        // 0x79a620: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a61c) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A624u;
    // 0x79a624: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a624u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a628:
    // 0x79a628: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a628u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a62c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a630: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a634: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a638: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a63c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A63Cu;
    {
        const bool branch_taken_0x79a63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a63c) {
            ctx->pc = 0x79A650u;
            goto label_79a650;
        }
    }
    ctx->pc = 0x79A644u;
    // 0x79a644: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a648: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A648u;
    {
        const bool branch_taken_0x79a648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a648) {
            ctx->pc = 0x79A64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A648u;
            // 0x79a64c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a628;
        }
    }
    ctx->pc = 0x79A650u;
label_79a650:
    // 0x79a650: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A650u;
    SET_GPR_U32(ctx, 31, 0x79A658u);
    ctx->pc = 0x79A654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A650u;
    // 0x79a654: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A650u, 0x79A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A658u;
label_79a658:
    // 0x79a658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a65c: 0x26684c58  addiu       $t0, $s3, 0x4C58
    ctx->pc = 0x79a65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 19544));
    // 0x79a660: 0x8222abb0  lb          $v0, -0x5450($s1)
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294945712)));
    // 0x79a664: 0x2623abb0  addiu       $v1, $s1, -0x5450
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945712));
    // 0x79a668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a66c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79A66Cu;
    {
        const bool branch_taken_0x79a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A66Cu;
        // 0x79a670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a66c) {
            ctx->pc = 0x79A6A8u;
            goto label_79a6a8;
        }
    }
    ctx->pc = 0x79A674u;
    // 0x79a674: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a678: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a67c: 0x0  nop
    ctx->pc = 0x79a67cu;
    // NOP
label_79a680:
    // 0x79a680: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a684: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a688: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a68c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a690: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a694: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A694u;
    {
        const bool branch_taken_0x79a694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A694u;
        // 0x79a698: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a694) {
            ctx->pc = 0x79A6A8u;
            goto label_79a6a8;
        }
    }
    ctx->pc = 0x79A69Cu;
    // 0x79a69c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a69cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a6a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A6A0u;
    {
        const bool branch_taken_0x79a6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6a0) {
            ctx->pc = 0x79A6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6A0u;
            // 0x79a6a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a680;
        }
    }
    ctx->pc = 0x79A6A8u;
label_79a6a8:
    // 0x79a6a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A6A8u;
    SET_GPR_U32(ctx, 31, 0x79A6B0u);
    ctx->pc = 0x79A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6A8u;
    // 0x79a6ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A6A8u, 0x79A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6B0u;
label_79a6b0:
    // 0x79a6b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A6B0u;
    {
        const bool branch_taken_0x79a6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B0u;
        // 0x79a6b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6b0) {
            ctx->pc = 0x79A6C0u;
            goto label_79a6c0;
        }
    }
    ctx->pc = 0x79A6B8u;
    // 0x79a6b8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A6B8u;
    {
        const bool branch_taken_0x79a6b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6B8u;
        // 0x79a6bc: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6b8) {
            ctx->pc = 0x79A6D0u;
            goto label_79a6d0;
        }
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a6c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A6C4u;
    SET_GPR_U32(ctx, 31, 0x79A6CCu);
    ctx->pc = 0x79A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C4u;
    // 0x79a6c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A6C4u, 0x79A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6CCu;
label_79a6cc:
    // 0x79a6cc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a6d0:
    // 0x79a6d0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x79a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x79a6d4: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x79a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31372)));
    // 0x79a6d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a6dc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A6DCu;
    {
        const bool branch_taken_0x79a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6dc) {
            ctx->pc = 0x79A724u;
            goto label_79a724;
        }
    }
    ctx->pc = 0x79A6E4u;
    // 0x79a6e4: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A6E4u;
    SET_GPR_U32(ctx, 31, 0x79A6ECu);
    ctx->pc = 0x79A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6E4u;
    // 0x79a6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A6E4u, 0x79A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6ECu;
label_79a6ec:
    // 0x79a6ec: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x79A6ECu;
    SET_GPR_U32(ctx, 31, 0x79A6F4u);
    ctx->pc = 0x79A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6ECu;
    // 0x79a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x79A6ECu, 0x79A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6F4u;
label_79a6f4:
    // 0x79a6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a6f8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A6F8u;
    SET_GPR_U32(ctx, 31, 0x79A700u);
    ctx->pc = 0x79A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6F8u;
    // 0x79a6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A6F8u, 0x79A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A700u;
label_79a700:
    // 0x79a700: 0xc06b646  jal         func_1AD918
    ctx->pc = 0x79A700u;
    SET_GPR_U32(ctx, 31, 0x79A708u);
    ctx->pc = 0x79A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A700u;
    // 0x79a704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x79A700u, 0x79A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A708u;
label_79a708:
    // 0x79a708: 0xc06b6ba  jal         func_1ADAE8
    ctx->pc = 0x79A708u;
    SET_GPR_U32(ctx, 31, 0x79A710u);
    ctx->pc = 0x79A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A708u;
    // 0x79a70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAE8u, 0x79A708u, 0x79A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A710u;
label_79a710:
    // 0x79a710: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a714: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A714u;
    SET_GPR_U32(ctx, 31, 0x79A71Cu);
    ctx->pc = 0x79A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A714u;
    // 0x79a718: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A714u, 0x79A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A71Cu;
label_79a71c:
    // 0x79a71c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79A71Cu;
    {
        const bool branch_taken_0x79a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a71c) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A724u;
label_79a724:
    // 0x79a724: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79a724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a728: 0x3c01bf86  lui         $at, 0xBF86
    ctx->pc = 0x79a728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49030 << 16));
    // 0x79a72c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x79a72cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x79a730: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a734: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x79A734u;
    SET_GPR_U32(ctx, 31, 0x79A73Cu);
    ctx->pc = 0x79A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A734u;
    // 0x79a738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x79A734u, 0x79A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A73Cu;
label_79a73c:
    // 0x79a73c: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x79A73Cu;
    SET_GPR_U32(ctx, 31, 0x79A744u);
    ctx->pc = 0x79A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A73Cu;
    // 0x79a740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x79A73Cu, 0x79A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A744u;
label_79a744:
    // 0x79a744: 0xc06b672  jal         func_1AD9C8
    ctx->pc = 0x79A744u;
    SET_GPR_U32(ctx, 31, 0x79A74Cu);
    ctx->pc = 0x79A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A744u;
    // 0x79a748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD9C8u, 0x79A744u, 0x79A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A74Cu;
label_79a74c:
    // 0x79a74c: 0xc06b6be  jal         func_1ADAF8
    ctx->pc = 0x79A74Cu;
    SET_GPR_U32(ctx, 31, 0x79A754u);
    ctx->pc = 0x79A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A74Cu;
    // 0x79a750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAF8u, 0x79A74Cu, 0x79A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A754u;
label_79a754:
    // 0x79a754: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79A754u;
    {
        const bool branch_taken_0x79a754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a754) {
            ctx->pc = 0x79A770u;
            goto label_79a770;
        }
    }
    ctx->pc = 0x79A75Cu;
    // 0x79a75c: 0x0  nop
    ctx->pc = 0x79a75cu;
    // NOP
label_79a760:
    // 0x79a760: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a768: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A768u;
    SET_GPR_U32(ctx, 31, 0x79A770u);
    ctx->pc = 0x79A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A768u;
    // 0x79a76c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A768u, 0x79A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A770u;
label_79a770:
    // 0x79a770: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79A770u;
    SET_GPR_U32(ctx, 31, 0x79A778u);
    ctx->pc = 0x79A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A770u;
    // 0x79a774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79A770u, 0x79A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A778u;
label_79a778:
    // 0x79a778: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79A778u;
    {
        const bool branch_taken_0x79a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A778u;
        // 0x79a77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a778) {
            ctx->pc = 0x79A760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a760;
        }
    }
    ctx->pc = 0x79A780u;
    // 0x79a780: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x79A780u;
    SET_GPR_U32(ctx, 31, 0x79A788u);
    ctx->pc = 0x79A784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A780u;
    // 0x79a784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x79A780u, 0x79A788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A788u;
label_79a788:
    // 0x79a788: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a78c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A78Cu;
    SET_GPR_U32(ctx, 31, 0x79A794u);
    ctx->pc = 0x79A790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A78Cu;
    // 0x79a790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A78Cu, 0x79A794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A794u;
label_79a794:
    // 0x79a794: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a798: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a79c: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A79Cu;
    SET_GPR_U32(ctx, 31, 0x79A7A4u);
    ctx->pc = 0x79A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A79Cu;
    // 0x79a7a0: 0x24a5abf8  addiu       $a1, $a1, -0x5408 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A79Cu, 0x79A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7A4u;
label_79a7a4:
    // 0x79a7a4: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a7a8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x79a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79a7ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A7ACu;
    SET_GPR_U32(ctx, 31, 0x79A7B4u);
    ctx->pc = 0x79A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7ACu;
    // 0x79a7b0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A7ACu, 0x79A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7B4u;
label_79a7b4:
    // 0x79a7b4: 0xc06b6ba  jal         func_1ADAE8
    ctx->pc = 0x79A7B4u;
    SET_GPR_U32(ctx, 31, 0x79A7BCu);
    ctx->pc = 0x79A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7B4u;
    // 0x79a7b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAE8u, 0x79A7B4u, 0x79A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7BCu;
label_79a7bc:
    // 0x79a7bc: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A7BCu;
    SET_GPR_U32(ctx, 31, 0x79A7C4u);
    ctx->pc = 0x79A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7BCu;
    // 0x79a7c0: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A7BCu, 0x79A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7C4u;
label_79a7c4:
    // 0x79a7c4: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A7C4u;
    SET_GPR_U32(ctx, 31, 0x79A7CCu);
    ctx->pc = 0x79A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7C4u;
    // 0x79a7c8: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A7C4u, 0x79A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7CCu;
label_79a7cc:
    // 0x79a7cc: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a7d0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a7d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79a7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a7d8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A7D8u;
    SET_GPR_U32(ctx, 31, 0x79A7E0u);
    ctx->pc = 0x79A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7D8u;
    // 0x79a7dc: 0x24a5a138  addiu       $a1, $a1, -0x5EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A7D8u, 0x79A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E0u;
label_79a7e0:
    // 0x79a7e0: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a7e4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A7E4u;
    SET_GPR_U32(ctx, 31, 0x79A7ECu);
    ctx->pc = 0x79A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E4u;
    // 0x79a7e8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A7E4u, 0x79A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7ECu;
label_79a7ec:
    // 0x79a7ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a7ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a7f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a7f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a7f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a7f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a800: 0x3e00008  jr          $ra
    ctx->pc = 0x79A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A800u;
        // 0x79a804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A808u;
}
} // namespace gh_r304
