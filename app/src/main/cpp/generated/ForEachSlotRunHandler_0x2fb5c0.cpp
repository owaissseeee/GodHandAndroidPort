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

// Function: ForEachSlotRunHandler
// Address: 0x2fb5c0 - 0x2fb6c8
void ForEachSlotRunHandler_0x2fb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForEachSlotRunHandler_0x2fb5c0");
#endif

    switch (ctx->pc) {
        case 0x2fb618u: goto label_2fb618;
        case 0x2fb688u: goto label_2fb688;
        default: break;
    }

    ctx->pc = 0x2fb5c0u;

    // 0x2fb5c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fb5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fb5c4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb5c8: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb5cc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2fb5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2fb5d0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2fb5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2fb5d4: 0x2476b840  addiu       $s6, $v1, -0x47C0
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb5d8: 0x2457b7c0  addiu       $s7, $v0, -0x4840
    ctx->pc = 0x2fb5d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb5dc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2fb5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2fb5e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2fb5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2fb5e4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb5e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2fb5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2fb5ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb5f0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2fb5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2fb5f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fb5f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fb5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fb5fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fb5fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb600: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2fb600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2fb604: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb60c: 0x2455b8c0  addiu       $s5, $v0, -0x4740
    ctx->pc = 0x2fb60cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb610: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb614: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2fb618:
    // 0x2fb618: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb61c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb620: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb624: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x2fb624u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb628: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x2fb628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2fb62c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb630: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb634: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FB634u;
    {
        const bool branch_taken_0x2fb634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB634u;
        // 0x2fb638: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb634) {
            ctx->pc = 0x2FB688u;
            goto label_2fb688;
        }
    }
    ctx->pc = 0x2FB63Cu;
    // 0x2fb63c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb640: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb644: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FB644u;
    {
        const bool branch_taken_0x2fb644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb644) {
            ctx->pc = 0x2FB648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB644u;
            // 0x2fb648: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB68Cu;
            goto label_2fb68c;
        }
    }
    ctx->pc = 0x2FB64Cu;
    // 0x2fb64c: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x2fb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x2fb650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb654: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb658: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FB658u;
    {
        const bool branch_taken_0x2fb658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb658) {
            ctx->pc = 0x2FB65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB658u;
            // 0x2fb65c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB68Cu;
            goto label_2fb68c;
        }
    }
    ctx->pc = 0x2FB660u;
    // 0x2fb660: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2fb660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x2fb664: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB664u;
    {
        const bool branch_taken_0x2fb664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2fb664) {
            ctx->pc = 0x2FB668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB664u;
            // 0x2fb668: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB68Cu;
            goto label_2fb68c;
        }
    }
    ctx->pc = 0x2FB66Cu;
    // 0x2fb66c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x2fb66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x2fb670: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB670u;
    {
        const bool branch_taken_0x2fb670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2fb670) {
            ctx->pc = 0x2FB674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB670u;
            // 0x2fb674: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB68Cu;
            goto label_2fb68c;
        }
    }
    ctx->pc = 0x2FB678u;
    // 0x2fb678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb67c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2fb67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb680: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x2FB680u;
    SET_GPR_U32(ctx, 31, 0x2FB688u);
    ctx->pc = 0x2FB684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB680u;
    // 0x2fb684: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x2FB680u, 0x2FB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB688u;
label_2fb688:
    // 0x2fb688: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb68c:
    // 0x2fb68c: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb690: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2FB690u;
    {
        const bool branch_taken_0x2fb690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB690u;
        // 0x2fb694: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb690) {
            ctx->pc = 0x2FB618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb618;
        }
    }
    ctx->pc = 0x2FB698u;
    // 0x2fb698: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2fb698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fb69c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2fb69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb6a0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2fb6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb6a4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2fb6a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb6a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fb6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb6ac: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2fb6acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb6b0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2fb6b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb6b4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2fb6b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6BCu;
        // 0x2fb6c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB6C4u;
    // 0x2fb6c4: 0x0  nop
    ctx->pc = 0x2fb6c4u;
    // NOP
    ctx->pc = 0x2fb6c8u;
}
