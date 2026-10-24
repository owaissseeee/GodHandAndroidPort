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

// Function: sceSifExecRequest
// Address: 0x3b3650 - 0x3b3818
void sceSifExecRequest_0x3b3650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifExecRequest_0x3b3650");
#endif

    switch (ctx->pc) {
        case 0x3b3650u: goto label_3b3650;
        case 0x3b3654u: goto label_3b3654;
        case 0x3b3658u: goto label_3b3658;
        case 0x3b365cu: goto label_3b365c;
        case 0x3b3660u: goto label_3b3660;
        case 0x3b3664u: goto label_3b3664;
        case 0x3b3668u: goto label_3b3668;
        case 0x3b366cu: goto label_3b366c;
        case 0x3b3670u: goto label_3b3670;
        case 0x3b3674u: goto label_3b3674;
        case 0x3b3678u: goto label_3b3678;
        case 0x3b367cu: goto label_3b367c;
        case 0x3b3680u: goto label_3b3680;
        case 0x3b3684u: goto label_3b3684;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b368cu: goto label_3b368c;
        case 0x3b3690u: goto label_3b3690;
        case 0x3b3694u: goto label_3b3694;
        case 0x3b3698u: goto label_3b3698;
        case 0x3b369cu: goto label_3b369c;
        case 0x3b36a0u: goto label_3b36a0;
        case 0x3b36a4u: goto label_3b36a4;
        case 0x3b36a8u: goto label_3b36a8;
        case 0x3b36acu: goto label_3b36ac;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b36b4u: goto label_3b36b4;
        case 0x3b36b8u: goto label_3b36b8;
        case 0x3b36bcu: goto label_3b36bc;
        case 0x3b36c0u: goto label_3b36c0;
        case 0x3b36c4u: goto label_3b36c4;
        case 0x3b36c8u: goto label_3b36c8;
        case 0x3b36ccu: goto label_3b36cc;
        case 0x3b36d0u: goto label_3b36d0;
        case 0x3b36d4u: goto label_3b36d4;
        case 0x3b36d8u: goto label_3b36d8;
        case 0x3b36dcu: goto label_3b36dc;
        case 0x3b36e0u: goto label_3b36e0;
        case 0x3b36e4u: goto label_3b36e4;
        case 0x3b36e8u: goto label_3b36e8;
        case 0x3b36ecu: goto label_3b36ec;
        case 0x3b36f0u: goto label_3b36f0;
        case 0x3b36f4u: goto label_3b36f4;
        case 0x3b36f8u: goto label_3b36f8;
        case 0x3b36fcu: goto label_3b36fc;
        case 0x3b3700u: goto label_3b3700;
        case 0x3b3704u: goto label_3b3704;
        case 0x3b3708u: goto label_3b3708;
        case 0x3b370cu: goto label_3b370c;
        case 0x3b3710u: goto label_3b3710;
        case 0x3b3714u: goto label_3b3714;
        case 0x3b3718u: goto label_3b3718;
        case 0x3b371cu: goto label_3b371c;
        case 0x3b3720u: goto label_3b3720;
        case 0x3b3724u: goto label_3b3724;
        case 0x3b3728u: goto label_3b3728;
        case 0x3b372cu: goto label_3b372c;
        case 0x3b3730u: goto label_3b3730;
        case 0x3b3734u: goto label_3b3734;
        case 0x3b3738u: goto label_3b3738;
        case 0x3b373cu: goto label_3b373c;
        case 0x3b3740u: goto label_3b3740;
        case 0x3b3744u: goto label_3b3744;
        case 0x3b3748u: goto label_3b3748;
        case 0x3b374cu: goto label_3b374c;
        case 0x3b3750u: goto label_3b3750;
        case 0x3b3754u: goto label_3b3754;
        case 0x3b3758u: goto label_3b3758;
        case 0x3b375cu: goto label_3b375c;
        case 0x3b3760u: goto label_3b3760;
        case 0x3b3764u: goto label_3b3764;
        case 0x3b3768u: goto label_3b3768;
        case 0x3b376cu: goto label_3b376c;
        case 0x3b3770u: goto label_3b3770;
        case 0x3b3774u: goto label_3b3774;
        case 0x3b3778u: goto label_3b3778;
        case 0x3b377cu: goto label_3b377c;
        case 0x3b3780u: goto label_3b3780;
        case 0x3b3784u: goto label_3b3784;
        case 0x3b3788u: goto label_3b3788;
        case 0x3b378cu: goto label_3b378c;
        case 0x3b3790u: goto label_3b3790;
        case 0x3b3794u: goto label_3b3794;
        case 0x3b3798u: goto label_3b3798;
        case 0x3b379cu: goto label_3b379c;
        case 0x3b37a0u: goto label_3b37a0;
        case 0x3b37a4u: goto label_3b37a4;
        case 0x3b37a8u: goto label_3b37a8;
        case 0x3b37acu: goto label_3b37ac;
        case 0x3b37b0u: goto label_3b37b0;
        case 0x3b37b4u: goto label_3b37b4;
        case 0x3b37b8u: goto label_3b37b8;
        case 0x3b37bcu: goto label_3b37bc;
        case 0x3b37c0u: goto label_3b37c0;
        case 0x3b37c4u: goto label_3b37c4;
        case 0x3b37c8u: goto label_3b37c8;
        case 0x3b37ccu: goto label_3b37cc;
        case 0x3b37d0u: goto label_3b37d0;
        case 0x3b37d4u: goto label_3b37d4;
        case 0x3b37d8u: goto label_3b37d8;
        case 0x3b37dcu: goto label_3b37dc;
        case 0x3b37e0u: goto label_3b37e0;
        case 0x3b37e4u: goto label_3b37e4;
        case 0x3b37e8u: goto label_3b37e8;
        case 0x3b37ecu: goto label_3b37ec;
        case 0x3b37f0u: goto label_3b37f0;
        case 0x3b37f4u: goto label_3b37f4;
        case 0x3b37f8u: goto label_3b37f8;
        case 0x3b37fcu: goto label_3b37fc;
        case 0x3b3800u: goto label_3b3800;
        case 0x3b3804u: goto label_3b3804;
        case 0x3b3808u: goto label_3b3808;
        case 0x3b380cu: goto label_3b380c;
        case 0x3b3810u: goto label_3b3810;
        case 0x3b3814u: goto label_3b3814;
        default: break;
    }

    ctx->pc = 0x3b3650u;

