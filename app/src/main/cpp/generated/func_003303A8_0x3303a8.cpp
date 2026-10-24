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

// Function: func_003303A8
// Address: 0x3303a8 - 0x330480
void func_003303A8_0x3303a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003303A8_0x3303a8");
#endif

    switch (ctx->pc) {
        case 0x3303a8u: goto label_3303a8;
        case 0x3303acu: goto label_3303ac;
        case 0x3303b0u: goto label_3303b0;
        case 0x3303b4u: goto label_3303b4;
        case 0x3303b8u: goto label_3303b8;
        case 0x3303bcu: goto label_3303bc;
        case 0x3303c0u: goto label_3303c0;
        case 0x3303c4u: goto label_3303c4;
        case 0x3303c8u: goto label_3303c8;
        case 0x3303ccu: goto label_3303cc;
        case 0x3303d0u: goto label_3303d0;
        case 0x3303d4u: goto label_3303d4;
        case 0x3303d8u: goto label_3303d8;
        case 0x3303dcu: goto label_3303dc;
        case 0x3303e0u: goto label_3303e0;
        case 0x3303e4u: goto label_3303e4;
        case 0x3303e8u: goto label_3303e8;
        case 0x3303ecu: goto label_3303ec;
        case 0x3303f0u: goto label_3303f0;
        case 0x3303f4u: goto label_3303f4;
        case 0x3303f8u: goto label_3303f8;
        case 0x3303fcu: goto label_3303fc;
        case 0x330400u: goto label_330400;
        case 0x330404u: goto label_330404;
        case 0x330408u: goto label_330408;
        case 0x33040cu: goto label_33040c;
        case 0x330410u: goto label_330410;
        case 0x330414u: goto label_330414;
        case 0x330418u: goto label_330418;
        case 0x33041cu: goto label_33041c;
        case 0x330420u: goto label_330420;
        case 0x330424u: goto label_330424;
        case 0x330428u: goto label_330428;
        case 0x33042cu: goto label_33042c;
        case 0x330430u: goto label_330430;
        case 0x330434u: goto label_330434;
        case 0x330438u: goto label_330438;
        case 0x33043cu: goto label_33043c;
        case 0x330440u: goto label_330440;
        case 0x330444u: goto label_330444;
        case 0x330448u: goto label_330448;
        case 0x33044cu: goto label_33044c;
        case 0x330450u: goto label_330450;
        case 0x330454u: goto label_330454;
        case 0x330458u: goto label_330458;
        case 0x33045cu: goto label_33045c;
        case 0x330460u: goto label_330460;
        case 0x330464u: goto label_330464;
        case 0x330468u: goto label_330468;
        case 0x33046cu: goto label_33046c;
        case 0x330470u: goto label_330470;
        case 0x330474u: goto label_330474;
        case 0x330478u: goto label_330478;
        case 0x33047cu: goto label_33047c;
        default: break;
    }

    ctx->pc = 0x3303a8u;

label_3303a8:
    // 0x3303a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3303a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3303ac:
    // 0x3303ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3303acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3303b0:
    // 0x3303b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3303b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3303b4:
    // 0x3303b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3303b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3303b8:
    // 0x3303b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3303b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3303bc:
    // 0x3303bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3303bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3303c0:
    // 0x3303c0: 0xc0cc146  jal         func_330518
label_3303c4:
    if (ctx->pc == 0x3303C4u) {
        ctx->pc = 0x3303C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303C0u;
        // 0x3303c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303C8u;
        goto label_3303c8;
    }
    ctx->pc = 0x3303C0u;
    SET_GPR_U32(ctx, 31, 0x3303C8u);
    ctx->pc = 0x3303C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303C0u;
    // 0x3303c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330518u, 0x3303C0u, 0x3303C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303C8u;
label_3303c8:
    // 0x3303c8: 0x200f809  jalr        $s0
label_3303cc:
    if (ctx->pc == 0x3303CCu) {
        ctx->pc = 0x3303D0u;
        goto label_3303d0;
    }
    ctx->pc = 0x3303C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x3303D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3303C8u, 0x3303D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3303D0u;
label_3303d0:
    // 0x3303d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3303d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3303d4:
    // 0x3303d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3303d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3303d8:
    // 0x3303d8: 0xc0cc120  jal         func_330480
label_3303dc:
    if (ctx->pc == 0x3303DCu) {
        ctx->pc = 0x3303DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303D8u;
        // 0x3303dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303E0u;
        goto label_3303e0;
    }
    ctx->pc = 0x3303D8u;
    SET_GPR_U32(ctx, 31, 0x3303E0u);
    ctx->pc = 0x3303DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3303D8u;
    // 0x3303dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330480u, 0x3303D8u, 0x3303E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3303E0u;
label_3303e0:
    // 0x3303e0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_3303e4:
    if (ctx->pc == 0x3303E4u) {
        ctx->pc = 0x3303E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303E0u;
        // 0x3303e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303E8u;
        goto label_3303e8;
    }
    ctx->pc = 0x3303E0u;
    {
        const bool branch_taken_0x3303e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3303E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303E0u;
        // 0x3303e4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303e0) {
            ctx->pc = 0x330464u;
            goto label_330464;
        }
    }
    ctx->pc = 0x3303E8u;
