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

// Function: cDataManager_loadSeWait
// Address: 0x1feaa0 - 0x1fec90
void cDataManager_loadSeWait_0x1feaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_loadSeWait_0x1feaa0");
#endif

    switch (ctx->pc) {
        case 0x1fead0u: goto label_1fead0;
        case 0x1feb98u: goto label_1feb98;
        case 0x1febecu: goto label_1febec;
        case 0x1fec04u: goto label_1fec04;
        case 0x1fec14u: goto label_1fec14;
        case 0x1fec24u: goto label_1fec24;
        case 0x1fec34u: goto label_1fec34;
        case 0x1fec40u: goto label_1fec40;
        case 0x1fec48u: goto label_1fec48;
        case 0x1fec54u: goto label_1fec54;
        default: break;
    }

    ctx->pc = 0x1feaa0u;

    // 0x1feaa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1feaa4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1feaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1feaa8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1feaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1feaac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1feaacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feab0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1feab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1feab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1feab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feab8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1feab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1feabc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1feabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feac0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1feac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1feac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1feac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1feac8: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FEAC8u;
    SET_GPR_U32(ctx, 31, 0x1FEAD0u);
    ctx->pc = 0x1FEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAC8u;
    // 0x1feacc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FEAC8u, 0x1FEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAD0u;
label_1fead0:
    // 0x1fead0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fead0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fead4: 0x6800061  bltz        $s4, . + 4 + (0x61 << 2)
    ctx->pc = 0x1FEAD4u;
    {
        const bool branch_taken_0x1fead4 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x1FEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAD4u;
        // 0x1fead8: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fead4) {
            ctx->pc = 0x1FEC5Cu;
            goto label_1fec5c;
        }
    }
    ctx->pc = 0x1FEADCu;
    // 0x1feadc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FEADCu;
    {
        const bool branch_taken_0x1feadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEADCu;
        // 0x1feae0: 0x2603fe00  addiu       $v1, $s0, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feadc) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEAE4u;
    // 0x1feae4: 0x2c62004a  sltiu       $v0, $v1, 0x4A
    ctx->pc = 0x1feae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)74) ? 1 : 0);
    // 0x1feae8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FEAE8u;
    {
        const bool branch_taken_0x1feae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAE8u;
        // 0x1feaec: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feae8) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEAF0u;
    // 0x1feaf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1feaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1feaf4: 0x2442c540  addiu       $v0, $v0, -0x3AC0
    ctx->pc = 0x1feaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952256));
    // 0x1feaf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1feaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1feafc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1feafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1feb00: 0x800008  jr          $a0
    ctx->pc = 0x1FEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FEB08u: goto label_1feb08;
            case 0x1FEB10u: goto label_1feb10;
            case 0x1FEB18u: goto label_1feb18;
            case 0x1FEB20u: goto label_1feb20;
            case 0x1FEB28u: goto label_1feb28;
            case 0x1FEB30u: goto label_1feb30;
            case 0x1FEB38u: goto label_1feb38;
            case 0x1FEB40u: goto label_1feb40;
            case 0x1FEB48u: goto label_1feb48;
            case 0x1FEB50u: goto label_1feb50;
            case 0x1FEB58u: goto label_1feb58;
            case 0x1FEB5Cu: goto label_1feb5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEB00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FEB08u;
