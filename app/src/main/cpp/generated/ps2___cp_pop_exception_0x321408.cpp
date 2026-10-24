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

// Function: __cp_pop_exception
// Address: 0x321408 - 0x3214d0
void ps2___cp_pop_exception_0x321408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___cp_pop_exception_0x321408");
#endif

    switch (ctx->pc) {
        case 0x321408u: goto label_321408;
        case 0x32140cu: goto label_32140c;
        case 0x321410u: goto label_321410;
        case 0x321414u: goto label_321414;
        case 0x321418u: goto label_321418;
        case 0x32141cu: goto label_32141c;
        case 0x321420u: goto label_321420;
        case 0x321424u: goto label_321424;
        case 0x321428u: goto label_321428;
        case 0x32142cu: goto label_32142c;
        case 0x321430u: goto label_321430;
        case 0x321434u: goto label_321434;
        case 0x321438u: goto label_321438;
        case 0x32143cu: goto label_32143c;
        case 0x321440u: goto label_321440;
        case 0x321444u: goto label_321444;
        case 0x321448u: goto label_321448;
        case 0x32144cu: goto label_32144c;
        case 0x321450u: goto label_321450;
        case 0x321454u: goto label_321454;
        case 0x321458u: goto label_321458;
        case 0x32145cu: goto label_32145c;
        case 0x321460u: goto label_321460;
        case 0x321464u: goto label_321464;
        case 0x321468u: goto label_321468;
        case 0x32146cu: goto label_32146c;
        case 0x321470u: goto label_321470;
        case 0x321474u: goto label_321474;
        case 0x321478u: goto label_321478;
        case 0x32147cu: goto label_32147c;
        case 0x321480u: goto label_321480;
        case 0x321484u: goto label_321484;
        case 0x321488u: goto label_321488;
        case 0x32148cu: goto label_32148c;
        case 0x321490u: goto label_321490;
        case 0x321494u: goto label_321494;
        case 0x321498u: goto label_321498;
        case 0x32149cu: goto label_32149c;
        case 0x3214a0u: goto label_3214a0;
        case 0x3214a4u: goto label_3214a4;
        case 0x3214a8u: goto label_3214a8;
        case 0x3214acu: goto label_3214ac;
        case 0x3214b0u: goto label_3214b0;
        case 0x3214b4u: goto label_3214b4;
        case 0x3214b8u: goto label_3214b8;
        case 0x3214bcu: goto label_3214bc;
        case 0x3214c0u: goto label_3214c0;
        case 0x3214c4u: goto label_3214c4;
        case 0x3214c8u: goto label_3214c8;
        case 0x3214ccu: goto label_3214cc;
        default: break;
    }

    ctx->pc = 0x321408u;

label_321408:
    // 0x321408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32140c:
    // 0x32140c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_321410:
    // 0x321410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321414:
    // 0x321414: 0xc0c80d8  jal         func_320360
label_321418:
    if (ctx->pc == 0x321418u) {
        ctx->pc = 0x321418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321414u;
        // 0x321418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32141Cu;
        goto label_32141c;
    }
    ctx->pc = 0x321414u;
    SET_GPR_U32(ctx, 31, 0x32141Cu);
    ctx->pc = 0x321418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321414u;
    // 0x321418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x321414u, 0x32141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32141Cu;
label_32141c:
    // 0x32141c: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x32141cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_321420:
    // 0x321420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321424:
    // 0x321424: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x321424u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_321428:
    // 0x321428: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_32142c:
    if (ctx->pc == 0x32142Cu) {
        ctx->pc = 0x32142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321428u;
        // 0x32142c: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321430u;
        goto label_321430;
    }
    ctx->pc = 0x321428u;
    {
        const bool branch_taken_0x321428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321428u;
        // 0x32142c: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321428) {
            ctx->pc = 0x3214BCu;
            goto label_3214bc;
        }
    }
    ctx->pc = 0x321430u;
