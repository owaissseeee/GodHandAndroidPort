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

// Function: SetTimerAlarm
// Address: 0x3b7768 - 0x3b7898
void SetTimerAlarm_0x3b7768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTimerAlarm_0x3b7768");
#endif

    switch (ctx->pc) {
        case 0x3b77b0u: goto label_3b77b0;
        case 0x3b77dcu: goto label_3b77dc;
        case 0x3b77f0u: goto label_3b77f0;
        case 0x3b781cu: goto label_3b781c;
        case 0x3b7844u: goto label_3b7844;
        case 0x3b784cu: goto label_3b784c;
        case 0x3b785cu: goto label_3b785c;
        default: break;
    }

    ctx->pc = 0x3b7768u;

    // 0x3b7768: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b7768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b776c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3b7770: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b7770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3b7774: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3b7774u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7778: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b7778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b777c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3b777cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7780: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b7780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b7784: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b7784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7788: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b7788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b778c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b778cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b7790: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7794: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B7794u;
    {
        const bool branch_taken_0x3b7794 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7794u;
        // 0x3b7798: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7794) {
            ctx->pc = 0x3B77A8u;
            goto label_3b77a8;
        }
    }
    ctx->pc = 0x3B779Cu;
    // 0x3b779c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b779cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b77a0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3B77A0u;
    {
        const bool branch_taken_0x3b77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77A0u;
        // 0x3b77a4: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b77a0) {
            ctx->pc = 0x3B786Cu;
            goto label_3b786c;
        }
    }
    ctx->pc = 0x3B77A8u;
label_3b77a8:
    // 0x3b77a8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B77A8u;
    SET_GPR_U32(ctx, 31, 0x3B77B0u);
    ctx->pc = 0x3B77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B77A8u;
    // 0x3b77ac: 0x3c120078  lui         $s2, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)120 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B77A8u, 0x3B77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77B0u;
label_3b77b0:
    // 0x3b77b0: 0x8e504040  lw          $s0, 0x4040($s2)
    ctx->pc = 0x3b77b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16448)));
    // 0x3b77b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B77B4u;
    {
        const bool branch_taken_0x3b77b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B77B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77B4u;
        // 0x3b77b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b77b4) {
            ctx->pc = 0x3B77C4u;
            goto label_3b77c4;
        }
    }
    ctx->pc = 0x3B77BCu;
    // 0x3b77bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3b77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b77c0: 0xae424040  sw          $v0, 0x4040($s2)
    ctx->pc = 0x3b77c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 2));
label_3b77c4:
    // 0x3b77c4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B77C4u;
    {
        const bool branch_taken_0x3b77c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b77c4) {
            ctx->pc = 0x3B77E8u;
            goto label_3b77e8;
        }
    }
    ctx->pc = 0x3B77CCu;
    // 0x3b77cc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B77CCu;
    {
        const bool branch_taken_0x3b77cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b77cc) {
            ctx->pc = 0x3B77DCu;
            goto label_3b77dc;
        }
    }
    ctx->pc = 0x3B77D4u;
    // 0x3b77d4: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B77D4u;
    SET_GPR_U32(ctx, 31, 0x3B77DCu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B77D4u, 0x3B77DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77DCu;
label_3b77dc:
    // 0x3b77dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b77dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b77e0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B77E0u;
    {
        const bool branch_taken_0x3b77e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B77E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B77E0u;
        // 0x3b77e4: 0x34428005  ori         $v0, $v0, 0x8005 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b77e0) {
            ctx->pc = 0x3B786Cu;
            goto label_3b786c;
        }
    }
    ctx->pc = 0x3B77E8u;
label_3b77e8:
    // 0x3b77e8: 0xc0edc9c  jal         func_3B7270
    ctx->pc = 0x3B77E8u;
    SET_GPR_U32(ctx, 31, 0x3B77F0u);
    ctx->pc = 0x3B7270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7270u, 0x3B77E8u, 0x3B77F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B77F0u;
label_3b77f0:
    // 0x3b77f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b77f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b77f4: 0x623000b  bgezl       $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B77F4u;
    {
        const bool branch_taken_0x3b77f4 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x3b77f4) {
            ctx->pc = 0x3B77F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B77F4u;
            // 0x3b77f8: 0xae140008  sw          $s4, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7824u;
            goto label_3b7824;
        }
    }
    ctx->pc = 0x3B77FCu;
    // 0x3b77fc: 0x8e424040  lw          $v0, 0x4040($s2)
    ctx->pc = 0x3b77fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16448)));
    // 0x3b7800: 0xae504040  sw          $s0, 0x4040($s2)
    ctx->pc = 0x3b7800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16448), GPR_U32(ctx, 16));
    // 0x3b7804: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b7804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b7808: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b7808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3b780c: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B780Cu;
    {
        const bool branch_taken_0x3b780c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B780Cu;
        // 0x3b7810: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b780c) {
            ctx->pc = 0x3B786Cu;
            goto label_3b786c;
        }
    }
    ctx->pc = 0x3B7814u;
    // 0x3b7814: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B7814u;
    SET_GPR_U32(ctx, 31, 0x3B781Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B7814u, 0x3B781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B781Cu;
label_3b781c:
    // 0x3b781c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3B781Cu;
    {
        const bool branch_taken_0x3b781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B781Cu;
        // 0x3b7820: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b781c) {
            ctx->pc = 0x3B786Cu;
            goto label_3b786c;
        }
    }
    ctx->pc = 0x3B7824u;
label_3b7824:
    // 0x3b7824: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x3b7824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x3b7828: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x3b7828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x3b782c: 0x24c67708  addiu       $a2, $a2, 0x7708
    ctx->pc = 0x3b782cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30472));
    // 0x3b7830: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3b7830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x3b7834: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3b7834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b7838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b783c: 0xc0edd44  jal         func_3B7510
    ctx->pc = 0x3B783Cu;
    SET_GPR_U32(ctx, 31, 0x3B7844u);
    ctx->pc = 0x3B7840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B783Cu;
    // 0x3b7840: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7510u, 0x3B783Cu, 0x3B7844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7844u;
label_3b7844:
    // 0x3b7844: 0xc0edce0  jal         func_3B7380
    ctx->pc = 0x3B7844u;
    SET_GPR_U32(ctx, 31, 0x3B784Cu);
    ctx->pc = 0x3B7848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7844u;
    // 0x3b7848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7380u, 0x3B7844u, 0x3B784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B784Cu;
label_3b784c:
    // 0x3b784c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B784Cu;
    {
        const bool branch_taken_0x3b784c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B784Cu;
        // 0x3b7850: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b784c) {
            ctx->pc = 0x3B7860u;
            goto label_3b7860;
        }
    }
    ctx->pc = 0x3B7854u;
    // 0x3b7854: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B7854u;
    SET_GPR_U32(ctx, 31, 0x3B785Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B7854u, 0x3B785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B785Cu;
label_3b785c:
    // 0x3b785c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3b785cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3b7860:
    // 0x3b7860: 0x322300fe  andi        $v1, $s1, 0xFE
    ctx->pc = 0x3b7860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)254);
    // 0x3b7864: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b7864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b7868: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3b7868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3b786c:
    // 0x3b786c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b786cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b7870: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b7870u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b7874: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b7874u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b7878: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b7878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b787c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b787cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b7884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b788c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B788Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B788Cu;
        // 0x3b7890: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B788Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7894u;
    // 0x3b7894: 0x0  nop
    ctx->pc = 0x3b7894u;
    // NOP
    ctx->pc = 0x3b7898u;
}
