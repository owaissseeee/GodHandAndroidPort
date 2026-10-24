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

// Function: cScenario_move
// Address: 0x2c3678 - 0x2c3818
void cScenario_move_0x2c3678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_move_0x2c3678");
#endif

    switch (ctx->pc) {
        case 0x2c3678u: goto label_2c3678;
        case 0x2c367cu: goto label_2c367c;
        case 0x2c3680u: goto label_2c3680;
        case 0x2c3684u: goto label_2c3684;
        case 0x2c3688u: goto label_2c3688;
        case 0x2c368cu: goto label_2c368c;
        case 0x2c3690u: goto label_2c3690;
        case 0x2c3694u: goto label_2c3694;
        case 0x2c3698u: goto label_2c3698;
        case 0x2c369cu: goto label_2c369c;
        case 0x2c36a0u: goto label_2c36a0;
        case 0x2c36a4u: goto label_2c36a4;
        case 0x2c36a8u: goto label_2c36a8;
        case 0x2c36acu: goto label_2c36ac;
        case 0x2c36b0u: goto label_2c36b0;
        case 0x2c36b4u: goto label_2c36b4;
        case 0x2c36b8u: goto label_2c36b8;
        case 0x2c36bcu: goto label_2c36bc;
        case 0x2c36c0u: goto label_2c36c0;
        case 0x2c36c4u: goto label_2c36c4;
        case 0x2c36c8u: goto label_2c36c8;
        case 0x2c36ccu: goto label_2c36cc;
        case 0x2c36d0u: goto label_2c36d0;
        case 0x2c36d4u: goto label_2c36d4;
        case 0x2c36d8u: goto label_2c36d8;
        case 0x2c36dcu: goto label_2c36dc;
        case 0x2c36e0u: goto label_2c36e0;
        case 0x2c36e4u: goto label_2c36e4;
        case 0x2c36e8u: goto label_2c36e8;
        case 0x2c36ecu: goto label_2c36ec;
        case 0x2c36f0u: goto label_2c36f0;
        case 0x2c36f4u: goto label_2c36f4;
        case 0x2c36f8u: goto label_2c36f8;
        case 0x2c36fcu: goto label_2c36fc;
        case 0x2c3700u: goto label_2c3700;
        case 0x2c3704u: goto label_2c3704;
        case 0x2c3708u: goto label_2c3708;
        case 0x2c370cu: goto label_2c370c;
        case 0x2c3710u: goto label_2c3710;
        case 0x2c3714u: goto label_2c3714;
        case 0x2c3718u: goto label_2c3718;
        case 0x2c371cu: goto label_2c371c;
        case 0x2c3720u: goto label_2c3720;
        case 0x2c3724u: goto label_2c3724;
        case 0x2c3728u: goto label_2c3728;
        case 0x2c372cu: goto label_2c372c;
        case 0x2c3730u: goto label_2c3730;
        case 0x2c3734u: goto label_2c3734;
        case 0x2c3738u: goto label_2c3738;
        case 0x2c373cu: goto label_2c373c;
        case 0x2c3740u: goto label_2c3740;
        case 0x2c3744u: goto label_2c3744;
        case 0x2c3748u: goto label_2c3748;
        case 0x2c374cu: goto label_2c374c;
        case 0x2c3750u: goto label_2c3750;
        case 0x2c3754u: goto label_2c3754;
        case 0x2c3758u: goto label_2c3758;
        case 0x2c375cu: goto label_2c375c;
        case 0x2c3760u: goto label_2c3760;
        case 0x2c3764u: goto label_2c3764;
        case 0x2c3768u: goto label_2c3768;
        case 0x2c376cu: goto label_2c376c;
        case 0x2c3770u: goto label_2c3770;
        case 0x2c3774u: goto label_2c3774;
        case 0x2c3778u: goto label_2c3778;
        case 0x2c377cu: goto label_2c377c;
        case 0x2c3780u: goto label_2c3780;
        case 0x2c3784u: goto label_2c3784;
        case 0x2c3788u: goto label_2c3788;
        case 0x2c378cu: goto label_2c378c;
        case 0x2c3790u: goto label_2c3790;
        case 0x2c3794u: goto label_2c3794;
        case 0x2c3798u: goto label_2c3798;
        case 0x2c379cu: goto label_2c379c;
        case 0x2c37a0u: goto label_2c37a0;
        case 0x2c37a4u: goto label_2c37a4;
        case 0x2c37a8u: goto label_2c37a8;
        case 0x2c37acu: goto label_2c37ac;
        case 0x2c37b0u: goto label_2c37b0;
        case 0x2c37b4u: goto label_2c37b4;
        case 0x2c37b8u: goto label_2c37b8;
        case 0x2c37bcu: goto label_2c37bc;
        case 0x2c37c0u: goto label_2c37c0;
        case 0x2c37c4u: goto label_2c37c4;
        case 0x2c37c8u: goto label_2c37c8;
        case 0x2c37ccu: goto label_2c37cc;
        case 0x2c37d0u: goto label_2c37d0;
        case 0x2c37d4u: goto label_2c37d4;
        case 0x2c37d8u: goto label_2c37d8;
        case 0x2c37dcu: goto label_2c37dc;
        case 0x2c37e0u: goto label_2c37e0;
        case 0x2c37e4u: goto label_2c37e4;
        case 0x2c37e8u: goto label_2c37e8;
        case 0x2c37ecu: goto label_2c37ec;
        case 0x2c37f0u: goto label_2c37f0;
        case 0x2c37f4u: goto label_2c37f4;
        case 0x2c37f8u: goto label_2c37f8;
        case 0x2c37fcu: goto label_2c37fc;
        case 0x2c3800u: goto label_2c3800;
        case 0x2c3804u: goto label_2c3804;
        case 0x2c3808u: goto label_2c3808;
        case 0x2c380cu: goto label_2c380c;
        case 0x2c3810u: goto label_2c3810;
        case 0x2c3814u: goto label_2c3814;
        default: break;
    }

    ctx->pc = 0x2c3678u;

