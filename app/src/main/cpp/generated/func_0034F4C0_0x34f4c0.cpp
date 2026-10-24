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

// Function: func_0034F4C0
// Address: 0x34f4c0 - 0x34f608
void func_0034F4C0_0x34f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034F4C0_0x34f4c0");
#endif

    switch (ctx->pc) {
        case 0x34f510u: goto label_34f510;
        case 0x34f538u: goto label_34f538;
        case 0x34f570u: goto label_34f570;
        case 0x34f580u: goto label_34f580;
        case 0x34f5a0u: goto label_34f5a0;
        case 0x34f5d8u: goto label_34f5d8;
        default: break;
    }

    ctx->pc = 0x34f4c0u;

    // 0x34f4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34f4c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34f4c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34f4cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34f4ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34f4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34f4d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x34f4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34f4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x34f4dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x34f4dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34f4e4: 0x26501f74  addiu       $s0, $s2, 0x1F74
    ctx->pc = 0x34f4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8052));
    // 0x34f4e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34f4ec: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x34f4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34f4f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34f4f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x34f4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f4f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x34f4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x34f4fc: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x34f4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x34f500: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34F500u;
    {
        const bool branch_taken_0x34f500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F500u;
        // 0x34f504: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f500) {
            ctx->pc = 0x34F560u;
            goto label_34f560;
        }
    }
    ctx->pc = 0x34F508u;
    // 0x34f508: 0xc0da28a  jal         func_368A28
    ctx->pc = 0x34F508u;
    SET_GPR_U32(ctx, 31, 0x34F510u);
    ctx->pc = 0x368A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A28u, 0x34F508u, 0x34F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F510u;
label_34f510:
    // 0x34f510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34f510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f514: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x34f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x34f518: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34F518u;
    {
        const bool branch_taken_0x34f518 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f518) {
            ctx->pc = 0x34F550u;
            goto label_34f550;
        }
    }
    ctx->pc = 0x34F520u;
    // 0x34f520: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x34f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34f524: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F524u;
    {
        const bool branch_taken_0x34f524 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x34f524) {
            ctx->pc = 0x34F528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F524u;
            // 0x34f528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F544u;
            goto label_34f544;
        }
    }
    ctx->pc = 0x34F52Cu;
    // 0x34f52c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34f52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f530: 0xc0d31f4  jal         func_34C7D0
    ctx->pc = 0x34F530u;
    SET_GPR_U32(ctx, 31, 0x34F538u);
    ctx->pc = 0x34F534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F530u;
    // 0x34f534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7D0u, 0x34F530u, 0x34F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F538u;
label_34f538:
    // 0x34f538: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x34f53c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x34f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x34f540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f544:
    // 0x34f544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F544u;
    {
        const bool branch_taken_0x34f544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F544u;
        // 0x34f548: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f544) {
            ctx->pc = 0x34F564u;
            goto label_34f564;
        }
    }
    ctx->pc = 0x34F54Cu;
    // 0x34f54c: 0x0  nop
    ctx->pc = 0x34f54cu;
    // NOP
label_34f550:
    // 0x34f550: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F550u;
    {
        const bool branch_taken_0x34f550 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f550) {
            ctx->pc = 0x34F554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F550u;
            // 0x34f554: 0xae80003c  sw          $zero, 0x3C($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F564u;
            goto label_34f564;
        }
    }
    ctx->pc = 0x34F558u;
    // 0x34f558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34F558u;
    {
        const bool branch_taken_0x34f558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F558u;
        // 0x34f55c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f558) {
            ctx->pc = 0x34F568u;
            goto label_34f568;
        }
    }
    ctx->pc = 0x34F560u;
label_34f560:
    // 0x34f560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34f560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f564:
    // 0x34f564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34f564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_34f568:
    // 0x34f568: 0xc0d3d82  jal         func_34F608
    ctx->pc = 0x34F568u;
    SET_GPR_U32(ctx, 31, 0x34F570u);
    ctx->pc = 0x34F56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F568u;
    // 0x34f56c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F608u, 0x34F568u, 0x34F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F570u;
