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

// Function: cEmManage_EntryEm
// Address: 0x2905d0 - 0x290770
void cEmManage_EntryEm_0x2905d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_EntryEm_0x2905d0");
#endif

    switch (ctx->pc) {
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d4u: goto label_2905d4;
        case 0x2905d8u: goto label_2905d8;
        case 0x2905dcu: goto label_2905dc;
        case 0x2905e0u: goto label_2905e0;
        case 0x2905e4u: goto label_2905e4;
        case 0x2905e8u: goto label_2905e8;
        case 0x2905ecu: goto label_2905ec;
        case 0x2905f0u: goto label_2905f0;
        case 0x2905f4u: goto label_2905f4;
        case 0x2905f8u: goto label_2905f8;
        case 0x2905fcu: goto label_2905fc;
        case 0x290600u: goto label_290600;
        case 0x290604u: goto label_290604;
        case 0x290608u: goto label_290608;
        case 0x29060cu: goto label_29060c;
        case 0x290610u: goto label_290610;
        case 0x290614u: goto label_290614;
        case 0x290618u: goto label_290618;
        case 0x29061cu: goto label_29061c;
        case 0x290620u: goto label_290620;
        case 0x290624u: goto label_290624;
        case 0x290628u: goto label_290628;
        case 0x29062cu: goto label_29062c;
        case 0x290630u: goto label_290630;
        case 0x290634u: goto label_290634;
        case 0x290638u: goto label_290638;
        case 0x29063cu: goto label_29063c;
        case 0x290640u: goto label_290640;
        case 0x290644u: goto label_290644;
        case 0x290648u: goto label_290648;
        case 0x29064cu: goto label_29064c;
        case 0x290650u: goto label_290650;
        case 0x290654u: goto label_290654;
        case 0x290658u: goto label_290658;
        case 0x29065cu: goto label_29065c;
        case 0x290660u: goto label_290660;
        case 0x290664u: goto label_290664;
        case 0x290668u: goto label_290668;
        case 0x29066cu: goto label_29066c;
        case 0x290670u: goto label_290670;
        case 0x290674u: goto label_290674;
        case 0x290678u: goto label_290678;
        case 0x29067cu: goto label_29067c;
        case 0x290680u: goto label_290680;
        case 0x290684u: goto label_290684;
        case 0x290688u: goto label_290688;
        case 0x29068cu: goto label_29068c;
        case 0x290690u: goto label_290690;
        case 0x290694u: goto label_290694;
        case 0x290698u: goto label_290698;
        case 0x29069cu: goto label_29069c;
        case 0x2906a0u: goto label_2906a0;
        case 0x2906a4u: goto label_2906a4;
        case 0x2906a8u: goto label_2906a8;
        case 0x2906acu: goto label_2906ac;
        case 0x2906b0u: goto label_2906b0;
        case 0x2906b4u: goto label_2906b4;
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        case 0x2906c0u: goto label_2906c0;
        case 0x2906c4u: goto label_2906c4;
        case 0x2906c8u: goto label_2906c8;
        case 0x2906ccu: goto label_2906cc;
        case 0x2906d0u: goto label_2906d0;
        case 0x2906d4u: goto label_2906d4;
        case 0x2906d8u: goto label_2906d8;
        case 0x2906dcu: goto label_2906dc;
        case 0x2906e0u: goto label_2906e0;
        case 0x2906e4u: goto label_2906e4;
        case 0x2906e8u: goto label_2906e8;
        case 0x2906ecu: goto label_2906ec;
        case 0x2906f0u: goto label_2906f0;
        case 0x2906f4u: goto label_2906f4;
        case 0x2906f8u: goto label_2906f8;
        case 0x2906fcu: goto label_2906fc;
        case 0x290700u: goto label_290700;
        case 0x290704u: goto label_290704;
        case 0x290708u: goto label_290708;
        case 0x29070cu: goto label_29070c;
        case 0x290710u: goto label_290710;
        case 0x290714u: goto label_290714;
        case 0x290718u: goto label_290718;
        case 0x29071cu: goto label_29071c;
        case 0x290720u: goto label_290720;
        case 0x290724u: goto label_290724;
        case 0x290728u: goto label_290728;
        case 0x29072cu: goto label_29072c;
        case 0x290730u: goto label_290730;
        case 0x290734u: goto label_290734;
        case 0x290738u: goto label_290738;
        case 0x29073cu: goto label_29073c;
        case 0x290740u: goto label_290740;
        case 0x290744u: goto label_290744;
        case 0x290748u: goto label_290748;
        case 0x29074cu: goto label_29074c;
        case 0x290750u: goto label_290750;
        case 0x290754u: goto label_290754;
        case 0x290758u: goto label_290758;
        case 0x29075cu: goto label_29075c;
        case 0x290760u: goto label_290760;
        case 0x290764u: goto label_290764;
        case 0x290768u: goto label_290768;
        case 0x29076cu: goto label_29076c;
        default: break;
    }

    ctx->pc = 0x2905d0u;