label_3b3650:
    // 0x3b3650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b3650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3b3654:
    // 0x3b3654: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3b3654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_3b3658:
    // 0x3b3658: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3b3658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3b365c:
    // 0x3b365c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3b365cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3660:
    // 0x3b3660: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3b3660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_3b3664:
    // 0x3b3664: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b3664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3b3668:
    // 0x3b3668: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b366c:
    // 0x3b366c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x3b366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_3b3670:
    // 0x3b3670: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3b3670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3b3674:
    // 0x3b3674: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b3678:
    // 0x3b3678: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3b3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3b367c:
    // 0x3b367c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3b367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3680:
    // 0x3b3680: 0x40f809  jalr        $v0
label_3b3684:
    if (ctx->pc == 0x3B3684u) {
        ctx->pc = 0x3B3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3680u;
        // 0x3b3684: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3688u;
        goto label_3b3688;
    }
    ctx->pc = 0x3B3680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3688u);
        ctx->pc = 0x3B3684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3680u;
        // 0x3b3684: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3680u, 0x3B3688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3688u;
label_3b3688:
    // 0x3b3688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b3688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b368c:
    // 0x3b368c: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_3b3690:
    if (ctx->pc == 0x3B3690u) {
        ctx->pc = 0x3B3690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B368Cu;
        // 0x3b3690: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3694u;
        goto label_3b3694;
    }
    ctx->pc = 0x3B368Cu;
    {
        const bool branch_taken_0x3b368c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b368c) {
            ctx->pc = 0x3B3690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B368Cu;
            // 0x3b3690: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3694u;
            goto label_3b3694;
        }
    }
    ctx->pc = 0x3B3694u;
label_3b3694:
    // 0x3b3694: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3b3694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3b3698:
    // 0x3b3698: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_3b369c:
    if (ctx->pc == 0x3B369Cu) {
        ctx->pc = 0x3B36A0u;
        goto label_3b36a0;
    }
    ctx->pc = 0x3B3698u;
    {
        const bool branch_taken_0x3b3698 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x3b3698) {
            ctx->pc = 0x3B36A8u;
            goto label_3b36a8;
        }
    }
    ctx->pc = 0x3B36A0u;
label_3b36a0:
    // 0x3b36a0: 0xc0eca14  jal         func_3B2850
