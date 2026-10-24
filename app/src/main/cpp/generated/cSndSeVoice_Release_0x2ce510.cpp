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

// Function: cSndSeVoice_Release
// Address: 0x2ce510 - 0x2ce588
void cSndSeVoice_Release_0x2ce510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Release_0x2ce510");
#endif

    switch (ctx->pc) {
        case 0x2ce538u: goto label_2ce538;
        case 0x2ce570u: goto label_2ce570;
        default: break;
    }

    ctx->pc = 0x2ce510u;

    // 0x2ce510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ce510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ce514: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2ce514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2ce518: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ce518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ce51c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ce51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ce520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce524: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ce524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ce528: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x2ce528u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2ce52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ce52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ce530: 0xc0b368e  jal         func_2CDA38
    ctx->pc = 0x2CE530u;
    SET_GPR_U32(ctx, 31, 0x2CE538u);
    ctx->pc = 0x2CE534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE530u;
    // 0x2ce534: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA38u, 0x2CE530u, 0x2CE538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE538u;
label_2ce538:
    // 0x2ce538: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CE538u;
    {
        const bool branch_taken_0x2ce538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce538) {
            ctx->pc = 0x2CE53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE538u;
            // 0x2ce53c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE574u;
            goto label_2ce574;
        }
    }
    ctx->pc = 0x2CE540u;
    // 0x2ce540: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x2ce540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ce544: 0x5451000b  bnel        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE544u;
    {
        const bool branch_taken_0x2ce544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ce544) {
            ctx->pc = 0x2CE548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE544u;
            // 0x2ce548: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE574u;
            goto label_2ce574;
        }
    }
    ctx->pc = 0x2CE54Cu;
    // 0x2ce54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce550: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE550u;
    {
        const bool branch_taken_0x2ce550 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce550) {
            ctx->pc = 0x2CE568u;
            goto label_2ce568;
        }
    }
    ctx->pc = 0x2CE558u;
    // 0x2ce558: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ce558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ce55c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ce55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ce560: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE560u;
    {
        const bool branch_taken_0x2ce560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce560) {
            ctx->pc = 0x2CE564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE560u;
            // 0x2ce564: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE574u;
            goto label_2ce574;
        }
    }
    ctx->pc = 0x2CE568u;
label_2ce568:
    // 0x2ce568: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CE568u;
    SET_GPR_U32(ctx, 31, 0x2CE570u);
    ctx->pc = 0x2CE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE568u;
    // 0x2ce56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE3E8u, 0x2CE568u, 0x2CE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE570u;
label_2ce570:
    // 0x2ce570: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ce570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ce574:
    // 0x2ce574: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ce574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce578: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ce578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce580: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE580u;
        // 0x2ce584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE588u;
}