label_2905d0:
    // 0x2905d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2905d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2905d4:
    // 0x2905d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2905d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2905d8:
    // 0x2905d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2905d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2905dc:
    // 0x2905dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2905dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2905e0:
    // 0x2905e0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2905e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_2905e4:
    // 0x2905e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2905e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2905e8:
    // 0x2905e8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2905e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_2905ec:
    // 0x2905ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2905ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2905f0:
    // 0x2905f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2905f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2905f4:
    // 0x2905f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2905f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2905f8:
    // 0x2905f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2905f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2905fc:
    // 0x2905fc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2905fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_290600:
    // 0x290600: 0x12600050  beqz        $s3, . + 4 + (0x50 << 2)
label_290604:
    if (ctx->pc == 0x290604u) {
        ctx->pc = 0x290604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290600u;
        // 0x290604: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290608u;
        goto label_290608;
    }
    ctx->pc = 0x290600u;
    {
        const bool branch_taken_0x290600 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x290604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290600u;
        // 0x290604: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290600) {
            ctx->pc = 0x290744u;
            goto label_290744;
        }
    }
    ctx->pc = 0x290608u;
label_290608:
    // 0x290608: 0x2a82ffff  slti        $v0, $s4, -0x1
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_29060c:
    // 0x29060c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
label_290610:
    if (ctx->pc == 0x290610u) {
        ctx->pc = 0x290610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29060Cu;
        // 0x290610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290614u;
        goto label_290614;
    }
    ctx->pc = 0x29060Cu;
    {
        const bool branch_taken_0x29060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29060Cu;
        // 0x290610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29060c) {
            ctx->pc = 0x290748u;
            goto label_290748;
        }
    }
    ctx->pc = 0x290614u;
label_290614:
    // 0x290614: 0xc0a4256  jal         func_290958
label_290618:
    if (ctx->pc == 0x290618u) {
        ctx->pc = 0x290618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290614u;
        // 0x290618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29061Cu;
        goto label_29061c;
    }
    ctx->pc = 0x290614u;
    SET_GPR_U32(ctx, 31, 0x29061Cu);
    ctx->pc = 0x290618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290614u;
    // 0x290618: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290958u, 0x290614u, 0x29061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29061Cu;
label_29061c:
    // 0x29061c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29061cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290620:
    // 0x290620: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_290624:
    // 0x290624: 0x12a20047  beq         $s5, $v0, . + 4 + (0x47 << 2)
label_290628:
    if (ctx->pc == 0x290628u) {
        ctx->pc = 0x290628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290624u;
        // 0x290628: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29062Cu;
        goto label_29062c;
    }
    ctx->pc = 0x290624u;
    {
        const bool branch_taken_0x290624 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x290628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290624u;
        // 0x290628: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290624) {
            ctx->pc = 0x290744u;
            goto label_290744;
        }
    }
    ctx->pc = 0x29062Cu;