label_3b36a4:
    if (ctx->pc == 0x3B36A4u) {
        ctx->pc = 0x3B36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36A0u;
        // 0x3b36a4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36A8u;
        goto label_3b36a8;
    }
    ctx->pc = 0x3B36A0u;
    SET_GPR_U32(ctx, 31, 0x3B36A8u);
    ctx->pc = 0x3B36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36A0u;
    // 0x3b36a4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B36A0u, 0x3B36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36A8u;
label_3b36a8:
    // 0x3b36a8: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
label_3b36ac:
    if (ctx->pc == 0x3B36ACu) {
        ctx->pc = 0x3B36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36A8u;
        // 0x3b36ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36B0u;
        goto label_3b36b0;
    }
    ctx->pc = 0x3B36A8u;
    {
        const bool branch_taken_0x3b36a8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x3B36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36A8u;
        // 0x3b36ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36a8) {
            ctx->pc = 0x3B36B8u;
            goto label_3b36b8;
        }
    }
    ctx->pc = 0x3B36B0u;
label_3b36b0:
    // 0x3b36b0: 0xc0eca14  jal         func_3B2850
label_3b36b4:
    if (ctx->pc == 0x3B36B4u) {
        ctx->pc = 0x3B36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36B0u;
        // 0x3b36b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36B8u;
        goto label_3b36b8;
    }
    ctx->pc = 0x3B36B0u;
    SET_GPR_U32(ctx, 31, 0x3B36B8u);
    ctx->pc = 0x3B36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36B0u;
    // 0x3b36b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x3B36B0u, 0x3B36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36B8u;
label_3b36b8:
    // 0x3b36b8: 0xc0ed8e8  jal         func_3B63A0
label_3b36bc:
    if (ctx->pc == 0x3B36BCu) {
        ctx->pc = 0x3B36C0u;
        goto label_3b36c0;
    }
    ctx->pc = 0x3B36B8u;
    SET_GPR_U32(ctx, 31, 0x3B36C0u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B36B8u, 0x3B36C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36C0u;
label_3b36c0:
    // 0x3b36c0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x3b36c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_3b36c4:
    // 0x3b36c4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3b36c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_3b36c8:
    // 0x3b36c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b36cc:
    if (ctx->pc == 0x3B36CCu) {
        ctx->pc = 0x3B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36C8u;
        // 0x3b36cc: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36D0u;
        goto label_3b36d0;
    }
    ctx->pc = 0x3B36C8u;
    {
        const bool branch_taken_0x3b36c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36C8u;
        // 0x3b36cc: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36c8) {
            ctx->pc = 0x3B36E4u;
            goto label_3b36e4;
        }
    }
    ctx->pc = 0x3B36D0u;
label_3b36d0:
    // 0x3b36d0: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
label_3b36d4:
    // 0x3b36d4: 0xc0ecaf0  jal         func_3B2BC0
label_3b36d8:
    if (ctx->pc == 0x3B36D8u) {
        ctx->pc = 0x3B36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36D4u;
        // 0x3b36d8: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36DCu;
        goto label_3b36dc;
    }
    ctx->pc = 0x3B36D4u;
    SET_GPR_U32(ctx, 31, 0x3B36DCu);
    ctx->pc = 0x3B36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36D4u;
    // 0x3b36d8: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2BC0u, 0x3B36D4u, 0x3B36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36DCu;
label_3b36dc:
    // 0x3b36dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3b36e0:
    if (ctx->pc == 0x3B36E0u) {
        ctx->pc = 0x3B36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36DCu;
        // 0x3b36e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36E4u;
        goto label_3b36e4;
    }
    ctx->pc = 0x3B36DCu;
    {
        const bool branch_taken_0x3b36dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36DCu;
        // 0x3b36e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36dc) {
            ctx->pc = 0x3B36F4u;
            goto label_3b36f4;
        }
    }
    ctx->pc = 0x3B36E4u;
label_3b36e4:
    // 0x3b36e4: 0x3c040078  lui         $a0, 0x78
    ctx->pc = 0x3b36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)120 << 16));
label_3b36e8:
    // 0x3b36e8: 0xc0ecae4  jal         func_3B2B90
label_3b36ec:
    if (ctx->pc == 0x3B36ECu) {
        ctx->pc = 0x3B36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36E8u;
        // 0x3b36ec: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B36F0u;
        goto label_3b36f0;
    }
    ctx->pc = 0x3B36E8u;
    SET_GPR_U32(ctx, 31, 0x3B36F0u);
    ctx->pc = 0x3B36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36E8u;
    // 0x3b36ec: 0x2484ff40  addiu       $a0, $a0, -0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B90u, 0x3B36E8u, 0x3B36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36F0u;
