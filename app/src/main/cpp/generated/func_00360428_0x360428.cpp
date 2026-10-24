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

// Function: func_00360428
// Address: 0x360428 - 0x360520
void func_00360428_0x360428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360428_0x360428");
#endif

    switch (ctx->pc) {
        case 0x360428u: goto label_360428;
        case 0x36042cu: goto label_36042c;
        case 0x360430u: goto label_360430;
        case 0x360434u: goto label_360434;
        case 0x360438u: goto label_360438;
        case 0x36043cu: goto label_36043c;
        case 0x360440u: goto label_360440;
        case 0x360444u: goto label_360444;
        case 0x360448u: goto label_360448;
        case 0x36044cu: goto label_36044c;
        case 0x360450u: goto label_360450;
        case 0x360454u: goto label_360454;
        case 0x360458u: goto label_360458;
        case 0x36045cu: goto label_36045c;
        case 0x360460u: goto label_360460;
        case 0x360464u: goto label_360464;
        case 0x360468u: goto label_360468;
        case 0x36046cu: goto label_36046c;
        case 0x360470u: goto label_360470;
        case 0x360474u: goto label_360474;
        case 0x360478u: goto label_360478;
        case 0x36047cu: goto label_36047c;
        case 0x360480u: goto label_360480;
        case 0x360484u: goto label_360484;
        case 0x360488u: goto label_360488;
        case 0x36048cu: goto label_36048c;
        case 0x360490u: goto label_360490;
        case 0x360494u: goto label_360494;
        case 0x360498u: goto label_360498;
        case 0x36049cu: goto label_36049c;
        case 0x3604a0u: goto label_3604a0;
        case 0x3604a4u: goto label_3604a4;
        case 0x3604a8u: goto label_3604a8;
        case 0x3604acu: goto label_3604ac;
        case 0x3604b0u: goto label_3604b0;
        case 0x3604b4u: goto label_3604b4;
        case 0x3604b8u: goto label_3604b8;
        case 0x3604bcu: goto label_3604bc;
        case 0x3604c0u: goto label_3604c0;
        case 0x3604c4u: goto label_3604c4;
        case 0x3604c8u: goto label_3604c8;
        case 0x3604ccu: goto label_3604cc;
        case 0x3604d0u: goto label_3604d0;
        case 0x3604d4u: goto label_3604d4;
        case 0x3604d8u: goto label_3604d8;
        case 0x3604dcu: goto label_3604dc;
        case 0x3604e0u: goto label_3604e0;
        case 0x3604e4u: goto label_3604e4;
        case 0x3604e8u: goto label_3604e8;
        case 0x3604ecu: goto label_3604ec;
        case 0x3604f0u: goto label_3604f0;
        case 0x3604f4u: goto label_3604f4;
        case 0x3604f8u: goto label_3604f8;
        case 0x3604fcu: goto label_3604fc;
        case 0x360500u: goto label_360500;
        case 0x360504u: goto label_360504;
        case 0x360508u: goto label_360508;
        case 0x36050cu: goto label_36050c;
        case 0x360510u: goto label_360510;
        case 0x360514u: goto label_360514;
        case 0x360518u: goto label_360518;
        case 0x36051cu: goto label_36051c;
        default: break;
    }

    ctx->pc = 0x360428u;

label_360428:
    // 0x360428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x360428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36042c:
    // 0x36042c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_360430:
    // 0x360430: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x360430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_360434:
    // 0x360434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_360438:
    // 0x360438: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x360438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36043c:
    // 0x36043c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_360440:
    // 0x360440: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_360444:
    // 0x360444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x360444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_360448:
    // 0x360448: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36044c:
    // 0x36044c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_360450:
    // 0x360450: 0x26930400  addiu       $s3, $s4, 0x400
    ctx->pc = 0x360450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_360454:
    // 0x360454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x360454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_360458:
    // 0x360458: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x360458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_36045c:
    // 0x36045c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_360460:
    // 0x360460: 0xc0e94bc  jal         func_3A52F0
label_360464:
    if (ctx->pc == 0x360464u) {
        ctx->pc = 0x360464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360460u;
        // 0x360464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x360468u;
        goto label_360468;
    }
    ctx->pc = 0x360460u;
    SET_GPR_U32(ctx, 31, 0x360468u);
    ctx->pc = 0x360464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360460u;
    // 0x360464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x360460u, 0x360468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360468u;
label_360468:
    // 0x360468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x360468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36046c:
    // 0x36046c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36046cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_360470:
    // 0x360470: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_360474:
    // 0x360474: 0xc0d80a0  jal         func_360280