label_2c3678:
    // 0x2c3678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c367c:
    // 0x2c367c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2c3680:
    // 0x2c3680: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c3684:
    // 0x2c3684: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c3684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c3688:
    // 0x2c3688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c368c:
    // 0x2c368c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c3690:
    // 0x2c3690: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_2c3694:
    // 0x2c3694: 0x962205b0  lhu         $v0, 0x5B0($s1)
    ctx->pc = 0x2c3694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1456)));
label_2c3698:
    // 0x2c3698: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
label_2c369c:
    if (ctx->pc == 0x2C369Cu) {
        ctx->pc = 0x2C369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3698u;
        // 0x2c369c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36A0u;
        goto label_2c36a0;
    }
    ctx->pc = 0x2C3698u;
    {
        const bool branch_taken_0x2c3698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3698u;
        // 0x2c369c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3698) {
            ctx->pc = 0x2C3734u;
            goto label_2c3734;
        }
    }
    ctx->pc = 0x2C36A0u;
label_2c36a0:
    // 0x2c36a0: 0xc0b6dac  jal         func_2DB6B0
label_2c36a4:
    if (ctx->pc == 0x2C36A4u) {
        ctx->pc = 0x2C36A8u;
        goto label_2c36a8;
    }
    ctx->pc = 0x2C36A0u;
    SET_GPR_U32(ctx, 31, 0x2C36A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C36A0u, 0x2C36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36A8u;
label_2c36a8:
    // 0x2c36a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2c36ac:
    if (ctx->pc == 0x2C36ACu) {
        ctx->pc = 0x2C36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36A8u;
        // 0x2c36ac: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36B0u;
        goto label_2c36b0;
    }
    ctx->pc = 0x2C36A8u;
    {
        const bool branch_taken_0x2c36a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36A8u;
        // 0x2c36ac: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36a8) {
            ctx->pc = 0x2C3738u;
            goto label_2c3738;
        }
    }
    ctx->pc = 0x2C36B0u;
label_2c36b0:
    // 0x2c36b0: 0x9e020048  lwu         $v0, 0x48($s0)
    ctx->pc = 0x2c36b0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c36b4:
    // 0x2c36b4: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2c36b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_2c36b8:
    // 0x2c36b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c36b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c36bc:
    // 0x2c36bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c36c0:
    if (ctx->pc == 0x2C36C0u) {
        ctx->pc = 0x2C36C4u;
        goto label_2c36c4;
    }
    ctx->pc = 0x2C36BCu;
    {
        const bool branch_taken_0x2c36bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c36bc) {
            ctx->pc = 0x2C3700u;
            goto label_2c3700;
        }
    }
    ctx->pc = 0x2C36C4u;