label_3b36f0:
    // 0x3b36f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b36f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b36f4:
    // 0x3b36f4: 0xc0ed8fc  jal         func_3B63F0
label_3b36f8:
    if (ctx->pc == 0x3B36F8u) {
        ctx->pc = 0x3B36FCu;
        goto label_3b36fc;
    }
    ctx->pc = 0x3B36F4u;
    SET_GPR_U32(ctx, 31, 0x3B36FCu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B36F4u, 0x3B36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36FCu;
label_3b36fc:
    // 0x3b36fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b36fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3b3700:
    // 0x3b3700: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x3b3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3b3704:
    // 0x3b3704: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x3b3704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_3b3708:
    // 0x3b3708: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3b3708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3b370c:
    // 0x3b370c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x3b370cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_3b3710:
    // 0x3b3710: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3b3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3b3714:
    // 0x3b3714: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_3b3718:
    if (ctx->pc == 0x3B3718u) {
        ctx->pc = 0x3B3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3714u;
        // 0x3b3718: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B371Cu;
        goto label_3b371c;
    }
    ctx->pc = 0x3B3714u;
    {
        const bool branch_taken_0x3b3714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3714) {
            ctx->pc = 0x3B3718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3714u;
            // 0x3b3718: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3750u;
            goto label_3b3750;
        }
    }
    ctx->pc = 0x3B371Cu;
label_3b371c:
    // 0x3b371c: 0x0  nop
    ctx->pc = 0x3b371cu;
    // NOP
label_3b3720:
    // 0x3b3720: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b3720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3b3724:
    // 0x3b3724: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x3b3724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b3728:
    // 0x3b3728: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3b3728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3b372c:
    // 0x3b372c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b372cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3730:
    // 0x3b3730: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b3730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3b3734:
    // 0x3b3734: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b3734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3738:
    // 0x3b3738: 0xc0ec9a2  jal         func_3B2688
label_3b373c:
    if (ctx->pc == 0x3B373Cu) {
        ctx->pc = 0x3B373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3738u;
        // 0x3b373c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3740u;
        goto label_3b3740;
    }
    ctx->pc = 0x3B3738u;
    SET_GPR_U32(ctx, 31, 0x3B3740u);
    ctx->pc = 0x3B373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3738u;
    // 0x3b373c: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2688u, 0x3B3738u, 0x3B3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3740u;
label_3b3740:
    // 0x3b3740: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_3b3744:
    if (ctx->pc == 0x3B3744u) {
        ctx->pc = 0x3B3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3740u;
        // 0x3b3744: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3748u;
        goto label_3b3748;
    }
    ctx->pc = 0x3B3740u;
    {
        const bool branch_taken_0x3b3740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3740u;
        // 0x3b3744: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3740) {
            ctx->pc = 0x3B3720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3720;
        }
    }
    ctx->pc = 0x3B3748u;
label_3b3748:
    // 0x3b3748: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3b374c:
    if (ctx->pc == 0x3B374Cu) {
        ctx->pc = 0x3B374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3748u;
        // 0x3b374c: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3750u;
        goto label_3b3750;
    }
    ctx->pc = 0x3B3748u;
    {
        const bool branch_taken_0x3b3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3748u;
        // 0x3b374c: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3748) {
            ctx->pc = 0x3B37FCu;
            goto label_3b37fc;
        }
    }
    ctx->pc = 0x3B3750u;
label_3b3750:
    // 0x3b3750: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b3750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3754:
    // 0x3b3754: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_3b3758:
    if (ctx->pc == 0x3B3758u) {
        ctx->pc = 0x3B3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3754u;
        // 0x3b3758: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B375Cu;
        goto label_3b375c;
    }
    ctx->pc = 0x3B3754u;
    {
        const bool branch_taken_0x3b3754 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x3B3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3754u;
        // 0x3b3758: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3754) {
            ctx->pc = 0x3B3774u;
            goto label_3b3774;
        }
    }
    ctx->pc = 0x3B375Cu;