label_360478:
    if (ctx->pc == 0x360478u) {
        ctx->pc = 0x360478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360474u;
        // 0x360478: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36047Cu;
        goto label_36047c;
    }
    ctx->pc = 0x360474u;
    SET_GPR_U32(ctx, 31, 0x36047Cu);
    ctx->pc = 0x360478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360474u;
    // 0x360478: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360280u, 0x360474u, 0x36047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36047Cu;
label_36047c:
    // 0x36047c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_360480:
    // 0x360480: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x360480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_360484:
    // 0x360484: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x360484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_360488:
    // 0x360488: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_36048c:
    if (ctx->pc == 0x36048Cu) {
        ctx->pc = 0x36048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360488u;
        // 0x36048c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x360490u;
        goto label_360490;
    }
    ctx->pc = 0x360488u;
    {
        const bool branch_taken_0x360488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360488u;
        // 0x36048c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360488) {
            ctx->pc = 0x3604F0u;
            goto label_3604f0;
        }
    }
    ctx->pc = 0x360490u;
label_360490:
    // 0x360490: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x360490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_360494:
    // 0x360494: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_360498:
    if (ctx->pc == 0x360498u) {
        ctx->pc = 0x360498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360494u;
        // 0x360498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36049Cu;
        goto label_36049c;
    }
    ctx->pc = 0x360494u;
    {
        const bool branch_taken_0x360494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x360498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360494u;
        // 0x360498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360494) {
            ctx->pc = 0x3604C8u;
            goto label_3604c8;
        }
    }
    ctx->pc = 0x36049Cu;
label_36049c:
    // 0x36049c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36049cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3604a0:
    // 0x3604a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3604a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3604a4:
    // 0x3604a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3604a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3604a8:
    // 0x3604a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3604a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3604ac:
    // 0x3604ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3604acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3604b0:
    // 0x3604b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3604b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3604b4:
    // 0x3604b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3604b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3604b8:
    // 0x3604b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3604b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3604bc:
    // 0x3604bc: 0x80d8148  j           func_360520
label_3604c0:
    if (ctx->pc == 0x3604C0u) {
        ctx->pc = 0x3604C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604BCu;
        // 0x3604c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3604C4u;
        goto label_3604c4;
    }
    ctx->pc = 0x3604BCu;
    ctx->pc = 0x3604C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604BCu;
    // 0x3604c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360520u, 0x3604BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3604C4u;
label_3604c4:
    // 0x3604c4: 0x0  nop
    ctx->pc = 0x3604c4u;
    // NOP
label_3604c8:
    // 0x3604c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3604c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3604cc:
    // 0x3604cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3604ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3604d0:
    // 0x3604d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3604d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3604d4:
    // 0x3604d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3604d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3604d8:
    // 0x3604d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3604d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3604dc:
    // 0x3604dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3604dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3604e0:
    // 0x3604e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3604e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3604e4:
    // 0x3604e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3604e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3604e8:
    // 0x3604e8: 0x80d816c  j           func_3605B0
label_3604ec:
    if (ctx->pc == 0x3604ECu) {
        ctx->pc = 0x3604ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604E8u;
        // 0x3604ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3604F0u;
        goto label_3604f0;
    }
    ctx->pc = 0x3604E8u;
    ctx->pc = 0x3604ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3604E8u;
    // 0x3604ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3605B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3605B0u, 0x3604E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3604F0u;
label_3604f0:
    // 0x3604f0: 0xc64d0040  lwc1        $f13, 0x40($s2)
    ctx->pc = 0x3604f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3604f4:
    // 0x3604f4: 0x40f809  jalr        $v0
label_3604f8:
    if (ctx->pc == 0x3604F8u) {
        ctx->pc = 0x3604F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604F4u;
        // 0x3604f8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3604FCu;
        goto label_3604fc;
    }
    ctx->pc = 0x3604F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3604FCu);
        ctx->pc = 0x3604F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3604F4u;
        // 0x3604f8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3604F4u, 0x3604FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3604FCu;
label_3604fc:
    // 0x3604fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3604fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_360500:
    // 0x360500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_360504:
    // 0x360504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x360504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_360508:
    // 0x360508: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x360508u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36050c:
    // 0x36050c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36050cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_360510:
    // 0x360510: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x360510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_360514:
    // 0x360514: 0x3e00008  jr          $ra
label_360518:
    if (ctx->pc == 0x360518u) {
        ctx->pc = 0x360518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360514u;
        // 0x360518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36051Cu;
        goto label_36051c;
    }
    ctx->pc = 0x360514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360514u;
        // 0x360518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36051Cu;
label_36051c:
    // 0x36051c: 0x0  nop
    ctx->pc = 0x36051cu;
    // NOP
    ctx->pc = 0x360520u;
}