label_321430:
    // 0x321430: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x321430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_321434:
    // 0x321434: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_321438:
    if (ctx->pc == 0x321438u) {
        ctx->pc = 0x32143Cu;
        goto label_32143c;
    }
    ctx->pc = 0x321434u;
    {
        const bool branch_taken_0x321434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x321434) {
            ctx->pc = 0x321448u;
            goto label_321448;
        }
    }
    ctx->pc = 0x32143Cu;
label_32143c:
    // 0x32143c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x32143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_321440:
    // 0x321440: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_321444:
    if (ctx->pc == 0x321444u) {
        ctx->pc = 0x321444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321440u;
        // 0x321444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321448u;
        goto label_321448;
    }
    ctx->pc = 0x321440u;
    {
        const bool branch_taken_0x321440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321440u;
        // 0x321444: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321440) {
            ctx->pc = 0x3214C0u;
            goto label_3214c0;
        }
    }
    ctx->pc = 0x321448u;
label_321448:
    // 0x321448: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_32144c:
    if (ctx->pc == 0x32144Cu) {
        ctx->pc = 0x321450u;
        goto label_321450;
    }
    ctx->pc = 0x321448u;
    {
        const bool branch_taken_0x321448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321448) {
            ctx->pc = 0x32147Cu;
            goto label_32147c;
        }
    }
    ctx->pc = 0x321450u;
label_321450:
    // 0x321450: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_321454:
    if (ctx->pc == 0x321454u) {
        ctx->pc = 0x321458u;
        goto label_321458;
    }
    ctx->pc = 0x321450u;
    {
        const bool branch_taken_0x321450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x321450) {
            ctx->pc = 0x321474u;
            goto label_321474;
        }
    }
    ctx->pc = 0x321458u;
label_321458:
    // 0x321458: 0x10000002  b           . + 4 + (0x2 << 2)
label_32145c:
    if (ctx->pc == 0x32145Cu) {
        ctx->pc = 0x32145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321458u;
        // 0x32145c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321460u;
        goto label_321460;
    }
    ctx->pc = 0x321458u;
    {
        const bool branch_taken_0x321458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321458u;
        // 0x32145c: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321458) {
            ctx->pc = 0x321464u;
            goto label_321464;
        }
    }
    ctx->pc = 0x321460u;
label_321460:
    // 0x321460: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_321464:
    // 0x321464: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_321468:
    if (ctx->pc == 0x321468u) {
        ctx->pc = 0x321468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321464u;
        // 0x321468: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32146Cu;
        goto label_32146c;
    }
    ctx->pc = 0x321464u;
    {
        const bool branch_taken_0x321464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321464u;
        // 0x321468: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321464) {
            ctx->pc = 0x32147Cu;
            goto label_32147c;
        }
    }
    ctx->pc = 0x32146Cu;
label_32146c:
    // 0x32146c: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
label_321470:
    if (ctx->pc == 0x321470u) {
        ctx->pc = 0x321470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32146Cu;
        // 0x321470: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321474u;
        goto label_321474;
    }
    ctx->pc = 0x32146Cu;
    {
        const bool branch_taken_0x32146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x321470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32146Cu;
        // 0x321470: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32146c) {
            ctx->pc = 0x321460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321460;
        }
    }
    ctx->pc = 0x321474u;
label_321474:
    // 0x321474: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_321478:
    if (ctx->pc == 0x321478u) {
        ctx->pc = 0x321478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321474u;
        // 0x321478: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32147Cu;
        goto label_32147c;
    }
    ctx->pc = 0x321474u;
    {
        const bool branch_taken_0x321474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x321474) {
            ctx->pc = 0x321478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321474u;
            // 0x321478: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321484u;
            goto label_321484;
        }
    }
    ctx->pc = 0x32147Cu;
label_32147c:
    // 0x32147c: 0xc0c8478  jal         func_3211E0