label_2c36c4:
    // 0x2c36c4: 0xc0b6dac  jal         func_2DB6B0
label_2c36c8:
    if (ctx->pc == 0x2C36C8u) {
        ctx->pc = 0x2C36CCu;
        goto label_2c36cc;
    }
    ctx->pc = 0x2C36C4u;
    SET_GPR_U32(ctx, 31, 0x2C36CCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C36C4u, 0x2C36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36CCu;
label_2c36cc:
    // 0x2c36cc: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x2c36ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_2c36d0:
    // 0x2c36d0: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
label_2c36d4:
    if (ctx->pc == 0x2C36D4u) {
        ctx->pc = 0x2C36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36D0u;
        // 0x2c36d4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36D8u;
        goto label_2c36d8;
    }
    ctx->pc = 0x2C36D0u;
    {
        const bool branch_taken_0x2c36d0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2C36D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36D0u;
        // 0x2c36d4: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36d0) {
            ctx->pc = 0x2C3738u;
            goto label_2c3738;
        }
    }
    ctx->pc = 0x2C36D8u;
label_2c36d8:
    // 0x2c36d8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c36dc:
    // 0x2c36dc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c36e0:
    // 0x2c36e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c36e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2c36e4:
    // 0x2c36e4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2c36e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2c36e8:
    // 0x2c36e8: 0xc0b10e4  jal         func_2C4390
label_2c36ec:
    if (ctx->pc == 0x2C36ECu) {
        ctx->pc = 0x2C36ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36E8u;
        // 0x2c36ec: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C36F0u;
        goto label_2c36f0;
    }
    ctx->pc = 0x2C36E8u;
    SET_GPR_U32(ctx, 31, 0x2C36F0u);
    ctx->pc = 0x2C36ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C36E8u;
    // 0x2c36ec: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4390u, 0x2C36E8u, 0x2C36F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36F0u;
label_2c36f0:
    // 0x2c36f0: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c36f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2c36f4:
    // 0x2c36f4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2c36f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2c36f8:
    // 0x2c36f8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c36fc:
    if (ctx->pc == 0x2C36FCu) {
        ctx->pc = 0x2C36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F8u;
        // 0x2c36fc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3700u;
        goto label_2c3700;
    }
    ctx->pc = 0x2C36F8u;
    {
        const bool branch_taken_0x2c36f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C36F8u;
        // 0x2c36fc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c36f8) {
            ctx->pc = 0x2C3730u;
            goto label_2c3730;
        }
    }
    ctx->pc = 0x2C3700u;
label_2c3700:
    // 0x2c3700: 0xc0b6dac  jal         func_2DB6B0
label_2c3704:
    if (ctx->pc == 0x2C3704u) {
        ctx->pc = 0x2C3708u;
        goto label_2c3708;
    }
    ctx->pc = 0x2C3700u;
    SET_GPR_U32(ctx, 31, 0x2C3708u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3700u, 0x2C3708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3708u;
label_2c3708:
    // 0x2c3708: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x2c3708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_2c370c:
    // 0x2c370c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_2c3710:
    if (ctx->pc == 0x2C3710u) {
        ctx->pc = 0x2C3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C370Cu;
        // 0x2c3710: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3714u;
        goto label_2c3714;
    }
    ctx->pc = 0x2C370Cu;
    {
        const bool branch_taken_0x2c370c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2C3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C370Cu;
        // 0x2c3710: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c370c) {
            ctx->pc = 0x2C3734u;
            goto label_2c3734;
        }
    }
    ctx->pc = 0x2C3714u;
label_2c3714:
    // 0x2c3714: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c3718:
    // 0x2c3718: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x2c3718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
label_2c371c:
    // 0x2c371c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c3720:
    // 0x2c3720: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3724:
    // 0x2c3724: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2c3724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2c3728:
    // 0x2c3728: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2c372c:
    // 0x2c372c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3730:
    // 0x2c3730: 0xae2205e0  sw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c3730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 2));
label_2c3734:
    // 0x2c3734: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c3734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2c3738:
    // 0x2c3738: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_2c373c:
    // 0x2c373c: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
label_2c3740:
    if (ctx->pc == 0x2C3740u) {
        ctx->pc = 0x2C3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C373Cu;
        // 0x2c3740: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3744u;
        goto label_2c3744;
    }
    ctx->pc = 0x2C373Cu;
    {
        const bool branch_taken_0x2c373c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C3740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C373Cu;
        // 0x2c3740: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c373c) {
            ctx->pc = 0x2C3800u;
            goto label_2c3800;
        }
    }
    ctx->pc = 0x2C3744u;