label_3b375c:
    // 0x3b375c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3b375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3b3760:
    // 0x3b3760: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3b3760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3764:
    // 0x3b3764: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3b3764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_3b3768:
    // 0x3b3768: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3b3768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3b376c:
    // 0x3b376c: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x3b376cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_3b3770:
    // 0x3b3770: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3b3770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3b3774:
    // 0x3b3774: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x3b3774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_3b3778:
    // 0x3b3778: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x3b3778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3b377c:
    // 0x3b377c: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x3b377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_3b3780:
    // 0x3b3780: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x3b3780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_3b3784:
    // 0x3b3784: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3b3784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3b3788:
    // 0x3b3788: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3b3788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3b378c:
    // 0x3b378c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3b378cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_3b3790:
    // 0x3b3790: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x3b3790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_3b3794:
    // 0x3b3794: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b3794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3b3798:
    // 0x3b3798: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3b3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3b379c:
    // 0x3b379c: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x3b379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_3b37a0:
    // 0x3b37a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b37a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3b37a4:
    // 0x3b37a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3b37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3b37a8:
    // 0x3b37a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b37a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b37ac:
    // 0x3b37ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b37acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3b37b0:
    // 0x3b37b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b37b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b37b4:
    // 0x3b37b4: 0x0  nop
    ctx->pc = 0x3b37b4u;
    // NOP
label_3b37b8:
    // 0x3b37b8: 0xc0ec852  jal         func_3B2148
label_3b37bc:
    if (ctx->pc == 0x3B37BCu) {
        ctx->pc = 0x3B37BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37B8u;
        // 0x3b37bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37C0u;
        goto label_3b37c0;
    }
    ctx->pc = 0x3B37B8u;
    SET_GPR_U32(ctx, 31, 0x3B37C0u);
    ctx->pc = 0x3B37BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B37B8u;
    // 0x3b37bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x3B37B8u, 0x3B37C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B37C0u;
label_3b37c0:
    // 0x3b37c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3b37c4:
    if (ctx->pc == 0x3B37C4u) {
        ctx->pc = 0x3B37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37C0u;
        // 0x3b37c4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37C8u;
        goto label_3b37c8;
    }
    ctx->pc = 0x3B37C0u;
    {
        const bool branch_taken_0x3b37c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37C0u;
        // 0x3b37c4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b37c0) {
            ctx->pc = 0x3B37F8u;
            goto label_3b37f8;
        }
    }
    ctx->pc = 0x3B37C8u;
label_3b37c8:
    // 0x3b37c8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3b37c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3b37cc:
    // 0x3b37cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b37ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b37d0:
    // 0x3b37d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b37d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b37d4:
    // 0x3b37d4: 0x0  nop
    ctx->pc = 0x3b37d4u;
    // NOP
label_3b37d8:
    // 0x3b37d8: 0x0  nop
    ctx->pc = 0x3b37d8u;
    // NOP
label_3b37dc:
    // 0x3b37dc: 0x0  nop
    ctx->pc = 0x3b37dcu;
    // NOP
label_3b37e0:
    // 0x3b37e0: 0x0  nop
    ctx->pc = 0x3b37e0u;
    // NOP
label_3b37e4:
    // 0x3b37e4: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_3b37e8:
    if (ctx->pc == 0x3B37E8u) {
        ctx->pc = 0x3B37ECu;
        goto label_3b37ec;
    }
    ctx->pc = 0x3B37E4u;
    {
        const bool branch_taken_0x3b37e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3b37e4) {
            ctx->pc = 0x3B37D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b37d0;
        }
    }
    ctx->pc = 0x3B37ECu;
label_3b37ec:
    // 0x3b37ec: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_3b37f0:
    if (ctx->pc == 0x3B37F0u) {
        ctx->pc = 0x3B37F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B37ECu;
        // 0x3b37f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B37F4u;
        goto label_3b37f4;
    }
    ctx->pc = 0x3B37ECu;
    {
        const bool branch_taken_0x3b37ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b37ec) {
            ctx->pc = 0x3B37F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B37ECu;
            // 0x3b37f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B37B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b37b8;
        }
    }
    ctx->pc = 0x3B37F4u;
label_3b37f4:
    // 0x3b37f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b37f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b37f8:
    // 0x3b37f8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3b37f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b37fc:
    // 0x3b37fc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x3b37fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3800:
    // 0x3b3800: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3b3800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b3804:
    // 0x3b3804: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3b3804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3808:
    // 0x3b3808: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3b3808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b380c:
    // 0x3b380c: 0x3e00008  jr          $ra
label_3b3810:
    if (ctx->pc == 0x3B3810u) {
        ctx->pc = 0x3B3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B380Cu;
        // 0x3b3810: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3814u;
        goto label_3b3814;
    }
    ctx->pc = 0x3B380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B380Cu;
        // 0x3b3810: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3814u;
label_3b3814:
    // 0x3b3814: 0x0  nop
    ctx->pc = 0x3b3814u;
    // NOP
    ctx->pc = 0x3b3818u;
}
