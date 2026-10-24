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

// Function: func_001DC4C0
// Address: 0x1dc4c0 - 0x1dc5f8
void func_001DC4C0_0x1dc4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DC4C0_0x1dc4c0");
#endif

    switch (ctx->pc) {
        case 0x1dc508u: goto label_1dc508;
        case 0x1dc538u: goto label_1dc538;
        case 0x1dc540u: goto label_1dc540;
        case 0x1dc580u: goto label_1dc580;
        default: break;
    }

    ctx->pc = 0x1dc4c0u;

    // 0x1dc4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dc4c4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1dc4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1dc4c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1dc4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1dc4cc: 0x27a20036  addiu       $v0, $sp, 0x36
    ctx->pc = 0x1dc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
    // 0x1dc4d0: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1dc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1dc4d4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x1dc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x1dc4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc4e0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dc4e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1dc4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1dc4e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dc4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dc4ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1dc4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dc4f0: 0x27a70022  addiu       $a3, $sp, 0x22
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 34));
    // 0x1dc4f4: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
    // 0x1dc4f8: 0x27a90024  addiu       $t1, $sp, 0x24
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1dc4fc: 0x27aa0034  addiu       $t2, $sp, 0x34
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1dc500: 0xc076fee  jal         func_1DBFB8
    ctx->pc = 0x1DC500u;
    SET_GPR_U32(ctx, 31, 0x1DC508u);
    ctx->pc = 0x1DC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC500u;
    // 0x1dc504: 0x27ab0026  addiu       $t3, $sp, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBFB8u, 0x1DC500u, 0x1DC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC508u;
label_1dc508:
    // 0x1dc508: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x1dc508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc50c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1dc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dc510: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC510u;
    {
        const bool branch_taken_0x1dc510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC510u;
        // 0x1dc514: 0x97a20032  lhu         $v0, 0x32($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc510) {
            ctx->pc = 0x1DC520u;
            goto label_1dc520;
        }
    }
    ctx->pc = 0x1DC518u;
    // 0x1dc518: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DC518u;
    {
        const bool branch_taken_0x1dc518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC518u;
        // 0x1dc51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc518) {
            ctx->pc = 0x1DC5E8u;
            goto label_1dc5e8;
        }
    }
    ctx->pc = 0x1DC520u;
label_1dc520:
    // 0x1dc520: 0x260d3004  addiu       $t5, $s0, 0x3004
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1dc524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc528: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x1dc528u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc52c: 0x240efffb  addiu       $t6, $zero, -0x5
    ctx->pc = 0x1dc52cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1dc530: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dc530u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dc534: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x1dc534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1dc538:
    // 0x1dc538: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1dc538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc53c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dc53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dc540:
    // 0x1dc540: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc544: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dc544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dc548: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dc548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dc54c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1dc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc550: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1dc550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x1dc554: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DC554u;
    {
        const bool branch_taken_0x1dc554 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC554u;
        // 0x1dc558: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc554) {
            ctx->pc = 0x1DC540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc540;
        }
    }
    ctx->pc = 0x1DC55Cu;
    // 0x1dc55c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc55cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc560: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x1dc560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc564: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DC564u;
    {
        const bool branch_taken_0x1dc564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC564u;
        // 0x1dc568: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc564) {
            ctx->pc = 0x1DC5D0u;
            goto label_1dc5d0;
        }
    }
    ctx->pc = 0x1DC56Cu;
    // 0x1dc56c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1dc570: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1dc570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1dc574: 0x1825821  addu        $t3, $t4, $v0
    ctx->pc = 0x1dc574u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1dc578: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x1dc578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1dc57c: 0x0  nop
    ctx->pc = 0x1dc57cu;
    // NOP
label_1dc580:
    // 0x1dc580: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dc584: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x1dc584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1dc588: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dc588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc58c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1dc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dc590: 0x8c820604  lw          $v0, 0x604($a0)
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1540)));
    // 0x1dc594: 0x8c650604  lw          $a1, 0x604($v1)
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1dc598: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DC598u;
    {
        const bool branch_taken_0x1dc598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC598u;
        // 0x1dc59c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc598) {
            ctx->pc = 0x1DC5C4u;
            goto label_1dc5c4;
        }
    }
    ctx->pc = 0x1DC5A0u;
    // 0x1dc5a0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1dc5a4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1dc5a8: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x1dc5a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1dc5ac: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1dc5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1dc5b0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1dc5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1dc5b4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1dc5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1dc5b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dc5bc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1dc5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1dc5c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1dc5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1dc5c4:
    // 0x1dc5c4: 0x29020005  slti        $v0, $t0, 0x5
    ctx->pc = 0x1dc5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1dc5c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DC5C8u;
    {
        const bool branch_taken_0x1dc5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5C8u;
        // 0x1dc5cc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5c8) {
            ctx->pc = 0x1DC580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc580;
        }
    }
    ctx->pc = 0x1DC5D0u;
label_1dc5d0:
    // 0x1dc5d0: 0x114f0004  beq         $t2, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC5D0u;
    {
        const bool branch_taken_0x1dc5d0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5D0u;
        // 0x1dc5d4: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5d0) {
            ctx->pc = 0x1DC5E4u;
            goto label_1dc5e4;
        }
    }
    ctx->pc = 0x1DC5D8u;
    // 0x1dc5d8: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc5dc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1DC5DCu;
    {
        const bool branch_taken_0x1dc5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5DCu;
        // 0x1dc5e0: 0x24c90001  addiu       $t1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5dc) {
            ctx->pc = 0x1DC538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc538;
        }
    }
    ctx->pc = 0x1DC5E4u;
label_1dc5e4:
    // 0x1dc5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dc5e8:
    // 0x1dc5e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1dc5e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc5ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dc5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5F0u;
        // 0x1dc5f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC5F8u;
}
