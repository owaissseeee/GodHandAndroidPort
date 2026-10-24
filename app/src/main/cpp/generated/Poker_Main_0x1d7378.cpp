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

// Function: Poker_Main
// Address: 0x1d7378 - 0x1d7450
void Poker_Main_0x1d7378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Poker_Main_0x1d7378");
#endif

    switch (ctx->pc) {
        case 0x1d7378u: goto label_1d7378;
        case 0x1d737cu: goto label_1d737c;
        case 0x1d7380u: goto label_1d7380;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7388u: goto label_1d7388;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        default: break;
    }

    ctx->pc = 0x1d7378u;

label_1d7378:
    // 0x1d7378: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d7378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d737c:
    // 0x1d737c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1d737cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1d7380:
    // 0x1d7380: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d7380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1d7384:
    // 0x1d7384: 0x2463e000  addiu       $v1, $v1, -0x2000
    ctx->pc = 0x1d7384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959104));
label_1d7388:
    // 0x1d7388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d7388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1d738c:
    // 0x1d738c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d7390:
    // 0x1d7390: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d7390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7394:
    // 0x1d7394: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d7394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1d7398:
    // 0x1d7398: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d7398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d739c:
    // 0x1d739c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d73a0:
    // 0x1d73a0: 0x26533004  addiu       $s3, $s2, 0x3004
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12292));
label_1d73a4:
    // 0x1d73a4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d73a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d73a8:
    // 0x1d73a8: 0x92423024  lbu         $v0, 0x3024($s2)
    ctx->pc = 0x1d73a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12324)));
label_1d73ac:
    // 0x1d73ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d73b0:
    // 0x1d73b0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1d73b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d73b4:
    // 0x1d73b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d73b8:
    // 0x1d73b8: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1d73b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1d73bc:
    // 0x1d73bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d73c0:
    // 0x1d73c0: 0x40f809  jalr        $v0
label_1d73c4:
    if (ctx->pc == 0x1D73C4u) {
        ctx->pc = 0x1D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73C0u;
        // 0x1d73c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73C8u;
        goto label_1d73c8;
    }
    ctx->pc = 0x1D73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D73C8u);
        ctx->pc = 0x1D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73C0u;
        // 0x1d73c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73C0u, 0x1D73C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D73C8u;
label_1d73c8:
    // 0x1d73c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d73cc:
    // 0x1d73cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d73d0:
    if (ctx->pc == 0x1D73D0u) {
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73D4u;
        goto label_1d73d4;
    }
    ctx->pc = 0x1D73CCu;
    {
        const bool branch_taken_0x1d73cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73CCu;
        // 0x1d73d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73cc) {
            ctx->pc = 0x1D73DCu;
            goto label_1d73dc;
        }
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0xc075b88  jal         func_1D6E20
label_1d73d8:
    if (ctx->pc == 0x1D73D8u) {
        ctx->pc = 0x1D73DCu;
        goto label_1d73dc;
    }
    ctx->pc = 0x1D73D4u;
    SET_GPR_U32(ctx, 31, 0x1D73DCu);
    ctx->pc = 0x1D6E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6E20u, 0x1D73D4u, 0x1D73DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73DCu;
label_1d73dc:
    // 0x1d73dc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d73e0:
    if (ctx->pc == 0x1D73E0u) {
        ctx->pc = 0x1D73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73DCu;
        // 0x1d73e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73E4u;
        goto label_1d73e4;
    }
    ctx->pc = 0x1D73DCu;
    {
        const bool branch_taken_0x1d73dc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73DCu;
        // 0x1d73e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73dc) {
            ctx->pc = 0x1D73C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d73c8;
        }
    }
    ctx->pc = 0x1D73E4u;
label_1d73e4:
    // 0x1d73e4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d73e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d73e8:
    // 0x1d73e8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1d73e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d73ec:
    // 0x1d73ec: 0x0  nop
    ctx->pc = 0x1d73ecu;
    // NOP
