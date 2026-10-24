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

// Function: __check_eh_spec
// Address: 0x321500 - 0x3216b8
void ps2___check_eh_spec_0x321500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___check_eh_spec_0x321500");
#endif

    switch (ctx->pc) {
        case 0x321500u: goto label_321500;
        case 0x321504u: goto label_321504;
        case 0x321508u: goto label_321508;
        case 0x32150cu: goto label_32150c;
        case 0x321510u: goto label_321510;
        case 0x321514u: goto label_321514;
        case 0x321518u: goto label_321518;
        case 0x32151cu: goto label_32151c;
        case 0x321520u: goto label_321520;
        case 0x321524u: goto label_321524;
        case 0x321528u: goto label_321528;
        case 0x32152cu: goto label_32152c;
        case 0x321530u: goto label_321530;
        case 0x321534u: goto label_321534;
        case 0x321538u: goto label_321538;
        case 0x32153cu: goto label_32153c;
        case 0x321540u: goto label_321540;
        case 0x321544u: goto label_321544;
        case 0x321548u: goto label_321548;
        case 0x32154cu: goto label_32154c;
        case 0x321550u: goto label_321550;
        case 0x321554u: goto label_321554;
        case 0x321558u: goto label_321558;
        case 0x32155cu: goto label_32155c;
        case 0x321560u: goto label_321560;
        case 0x321564u: goto label_321564;
        case 0x321568u: goto label_321568;
        case 0x32156cu: goto label_32156c;
        case 0x321570u: goto label_321570;
        case 0x321574u: goto label_321574;
        case 0x321578u: goto label_321578;
        case 0x32157cu: goto label_32157c;
        case 0x321580u: goto label_321580;
        case 0x321584u: goto label_321584;
        case 0x321588u: goto label_321588;
        case 0x32158cu: goto label_32158c;
        case 0x321590u: goto label_321590;
        case 0x321594u: goto label_321594;
        case 0x321598u: goto label_321598;
        case 0x32159cu: goto label_32159c;
        case 0x3215a0u: goto label_3215a0;
        case 0x3215a4u: goto label_3215a4;
        case 0x3215a8u: goto label_3215a8;
        case 0x3215acu: goto label_3215ac;
        case 0x3215b0u: goto label_3215b0;
        case 0x3215b4u: goto label_3215b4;
        case 0x3215b8u: goto label_3215b8;
        case 0x3215bcu: goto label_3215bc;
        case 0x3215c0u: goto label_3215c0;
        case 0x3215c4u: goto label_3215c4;
        case 0x3215c8u: goto label_3215c8;
        case 0x3215ccu: goto label_3215cc;
        case 0x3215d0u: goto label_3215d0;
        case 0x3215d4u: goto label_3215d4;
        case 0x3215d8u: goto label_3215d8;
        case 0x3215dcu: goto label_3215dc;
        case 0x3215e0u: goto label_3215e0;
        case 0x3215e4u: goto label_3215e4;
        case 0x3215e8u: goto label_3215e8;
        case 0x3215ecu: goto label_3215ec;
        case 0x3215f0u: goto label_3215f0;
        case 0x3215f4u: goto label_3215f4;
        case 0x3215f8u: goto label_3215f8;
        case 0x3215fcu: goto label_3215fc;
        case 0x321600u: goto label_321600;
        case 0x321604u: goto label_321604;
        case 0x321608u: goto label_321608;
        case 0x32160cu: goto label_32160c;
        case 0x321610u: goto label_321610;
        case 0x321614u: goto label_321614;
        case 0x321618u: goto label_321618;
        case 0x32161cu: goto label_32161c;
        case 0x321620u: goto label_321620;
        case 0x321624u: goto label_321624;
        case 0x321628u: goto label_321628;
        case 0x32162cu: goto label_32162c;
        case 0x321630u: goto label_321630;
        case 0x321634u: goto label_321634;
        case 0x321638u: goto label_321638;
        case 0x32163cu: goto label_32163c;
        case 0x321640u: goto label_321640;
        case 0x321644u: goto label_321644;
        case 0x321648u: goto label_321648;
        case 0x32164cu: goto label_32164c;
        case 0x321650u: goto label_321650;
        case 0x321654u: goto label_321654;
        case 0x321658u: goto label_321658;
        case 0x32165cu: goto label_32165c;
        case 0x321660u: goto label_321660;
        case 0x321664u: goto label_321664;
        case 0x321668u: goto label_321668;
        case 0x32166cu: goto label_32166c;
        case 0x321670u: goto label_321670;
        case 0x321674u: goto label_321674;
        case 0x321678u: goto label_321678;
        case 0x32167cu: goto label_32167c;
        case 0x321680u: goto label_321680;
        case 0x321684u: goto label_321684;
        case 0x321688u: goto label_321688;
        case 0x32168cu: goto label_32168c;
        case 0x321690u: goto label_321690;
        case 0x321694u: goto label_321694;
        case 0x321698u: goto label_321698;
        case 0x32169cu: goto label_32169c;
        case 0x3216a0u: goto label_3216a0;
        case 0x3216a4u: goto label_3216a4;
        case 0x3216a8u: goto label_3216a8;
        case 0x3216acu: goto label_3216ac;
        case 0x3216b0u: goto label_3216b0;
        case 0x3216b4u: goto label_3216b4;
        default: break;
    }

    ctx->pc = 0x321500u;