label_3303e8:
    // 0x3303e8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x3303e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_3303ec:
    // 0x3303ec: 0x24835e80  addiu       $v1, $a0, 0x5E80
    ctx->pc = 0x3303ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24192));
label_3303f0:
    // 0x3303f0: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x3303f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3303f4:
    // 0x3303f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3303f8:
    if (ctx->pc == 0x3303F8u) {
        ctx->pc = 0x3303F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303F4u;
        // 0x3303f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3303FCu;
        goto label_3303fc;
    }
    ctx->pc = 0x3303F4u;
    {
        const bool branch_taken_0x3303f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3303F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3303F4u;
        // 0x3303f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303f4) {
            ctx->pc = 0x330424u;
            goto label_330424;
        }
    }
    ctx->pc = 0x3303FCu;
label_3303fc:
    // 0x3303fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3303fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_330400:
    // 0x330400: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x330400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_330404:
    // 0x330404: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_330408:
    if (ctx->pc == 0x330408u) {
        ctx->pc = 0x330408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330404u;
        // 0x330408: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33040Cu;
        goto label_33040c;
    }
    ctx->pc = 0x330404u;
    {
        const bool branch_taken_0x330404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330404u;
        // 0x330408: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330404) {
            ctx->pc = 0x330424u;
            goto label_330424;
        }
    }
    ctx->pc = 0x33040Cu;
label_33040c:
    // 0x33040c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_330410:
    // 0x330410: 0x0  nop
    ctx->pc = 0x330410u;
    // NOP
label_330414:
    // 0x330414: 0x0  nop
    ctx->pc = 0x330414u;
    // NOP
label_330418:
    // 0x330418: 0x0  nop
    ctx->pc = 0x330418u;
    // NOP
label_33041c:
    // 0x33041c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_330420:
    if (ctx->pc == 0x330420u) {
        ctx->pc = 0x330420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33041Cu;
        // 0x330420: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330424u;
        goto label_330424;
    }
    ctx->pc = 0x33041Cu;
    {
        const bool branch_taken_0x33041c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33041c) {
            ctx->pc = 0x330420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33041Cu;
            // 0x330420: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330400;
        }
    }
    ctx->pc = 0x330424u;
label_330424:
    // 0x330424: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x330424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_330428:
    // 0x330428: 0x1203000e  beq         $s0, $v1, . + 4 + (0xE << 2)
label_33042c:
    if (ctx->pc == 0x33042Cu) {
        ctx->pc = 0x33042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330428u;
        // 0x33042c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330430u;
        goto label_330430;
    }
    ctx->pc = 0x330428u;
    {
        const bool branch_taken_0x330428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x33042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330428u;
        // 0x33042c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330428) {
            ctx->pc = 0x330464u;
            goto label_330464;
        }
    }
    ctx->pc = 0x330430u;
label_330430:
    // 0x330430: 0x24825e80  addiu       $v0, $a0, 0x5E80
    ctx->pc = 0x330430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 24192));
label_330434:
    // 0x330434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330438:
    // 0x330438: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x330438u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_33043c:
    // 0x33043c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x33043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_330440:
    // 0x330440: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x330440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_330444:
    // 0x330444: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x330444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_330448:
    // 0x330448: 0xc0e9637  jal         func_3A58DC
label_33044c:
    if (ctx->pc == 0x33044Cu) {
        ctx->pc = 0x33044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330448u;
        // 0x33044c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330450u;
        goto label_330450;
    }
    ctx->pc = 0x330448u;
    SET_GPR_U32(ctx, 31, 0x330450u);
    ctx->pc = 0x33044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330448u;
    // 0x33044c: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x330448u, 0x330450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330450u;
label_330450:
    // 0x330450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x330450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330454:
    // 0x330454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_330458:
    // 0x330458: 0xc0e9452  jal         func_3A5148
label_33045c:
    if (ctx->pc == 0x33045Cu) {
        ctx->pc = 0x33045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330458u;
        // 0x33045c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330460u;
        goto label_330460;
    }
    ctx->pc = 0x330458u;
    SET_GPR_U32(ctx, 31, 0x330460u);
    ctx->pc = 0x33045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330458u;
    // 0x33045c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x330458u, 0x330460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330460u;
label_330460:
    // 0x330460: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x330460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_330464:
    // 0x330464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330468:
    // 0x330468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33046c:
    // 0x33046c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33046cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_330470:
    // 0x330470: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x330470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_330474:
    // 0x330474: 0x3e00008  jr          $ra
label_330478:
    if (ctx->pc == 0x330478u) {
        ctx->pc = 0x330478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330474u;
        // 0x330478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33047Cu;
        goto label_33047c;
    }
    ctx->pc = 0x330474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330474u;
        // 0x330478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33047Cu;
label_33047c:
    // 0x33047c: 0x0  nop
    ctx->pc = 0x33047cu;
    // NOP
    ctx->pc = 0x330480u;
}
