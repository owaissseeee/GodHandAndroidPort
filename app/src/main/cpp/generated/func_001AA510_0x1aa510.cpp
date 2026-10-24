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

// Function: func_001AA510
// Address: 0x1aa510 - 0x1aa6c0
void func_001AA510_0x1aa510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA510_0x1aa510");
#endif

    switch (ctx->pc) {
        case 0x1aa510u: goto label_1aa510;
        case 0x1aa514u: goto label_1aa514;
        case 0x1aa518u: goto label_1aa518;
        case 0x1aa51cu: goto label_1aa51c;
        case 0x1aa520u: goto label_1aa520;
        case 0x1aa524u: goto label_1aa524;
        case 0x1aa528u: goto label_1aa528;
        case 0x1aa52cu: goto label_1aa52c;
        case 0x1aa530u: goto label_1aa530;
        case 0x1aa534u: goto label_1aa534;
        case 0x1aa538u: goto label_1aa538;
        case 0x1aa53cu: goto label_1aa53c;
        case 0x1aa540u: goto label_1aa540;
        case 0x1aa544u: goto label_1aa544;
        case 0x1aa548u: goto label_1aa548;
        case 0x1aa54cu: goto label_1aa54c;
        case 0x1aa550u: goto label_1aa550;
        case 0x1aa554u: goto label_1aa554;
        case 0x1aa558u: goto label_1aa558;
        case 0x1aa55cu: goto label_1aa55c;
        case 0x1aa560u: goto label_1aa560;
        case 0x1aa564u: goto label_1aa564;
        case 0x1aa568u: goto label_1aa568;
        case 0x1aa56cu: goto label_1aa56c;
        case 0x1aa570u: goto label_1aa570;
        case 0x1aa574u: goto label_1aa574;
        case 0x1aa578u: goto label_1aa578;
        case 0x1aa57cu: goto label_1aa57c;
        case 0x1aa580u: goto label_1aa580;
        case 0x1aa584u: goto label_1aa584;
        case 0x1aa588u: goto label_1aa588;
        case 0x1aa58cu: goto label_1aa58c;
        case 0x1aa590u: goto label_1aa590;
        case 0x1aa594u: goto label_1aa594;
        case 0x1aa598u: goto label_1aa598;
        case 0x1aa59cu: goto label_1aa59c;
        case 0x1aa5a0u: goto label_1aa5a0;
        case 0x1aa5a4u: goto label_1aa5a4;
        case 0x1aa5a8u: goto label_1aa5a8;
        case 0x1aa5acu: goto label_1aa5ac;
        case 0x1aa5b0u: goto label_1aa5b0;
        case 0x1aa5b4u: goto label_1aa5b4;
        case 0x1aa5b8u: goto label_1aa5b8;
        case 0x1aa5bcu: goto label_1aa5bc;
        case 0x1aa5c0u: goto label_1aa5c0;
        case 0x1aa5c4u: goto label_1aa5c4;
        case 0x1aa5c8u: goto label_1aa5c8;
        case 0x1aa5ccu: goto label_1aa5cc;
        case 0x1aa5d0u: goto label_1aa5d0;
        case 0x1aa5d4u: goto label_1aa5d4;
        case 0x1aa5d8u: goto label_1aa5d8;
        case 0x1aa5dcu: goto label_1aa5dc;
        case 0x1aa5e0u: goto label_1aa5e0;
        case 0x1aa5e4u: goto label_1aa5e4;
        case 0x1aa5e8u: goto label_1aa5e8;
        case 0x1aa5ecu: goto label_1aa5ec;
        case 0x1aa5f0u: goto label_1aa5f0;
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa5f8u: goto label_1aa5f8;
        case 0x1aa5fcu: goto label_1aa5fc;
        case 0x1aa600u: goto label_1aa600;
        case 0x1aa604u: goto label_1aa604;
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa60cu: goto label_1aa60c;
        case 0x1aa610u: goto label_1aa610;
        case 0x1aa614u: goto label_1aa614;
        case 0x1aa618u: goto label_1aa618;
        case 0x1aa61cu: goto label_1aa61c;
        case 0x1aa620u: goto label_1aa620;
        case 0x1aa624u: goto label_1aa624;
        case 0x1aa628u: goto label_1aa628;
        case 0x1aa62cu: goto label_1aa62c;
        case 0x1aa630u: goto label_1aa630;
        case 0x1aa634u: goto label_1aa634;
        case 0x1aa638u: goto label_1aa638;
        case 0x1aa63cu: goto label_1aa63c;
        case 0x1aa640u: goto label_1aa640;
        case 0x1aa644u: goto label_1aa644;
        case 0x1aa648u: goto label_1aa648;
        case 0x1aa64cu: goto label_1aa64c;
        case 0x1aa650u: goto label_1aa650;
        case 0x1aa654u: goto label_1aa654;
        case 0x1aa658u: goto label_1aa658;
        case 0x1aa65cu: goto label_1aa65c;
        case 0x1aa660u: goto label_1aa660;
        case 0x1aa664u: goto label_1aa664;
        case 0x1aa668u: goto label_1aa668;
        case 0x1aa66cu: goto label_1aa66c;
        case 0x1aa670u: goto label_1aa670;
        case 0x1aa674u: goto label_1aa674;
        case 0x1aa678u: goto label_1aa678;
        case 0x1aa67cu: goto label_1aa67c;
        case 0x1aa680u: goto label_1aa680;
        case 0x1aa684u: goto label_1aa684;
        case 0x1aa688u: goto label_1aa688;
        case 0x1aa68cu: goto label_1aa68c;
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        case 0x1aa6b8u: goto label_1aa6b8;
        case 0x1aa6bcu: goto label_1aa6bc;
        default: break;
    }

    ctx->pc = 0x1aa510u;

