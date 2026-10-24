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

// Function: func_00150418
// Address: 0x150418 - 0x1504b0
void func_00150418_0x150418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00150418_0x150418");
#endif

    switch (ctx->pc) {
        case 0x150418u: goto label_150418;
        case 0x15041cu: goto label_15041c;
        case 0x150420u: goto label_150420;
        case 0x150424u: goto label_150424;
        case 0x150428u: goto label_150428;
        case 0x15042cu: goto label_15042c;
        case 0x150430u: goto label_150430;
        case 0x150434u: goto label_150434;
        case 0x150438u: goto label_150438;
        case 0x15043cu: goto label_15043c;
        case 0x150440u: goto label_150440;
        case 0x150444u: goto label_150444;
        case 0x150448u: goto label_150448;
        case 0x15044cu: goto label_15044c;
        case 0x150450u: goto label_150450;
        case 0x150454u: goto label_150454;
        case 0x150458u: goto label_150458;
        case 0x15045cu: goto label_15045c;
        case 0x150460u: goto label_150460;
        case 0x150464u: goto label_150464;
        case 0x150468u: goto label_150468;
        case 0x15046cu: goto label_15046c;
        case 0x150470u: goto label_150470;
        case 0x150474u: goto label_150474;
        case 0x150478u: goto label_150478;
        case 0x15047cu: goto label_15047c;
        case 0x150480u: goto label_150480;
        case 0x150484u: goto label_150484;
        case 0x150488u: goto label_150488;
        case 0x15048cu: goto label_15048c;
        case 0x150490u: goto label_150490;
        case 0x150494u: goto label_150494;
        case 0x150498u: goto label_150498;
        case 0x15049cu: goto label_15049c;
        case 0x1504a0u: goto label_1504a0;
        case 0x1504a4u: goto label_1504a4;
        case 0x1504a8u: goto label_1504a8;
        case 0x1504acu: goto label_1504ac;
        default: break;
    }

    ctx->pc = 0x150418u;

label_150418:
    // 0x150418: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15041c:
    // 0x15041c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_150420:
    // 0x150420: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x150420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_150424:
    // 0x150424: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_150428:
    // 0x150428: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15042c:
    // 0x15042c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_150430:
    // 0x150430: 0xc0aa618  jal         func_2A9860
label_150434:
    if (ctx->pc == 0x150434u) {
        ctx->pc = 0x150434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150430u;
        // 0x150434: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150438u;
        goto label_150438;
    }
    ctx->pc = 0x150430u;
    SET_GPR_U32(ctx, 31, 0x150438u);
    ctx->pc = 0x150434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150430u;
    // 0x150434: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9860u, 0x150430u, 0x150438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150438u;
label_150438:
    // 0x150438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x150438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15043c:
    // 0x15043c: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_150440:
    if (ctx->pc == 0x150440u) {
        ctx->pc = 0x150440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15043Cu;
        // 0x150440: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150444u;
        goto label_150444;
    }
    ctx->pc = 0x15043Cu;
    {
        const bool branch_taken_0x15043c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15043c) {
            ctx->pc = 0x150440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15043Cu;
            // 0x150440: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15047Cu;
            goto label_15047c;
        }
    }
    ctx->pc = 0x150444u;
label_150444:
    // 0x150444: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_150448:
    // 0x150448: 0xc0aa618  jal         func_2A9860
label_15044c:
    if (ctx->pc == 0x15044Cu) {
        ctx->pc = 0x15044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150448u;
        // 0x15044c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150450u;
        goto label_150450;
    }
    ctx->pc = 0x150448u;
    SET_GPR_U32(ctx, 31, 0x150450u);
    ctx->pc = 0x15044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150448u;
    // 0x15044c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9860u, 0x150448u, 0x150450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150450u;
label_150450:
    // 0x150450: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x150450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_150454:
    // 0x150454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x150454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_150458:
    // 0x150458: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15045c:
    // 0x15045c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x15045cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_150460:
    // 0x150460: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x150460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_150464:
    // 0x150464: 0x40f809  jalr        $v0
label_150468:
    if (ctx->pc == 0x150468u) {
        ctx->pc = 0x150468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150464u;
        // 0x150468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15046Cu;
        goto label_15046c;
    }
    ctx->pc = 0x150464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15046Cu);
        ctx->pc = 0x150468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150464u;
        // 0x150468: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150464u, 0x15046Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15046Cu;
label_15046c:
    // 0x15046c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x15046cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150470:
    // 0x150470: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_150474:
    if (ctx->pc == 0x150474u) {
        ctx->pc = 0x150474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150470u;
        // 0x150474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150478u;
        goto label_150478;
    }
    ctx->pc = 0x150470u;
    {
        const bool branch_taken_0x150470 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x150474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150470u;
        // 0x150474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150470) {
            ctx->pc = 0x150448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150448;
        }
    }
    ctx->pc = 0x150478u;
label_150478:
    // 0x150478: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x150478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15047c:
    // 0x15047c: 0xc0aa5e4  jal         func_2A9790
label_150480:
    if (ctx->pc == 0x150480u) {
        ctx->pc = 0x150480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15047Cu;
        // 0x150480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150484u;
        goto label_150484;
    }
    ctx->pc = 0x15047Cu;
    SET_GPR_U32(ctx, 31, 0x150484u);
    ctx->pc = 0x150480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15047Cu;
    // 0x150480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9790u, 0x15047Cu, 0x150484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150484u;
label_150484:
    // 0x150484: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_150488:
    if (ctx->pc == 0x150488u) {
        ctx->pc = 0x150488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150484u;
        // 0x150488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15048Cu;
        goto label_15048c;
    }
    ctx->pc = 0x150484u;
    {
        const bool branch_taken_0x150484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x150484) {
            ctx->pc = 0x150488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150484u;
            // 0x150488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15049Cu;
            goto label_15049c;
        }
    }
    ctx->pc = 0x15048Cu;
label_15048c:
    // 0x15048c: 0x8e04ffe0  lw          $a0, -0x20($s0)
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967264)));
label_150490:
    // 0x150490: 0xc0aa5a0  jal         func_2A9680
label_150494:
    if (ctx->pc == 0x150494u) {
        ctx->pc = 0x150494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150490u;
        // 0x150494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x150498u;
        goto label_150498;
    }
    ctx->pc = 0x150490u;
    SET_GPR_U32(ctx, 31, 0x150498u);
    ctx->pc = 0x150494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150490u;
    // 0x150494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x150490u, 0x150498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150498u;
label_150498:
    // 0x150498: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15049c:
    // 0x15049c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15049cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1504a0:
    // 0x1504a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1504a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1504a4:
    // 0x1504a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1504a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1504a8:
    // 0x1504a8: 0x3e00008  jr          $ra
label_1504ac:
    if (ctx->pc == 0x1504ACu) {
        ctx->pc = 0x1504ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504A8u;
        // 0x1504ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1504B0u;
        goto label_fallthrough_0x1504a8;
    }
    ctx->pc = 0x1504A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1504ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504A8u;
        // 0x1504ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1504A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1504a8:
    ctx->pc = 0x1504B0u;
}
