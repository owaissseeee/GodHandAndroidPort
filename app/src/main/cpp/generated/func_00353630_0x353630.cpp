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

// Function: func_00353630
// Address: 0x353630 - 0x3537a8
void func_00353630_0x353630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00353630_0x353630");
#endif

    switch (ctx->pc) {
        case 0x353630u: goto label_353630;
        case 0x353634u: goto label_353634;
        case 0x353638u: goto label_353638;
        case 0x35363cu: goto label_35363c;
        case 0x353640u: goto label_353640;
        case 0x353644u: goto label_353644;
        case 0x353648u: goto label_353648;
        case 0x35364cu: goto label_35364c;
        case 0x353650u: goto label_353650;
        case 0x353654u: goto label_353654;
        case 0x353658u: goto label_353658;
        case 0x35365cu: goto label_35365c;
        case 0x353660u: goto label_353660;
        case 0x353664u: goto label_353664;
        case 0x353668u: goto label_353668;
        case 0x35366cu: goto label_35366c;
        case 0x353670u: goto label_353670;
        case 0x353674u: goto label_353674;
        case 0x353678u: goto label_353678;
        case 0x35367cu: goto label_35367c;
        case 0x353680u: goto label_353680;
        case 0x353684u: goto label_353684;
        case 0x353688u: goto label_353688;
        case 0x35368cu: goto label_35368c;
        case 0x353690u: goto label_353690;
        case 0x353694u: goto label_353694;
        case 0x353698u: goto label_353698;
        case 0x35369cu: goto label_35369c;
        case 0x3536a0u: goto label_3536a0;
        case 0x3536a4u: goto label_3536a4;
        case 0x3536a8u: goto label_3536a8;
        case 0x3536acu: goto label_3536ac;
        case 0x3536b0u: goto label_3536b0;
        case 0x3536b4u: goto label_3536b4;
        case 0x3536b8u: goto label_3536b8;
        case 0x3536bcu: goto label_3536bc;
        case 0x3536c0u: goto label_3536c0;
        case 0x3536c4u: goto label_3536c4;
        case 0x3536c8u: goto label_3536c8;
        case 0x3536ccu: goto label_3536cc;
        case 0x3536d0u: goto label_3536d0;
        case 0x3536d4u: goto label_3536d4;
        case 0x3536d8u: goto label_3536d8;
        case 0x3536dcu: goto label_3536dc;
        case 0x3536e0u: goto label_3536e0;
        case 0x3536e4u: goto label_3536e4;
        case 0x3536e8u: goto label_3536e8;
        case 0x3536ecu: goto label_3536ec;
        case 0x3536f0u: goto label_3536f0;
        case 0x3536f4u: goto label_3536f4;
        case 0x3536f8u: goto label_3536f8;
        case 0x3536fcu: goto label_3536fc;
        case 0x353700u: goto label_353700;
        case 0x353704u: goto label_353704;
        case 0x353708u: goto label_353708;
        case 0x35370cu: goto label_35370c;
        case 0x353710u: goto label_353710;
        case 0x353714u: goto label_353714;
        case 0x353718u: goto label_353718;
        case 0x35371cu: goto label_35371c;
        case 0x353720u: goto label_353720;
        case 0x353724u: goto label_353724;
        case 0x353728u: goto label_353728;
        case 0x35372cu: goto label_35372c;
        case 0x353730u: goto label_353730;
        case 0x353734u: goto label_353734;
        case 0x353738u: goto label_353738;
        case 0x35373cu: goto label_35373c;
        case 0x353740u: goto label_353740;
        case 0x353744u: goto label_353744;
        case 0x353748u: goto label_353748;
        case 0x35374cu: goto label_35374c;
        case 0x353750u: goto label_353750;
        case 0x353754u: goto label_353754;
        case 0x353758u: goto label_353758;
        case 0x35375cu: goto label_35375c;
        case 0x353760u: goto label_353760;
        case 0x353764u: goto label_353764;
        case 0x353768u: goto label_353768;
        case 0x35376cu: goto label_35376c;
        case 0x353770u: goto label_353770;
        case 0x353774u: goto label_353774;
        case 0x353778u: goto label_353778;
        case 0x35377cu: goto label_35377c;
        case 0x353780u: goto label_353780;
        case 0x353784u: goto label_353784;
        case 0x353788u: goto label_353788;
        case 0x35378cu: goto label_35378c;
        case 0x353790u: goto label_353790;
        case 0x353794u: goto label_353794;
        case 0x353798u: goto label_353798;
        case 0x35379cu: goto label_35379c;
        case 0x3537a0u: goto label_3537a0;
        case 0x3537a4u: goto label_3537a4;
        default: break;
    }

    ctx->pc = 0x353630u;

