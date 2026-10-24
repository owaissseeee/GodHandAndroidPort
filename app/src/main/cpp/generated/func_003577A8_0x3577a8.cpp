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

// Function: func_003577A8
// Address: 0x3577a8 - 0x357870
void func_003577A8_0x3577a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003577A8_0x3577a8");
#endif

    switch (ctx->pc) {
        case 0x357818u: goto label_357818;
        case 0x35782cu: goto label_35782c;
        case 0x357840u: goto label_357840;
        default: break;
    }

    ctx->pc = 0x3577a8u;

    // 0x3577a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3577a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3577ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3577acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3577b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3577b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3577b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3577b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3577b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3577b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3577bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3577bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3577c0: 0x26250a0c  addiu       $a1, $s1, 0xA0C
    ctx->pc = 0x3577c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x3577c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3577c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3577c8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3577c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3577cc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3577ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3577d0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x3577d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x3577d4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3577d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3577d8: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x3577d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x3577dc: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x3577dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x3577e0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x3577e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3577e4: 0x10a60019  beq         $a1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3577E4u;
    {
        const bool branch_taken_0x3577e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3577E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577E4u;
        // 0x3577e8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577e4) {
            ctx->pc = 0x35784Cu;
            goto label_35784c;
        }
    }
    ctx->pc = 0x3577ECu;
    // 0x3577ec: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x3577ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3577f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3577F0u;
    {
        const bool branch_taken_0x3577f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577f0) {
            ctx->pc = 0x3577F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3577F0u;
            // 0x3577f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357808u;
            goto label_357808;
        }
    }
    ctx->pc = 0x3577F8u;
    // 0x3577f8: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3577F8u;
    {
        const bool branch_taken_0x3577f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x3577FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3577F8u;
        // 0x3577fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3577f8) {
            ctx->pc = 0x35784Cu;
            goto label_35784c;
        }
    }
    ctx->pc = 0x357800u;
    // 0x357800: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x357800u;
    {
        const bool branch_taken_0x357800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357800u;
        // 0x357804: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357800) {
            ctx->pc = 0x35784Cu;
            goto label_35784c;
        }
    }
    ctx->pc = 0x357808u;
label_357808:
    // 0x357808: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x357808u;
    {
        const bool branch_taken_0x357808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x35780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357808u;
        // 0x35780c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357808) {
            ctx->pc = 0x35784Cu;
            goto label_35784c;
        }
    }
    ctx->pc = 0x357810u;
    // 0x357810: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357810u;
    SET_GPR_U32(ctx, 31, 0x357818u);
    ctx->pc = 0x357814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357810u;
    // 0x357814: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357810u, 0x357818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357818u;
label_357818:
    // 0x357818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35781c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x35781Cu;
    {
        const bool branch_taken_0x35781c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x357820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35781Cu;
        // 0x357820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35781c) {
            ctx->pc = 0x357850u;
            goto label_357850;
        }
    }
    ctx->pc = 0x357824u;
    // 0x357824: 0xc0d8310  jal         func_360C40
    ctx->pc = 0x357824u;
    SET_GPR_U32(ctx, 31, 0x35782Cu);
    ctx->pc = 0x360C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360C40u, 0x357824u, 0x35782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35782Cu;
label_35782c:
    // 0x35782c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35782Cu;
    {
        const bool branch_taken_0x35782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35782c) {
            ctx->pc = 0x357830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35782Cu;
            // 0x357830: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35784Cu;
            goto label_35784c;
        }
    }
    ctx->pc = 0x357834u;
    // 0x357834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357838: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357838u;
    SET_GPR_U32(ctx, 31, 0x357840u);
    ctx->pc = 0x35783Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357838u;
    // 0x35783c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357838u, 0x357840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357840u;
label_357840:
    // 0x357840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357840u;
    {
        const bool branch_taken_0x357840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357840u;
        // 0x357844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357840) {
            ctx->pc = 0x357850u;
            goto label_357850;
        }
    }
    ctx->pc = 0x357848u;
    // 0x357848: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x357848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35784c:
    // 0x35784c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35784cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357850:
    // 0x357850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x357850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x357854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x357858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35785c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35785cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357860: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x357860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x357864: 0x80d6800  j           func_35A000
    ctx->pc = 0x357864u;
    ctx->pc = 0x357868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357864u;
    // 0x357868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x357864u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35786Cu;
    // 0x35786c: 0x0  nop
    ctx->pc = 0x35786cu;
    // NOP
    ctx->pc = 0x357870u;
}