label_1d73f0:
    // 0x1d73f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d73f4:
    // 0x1d73f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d73f8:
    if (ctx->pc == 0x1D73F8u) {
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73FCu;
        goto label_1d73fc;
    }
    ctx->pc = 0x1D73F4u;
    {
        const bool branch_taken_0x1d73f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F4u;
        // 0x1d73f8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f4) {
            ctx->pc = 0x1D7404u;
            goto label_1d7404;
        }
    }
    ctx->pc = 0x1D73FCu;
label_1d73fc:
    // 0x1d73fc: 0xc075bcc  jal         func_1D6F30
label_1d7400:
    if (ctx->pc == 0x1D7400u) {
        ctx->pc = 0x1D7404u;
        goto label_1d7404;
    }
    ctx->pc = 0x1D73FCu;
    SET_GPR_U32(ctx, 31, 0x1D7404u);
    ctx->pc = 0x1D6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6F30u, 0x1D73FCu, 0x1D7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7404u;
label_1d7404:
    // 0x1d7404: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
label_1d7408:
    if (ctx->pc == 0x1D7408u) {
        ctx->pc = 0x1D7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7404u;
        // 0x1d7408: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D740Cu;
        goto label_1d740c;
    }
    ctx->pc = 0x1D7404u;
    {
        const bool branch_taken_0x1d7404 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1D7408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7404u;
        // 0x1d7408: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7404) {
            ctx->pc = 0x1D73F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d73f0;
        }
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d7410:
    // 0x1d7410: 0xc07e9c4  jal         func_1FA710
label_1d7414:
    if (ctx->pc == 0x1D7414u) {
        ctx->pc = 0x1D7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7410u;
        // 0x1d7414: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7418u;
        goto label_1d7418;
    }
    ctx->pc = 0x1D7410u;
    SET_GPR_U32(ctx, 31, 0x1D7418u);
    ctx->pc = 0x1D7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7410u;
    // 0x1d7414: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D7410u, 0x1D7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7418u;
label_1d7418:
    // 0x1d7418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d7418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d741c:
    // 0x1d741c: 0xc07748e  jal         func_1DD238
label_1d7420:
    if (ctx->pc == 0x1D7420u) {
        ctx->pc = 0x1D7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D741Cu;
        // 0x1d7420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7424u;
        goto label_1d7424;
    }
    ctx->pc = 0x1D741Cu;
    SET_GPR_U32(ctx, 31, 0x1D7424u);
    ctx->pc = 0x1D7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D741Cu;
    // 0x1d7420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD238u, 0x1D741Cu, 0x1D7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7424u;
label_1d7424:
    // 0x1d7424: 0xc077e62  jal         func_1DF988
label_1d7428:
    if (ctx->pc == 0x1D7428u) {
        ctx->pc = 0x1D7428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7424u;
        // 0x1d7428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D742Cu;
        goto label_1d742c;
    }
    ctx->pc = 0x1D7424u;
    SET_GPR_U32(ctx, 31, 0x1D742Cu);
    ctx->pc = 0x1D7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7424u;
    // 0x1d7428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF988u, 0x1D7424u, 0x1D742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D742Cu;
label_1d742c:
    // 0x1d742c: 0xc077e6e  jal         func_1DF9B8
label_1d7430:
    if (ctx->pc == 0x1D7430u) {
        ctx->pc = 0x1D7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D742Cu;
        // 0x1d7430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7434u;
        goto label_1d7434;
    }
    ctx->pc = 0x1D742Cu;
    SET_GPR_U32(ctx, 31, 0x1D7434u);
    ctx->pc = 0x1D7430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D742Cu;
    // 0x1d7430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9B8u, 0x1D742Cu, 0x1D7434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7434u;
label_1d7434:
    // 0x1d7434: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d7434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d7438:
    // 0x1d7438: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d7438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d743c:
    // 0x1d743c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d743cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7440:
    // 0x1d7440: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d7440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7444:
    // 0x1d7444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7448:
    // 0x1d7448: 0x3e00008  jr          $ra
label_1d744c:
    if (ctx->pc == 0x1D744Cu) {
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7450u;
        goto label_fallthrough_0x1d7448;
    }
    ctx->pc = 0x1D7448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d7448:
    ctx->pc = 0x1D7450u;
}