label_1feb08:
    // 0x1feb08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEB08u;
    {
        const bool branch_taken_0x1feb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB08u;
        // 0x1feb0c: 0x24100227  addiu       $s0, $zero, 0x227 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb08) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB10u;
label_1feb10:
    // 0x1feb10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FEB10u;
    {
        const bool branch_taken_0x1feb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB10u;
        // 0x1feb14: 0x2410022a  addiu       $s0, $zero, 0x22A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb10) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB18u;
label_1feb18:
    // 0x1feb18: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FEB18u;
    {
        const bool branch_taken_0x1feb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB18u;
        // 0x1feb1c: 0x2410022b  addiu       $s0, $zero, 0x22B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb18) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB20u;
label_1feb20:
    // 0x1feb20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FEB20u;
    {
        const bool branch_taken_0x1feb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB20u;
        // 0x1feb24: 0x2410022c  addiu       $s0, $zero, 0x22C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb20) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB28u;
label_1feb28:
    // 0x1feb28: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FEB28u;
    {
        const bool branch_taken_0x1feb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB28u;
        // 0x1feb2c: 0x2410022e  addiu       $s0, $zero, 0x22E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 558));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb28) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB30u;
label_1feb30:
    // 0x1feb30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FEB30u;
    {
        const bool branch_taken_0x1feb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB30u;
        // 0x1feb34: 0x2410022f  addiu       $s0, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb30) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB38u;
label_1feb38:
    // 0x1feb38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB38u;
    {
        const bool branch_taken_0x1feb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB38u;
        // 0x1feb3c: 0x2410022d  addiu       $s0, $zero, 0x22D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 557));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb38) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB40u;
label_1feb40:
    // 0x1feb40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEB40u;
    {
        const bool branch_taken_0x1feb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB40u;
        // 0x1feb44: 0x2410024d  addiu       $s0, $zero, 0x24D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 589));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb40) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB48u;
label_1feb48:
    // 0x1feb48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEB48u;
    {
        const bool branch_taken_0x1feb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB48u;
        // 0x1feb4c: 0x2410024a  addiu       $s0, $zero, 0x24A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb48) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB50u;
label_1feb50:
    // 0x1feb50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEB50u;
    {
        const bool branch_taken_0x1feb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB50u;
        // 0x1feb54: 0x24100243  addiu       $s0, $zero, 0x243 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 579));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb50) {
            ctx->pc = 0x1FEB5Cu;
            goto label_1feb5c;
        }
    }
    ctx->pc = 0x1FEB58u;
label_1feb58:
    // 0x1feb58: 0x2410024e  addiu       $s0, $zero, 0x24E
    ctx->pc = 0x1feb58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
label_1feb5c:
    // 0x1feb5c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1feb60: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x1feb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1feb64: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x1feb64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x1feb68: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEB68u;
    {
        const bool branch_taken_0x1feb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB68u;
        // 0x1feb6c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb68) {
            ctx->pc = 0x1FEB84u;
            goto label_1feb84;
        }
    }
    ctx->pc = 0x1FEB70u;
    // 0x1feb70: 0x2602fdb0  addiu       $v0, $s0, -0x250
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966704));
    // 0x1feb74: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1feb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1feb78: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1FEB78u;
    {
        const bool branch_taken_0x1feb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb78) {
            ctx->pc = 0x1FEB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEB78u;
            // 0x1feb7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEC60u;
            goto label_1fec60;
        }
    }
    ctx->pc = 0x1FEB80u;
    // 0x1feb80: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1feb84:
    // 0x1feb84: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1feb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1feb88: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x1feb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1feb8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1feb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb90: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEB90u;
    SET_GPR_U32(ctx, 31, 0x1FEB98u);
    ctx->pc = 0x1FEB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB90u;
    // 0x1feb94: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEB90u, 0x1FEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB98u;
label_1feb98:
    // 0x1feb98: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x1feb9c: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FEB9Cu;
    {
        const bool branch_taken_0x1feb9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEB9Cu;
        // 0x1feba0: 0x2a620265  slti        $v0, $s3, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb9c) {
            ctx->pc = 0x1FEBD0u;
            goto label_1febd0;
        }
    }
    ctx->pc = 0x1FEBA4u;
    // 0x1feba4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEBA4u;
    {
        const bool branch_taken_0x1feba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBA4u;
        // 0x1feba8: 0x24020211  addiu       $v0, $zero, 0x211 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feba4) {
            ctx->pc = 0x1FEBBCu;
            goto label_1febbc;
        }
    }
    ctx->pc = 0x1FEBACu;
    // 0x1febac: 0x12620011  beq         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FEBACu;
    {
        const bool branch_taken_0x1febac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBACu;
        // 0x1febb0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febac) {
            ctx->pc = 0x1FEBF4u;
            goto label_1febf4;
        }
    }
    ctx->pc = 0x1FEBB4u;
    // 0x1febb4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1FEBB4u;
    {
        const bool branch_taken_0x1febb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBB4u;
        // 0x1febb8: 0x2828018  mult        $s0, $s4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febb4) {
            ctx->pc = 0x1FEC48u;
            goto label_1fec48;
        }
    }
    ctx->pc = 0x1FEBBCu;
label_1febbc:
    // 0x1febbc: 0x24020278  addiu       $v0, $zero, 0x278
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 632));
    // 0x1febc0: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEBC0u;
    {
        const bool branch_taken_0x1febc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC0u;
        // 0x1febc4: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc0) {
            ctx->pc = 0x1FEBDCu;
            goto label_1febdc;
        }
    }
    ctx->pc = 0x1FEBC8u;
    // 0x1febc8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1FEBC8u;
    {
        const bool branch_taken_0x1febc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBC8u;
        // 0x1febcc: 0x2828018  mult        $s0, $s4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febc8) {
            ctx->pc = 0x1FEC48u;
            goto label_1fec48;
        }
    }
    ctx->pc = 0x1FEBD0u;