label_2c3744:
    // 0x2c3744: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2c3748:
    // 0x2c3748: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2c3748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2c374c:
    // 0x2c374c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3750:
    // 0x2c3750: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_2c3754:
    if (ctx->pc == 0x2C3754u) {
        ctx->pc = 0x2C3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3750u;
        // 0x2c3754: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3758u;
        goto label_2c3758;
    }
    ctx->pc = 0x2C3750u;
    {
        const bool branch_taken_0x2c3750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3750) {
            ctx->pc = 0x2C3754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3750u;
            // 0x2c3754: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C3758u;
label_2c3758:
    // 0x2c3758: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x2c3758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_2c375c:
    // 0x2c375c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2c375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_2c3760:
    // 0x2c3760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c3764:
    // 0x2c3764: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_2c3768:
    if (ctx->pc == 0x2C3768u) {
        ctx->pc = 0x2C3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3764u;
        // 0x2c3768: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C376Cu;
        goto label_2c376c;
    }
    ctx->pc = 0x2C3764u;
    {
        const bool branch_taken_0x2c3764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3764) {
            ctx->pc = 0x2C3768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3764u;
            // 0x2c3768: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C376Cu;
label_2c376c:
    // 0x2c376c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2c376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2c3770:
    // 0x2c3770: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c3770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2c3774:
    // 0x2c3774: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c3774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3778:
    // 0x2c3778: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2c377c:
    if (ctx->pc == 0x2C377Cu) {
        ctx->pc = 0x2C377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3778u;
        // 0x2c377c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3780u;
        goto label_2c3780;
    }
    ctx->pc = 0x2C3778u;
    {
        const bool branch_taken_0x2c3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3778) {
            ctx->pc = 0x2C377Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3778u;
            // 0x2c377c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C3780u;
label_2c3780:
    // 0x2c3780: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c3780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c3784:
    // 0x2c3784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c3788:
    // 0x2c3788: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2c378c:
    if (ctx->pc == 0x2C378Cu) {
        ctx->pc = 0x2C378Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3788u;
        // 0x2c378c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3790u;
        goto label_2c3790;
    }
    ctx->pc = 0x2C3788u;
    {
        const bool branch_taken_0x2c3788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3788) {
            ctx->pc = 0x2C378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3788u;
            // 0x2c378c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C3790u;
label_2c3790:
    // 0x2c3790: 0x9e020048  lwu         $v0, 0x48($s0)
    ctx->pc = 0x2c3790u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c3794:
    // 0x2c3794: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2c3794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_2c3798:
    // 0x2c3798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c379c:
    // 0x2c379c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c37a0:
    if (ctx->pc == 0x2C37A0u) {
        ctx->pc = 0x2C37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C379Cu;
        // 0x2c37a0: 0x2611001c  addiu       $s1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37A4u;
        goto label_2c37a4;
    }
    ctx->pc = 0x2C379Cu;
    {
        const bool branch_taken_0x2c379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C379Cu;
        // 0x2c37a0: 0x2611001c  addiu       $s1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c379c) {
            ctx->pc = 0x2C37E0u;
            goto label_2c37e0;
        }
    }
    ctx->pc = 0x2C37A4u;
label_2c37a4:
    // 0x2c37a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c37a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2c37a8:
    // 0x2c37a8: 0xc0b053e  jal         func_2C14F8
label_2c37ac:
    if (ctx->pc == 0x2C37ACu) {
        ctx->pc = 0x2C37ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37A8u;
        // 0x2c37ac: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37B0u;
        goto label_2c37b0;
    }
    ctx->pc = 0x2C37A8u;
    SET_GPR_U32(ctx, 31, 0x2C37B0u);
    ctx->pc = 0x2C37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37A8u;
    // 0x2c37ac: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C14F8u, 0x2C37A8u, 0x2C37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37B0u;
label_2c37b0:
    // 0x2c37b0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2c37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2c37b4:
    // 0x2c37b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2c37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c37b8:
    // 0x2c37b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c37bc:
    if (ctx->pc == 0x2C37BCu) {
        ctx->pc = 0x2C37C0u;
        goto label_2c37c0;
    }
    ctx->pc = 0x2C37B8u;
    {
        const bool branch_taken_0x2c37b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c37b8) {
            ctx->pc = 0x2C37C8u;
            goto label_2c37c8;
        }
    }
    ctx->pc = 0x2C37C0u;
label_2c37c0:
    // 0x2c37c0: 0x40f809  jalr        $v0
label_2c37c4:
    if (ctx->pc == 0x2C37C4u) {
        ctx->pc = 0x2C37C8u;
        goto label_2c37c8;
    }
    ctx->pc = 0x2C37C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C37C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C37C0u, 0x2C37C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C37C8u;
label_2c37c8:
    // 0x2c37c8: 0xc0b54d6  jal         func_2D5358
label_2c37cc:
    if (ctx->pc == 0x2C37CCu) {
        ctx->pc = 0x2C37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37C8u;
        // 0x2c37cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37D0u;
        goto label_2c37d0;
    }
    ctx->pc = 0x2C37C8u;
    SET_GPR_U32(ctx, 31, 0x2C37D0u);
    ctx->pc = 0x2C37CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37C8u;
    // 0x2c37cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5358u, 0x2C37C8u, 0x2C37D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37D0u;
label_2c37d0:
    // 0x2c37d0: 0xc0b1386  jal         func_2C4E18
label_2c37d4:
    if (ctx->pc == 0x2C37D4u) {
        ctx->pc = 0x2C37D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D0u;
        // 0x2c37d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37D8u;
        goto label_2c37d8;
    }
    ctx->pc = 0x2C37D0u;
    SET_GPR_U32(ctx, 31, 0x2C37D8u);
    ctx->pc = 0x2C37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37D0u;
    // 0x2c37d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4E18u, 0x2C37D0u, 0x2C37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37D8u;
label_2c37d8:
    // 0x2c37d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2c37dc:
    if (ctx->pc == 0x2C37DCu) {
        ctx->pc = 0x2C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D8u;
        // 0x2c37dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C37E0u;
        goto label_2c37e0;
    }
    ctx->pc = 0x2C37D8u;
    {
        const bool branch_taken_0x2c37d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37D8u;
        // 0x2c37dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37d8) {
            ctx->pc = 0x2C3804u;
            goto label_2c3804;
        }
    }
    ctx->pc = 0x2C37E0u;
label_2c37e0:
    // 0x2c37e0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2c37e4:
    // 0x2c37e4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2c37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c37e8:
    // 0x2c37e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2c37ec:
    if (ctx->pc == 0x2C37ECu) {
        ctx->pc = 0x2C37F0u;
        goto label_2c37f0;
    }
    ctx->pc = 0x2C37E8u;
    {
        const bool branch_taken_0x2c37e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c37e8) {
            ctx->pc = 0x2C37F8u;
            goto label_2c37f8;
        }
    }
    ctx->pc = 0x2C37F0u;