label_353630:
    // 0x353630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x353630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_353634:
    // 0x353634: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x353634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_353638:
    // 0x353638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35363c:
    // 0x35363c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_353640:
    // 0x353640: 0x26110d30  addiu       $s1, $s0, 0xD30
    ctx->pc = 0x353640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
label_353644:
    // 0x353644: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x353644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_353648:
    // 0x353648: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x353648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35364c:
    // 0x35364c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_353650:
    // 0x353650: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x353650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353654:
    // 0x353654: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x353654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_353658:
    // 0x353658: 0x26030e48  addiu       $v1, $s0, 0xE48
    ctx->pc = 0x353658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3656));
label_35365c:
    // 0x35365c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35365cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_353660:
    // 0x353660: 0x26060df0  addiu       $a2, $s0, 0xDF0
    ctx->pc = 0x353660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3568));
label_353664:
    // 0x353664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x353664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_353668:
    // 0x353668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35366c:
    // 0x35366c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_353670:
    if (ctx->pc == 0x353670u) {
        ctx->pc = 0x353670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35366Cu;
        // 0x353670: 0x8e151fc0  lw          $s5, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353674u;
        goto label_353674;
    }
    ctx->pc = 0x35366Cu;
    {
        const bool branch_taken_0x35366c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35366Cu;
        // 0x353670: 0x8e151fc0  lw          $s5, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35366c) {
            ctx->pc = 0x353688u;
            goto label_353688;
        }
    }
    ctx->pc = 0x353674u;
label_353674:
    // 0x353674: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x353674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_353678:
    // 0x353678: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x353678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_35367c:
    // 0x35367c: 0x8e240164  lw          $a0, 0x164($s1)
    ctx->pc = 0x35367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
label_353680:
    // 0x353680: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x353680u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_353684:
    // 0x353684: 0x64a021  addu        $s4, $v1, $a0
    ctx->pc = 0x353684u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_353688:
    // 0x353688: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x353688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_35368c:
    // 0x35368c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_353690:
    if (ctx->pc == 0x353690u) {
        ctx->pc = 0x353690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35368Cu;
        // 0x353690: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353694u;
        goto label_353694;
    }
    ctx->pc = 0x35368Cu;
    {
        const bool branch_taken_0x35368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35368Cu;
        // 0x353690: 0x8cd30028  lw          $s3, 0x28($a2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35368c) {
            ctx->pc = 0x3536B0u;
            goto label_3536b0;
        }
    }
    ctx->pc = 0x353694u;
label_353694:
    // 0x353694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353698:
    // 0x353698: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x353698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35369c:
    // 0x35369c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35369cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3536a0:
    // 0x3536a0: 0x40f809  jalr        $v0
label_3536a4:
    if (ctx->pc == 0x3536A4u) {
        ctx->pc = 0x3536A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536A0u;
        // 0x3536a4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536A8u;
        goto label_3536a8;
    }
    ctx->pc = 0x3536A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3536A8u);
        ctx->pc = 0x3536A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536A0u;
        // 0x3536a4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3536A0u, 0x3536A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3536A8u;
label_3536a8:
    // 0x3536a8: 0x10000037  b           . + 4 + (0x37 << 2)
label_3536ac:
    if (ctx->pc == 0x3536ACu) {
        ctx->pc = 0x3536ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536A8u;
        // 0x3536ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536B0u;
        goto label_3536b0;
    }
    ctx->pc = 0x3536A8u;
    {
        const bool branch_taken_0x3536a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536A8u;
        // 0x3536ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536a8) {
            ctx->pc = 0x353788u;
            goto label_353788;
        }
    }
    ctx->pc = 0x3536B0u;
label_3536b0:
    // 0x3536b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3536b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3536b4:
    // 0x3536b4: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_3536b8:
    if (ctx->pc == 0x3536B8u) {
        ctx->pc = 0x3536B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536B4u;
        // 0x3536b8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536BCu;
        goto label_3536bc;
    }
    ctx->pc = 0x3536B4u;
    {
        const bool branch_taken_0x3536b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3536b4) {
            ctx->pc = 0x3536B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3536B4u;
            // 0x3536b8: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3536CCu;
            goto label_3536cc;
        }
    }
    ctx->pc = 0x3536BCu;