label_321500:
    // 0x321500: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_321504:
    // 0x321504: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x321504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_321508:
    // 0x321508: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x321508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_32150c:
    // 0x32150c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x32150cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_321510:
    // 0x321510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x321510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_321514:
    // 0x321514: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x321514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321518:
    // 0x321518: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x321518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_32151c:
    // 0x32151c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x32151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_321520:
    // 0x321520: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x321520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_321524:
    // 0x321524: 0xc0c80d8  jal         func_320360
label_321528:
    if (ctx->pc == 0x321528u) {
        ctx->pc = 0x321528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321524u;
        // 0x321528: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32152Cu;
        goto label_32152c;
    }
    ctx->pc = 0x321524u;
    SET_GPR_U32(ctx, 31, 0x32152Cu);
    ctx->pc = 0x321528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321524u;
    // 0x321528: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x321524u, 0x32152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32152Cu;
label_32152c:
    // 0x32152c: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_321530:
    if (ctx->pc == 0x321530u) {
        ctx->pc = 0x321530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32152Cu;
        // 0x321530: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321534u;
        goto label_321534;
    }
    ctx->pc = 0x32152Cu;
    {
        const bool branch_taken_0x32152c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x321530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32152Cu;
        // 0x321530: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32152c) {
            ctx->pc = 0x321570u;
            goto label_321570;
        }
    }
    ctx->pc = 0x321534u;
label_321534:
    // 0x321534: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x321534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_321538:
    // 0x321538: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x321538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32153c:
    // 0x32153c: 0x0  nop
    ctx->pc = 0x32153cu;
    // NOP
label_321540:
    // 0x321540: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_321544:
    // 0x321544: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x321544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_321548:
    // 0x321548: 0xc0c7d42  jal         func_31F508
label_32154c:
    if (ctx->pc == 0x32154Cu) {
        ctx->pc = 0x32154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321548u;
        // 0x32154c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321550u;
        goto label_321550;
    }
    ctx->pc = 0x321548u;
    SET_GPR_U32(ctx, 31, 0x321550u);
    ctx->pc = 0x32154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321548u;
    // 0x32154c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F508u, 0x321548u, 0x321550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321550u;
label_321550:
    // 0x321550: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_321554:
    if (ctx->pc == 0x321554u) {
        ctx->pc = 0x321554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321550u;
        // 0x321554: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321558u;
        goto label_321558;
    }
    ctx->pc = 0x321550u;
    {
        const bool branch_taken_0x321550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321550) {
            ctx->pc = 0x321554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321550u;
            // 0x321554: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321568u;
            goto label_321568;
        }
    }
    ctx->pc = 0x321558u;