label_29062c:
    // 0x29062c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29062cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_290630:
    // 0x290630: 0x245064e0  addiu       $s0, $v0, 0x64E0
    ctx->pc = 0x290630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25824));
label_290634:
    // 0x290634: 0xc07fa6e  jal         func_1FE9B8
label_290638:
    if (ctx->pc == 0x290638u) {
        ctx->pc = 0x290638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290634u;
        // 0x290638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29063Cu;
        goto label_29063c;
    }
    ctx->pc = 0x290634u;
    SET_GPR_U32(ctx, 31, 0x29063Cu);
    ctx->pc = 0x290638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290634u;
    // 0x290638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE9B8u, 0x290634u, 0x29063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29063Cu;
label_29063c:
    // 0x29063c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_290640:
    if (ctx->pc == 0x290640u) {
        ctx->pc = 0x290640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29063Cu;
        // 0x290640: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290644u;
        goto label_290644;
    }
    ctx->pc = 0x29063Cu;
    {
        const bool branch_taken_0x29063c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29063Cu;
        // 0x290640: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29063c) {
            ctx->pc = 0x29065Cu;
            goto label_29065c;
        }
    }
    ctx->pc = 0x290644u;
label_290644:
    // 0x290644: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x290644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_290648:
    // 0x290648: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x290648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_29064c:
    // 0x29064c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29064cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290650:
    // 0x290650: 0xc07fa28  jal         func_1FE8A0
label_290654:
    if (ctx->pc == 0x290654u) {
        ctx->pc = 0x290654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290650u;
        // 0x290654: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290658u;
        goto label_290658;
    }
    ctx->pc = 0x290650u;
    SET_GPR_U32(ctx, 31, 0x290658u);
    ctx->pc = 0x290654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290650u;
    // 0x290654: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x290650u, 0x290658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290658u;
label_290658:
    // 0x290658: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x290658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_29065c:
    // 0x29065c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290660:
    // 0x290660: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x290660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_290664:
    // 0x290664: 0xc07faa8  jal         func_1FEAA0
label_290668:
    if (ctx->pc == 0x290668u) {
        ctx->pc = 0x290668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290664u;
        // 0x290668: 0x8e67002c  lw          $a3, 0x2C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29066Cu;
        goto label_29066c;
    }
    ctx->pc = 0x290664u;
    SET_GPR_U32(ctx, 31, 0x29066Cu);
    ctx->pc = 0x290668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290664u;
    // 0x290668: 0x8e67002c  lw          $a3, 0x2C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAA0u, 0x290664u, 0x29066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29066Cu;
label_29066c:
    // 0x29066c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x29066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_290670:
    // 0x290670: 0xc0c3ea6  jal         func_30FA98
label_290674:
    if (ctx->pc == 0x290674u) {
        ctx->pc = 0x290674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290670u;
        // 0x290674: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x290678u;
        goto label_290678;
    }
    ctx->pc = 0x290670u;
    SET_GPR_U32(ctx, 31, 0x290678u);
    ctx->pc = 0x290674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290670u;
    // 0x290674: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x290670u, 0x290678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290678u;
label_290678:
    // 0x290678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29067c:
    // 0x29067c: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_290680:
    if (ctx->pc == 0x290680u) {
        ctx->pc = 0x290680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29067Cu;
        // 0x290680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290684u;
        goto label_290684;
    }
    ctx->pc = 0x29067Cu;
    {
        const bool branch_taken_0x29067c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x290680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29067Cu;
        // 0x290680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29067c) {
            ctx->pc = 0x290748u;
            goto label_290748;
        }
    }
    ctx->pc = 0x290684u;