label_3536bc:
    // 0x3536bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3536bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3536c0:
    // 0x3536c0: 0xc0d6950  jal         func_35A540
label_3536c4:
    if (ctx->pc == 0x3536C4u) {
        ctx->pc = 0x3536C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536C0u;
        // 0x3536c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536C8u;
        goto label_3536c8;
    }
    ctx->pc = 0x3536C0u;
    SET_GPR_U32(ctx, 31, 0x3536C8u);
    ctx->pc = 0x3536C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536C0u;
    // 0x3536c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A540u, 0x3536C0u, 0x3536C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536C8u;
label_3536c8:
    // 0x3536c8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3536cc:
    // 0x3536cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3536ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3536d0:
    // 0x3536d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3536d4:
    if (ctx->pc == 0x3536D4u) {
        ctx->pc = 0x3536D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536D0u;
        // 0x3536d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536D8u;
        goto label_3536d8;
    }
    ctx->pc = 0x3536D0u;
    {
        const bool branch_taken_0x3536d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536D0u;
        // 0x3536d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536d0) {
            ctx->pc = 0x3536E4u;
            goto label_3536e4;
        }
    }
    ctx->pc = 0x3536D8u;
label_3536d8:
    // 0x3536d8: 0xc0d6978  jal         func_35A5E0
label_3536dc:
    if (ctx->pc == 0x3536DCu) {
        ctx->pc = 0x3536DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536D8u;
        // 0x3536dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536E0u;
        goto label_3536e0;
    }
    ctx->pc = 0x3536D8u;
    SET_GPR_U32(ctx, 31, 0x3536E0u);
    ctx->pc = 0x3536DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536D8u;
    // 0x3536dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A5E0u, 0x3536D8u, 0x3536E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536E0u;
label_3536e0:
    // 0x3536e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3536e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3536e4:
    // 0x3536e4: 0xc0d6e94  jal         func_35BA50
label_3536e8:
    if (ctx->pc == 0x3536E8u) {
        ctx->pc = 0x3536E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536E4u;
        // 0x3536e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536ECu;
        goto label_3536ec;
    }
    ctx->pc = 0x3536E4u;
    SET_GPR_U32(ctx, 31, 0x3536ECu);
    ctx->pc = 0x3536E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3536E4u;
    // 0x3536e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BA50u, 0x3536E4u, 0x3536ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3536ECu;
label_3536ec:
    // 0x3536ec: 0x284203e9  slti        $v0, $v0, 0x3E9
    ctx->pc = 0x3536ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_3536f0:
    // 0x3536f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3536f4:
    if (ctx->pc == 0x3536F4u) {
        ctx->pc = 0x3536F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536F0u;
        // 0x3536f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3536F8u;
        goto label_3536f8;
    }
    ctx->pc = 0x3536F0u;
    {
        const bool branch_taken_0x3536f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3536F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3536F0u;
        // 0x3536f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3536f0) {
            ctx->pc = 0x353710u;
            goto label_353710;
        }
    }
    ctx->pc = 0x3536F8u;
label_3536f8:
    // 0x3536f8: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x3536f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3536fc:
    // 0x3536fc: 0x8e040aa4  lw          $a0, 0xAA4($s0)
    ctx->pc = 0x3536fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2724)));
label_353700:
    // 0x353700: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x353700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_353704:
    // 0x353704: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_353708:
    if (ctx->pc == 0x353708u) {
        ctx->pc = 0x353708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353704u;
        // 0x353708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35370Cu;
        goto label_35370c;
    }
    ctx->pc = 0x353704u;
    {
        const bool branch_taken_0x353704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353704u;
        // 0x353708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353704) {
            ctx->pc = 0x353784u;
            goto label_353784;
        }
    }
    ctx->pc = 0x35370Cu;
label_35370c:
    // 0x35370c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_353710:
    // 0x353710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x353710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_353714:
    // 0x353714: 0xc0d6ae6  jal         func_35AB98
label_353718:
    if (ctx->pc == 0x353718u) {
        ctx->pc = 0x353718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353714u;
        // 0x353718: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35371Cu;
        goto label_35371c;
    }
    ctx->pc = 0x353714u;
    SET_GPR_U32(ctx, 31, 0x35371Cu);
    ctx->pc = 0x353718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353714u;
    // 0x353718: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x353714u, 0x35371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35371Cu;