label_321558:
    // 0x321558: 0xc0c8534  jal         func_3214D0
label_32155c:
    if (ctx->pc == 0x32155Cu) {
        ctx->pc = 0x321560u;
        goto label_321560;
    }
    ctx->pc = 0x321558u;
    SET_GPR_U32(ctx, 31, 0x321560u);
    ctx->pc = 0x3214D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3214D0u, 0x321558u, 0x321560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321560u;
label_321560:
    // 0x321560: 0xc0c8386  jal         func_320E18
label_321564:
    if (ctx->pc == 0x321564u) {
        ctx->pc = 0x321568u;
        goto label_321568;
    }
    ctx->pc = 0x321560u;
    SET_GPR_U32(ctx, 31, 0x321568u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321560u, 0x321568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321568u;
label_321568:
    // 0x321568: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_32156c:
    if (ctx->pc == 0x32156Cu) {
        ctx->pc = 0x32156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321568u;
        // 0x32156c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321570u;
        goto label_321570;
    }
    ctx->pc = 0x321568u;
    {
        const bool branch_taken_0x321568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321568u;
        // 0x32156c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321568) {
            ctx->pc = 0x321540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321540;
        }
    }
    ctx->pc = 0x321570u;
label_321570:
    // 0x321570: 0xc0c848a  jal         func_321228
label_321574:
    if (ctx->pc == 0x321574u) {
        ctx->pc = 0x321578u;
        goto label_321578;
    }
    ctx->pc = 0x321570u;
    SET_GPR_U32(ctx, 31, 0x321578u);
    ctx->pc = 0x321228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321228u, 0x321570u, 0x321578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321578u;
label_321578:
    // 0x321578: 0xc0c8386  jal         func_320E18
label_32157c:
    if (ctx->pc == 0x32157Cu) {
        ctx->pc = 0x321580u;
        goto label_321580;
    }
    ctx->pc = 0x321578u;
    SET_GPR_U32(ctx, 31, 0x321580u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321578u, 0x321580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321580u;
label_321580:
    // 0x321580: 0xc0c84a2  jal         func_321288
label_321584:
    if (ctx->pc == 0x321584u) {
        ctx->pc = 0x321588u;
        goto label_321588;
    }
    ctx->pc = 0x321580u;
    SET_GPR_U32(ctx, 31, 0x321588u);
    ctx->pc = 0x321288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321288u, 0x321580u, 0x321588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321588u;
label_321588:
    // 0x321588: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x321588u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32158c:
    // 0x32158c: 0x12540012  beq         $s2, $s4, . + 4 + (0x12 << 2)
label_321590:
    if (ctx->pc == 0x321590u) {
        ctx->pc = 0x321594u;
        goto label_321594;
    }
    ctx->pc = 0x32158Cu;
    {
        const bool branch_taken_0x32158c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x32158c) {
            ctx->pc = 0x3215D8u;
            goto label_3215d8;
        }
    }
    ctx->pc = 0x321594u;
label_321594:
    // 0x321594: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_321598:
    if (ctx->pc == 0x321598u) {
        ctx->pc = 0x321598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321594u;
        // 0x321598: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32159Cu;
        goto label_32159c;
    }
    ctx->pc = 0x321594u;
    {
        const bool branch_taken_0x321594 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x321598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321594u;
        // 0x321598: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321594) {
            ctx->pc = 0x3215D8u;
            goto label_3215d8;
        }
    }
    ctx->pc = 0x32159Cu;
label_32159c:
    // 0x32159c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x32159cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3215a0:
    // 0x3215a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3215a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3215a4:
    // 0x3215a4: 0x0  nop
    ctx->pc = 0x3215a4u;
    // NOP
label_3215a8:
    // 0x3215a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3215a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3215ac:
    // 0x3215ac: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3215acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3215b0:
    // 0x3215b0: 0xc0c7d42  jal         func_31F508