label_1aa510:
    // 0x1aa510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1aa510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1aa514:
    // 0x1aa514: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1aa514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1aa518:
    // 0x1aa518: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1aa518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1aa51c:
    // 0x1aa51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa520:
    // 0x1aa520: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aa520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1aa524:
    // 0x1aa524: 0xc06dce0  jal         func_1B7380
label_1aa528:
    if (ctx->pc == 0x1AA528u) {
        ctx->pc = 0x1AA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA524u;
        // 0x1aa528: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA52Cu;
        goto label_1aa52c;
    }
    ctx->pc = 0x1AA524u;
    SET_GPR_U32(ctx, 31, 0x1AA52Cu);
    ctx->pc = 0x1AA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA524u;
    // 0x1aa528: 0x8e050604  lw          $a1, 0x604($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x1AA524u, 0x1AA52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA52Cu;
label_1aa52c:
    // 0x1aa52c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa52cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa530:
    // 0x1aa530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa534:
    // 0x1aa534: 0x54620021  bnel        $v1, $v0, . + 4 + (0x21 << 2)
label_1aa538:
    if (ctx->pc == 0x1AA538u) {
        ctx->pc = 0x1AA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA534u;
        // 0x1aa538: 0x920402f5  lbu         $a0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA53Cu;
        goto label_1aa53c;
    }
    ctx->pc = 0x1AA534u;
    {
        const bool branch_taken_0x1aa534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa534) {
            ctx->pc = 0x1AA538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA534u;
            // 0x1aa538: 0x920402f5  lbu         $a0, 0x2F5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5BCu;
            goto label_1aa5bc;
        }
    }
    ctx->pc = 0x1AA53Cu;
label_1aa53c:
    // 0x1aa53c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1aa540:
    // 0x1aa540: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_1aa544:
    if (ctx->pc == 0x1AA544u) {
        ctx->pc = 0x1AA548u;
        goto label_1aa548;
    }
    ctx->pc = 0x1AA540u;
    {
        const bool branch_taken_0x1aa540 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1aa540) {
            ctx->pc = 0x1AA568u;
            goto label_1aa568;
        }
    }
    ctx->pc = 0x1AA548u;
label_1aa548:
    // 0x1aa548: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1aa548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1aa54c:
    // 0x1aa54c: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x1aa54cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_1aa550:
    // 0x1aa550: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1aa550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1aa554:
    // 0x1aa554: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1aa554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1aa558:
    // 0x1aa558: 0xae0205b0  sw          $v0, 0x5B0($s0)
    ctx->pc = 0x1aa558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
label_1aa55c:
    // 0x1aa55c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1aa55cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1aa560:
    // 0x1aa560: 0x10000052  b           . + 4 + (0x52 << 2)
label_1aa564:
    if (ctx->pc == 0x1AA564u) {
        ctx->pc = 0x1AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA560u;
        // 0x1aa564: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA568u;
        goto label_1aa568;
    }
    ctx->pc = 0x1AA560u;
    {
        const bool branch_taken_0x1aa560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA560u;
        // 0x1aa564: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa560) {
            ctx->pc = 0x1AA6ACu;
            goto label_1aa6ac;
        }
    }
    ctx->pc = 0x1AA568u;
label_1aa568:
    // 0x1aa568: 0xc06a940  jal         func_1AA500
label_1aa56c:
    if (ctx->pc == 0x1AA56Cu) {
        ctx->pc = 0x1AA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA568u;
        // 0x1aa56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA570u;
        goto label_1aa570;
    }
    ctx->pc = 0x1AA568u;
    SET_GPR_U32(ctx, 31, 0x1AA570u);
    ctx->pc = 0x1AA56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA568u;
    // 0x1aa56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA500u, 0x1AA568u, 0x1AA570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA570u;
