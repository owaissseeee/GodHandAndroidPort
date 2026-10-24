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

// Function: cTaskManager_runTasksWithWait
// Address: 0x2d5358 - 0x2d5440
void cTaskManager_runTasksWithWait_0x2d5358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cTaskManager_runTasksWithWait_0x2d5358");
#endif

    switch (ctx->pc) {
        case 0x2d5390u: goto label_2d5390;
        case 0x2d53e8u: goto label_2d53e8;
        case 0x2d5404u: goto label_2d5404;
        default: break;
    }

    ctx->pc = 0x2d5358u;

    // 0x2d5358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d535c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d5360: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d5364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d5364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d536c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d5370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5374: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x2d5374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d5378: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2d5378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d537c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2D537Cu;
    {
        const bool branch_taken_0x2d537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D537Cu;
        // 0x2d5380: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d537c) {
            ctx->pc = 0x2D5418u;
            goto label_2d5418;
        }
    }
    ctx->pc = 0x2D5384u;
    // 0x2d5384: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2d5384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2d5388: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d538c: 0x24532c00  addiu       $s3, $v0, 0x2C00
    ctx->pc = 0x2d538cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
label_2d5390:
    // 0x2d5390: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d5394: 0x9e03002c  lwu         $v1, 0x2C($s0)
    ctx->pc = 0x2d5394u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2d5398: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2d5398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d539c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2d539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2d53a0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2d53a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d53a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D53A4u;
    {
        const bool branch_taken_0x2d53a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D53A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53A4u;
        // 0x2d53a8: 0xae040004  sw          $a0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53a4) {
            ctx->pc = 0x2D53BCu;
            goto label_2d53bc;
        }
    }
    ctx->pc = 0x2D53ACu;
    // 0x2d53ac: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x2d53acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d53b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d53b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d53b4: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D53B4u;
    {
        const bool branch_taken_0x2d53b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53b4) {
            ctx->pc = 0x2D53B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D53B4u;
            // 0x2d53b8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5408u;
            goto label_2d5408;
        }
    }
    ctx->pc = 0x2D53BCu;
label_2d53bc:
    // 0x2d53bc: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x2d53bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x2d53c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d53c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d53c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D53C4u;
    {
        const bool branch_taken_0x2d53c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53c4) {
            ctx->pc = 0x2D53E0u;
            goto label_2d53e0;
        }
    }
    ctx->pc = 0x2D53CCu;
    // 0x2d53cc: 0x90820050  lbu         $v0, 0x50($a0)
    ctx->pc = 0x2d53ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2d53d0: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2d53d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x2d53d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d53d8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D53D8u;
    {
        const bool branch_taken_0x2d53d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d53d8) {
            ctx->pc = 0x2D53DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D53D8u;
            // 0x2d53dc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5408u;
            goto label_2d5408;
        }
    }
    ctx->pc = 0x2D53E0u;
label_2d53e0:
    // 0x2d53e0: 0xc0b55f2  jal         func_2D57C8
    ctx->pc = 0x2D53E0u;
    SET_GPR_U32(ctx, 31, 0x2D53E8u);
    ctx->pc = 0x2D53E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53E0u;
    // 0x2d53e4: 0xa6000034  sh          $zero, 0x34($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D57C8u, 0x2D53E0u, 0x2D53E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D53E8u;
label_2d53e8:
    // 0x2d53e8: 0x96020034  lhu         $v0, 0x34($s0)
    ctx->pc = 0x2d53e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2d53ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D53ECu;
    {
        const bool branch_taken_0x2d53ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D53F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D53ECu;
        // 0x2d53f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d53ec) {
            ctx->pc = 0x2D5404u;
            goto label_2d5404;
        }
    }
    ctx->pc = 0x2D53F4u;
    // 0x2d53f4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2d53f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2d53f8: 0x2652ffa8  addiu       $s2, $s2, -0x58
    ctx->pc = 0x2d53f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967208));
    // 0x2d53fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2D53FCu;
    SET_GPR_U32(ctx, 31, 0x2D5404u);
    ctx->pc = 0x2D5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D53FCu;
    // 0x2d5400: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2D53FCu, 0x2D5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5404u;
label_2d5404:
    // 0x2d5404: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2d5404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2d5408:
    // 0x2d5408: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d540c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2d540cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d5410: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2D5410u;
    {
        const bool branch_taken_0x2d5410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5410u;
        // 0x2d5414: 0x26520058  addiu       $s2, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5410) {
            ctx->pc = 0x2D5390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5390;
        }
    }
    ctx->pc = 0x2D5418u;
label_2d5418:
    // 0x2d5418: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d541c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d541cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d5420: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d5420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d5424: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d5424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5428: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d5428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d542c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d542cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5430: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d5430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5438: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5438u;
        // 0x2d543c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5440u;
}