label_34f570:
    // 0x34f570: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F570u;
    {
        const bool branch_taken_0x34f570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F570u;
        // 0x34f574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f570) {
            ctx->pc = 0x34F588u;
            goto label_34f588;
        }
    }
    ctx->pc = 0x34F578u;
    // 0x34f578: 0xc0d3ce4  jal         func_34F390
    ctx->pc = 0x34F578u;
    SET_GPR_U32(ctx, 31, 0x34F580u);
    ctx->pc = 0x34F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F578u;
    // 0x34f57c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F390u, 0x34F578u, 0x34F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F580u;
label_34f580:
    // 0x34f580: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34F580u;
    {
        const bool branch_taken_0x34f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F580u;
        // 0x34f584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f580) {
            ctx->pc = 0x34F5DCu;
            goto label_34f5dc;
        }
    }
    ctx->pc = 0x34F588u;
label_34f588:
    // 0x34f588: 0x2ac20004  slti        $v0, $s6, 0x4
    ctx->pc = 0x34f588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x34f58c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F58Cu;
    {
        const bool branch_taken_0x34f58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F58Cu;
        // 0x34f590: 0x2aa30040  slti        $v1, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f58c) {
            ctx->pc = 0x34F5B0u;
            goto label_34f5b0;
        }
    }
    ctx->pc = 0x34F594u;
    // 0x34f594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34f594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f598: 0xc0d3d96  jal         func_34F658
    ctx->pc = 0x34F598u;
    SET_GPR_U32(ctx, 31, 0x34F5A0u);
    ctx->pc = 0x34F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F598u;
    // 0x34f59c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F658u, 0x34F598u, 0x34F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5A0u;
label_34f5a0:
    // 0x34f5a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f5a4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34F5A4u;
    {
        const bool branch_taken_0x34f5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5A4u;
        // 0x34f5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5a4) {
            ctx->pc = 0x34F5DCu;
            goto label_34f5dc;
        }
    }
    ctx->pc = 0x34F5ACu;
    // 0x34f5ac: 0x2aa30040  slti        $v1, $s5, 0x40
    ctx->pc = 0x34f5acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)64) ? 1 : 0);
label_34f5b0:
    // 0x34f5b0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34F5B0u;
    {
        const bool branch_taken_0x34f5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5B0u;
        // 0x34f5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5b0) {
            ctx->pc = 0x34F5DCu;
            goto label_34f5dc;
        }
    }
    ctx->pc = 0x34F5B8u;
    // 0x34f5b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34f5bc: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F5BCu;
    {
        const bool branch_taken_0x34f5bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x34F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5BCu;
        // 0x34f5c0: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5bc) {
            ctx->pc = 0x34F5CCu;
            goto label_34f5cc;
        }
    }
    ctx->pc = 0x34F5C4u;
    // 0x34f5c4: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F5C4u;
    {
        const bool branch_taken_0x34f5c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x34F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5C4u;
        // 0x34f5c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f5c4) {
            ctx->pc = 0x34F5DCu;
            goto label_34f5dc;
        }
    }
    ctx->pc = 0x34F5CCu;
label_34f5cc:
    // 0x34f5cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34f5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f5d0: 0xc0d3d96  jal         func_34F658
    ctx->pc = 0x34F5D0u;
    SET_GPR_U32(ctx, 31, 0x34F5D8u);
    ctx->pc = 0x34F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F5D0u;
    // 0x34f5d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F658u, 0x34F5D0u, 0x34F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F5D8u;
label_34f5d8:
    // 0x34f5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f5dc:
    // 0x34f5dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34f5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f5e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34f5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34f5e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34f5e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f5e8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34f5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34f5ec: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34f5ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34f5f0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34f5f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f5f4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34f5f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f5f8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x34f5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34f5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x34F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F5FCu;
        // 0x34f600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F604u;
    // 0x34f604: 0x0  nop
    ctx->pc = 0x34f604u;
    // NOP
    ctx->pc = 0x34f608u;
}