label_1aa570:
    // 0x1aa570: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x1aa570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_1aa574:
    // 0x1aa574: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1aa574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1aa578:
    // 0x1aa578: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1aa578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aa57c:
    // 0x1aa57c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa580:
    if (ctx->pc == 0x1AA580u) {
        ctx->pc = 0x1AA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA57Cu;
        // 0x1aa580: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA584u;
        goto label_1aa584;
    }
    ctx->pc = 0x1AA57Cu;
    {
        const bool branch_taken_0x1aa57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA57Cu;
        // 0x1aa580: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa57c) {
            ctx->pc = 0x1AA590u;
            goto label_1aa590;
        }
    }
    ctx->pc = 0x1AA584u;
label_1aa584:
    // 0x1aa584: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1aa584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_1aa588:
    // 0x1aa588: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa58c:
    if (ctx->pc == 0x1AA58Cu) {
        ctx->pc = 0x1AA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA588u;
        // 0x1aa58c: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA590u;
        goto label_1aa590;
    }
    ctx->pc = 0x1AA588u;
    {
        const bool branch_taken_0x1aa588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA588u;
        // 0x1aa58c: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa588) {
            ctx->pc = 0x1AA594u;
            goto label_1aa594;
        }
    }
    ctx->pc = 0x1AA590u;
label_1aa590:
    // 0x1aa590: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa594:
    // 0x1aa594: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1aa594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1aa598:
    // 0x1aa598: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aa598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa59c:
    // 0x1aa59c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1aa59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1aa5a0:
    // 0x1aa5a0: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x1aa5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1aa5a4:
    // 0x1aa5a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa5a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5a8:
    // 0x1aa5a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1aa5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5ac:
    // 0x1aa5ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1aa5acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5b0:
    // 0x1aa5b0: 0xc0b2e92  jal         func_2CBA48
label_1aa5b4:
    if (ctx->pc == 0x1AA5B4u) {
        ctx->pc = 0x1AA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5B0u;
        // 0x1aa5b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA5B8u;
        goto label_1aa5b8;
    }
    ctx->pc = 0x1AA5B0u;
    SET_GPR_U32(ctx, 31, 0x1AA5B8u);
    ctx->pc = 0x1AA5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA5B0u;
    // 0x1aa5b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AA5B0u, 0x1AA5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA5B8u;
label_1aa5b8:
    // 0x1aa5b8: 0x920402f5  lbu         $a0, 0x2F5($s0)
    ctx->pc = 0x1aa5b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1aa5bc:
    // 0x1aa5bc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1aa5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1aa5c0:
    // 0x1aa5c0: 0x24487c68  addiu       $t0, $v0, 0x7C68
    ctx->pc = 0x1aa5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31848));
label_1aa5c4:
    // 0x1aa5c4: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1aa5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1aa5c8:
    // 0x1aa5c8: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1aa5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1aa5cc:
    // 0x1aa5cc: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1aa5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aa5d0:
    // 0x1aa5d0: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1aa5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aa5d4:
    // 0x1aa5d4: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x1aa5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1aa5d8:
    // 0x1aa5d8: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x1aa5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1aa5dc:
    // 0x1aa5dc: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x1aa5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5e0:
    // 0x1aa5e0: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x1aa5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5e4:
    // 0x1aa5e4: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x1aa5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5e8:
    // 0x1aa5e8: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x1aa5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5ec:
    // 0x1aa5ec: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1aa5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5f0:
    // 0x1aa5f0: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1aa5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa5f4:
    // 0x1aa5f4: 0x6905001f  ldl         $a1, 0x1F($t0)
    ctx->pc = 0x1aa5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1aa5f8:
    // 0x1aa5f8: 0x6d050018  ldr         $a1, 0x18($t0)
    ctx->pc = 0x1aa5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1aa5fc:
    // 0x1aa5fc: 0x69060027  ldl         $a2, 0x27($t0)
    ctx->pc = 0x1aa5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aa600:
    // 0x1aa600: 0x6d060020  ldr         $a2, 0x20($t0)
    ctx->pc = 0x1aa600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aa604:
    // 0x1aa604: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x1aa604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa608:
    // 0x1aa608: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x1aa608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa60c:
    // 0x1aa60c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1aa60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa610:
    // 0x1aa610: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1aa610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa614:
    // 0x1aa614: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1aa614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1aa618:
    // 0x1aa618: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1aa618u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1aa61c:
    // 0x1aa61c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1aa61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aa620:
    // 0x1aa620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1aa620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1aa624:
    // 0x1aa624: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x1aa624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_1aa628:
    // 0x1aa628: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa62c:
    // 0x1aa62c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1aa630:
    // 0x1aa630: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1aa634:
    if (ctx->pc == 0x1AA634u) {
        ctx->pc = 0x1AA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA630u;
        // 0x1aa634: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA638u;
        goto label_1aa638;
    }
    ctx->pc = 0x1AA630u;
    {
        const bool branch_taken_0x1aa630 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA630u;
        // 0x1aa634: 0x3a41021  addu        $v0, $sp, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa630) {
            ctx->pc = 0x1AA664u;
            goto label_1aa664;
        }
    }
    ctx->pc = 0x1AA638u;