label_3215b4:
    if (ctx->pc == 0x3215B4u) {
        ctx->pc = 0x3215B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215B0u;
        // 0x3215b4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215B8u;
        goto label_3215b8;
    }
    ctx->pc = 0x3215B0u;
    SET_GPR_U32(ctx, 31, 0x3215B8u);
    ctx->pc = 0x3215B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215B0u;
    // 0x3215b4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F508u, 0x3215B0u, 0x3215B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215B8u;
label_3215b8:
    // 0x3215b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3215bc:
    if (ctx->pc == 0x3215BCu) {
        ctx->pc = 0x3215BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215B8u;
        // 0x3215bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215C0u;
        goto label_3215c0;
    }
    ctx->pc = 0x3215B8u;
    {
        const bool branch_taken_0x3215b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3215b8) {
            ctx->pc = 0x3215BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3215B8u;
            // 0x3215bc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3215D0u;
            goto label_3215d0;
        }
    }
    ctx->pc = 0x3215C0u;
label_3215c0:
    // 0x3215c0: 0xc0c8534  jal         func_3214D0
label_3215c4:
    if (ctx->pc == 0x3215C4u) {
        ctx->pc = 0x3215C8u;
        goto label_3215c8;
    }
    ctx->pc = 0x3215C0u;
    SET_GPR_U32(ctx, 31, 0x3215C8u);
    ctx->pc = 0x3214D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3214D0u, 0x3215C0u, 0x3215C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215C8u;
label_3215c8:
    // 0x3215c8: 0xc0c8386  jal         func_320E18
label_3215cc:
    if (ctx->pc == 0x3215CCu) {
        ctx->pc = 0x3215D0u;
        goto label_3215d0;
    }
    ctx->pc = 0x3215C8u;
    SET_GPR_U32(ctx, 31, 0x3215D0u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x3215C8u, 0x3215D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215D0u;
label_3215d0:
    // 0x3215d0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_3215d4:
    if (ctx->pc == 0x3215D4u) {
        ctx->pc = 0x3215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215D0u;
        // 0x3215d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215D8u;
        goto label_3215d8;
    }
    ctx->pc = 0x3215D0u;
    {
        const bool branch_taken_0x3215d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215D0u;
        // 0x3215d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215d0) {
            ctx->pc = 0x3215A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215a8;
        }
    }
    ctx->pc = 0x3215D8u;
label_3215d8:
    // 0x3215d8: 0xc0c8618  jal         func_321860
label_3215dc:
    if (ctx->pc == 0x3215DCu) {
        ctx->pc = 0x3215DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215D8u;
        // 0x3215dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215E0u;
        goto label_3215e0;
    }
    ctx->pc = 0x3215D8u;
    SET_GPR_U32(ctx, 31, 0x3215E0u);
    ctx->pc = 0x3215DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215D8u;
    // 0x3215dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321860u, 0x3215D8u, 0x3215E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3215E0u;
label_3215e0:
    // 0x3215e0: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_3215e4:
    if (ctx->pc == 0x3215E4u) {
        ctx->pc = 0x3215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215E0u;
        // 0x3215e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3215E8u;
        goto label_3215e8;
    }
    ctx->pc = 0x3215E0u;
    {
        const bool branch_taken_0x3215e0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x3215E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215E0u;
        // 0x3215e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3215e0) {
            ctx->pc = 0x321678u;
            goto label_321678;
        }
    }
    ctx->pc = 0x3215E8u;
label_3215e8:
    // 0x3215e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3215e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3215ec:
    // 0x3215ec: 0x0  nop
    ctx->pc = 0x3215ecu;
    // NOP
label_3215f0:
    // 0x3215f0: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x3215f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3215f4:
    // 0x3215f4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3215f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_3215f8:
    // 0x3215f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3215f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3215fc:
    // 0x3215fc: 0xc0c7d42  jal         func_31F508