label_290684:
    // 0x290684: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x290684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_290688:
    // 0x290688: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x290688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29068c:
    // 0x29068c: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x29068cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_290690:
    // 0x290690: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x290690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_290694:
    // 0x290694: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x290694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_290698:
    // 0x290698: 0xc0a4012  jal         func_290048
label_29069c:
    if (ctx->pc == 0x29069Cu) {
        ctx->pc = 0x29069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290698u;
        // 0x29069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906A0u;
        goto label_2906a0;
    }
    ctx->pc = 0x290698u;
    SET_GPR_U32(ctx, 31, 0x2906A0u);
    ctx->pc = 0x29069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290698u;
    // 0x29069c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290048u, 0x290698u, 0x2906A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906A0u;
label_2906a0:
    // 0x2906a0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_2906a4:
    if (ctx->pc == 0x2906A4u) {
        ctx->pc = 0x2906A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906A0u;
        // 0x2906a4: 0x26430500  addiu       $v1, $s2, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906A8u;
        goto label_2906a8;
    }
    ctx->pc = 0x2906A0u;
    {
        const bool branch_taken_0x2906a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906A0u;
        // 0x2906a4: 0x26430500  addiu       $v1, $s2, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906a0) {
            ctx->pc = 0x2906DCu;
            goto label_2906dc;
        }
    }
    ctx->pc = 0x2906A8u;
label_2906a8:
    // 0x2906a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2906a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2906ac:
    // 0x2906ac: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2906b0:
    if (ctx->pc == 0x2906B0u) {
        ctx->pc = 0x2906B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906ACu;
        // 0x2906b0: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906B4u;
        goto label_2906b4;
    }
    ctx->pc = 0x2906ACu;
    {
        const bool branch_taken_0x2906ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2906ac) {
            ctx->pc = 0x2906B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2906ACu;
            // 0x2906b0: 0xac500004  sw          $s0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2906CCu;
            goto label_2906cc;
        }
    }
    ctx->pc = 0x2906B4u;
label_2906b4:
    // 0x2906b4: 0xae500500  sw          $s0, 0x500($s2)
    ctx->pc = 0x2906b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 16));
label_2906b8:
    // 0x2906b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2906b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2906bc:
    // 0x2906bc: 0x8e420500  lw          $v0, 0x500($s2)
    ctx->pc = 0x2906bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1280)));
label_2906c0:
    // 0x2906c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2906c4:
    // 0x2906c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2906c8:
    if (ctx->pc == 0x2906C8u) {
        ctx->pc = 0x2906C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906C4u;
        // 0x2906c8: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906CCu;
        goto label_2906cc;
    }
    ctx->pc = 0x2906C4u;
    {
        const bool branch_taken_0x2906c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906C4u;
        // 0x2906c8: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906c4) {
            ctx->pc = 0x2906DCu;
            goto label_2906dc;
        }
    }
    ctx->pc = 0x2906CCu;
label_2906cc:
    // 0x2906cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2906ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2906d0:
    // 0x2906d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2906d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2906d4:
    // 0x2906d4: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x2906d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
label_2906d8:
    // 0x2906d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2906d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2906dc:
    // 0x2906dc: 0x8e420508  lw          $v0, 0x508($s2)
    ctx->pc = 0x2906dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1288)));
label_2906e0:
    // 0x2906e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2906e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2906e4:
    // 0x2906e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2906e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2906e8:
    // 0x2906e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2906e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2906ec:
    // 0x2906ec: 0xc0a4262  jal         func_290988
label_2906f0:
    if (ctx->pc == 0x2906F0u) {
        ctx->pc = 0x2906F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906ECu;
        // 0x2906f0: 0xae420508  sw          $v0, 0x508($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906F4u;
        goto label_2906f4;
    }
    ctx->pc = 0x2906ECu;
    SET_GPR_U32(ctx, 31, 0x2906F4u);
    ctx->pc = 0x2906F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2906ECu;
    // 0x2906f0: 0xae420508  sw          $v0, 0x508($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290988u, 0x2906ECu, 0x2906F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2906F4u;