label_2c37f0:
    // 0x2c37f0: 0x80f809  jalr        $a0
label_2c37f4:
    if (ctx->pc == 0x2C37F4u) {
        ctx->pc = 0x2C37F8u;
        goto label_2c37f8;
    }
    ctx->pc = 0x2C37F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x2C37F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C37F0u, 0x2C37F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C37F8u;
label_2c37f8:
    // 0x2c37f8: 0xc0b54d6  jal         func_2D5358
label_2c37fc:
    if (ctx->pc == 0x2C37FCu) {
        ctx->pc = 0x2C37FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F8u;
        // 0x2c37fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3800u;
        goto label_2c3800;
    }
    ctx->pc = 0x2C37F8u;
    SET_GPR_U32(ctx, 31, 0x2C3800u);
    ctx->pc = 0x2C37FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C37F8u;
    // 0x2c37fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5358u, 0x2C37F8u, 0x2C3800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3800u;
label_2c3800:
    // 0x2c3800: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c3800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3804:
    // 0x2c3804: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3808:
    // 0x2c3808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c380c:
    // 0x2c380c: 0x3e00008  jr          $ra
label_2c3810:
    if (ctx->pc == 0x2C3810u) {
        ctx->pc = 0x2C3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C380Cu;
        // 0x2c3810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3814u;
        goto label_2c3814;
    }
    ctx->pc = 0x2C380Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C380Cu;
        // 0x2c3810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C380Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3814u;
label_2c3814:
    // 0x2c3814: 0x0  nop
    ctx->pc = 0x2c3814u;
    // NOP
    ctx->pc = 0x2c3818u;
}