label_321600:
    if (ctx->pc == 0x321600u) {
        ctx->pc = 0x321600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3215FCu;
        // 0x321600: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321604u;
        goto label_321604;
    }
    ctx->pc = 0x3215FCu;
    SET_GPR_U32(ctx, 31, 0x321604u);
    ctx->pc = 0x321600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3215FCu;
    // 0x321600: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F508u, 0x3215FCu, 0x321604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321604u;
label_321604:
    // 0x321604: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_321608:
    if (ctx->pc == 0x321608u) {
        ctx->pc = 0x321608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321604u;
        // 0x321608: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32160Cu;
        goto label_32160c;
    }
    ctx->pc = 0x321604u;
    {
        const bool branch_taken_0x321604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321604u;
        // 0x321608: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321604) {
            ctx->pc = 0x321668u;
            goto label_321668;
        }
    }
    ctx->pc = 0x32160Cu;
label_32160c:
    // 0x32160c: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x32160cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
label_321610:
    // 0x321610: 0x24511270  addiu       $s1, $v0, 0x1270
    ctx->pc = 0x321610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4720));
label_321614:
    // 0x321614: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x321614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_321618:
    // 0x321618: 0xc0c84b0  jal         func_3212C0
label_32161c:
    if (ctx->pc == 0x32161Cu) {
        ctx->pc = 0x32161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321618u;
        // 0x32161c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321620u;
        goto label_321620;
    }
    ctx->pc = 0x321618u;
    SET_GPR_U32(ctx, 31, 0x321620u);
    ctx->pc = 0x32161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321618u;
    // 0x32161c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212C0u, 0x321618u, 0x321620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321620u;
label_321620:
    // 0x321620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321624:
    // 0x321624: 0x10000003  b           . + 4 + (0x3 << 2)
label_321628:
    if (ctx->pc == 0x321628u) {
        ctx->pc = 0x321628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321624u;
        // 0x321628: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32162Cu;
        goto label_32162c;
    }
    ctx->pc = 0x321624u;
    {
        const bool branch_taken_0x321624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321624u;
        // 0x321628: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321624) {
            ctx->pc = 0x321634u;
            goto label_321634;
        }
    }
    ctx->pc = 0x32162Cu;
label_32162c:
    // 0x32162c: 0xc0c8386  jal         func_320E18