label_1febd0:
    // 0x1febd0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1febd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1febd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBD4u;
    {
        const bool branch_taken_0x1febd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBD4u;
        // 0x1febd8: 0x24050263  addiu       $a1, $zero, 0x263 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febd4) {
            ctx->pc = 0x1FEBE4u;
            goto label_1febe4;
        }
    }
    ctx->pc = 0x1FEBDCu;
label_1febdc:
    // 0x1febdc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1febdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1febe0: 0x2405020f  addiu       $a1, $zero, 0x20F
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
label_1febe4:
    // 0x1febe4: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEBE4u;
    SET_GPR_U32(ctx, 31, 0x1FEBECu);
    ctx->pc = 0x1FEBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBE4u;
    // 0x1febe8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEBE4u, 0x1FEBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBECu;
label_1febec:
    // 0x1febec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FEBECu;
    {
        const bool branch_taken_0x1febec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEBECu;
        // 0x1febf0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febec) {
            ctx->pc = 0x1FEC38u;
            goto label_1fec38;
        }
    }
    ctx->pc = 0x1FEBF4u;
label_1febf4:
    // 0x1febf4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1febf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1febf8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1febf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1febfc: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEBFCu;
    SET_GPR_U32(ctx, 31, 0x1FEC04u);
    ctx->pc = 0x1FEC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEBFCu;
    // 0x1fec00: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEBFCu, 0x1FEC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC04u;
label_1fec04:
    // 0x1fec04: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fec04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fec08: 0x24050203  addiu       $a1, $zero, 0x203
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x1fec0c: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC14u);
    ctx->pc = 0x1FEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC0Cu;
    // 0x1fec10: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEC0Cu, 0x1FEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC14u;
label_1fec14:
    // 0x1fec14: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fec18: 0x24050227  addiu       $a1, $zero, 0x227
    ctx->pc = 0x1fec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    // 0x1fec1c: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEC1Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC24u);
    ctx->pc = 0x1FEC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC1Cu;
    // 0x1fec20: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEC1Cu, 0x1FEC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC24u;
label_1fec24:
    // 0x1fec24: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fec28: 0x2405022a  addiu       $a1, $zero, 0x22A
    ctx->pc = 0x1fec28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 554));
    // 0x1fec2c: 0xc07fd34  jal         func_1FF4D0
    ctx->pc = 0x1FEC2Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC34u);
    ctx->pc = 0x1FEC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC2Cu;
    // 0x1fec30: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF4D0u, 0x1FEC2Cu, 0x1FEC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC34u;
label_1fec34:
    // 0x1fec34: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x1fec34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_1fec38:
    // 0x1fec38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC38u;
    {
        const bool branch_taken_0x1fec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC38u;
        // 0x1fec3c: 0x2828018  mult        $s0, $s4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec38) {
            ctx->pc = 0x1FEC48u;
            goto label_1fec48;
        }
    }
    ctx->pc = 0x1FEC40u;
label_1fec40:
    // 0x1fec40: 0xc0b5494  jal         func_2D5250
    ctx->pc = 0x1FEC40u;
    SET_GPR_U32(ctx, 31, 0x1FEC48u);
    ctx->pc = 0x1FEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC40u;
    // 0x1fec44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5250u, 0x1FEC40u, 0x1FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC48u;
label_1fec48:
    // 0x1fec48: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1fec4c: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x1FEC4Cu;
    SET_GPR_U32(ctx, 31, 0x1FEC54u);
    ctx->pc = 0x1FEC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC4Cu;
    // 0x1fec50: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x1FEC4Cu, 0x1FEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEC54u;
label_1fec54:
    // 0x1fec54: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FEC54u;
    {
        const bool branch_taken_0x1fec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fec54) {
            ctx->pc = 0x1FEC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fec40;
        }
    }
    ctx->pc = 0x1FEC5Cu;
label_1fec5c:
    // 0x1fec5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1fec5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fec60:
    // 0x1fec60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1fec60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fec64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fec64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fec68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1fec68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fec6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1fec6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fec70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fec70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fec74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEC74u;
        // 0x1fec78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEC7Cu;
    // 0x1fec7c: 0x0  nop
    ctx->pc = 0x1fec7cu;
    // NOP
    // 0x1fec80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fec84: 0x0  nop
    ctx->pc = 0x1fec84u;
    // NOP
    // 0x1fec88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fec88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fec8c: 0x0  nop
    ctx->pc = 0x1fec8cu;
    // NOP
    ctx->pc = 0x1fec90u;
}