label_35371c:
    // 0x35371c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x35371cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_353720:
    // 0x353720: 0x4600018  bltz        $v1, . + 4 + (0x18 << 2)
label_353724:
    if (ctx->pc == 0x353724u) {
        ctx->pc = 0x353724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353720u;
        // 0x353724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353728u;
        goto label_353728;
    }
    ctx->pc = 0x353720u;
    {
        const bool branch_taken_0x353720 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x353724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353720u;
        // 0x353724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353720) {
            ctx->pc = 0x353784u;
            goto label_353784;
        }
    }
    ctx->pc = 0x353728u;
label_353728:
    // 0x353728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35372c:
    // 0x35372c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_353730:
    // 0x353730: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x353730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_353734:
    // 0x353734: 0xc0d4dea  jal         func_3537A8
label_353738:
    if (ctx->pc == 0x353738u) {
        ctx->pc = 0x353738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353734u;
        // 0x353738: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35373Cu;
        goto label_35373c;
    }
    ctx->pc = 0x353734u;
    SET_GPR_U32(ctx, 31, 0x35373Cu);
    ctx->pc = 0x353738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353734u;
    // 0x353738: 0x27a7000c  addiu       $a3, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3537A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3537A8u, 0x353734u, 0x35373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35373Cu;
label_35373c:
    // 0x35373c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35373cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_353740:
    // 0x353740: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x353740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_353744:
    // 0x353744: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x353744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_353748:
    // 0x353748: 0x2663018  mult        $a2, $s3, $a2
    ctx->pc = 0x353748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_35374c:
    // 0x35374c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_353750:
    if (ctx->pc == 0x353750u) {
        ctx->pc = 0x353750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35374Cu;
        // 0x353750: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x353754u;
        goto label_353754;
    }
    ctx->pc = 0x35374Cu;
    {
        const bool branch_taken_0x35374c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35374c) {
            ctx->pc = 0x353750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35374Cu;
            // 0x353750: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x353754u;
            goto label_353754;
        }
    }
    ctx->pc = 0x353754u;
label_353754:
    // 0x353754: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x353754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_353758:
    // 0x353758: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x353758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35375c:
    // 0x35375c: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x35375cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_353760:
    // 0x353760: 0x3012  mflo        $a2
    ctx->pc = 0x353760u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_353764:
    // 0x353764: 0xc0d9a46  jal         func_366918
label_353768:
    if (ctx->pc == 0x353768u) {
        ctx->pc = 0x353768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353764u;
        // 0x353768: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35376Cu;
        goto label_35376c;
    }
    ctx->pc = 0x353764u;
    SET_GPR_U32(ctx, 31, 0x35376Cu);
    ctx->pc = 0x353768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353764u;
    // 0x353768: 0x2863023  subu        $a2, $s4, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366918u, 0x353764u, 0x35376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35376Cu;
label_35376c:
    // 0x35376c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_353770:
    if (ctx->pc == 0x353770u) {
        ctx->pc = 0x353770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35376Cu;
        // 0x353770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353774u;
        goto label_353774;
    }
    ctx->pc = 0x35376Cu;
    {
        const bool branch_taken_0x35376c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35376Cu;
        // 0x353770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35376c) {
            ctx->pc = 0x353784u;
            goto label_353784;
        }
    }
    ctx->pc = 0x353774u;
label_353774:
    // 0x353774: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x353774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_353778:
    // 0x353778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x353778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35377c:
    // 0x35377c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_353780:
    // 0x353780: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x353780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_353784:
    // 0x353784: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x353784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_353788:
    // 0x353788: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x353788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35378c:
    // 0x35378c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35378cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_353790:
    // 0x353790: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x353790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_353794:
    // 0x353794: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x353794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_353798:
    // 0x353798: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x353798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_35379c:
    // 0x35379c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35379cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3537a0:
    // 0x3537a0: 0x3e00008  jr          $ra
label_3537a4:
    if (ctx->pc == 0x3537A4u) {
        ctx->pc = 0x3537A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537A0u;
        // 0x3537a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3537A8u;
        goto label_fallthrough_0x3537a0;
    }
    ctx->pc = 0x3537A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3537A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3537A0u;
        // 0x3537a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3537A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3537a0:
    ctx->pc = 0x3537A8u;
}