label_321630:
    if (ctx->pc == 0x321630u) {
        ctx->pc = 0x321634u;
        goto label_321634;
    }
    ctx->pc = 0x32162Cu;
    SET_GPR_U32(ctx, 31, 0x321634u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x32162Cu, 0x321634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321634u;
label_321634:
    // 0x321634: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x321634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_321638:
    // 0x321638: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x321638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_32163c:
    // 0x32163c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_321640:
    // 0x321640: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_321644:
    // 0x321644: 0x40f809  jalr        $v0
label_321648:
    if (ctx->pc == 0x321648u) {
        ctx->pc = 0x32164Cu;
        goto label_32164c;
    }
    ctx->pc = 0x321644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32164Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321644u, 0x32164Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32164Cu;
label_32164c:
    // 0x32164c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x32164cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
label_321650:
    // 0x321650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_321654:
    // 0x321654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x321654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321658:
    // 0x321658: 0xc0c84de  jal         func_321378
label_32165c:
    if (ctx->pc == 0x32165Cu) {
        ctx->pc = 0x32165Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321658u;
        // 0x32165c: 0x24c61818  addiu       $a2, $a2, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321660u;
        goto label_321660;
    }
    ctx->pc = 0x321658u;
    SET_GPR_U32(ctx, 31, 0x321660u);
    ctx->pc = 0x32165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321658u;
    // 0x32165c: 0x24c61818  addiu       $a2, $a2, 0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321378u, 0x321658u, 0x321660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321660u;
label_321660:
    // 0x321660: 0xc0c8386  jal         func_320E18
label_321664:
    if (ctx->pc == 0x321664u) {
        ctx->pc = 0x321668u;
        goto label_321668;
    }
    ctx->pc = 0x321660u;
    SET_GPR_U32(ctx, 31, 0x321668u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321660u, 0x321668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321668u;
label_321668:
    // 0x321668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x321668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_32166c:
    // 0x32166c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x32166cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_321670:
    // 0x321670: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_321674:
    if (ctx->pc == 0x321674u) {
        ctx->pc = 0x321674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321670u;
        // 0x321674: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321678u;
        goto label_321678;
    }
    ctx->pc = 0x321670u;
    {
        const bool branch_taken_0x321670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321670u;
        // 0x321674: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321670) {
            ctx->pc = 0x3215F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3215f0;
        }
    }
    ctx->pc = 0x321678u;
label_321678:
    // 0x321678: 0xc0c8478  jal         func_3211E0
label_32167c:
    if (ctx->pc == 0x32167Cu) {
        ctx->pc = 0x321680u;
        goto label_321680;
    }
    ctx->pc = 0x321678u;
    SET_GPR_U32(ctx, 31, 0x321680u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x321678u, 0x321680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321680u;
label_321680:
    // 0x321680: 0xc0c8386  jal         func_320E18
label_321684:
    if (ctx->pc == 0x321684u) {
        ctx->pc = 0x321688u;
        goto label_321688;
    }
    ctx->pc = 0x321680u;
    SET_GPR_U32(ctx, 31, 0x321688u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x321680u, 0x321688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321688u;
label_321688:
    // 0x321688: 0x26421288  addiu       $v0, $s2, 0x1288
    ctx->pc = 0x321688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4744));
label_32168c:
    // 0x32168c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_321690:
    if (ctx->pc == 0x321690u) {
        ctx->pc = 0x321690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32168Cu;
        // 0x321690: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321694u;
        goto label_321694;
    }
    ctx->pc = 0x32168Cu;
    {
        const bool branch_taken_0x32168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32168Cu;
        // 0x321690: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32168c) {
            ctx->pc = 0x32162Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32162c;
        }
    }
    ctx->pc = 0x321694u;
label_321694:
    // 0x321694: 0xc0c8502  jal         func_321408
label_321698:
    if (ctx->pc == 0x321698u) {
        ctx->pc = 0x321698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321694u;
        // 0x321698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32169Cu;
        goto label_32169c;
    }
    ctx->pc = 0x321694u;
    SET_GPR_U32(ctx, 31, 0x32169Cu);
    ctx->pc = 0x321698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321694u;
    // 0x321698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321408u, 0x321694u, 0x32169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32169Cu;
label_32169c:
    // 0x32169c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_3216a0:
    if (ctx->pc == 0x3216A0u) {
        ctx->pc = 0x3216A4u;
        goto label_3216a4;
    }
    ctx->pc = 0x32169Cu;
    {
        const bool branch_taken_0x32169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32169c) {
            ctx->pc = 0x321680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321680;
        }
    }
    ctx->pc = 0x3216A4u;
label_3216a4:
    // 0x3216a4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_3216a8:
    if (ctx->pc == 0x3216A8u) {
        ctx->pc = 0x3216ACu;
        goto label_3216ac;
    }
    ctx->pc = 0x3216A4u;
    {
        const bool branch_taken_0x3216a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3216a4) {
            ctx->pc = 0x321578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321578;
        }
    }
    ctx->pc = 0x3216ACu;
label_3216ac:
    // 0x3216ac: 0xc0c8478  jal         func_3211E0
label_3216b0:
    if (ctx->pc == 0x3216B0u) {
        ctx->pc = 0x3216B4u;
        goto label_3216b4;
    }
    ctx->pc = 0x3216ACu;
    SET_GPR_U32(ctx, 31, 0x3216B4u);
    ctx->pc = 0x3211E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3211E0u, 0x3216ACu, 0x3216B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216B4u;
label_3216b4:
    // 0x3216b4: 0x0  nop
    ctx->pc = 0x3216b4u;
    // NOP
    ctx->pc = 0x3216b8u;
}
