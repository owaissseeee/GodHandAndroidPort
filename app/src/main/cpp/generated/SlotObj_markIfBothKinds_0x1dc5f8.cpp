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

// Function: SlotObj_markIfBothKinds
// Address: 0x1dc5f8 - 0x1dc710
void SlotObj_markIfBothKinds_0x1dc5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SlotObj_markIfBothKinds_0x1dc5f8");
#endif

    switch (ctx->pc) {
        case 0x1dc648u: goto label_1dc648;
        case 0x1dc660u: goto label_1dc660;
        case 0x1dc698u: goto label_1dc698;
        case 0x1dc6d8u: goto label_1dc6d8;
        default: break;
    }

    ctx->pc = 0x1dc5f8u;

    // 0x1dc5f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1dc5fc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc600: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1dc600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1dc604: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1dc604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1dc608: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dc60c: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dc610: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc614: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dc614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1dc618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc61c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc620: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc624: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dc628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc62c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dc62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dc630: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc634: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc638: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dc638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc63c: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc640: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC640u;
    SET_GPR_U32(ctx, 31, 0x1DC648u);
    ctx->pc = 0x1DC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC640u;
    // 0x1dc644: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC640u, 0x1DC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC648u;
label_1dc648:
    // 0x1dc648: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x1dc648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc650: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc654: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DC654u;
    {
        const bool branch_taken_0x1dc654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC654u;
        // 0x1dc658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc654) {
            ctx->pc = 0x1DC680u;
            goto label_1dc680;
        }
    }
    ctx->pc = 0x1DC65Cu;
    // 0x1dc65c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dc65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dc660:
    // 0x1dc660: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc664: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC664u;
    {
        const bool branch_taken_0x1dc664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC664u;
        // 0x1dc668: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc664) {
            ctx->pc = 0x1DC684u;
            goto label_1dc684;
        }
    }
    ctx->pc = 0x1DC66Cu;
    // 0x1dc66c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc670: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dc674: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1dc674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc678: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DC678u;
    {
        const bool branch_taken_0x1dc678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1DC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC678u;
        // 0x1dc67c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc678) {
            ctx->pc = 0x1DC660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc660;
        }
    }
    ctx->pc = 0x1DC680u;
label_1dc680:
    // 0x1dc680: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc684:
    // 0x1dc684: 0x97a30030  lhu         $v1, 0x30($sp)
    ctx->pc = 0x1dc684u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc68c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DC68Cu;
    {
        const bool branch_taken_0x1dc68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC68Cu;
        // 0x1dc690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc68c) {
            ctx->pc = 0x1DC6B8u;
            goto label_1dc6b8;
        }
    }
    ctx->pc = 0x1DC694u;
    // 0x1dc694: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dc694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dc698:
    // 0x1dc698: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1dc698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc69c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC69Cu;
    {
        const bool branch_taken_0x1dc69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC69Cu;
        // 0x1dc6a0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc69c) {
            ctx->pc = 0x1DC6C0u;
            goto label_1dc6c0;
        }
    }
    ctx->pc = 0x1DC6A4u;
    // 0x1dc6a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc6a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1dc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1dc6ac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1dc6acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc6b0: 0x5464fff9  bnel        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DC6B0u;
    {
        const bool branch_taken_0x1dc6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dc6b0) {
            ctx->pc = 0x1DC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC6B0u;
            // 0x1dc6b4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc698;
        }
    }
    ctx->pc = 0x1DC6B8u;
label_1dc6b8:
    // 0x1dc6b8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1dc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1dc6bc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1dc6bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1dc6c0:
    // 0x1dc6c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc6c4: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DC6C4u;
    {
        const bool branch_taken_0x1dc6c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6C4u;
        // 0x1dc6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6c4) {
            ctx->pc = 0x1DC6F8u;
            goto label_1dc6f8;
        }
    }
    ctx->pc = 0x1DC6CCu;
    // 0x1dc6cc: 0x26243004  addiu       $a0, $s1, 0x3004
    ctx->pc = 0x1dc6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12292));
    // 0x1dc6d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc6d4: 0x0  nop
    ctx->pc = 0x1dc6d4u;
    // NOP
label_1dc6d8:
    // 0x1dc6d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc6dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc6e0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc6e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc6e8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc6ec: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC6ECu;
    {
        const bool branch_taken_0x1dc6ec = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC6ECu;
        // 0x1dc6f0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc6ec) {
            ctx->pc = 0x1DC6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc6d8;
        }
    }
    ctx->pc = 0x1DC6F4u;
    // 0x1dc6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc6f8:
    // 0x1dc6f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1dc6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc6fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1dc6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc700: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dc700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc704: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC704u;
        // 0x1dc708: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC70Cu;
    // 0x1dc70c: 0x0  nop
    ctx->pc = 0x1dc70cu;
    // NOP
    ctx->pc = 0x1dc710u;
}