label_1aa638:
    // 0x1aa638: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1aa638u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1aa63c:
    // 0x1aa63c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1aa63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1aa640:
    // 0x1aa640: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa644:
    // 0x1aa644: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aa648:
    // 0x1aa648: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1aa64c:
    // 0x1aa64c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa650:
    // 0x1aa650: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aa654:
    // 0x1aa654: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1aa654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1aa658:
    // 0x1aa658: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1aa658u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1aa65c:
    // 0x1aa65c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1aa660:
    if (ctx->pc == 0x1AA660u) {
        ctx->pc = 0x1AA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA65Cu;
        // 0x1aa660: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA664u;
        goto label_1aa664;
    }
    ctx->pc = 0x1AA65Cu;
    {
        const bool branch_taken_0x1aa65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA65Cu;
        // 0x1aa660: 0x920202f5  lbu         $v0, 0x2F5($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa65c) {
            ctx->pc = 0x1AA66Cu;
            goto label_1aa66c;
        }
    }
    ctx->pc = 0x1AA664u;
label_1aa664:
    // 0x1aa664: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1aa664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1aa668:
    // 0x1aa668: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x1aa668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1aa66c:
    // 0x1aa66c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1aa670:
    // 0x1aa670: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1aa674:
    // 0x1aa674: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1aa678:
    if (ctx->pc == 0x1AA678u) {
        ctx->pc = 0x1AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA674u;
        // 0x1aa678: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA67Cu;
        goto label_1aa67c;
    }
    ctx->pc = 0x1AA674u;
    {
        const bool branch_taken_0x1aa674 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA674u;
        // 0x1aa678: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa674) {
            ctx->pc = 0x1AA690u;
            goto label_1aa690;
        }
    }
    ctx->pc = 0x1AA67Cu;
label_1aa67c:
    // 0x1aa67c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1aa680:
    // 0x1aa680: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa684:
    // 0x1aa684: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aa688:
    // 0x1aa688: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa68c:
    if (ctx->pc == 0x1AA68Cu) {
        ctx->pc = 0x1AA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA688u;
        // 0x1aa68c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA690u;
        goto label_1aa690;
    }
    ctx->pc = 0x1AA688u;
    {
        const bool branch_taken_0x1aa688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA688u;
        // 0x1aa68c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa688) {
            ctx->pc = 0x1AA694u;
            goto label_1aa694;
        }
    }
    ctx->pc = 0x1AA690u;
label_1aa690:
    // 0x1aa690: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aa690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aa694:
    // 0x1aa694: 0xc0f809  jalr        $a2
label_1aa698:
    if (ctx->pc == 0x1AA698u) {
        ctx->pc = 0x1AA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA694u;
        // 0x1aa698: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA69Cu;
        goto label_1aa69c;
    }
    ctx->pc = 0x1AA694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AA69Cu);
        ctx->pc = 0x1AA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA694u;
        // 0x1aa698: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA694u, 0x1AA69Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA69Cu;
label_1aa69c:
    // 0x1aa69c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1aa69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1aa6a0:
    // 0x1aa6a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa6a4:
    // 0x1aa6a4: 0xc06dfb8  jal         func_1B7EE0
label_1aa6a8:
    if (ctx->pc == 0x1AA6A8u) {
        ctx->pc = 0x1AA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6A4u;
        // 0x1aa6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6ACu;
        goto label_1aa6ac;
    }
    ctx->pc = 0x1AA6A4u;
    SET_GPR_U32(ctx, 31, 0x1AA6ACu);
    ctx->pc = 0x1AA6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA6A4u;
    // 0x1aa6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7EE0u, 0x1AA6A4u, 0x1AA6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA6ACu;
label_1aa6ac:
    // 0x1aa6ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1aa6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aa6b0:
    // 0x1aa6b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1aa6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa6b4:
    // 0x1aa6b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aa6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa6b8:
    // 0x1aa6b8: 0x3e00008  jr          $ra
label_1aa6bc:
    if (ctx->pc == 0x1AA6BCu) {
        ctx->pc = 0x1AA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6B8u;
        // 0x1aa6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA6C0u;
        goto label_fallthrough_0x1aa6b8;
    }
    ctx->pc = 0x1AA6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA6B8u;
        // 0x1aa6bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa6b8:
    ctx->pc = 0x1AA6C0u;
}