label_2906f4:
    // 0x2906f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2906f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2906f8:
    // 0x2906f8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_2906fc:
    if (ctx->pc == 0x2906FCu) {
        ctx->pc = 0x2906FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906F8u;
        // 0x2906fc: 0x92620031  lbu         $v0, 0x31($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290700u;
        goto label_290700;
    }
    ctx->pc = 0x2906F8u;
    {
        const bool branch_taken_0x2906f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2906f8) {
            ctx->pc = 0x2906FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2906F8u;
            // 0x2906fc: 0x92620031  lbu         $v0, 0x31($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290710u;
            goto label_290710;
        }
    }
    ctx->pc = 0x290700u;
label_290700:
    // 0x290700: 0x8e42050c  lw          $v0, 0x50C($s2)
    ctx->pc = 0x290700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1292)));
label_290704:
    // 0x290704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x290704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_290708:
    // 0x290708: 0xae42050c  sw          $v0, 0x50C($s2)
    ctx->pc = 0x290708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1292), GPR_U32(ctx, 2));
label_29070c:
    // 0x29070c: 0x92620031  lbu         $v0, 0x31($s3)
    ctx->pc = 0x29070cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
label_290710:
    // 0x290710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x290710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290714:
    // 0x290714: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x290714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_290718:
    // 0x290718: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x290718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29071c:
    // 0x29071c: 0xa6220640  sh          $v0, 0x640($s1)
    ctx->pc = 0x29071cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1600), (uint16_t)GPR_U32(ctx, 2));
label_290720:
    // 0x290720: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x290720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_290724:
    // 0x290724: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x290724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_290728:
    // 0x290728: 0x40f809  jalr        $v0
label_29072c:
    if (ctx->pc == 0x29072Cu) {
        ctx->pc = 0x29072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290728u;
        // 0x29072c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290730u;
        goto label_290730;
    }
    ctx->pc = 0x290728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290730u);
        ctx->pc = 0x29072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290728u;
        // 0x29072c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290728u, 0x290730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290730u;
label_290730:
    // 0x290730: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_290734:
    if (ctx->pc == 0x290734u) {
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290730u;
        // 0x290734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290738u;
        goto label_290738;
    }
    ctx->pc = 0x290730u;
    {
        const bool branch_taken_0x290730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290730u;
        // 0x290734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290730) {
            ctx->pc = 0x290748u;
            goto label_290748;
        }
    }
    ctx->pc = 0x290738u;
label_290738:
    // 0x290738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29073c:
    // 0x29073c: 0xc0a41dc  jal         func_290770
label_290740:
    if (ctx->pc == 0x290740u) {
        ctx->pc = 0x290740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29073Cu;
        // 0x290740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290744u;
        goto label_290744;
    }
    ctx->pc = 0x29073Cu;
    SET_GPR_U32(ctx, 31, 0x290744u);
    ctx->pc = 0x290740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29073Cu;
    // 0x290740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290770u, 0x29073Cu, 0x290744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290744u;
label_290744:
    // 0x290744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x290744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290748:
    // 0x290748: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x290748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29074c:
    // 0x29074c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x29074cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_290750:
    // 0x290750: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x290750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_290754:
    // 0x290754: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x290754u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_290758:
    // 0x290758: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x290758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29075c:
    // 0x29075c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x29075cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_290760:
    // 0x290760: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x290760u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_290764:
    // 0x290764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_290768:
    // 0x290768: 0x3e00008  jr          $ra
label_29076c:
    if (ctx->pc == 0x29076Cu) {
        ctx->pc = 0x29076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290768u;
        // 0x29076c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290770u;
        goto label_fallthrough_0x290768;
    }
    ctx->pc = 0x290768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290768u;
        // 0x29076c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x290768:
    ctx->pc = 0x290770u;
}