label_321480:
    if (ctx->pc == 0x321480u) {
        ctx->pc = 0x321484u;
        goto label_321484;
    }
    ctx->pc = 0x32147Cu;
    SET_GPR_U32(ctx, 31, 0x321484u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x32147Cu, 0x321484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321484u;
label_321484:
    // 0x321484: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_321488:
    // 0x321488: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_32148c:
    if (ctx->pc == 0x32148Cu) {
        ctx->pc = 0x32148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321488u;
        // 0x32148c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321490u;
        goto label_321490;
    }
    ctx->pc = 0x321488u;
    {
        const bool branch_taken_0x321488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321488u;
        // 0x32148c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321488) {
            ctx->pc = 0x32149Cu;
            goto label_32149c;
        }
    }
    ctx->pc = 0x321490u;
label_321490:
    // 0x321490: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_321494:
    // 0x321494: 0x60f809  jalr        $v1
label_321498:
    if (ctx->pc == 0x321498u) {
        ctx->pc = 0x321498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321494u;
        // 0x321498: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32149Cu;
        goto label_32149c;
    }
    ctx->pc = 0x321494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32149Cu);
        ctx->pc = 0x321498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321494u;
        // 0x321498: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321494u, 0x32149Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32149Cu;
label_32149c:
    // 0x32149c: 0xc0c7e74  jal         func_31F9D0
label_3214a0:
    if (ctx->pc == 0x3214A0u) {
        ctx->pc = 0x3214A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32149Cu;
        // 0x3214a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214A4u;
        goto label_3214a4;
    }
    ctx->pc = 0x32149Cu;
    SET_GPR_U32(ctx, 31, 0x3214A4u);
    ctx->pc = 0x3214A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32149Cu;
    // 0x3214a0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F9D0u, 0x32149Cu, 0x3214A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214A4u;
label_3214a4:
    // 0x3214a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3214a8:
    if (ctx->pc == 0x3214A8u) {
        ctx->pc = 0x3214ACu;
        goto label_3214ac;
    }
    ctx->pc = 0x3214A4u;
    {
        const bool branch_taken_0x3214a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3214a4) {
            ctx->pc = 0x3214B4u;
            goto label_3214b4;
        }
    }
    ctx->pc = 0x3214ACu;
label_3214ac:
    // 0x3214ac: 0xc0c84ba  jal         func_3212E8
label_3214b0:
    if (ctx->pc == 0x3214B0u) {
        ctx->pc = 0x3214B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214ACu;
        // 0x3214b0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214B4u;
        goto label_3214b4;
    }
    ctx->pc = 0x3214ACu;
    SET_GPR_U32(ctx, 31, 0x3214B4u);
    ctx->pc = 0x3214B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3214ACu;
    // 0x3214b0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212E8u, 0x3214ACu, 0x3214B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214B4u;
label_3214b4:
    // 0x3214b4: 0xc0c84ba  jal         func_3212E8
label_3214b8:
    if (ctx->pc == 0x3214B8u) {
        ctx->pc = 0x3214B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214B4u;
        // 0x3214b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214BCu;
        goto label_3214bc;
    }
    ctx->pc = 0x3214B4u;
    SET_GPR_U32(ctx, 31, 0x3214BCu);
    ctx->pc = 0x3214B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3214B4u;
    // 0x3214b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212E8u, 0x3214B4u, 0x3214BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3214BCu;
label_3214bc:
    // 0x3214bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3214bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3214c0:
    // 0x3214c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3214c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3214c4:
    // 0x3214c4: 0x3e00008  jr          $ra
label_3214c8:
    if (ctx->pc == 0x3214C8u) {
        ctx->pc = 0x3214C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C4u;
        // 0x3214c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3214CCu;
        goto label_3214cc;
    }
    ctx->pc = 0x3214C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3214C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3214C4u;
        // 0x3214c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214CCu;
label_3214cc:
    // 0x3214cc: 0x0  nop
    ctx->pc = 0x3214ccu;
    // NOP
    ctx->pc = 0x3214d0u;
}
