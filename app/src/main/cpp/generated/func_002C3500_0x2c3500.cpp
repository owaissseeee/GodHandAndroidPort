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

// Function: func_002C3500
// Address: 0x2c3500 - 0x2c3678
void func_002C3500_0x2c3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C3500_0x2c3500");
#endif

    switch (ctx->pc) {
        case 0x2c3500u: goto label_2c3500;
        case 0x2c3504u: goto label_2c3504;
        case 0x2c3508u: goto label_2c3508;
        case 0x2c350cu: goto label_2c350c;
        case 0x2c3510u: goto label_2c3510;
        case 0x2c3514u: goto label_2c3514;
        case 0x2c3518u: goto label_2c3518;
        case 0x2c351cu: goto label_2c351c;
        case 0x2c3520u: goto label_2c3520;
        case 0x2c3524u: goto label_2c3524;
        case 0x2c3528u: goto label_2c3528;
        case 0x2c352cu: goto label_2c352c;
        case 0x2c3530u: goto label_2c3530;
        case 0x2c3534u: goto label_2c3534;
        case 0x2c3538u: goto label_2c3538;
        case 0x2c353cu: goto label_2c353c;
        case 0x2c3540u: goto label_2c3540;
        case 0x2c3544u: goto label_2c3544;
        case 0x2c3548u: goto label_2c3548;
        case 0x2c354cu: goto label_2c354c;
        case 0x2c3550u: goto label_2c3550;
        case 0x2c3554u: goto label_2c3554;
        case 0x2c3558u: goto label_2c3558;
        case 0x2c355cu: goto label_2c355c;
        case 0x2c3560u: goto label_2c3560;
        case 0x2c3564u: goto label_2c3564;
        case 0x2c3568u: goto label_2c3568;
        case 0x2c356cu: goto label_2c356c;
        case 0x2c3570u: goto label_2c3570;
        case 0x2c3574u: goto label_2c3574;
        case 0x2c3578u: goto label_2c3578;
        case 0x2c357cu: goto label_2c357c;
        case 0x2c3580u: goto label_2c3580;
        case 0x2c3584u: goto label_2c3584;
        case 0x2c3588u: goto label_2c3588;
        case 0x2c358cu: goto label_2c358c;
        case 0x2c3590u: goto label_2c3590;
        case 0x2c3594u: goto label_2c3594;
        case 0x2c3598u: goto label_2c3598;
        case 0x2c359cu: goto label_2c359c;
        case 0x2c35a0u: goto label_2c35a0;
        case 0x2c35a4u: goto label_2c35a4;
        case 0x2c35a8u: goto label_2c35a8;
        case 0x2c35acu: goto label_2c35ac;
        case 0x2c35b0u: goto label_2c35b0;
        case 0x2c35b4u: goto label_2c35b4;
        case 0x2c35b8u: goto label_2c35b8;
        case 0x2c35bcu: goto label_2c35bc;
        case 0x2c35c0u: goto label_2c35c0;
        case 0x2c35c4u: goto label_2c35c4;
        case 0x2c35c8u: goto label_2c35c8;
        case 0x2c35ccu: goto label_2c35cc;
        case 0x2c35d0u: goto label_2c35d0;
        case 0x2c35d4u: goto label_2c35d4;
        case 0x2c35d8u: goto label_2c35d8;
        case 0x2c35dcu: goto label_2c35dc;
        case 0x2c35e0u: goto label_2c35e0;
        case 0x2c35e4u: goto label_2c35e4;
        case 0x2c35e8u: goto label_2c35e8;
        case 0x2c35ecu: goto label_2c35ec;
        case 0x2c35f0u: goto label_2c35f0;
        case 0x2c35f4u: goto label_2c35f4;
        case 0x2c35f8u: goto label_2c35f8;
        case 0x2c35fcu: goto label_2c35fc;
        case 0x2c3600u: goto label_2c3600;
        case 0x2c3604u: goto label_2c3604;
        case 0x2c3608u: goto label_2c3608;
        case 0x2c360cu: goto label_2c360c;
        case 0x2c3610u: goto label_2c3610;
        case 0x2c3614u: goto label_2c3614;
        case 0x2c3618u: goto label_2c3618;
        case 0x2c361cu: goto label_2c361c;
        case 0x2c3620u: goto label_2c3620;
        case 0x2c3624u: goto label_2c3624;
        case 0x2c3628u: goto label_2c3628;
        case 0x2c362cu: goto label_2c362c;
        case 0x2c3630u: goto label_2c3630;
        case 0x2c3634u: goto label_2c3634;
        case 0x2c3638u: goto label_2c3638;
        case 0x2c363cu: goto label_2c363c;
        case 0x2c3640u: goto label_2c3640;
        case 0x2c3644u: goto label_2c3644;
        case 0x2c3648u: goto label_2c3648;
        case 0x2c364cu: goto label_2c364c;
        case 0x2c3650u: goto label_2c3650;
        case 0x2c3654u: goto label_2c3654;
        case 0x2c3658u: goto label_2c3658;
        case 0x2c365cu: goto label_2c365c;
        case 0x2c3660u: goto label_2c3660;
        case 0x2c3664u: goto label_2c3664;
        case 0x2c3668u: goto label_2c3668;
        case 0x2c366cu: goto label_2c366c;
        case 0x2c3670u: goto label_2c3670;
        case 0x2c3674u: goto label_2c3674;
        default: break;
    }

    ctx->pc = 0x2c3500u;

label_2c3500:
    // 0x2c3500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c3504:
    // 0x2c3504: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2c3508:
    // 0x2c3508: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c350c:
    // 0x2c350c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2c350cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2c3510:
    // 0x2c3510: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c3514:
    // 0x2c3514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c3518:
    // 0x2c3518: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x2c3518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
label_2c351c:
    // 0x2c351c: 0x962205b0  lhu         $v0, 0x5B0($s1)
    ctx->pc = 0x2c351cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1456)));
label_2c3520:
    // 0x2c3520: 0x10430026  beq         $v0, $v1, . + 4 + (0x26 << 2)
label_2c3524:
    if (ctx->pc == 0x2C3524u) {
        ctx->pc = 0x2C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3520u;
        // 0x2c3524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3528u;
        goto label_2c3528;
    }
    ctx->pc = 0x2C3520u;
    {
        const bool branch_taken_0x2c3520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3520u;
        // 0x2c3524: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3520) {
            ctx->pc = 0x2C35BCu;
            goto label_2c35bc;
        }
    }
    ctx->pc = 0x2C3528u;
label_2c3528:
    // 0x2c3528: 0xc0b6dac  jal         func_2DB6B0
label_2c352c:
    if (ctx->pc == 0x2C352Cu) {
        ctx->pc = 0x2C3530u;
        goto label_2c3530;
    }
    ctx->pc = 0x2C3528u;
    SET_GPR_U32(ctx, 31, 0x2C3530u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3528u, 0x2C3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3530u;
label_2c3530:
    // 0x2c3530: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2c3534:
    if (ctx->pc == 0x2C3534u) {
        ctx->pc = 0x2C3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3530u;
        // 0x2c3534: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3538u;
        goto label_2c3538;
    }
    ctx->pc = 0x2C3530u;
    {
        const bool branch_taken_0x2c3530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3530u;
        // 0x2c3534: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3530) {
            ctx->pc = 0x2C35C0u;
            goto label_2c35c0;
        }
    }
    ctx->pc = 0x2C3538u;
label_2c3538:
    // 0x2c3538: 0x9e020048  lwu         $v0, 0x48($s0)
    ctx->pc = 0x2c3538u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c353c:
    // 0x2c353c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2c353cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_2c3540:
    // 0x2c3540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c3544:
    // 0x2c3544: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2c3548:
    if (ctx->pc == 0x2C3548u) {
        ctx->pc = 0x2C354Cu;
        goto label_2c354c;
    }
    ctx->pc = 0x2C3544u;
    {
        const bool branch_taken_0x2c3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3544) {
            ctx->pc = 0x2C3588u;
            goto label_2c3588;
        }
    }
    ctx->pc = 0x2C354Cu;
label_2c354c:
    // 0x2c354c: 0xc0b6dac  jal         func_2DB6B0
label_2c3550:
    if (ctx->pc == 0x2C3550u) {
        ctx->pc = 0x2C3554u;
        goto label_2c3554;
    }
    ctx->pc = 0x2C354Cu;
    SET_GPR_U32(ctx, 31, 0x2C3554u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C354Cu, 0x2C3554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3554u;
label_2c3554:
    // 0x2c3554: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_2c3558:
    // 0x2c3558: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
label_2c355c:
    if (ctx->pc == 0x2C355Cu) {
        ctx->pc = 0x2C355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3558u;
        // 0x2c355c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3560u;
        goto label_2c3560;
    }
    ctx->pc = 0x2C3558u;
    {
        const bool branch_taken_0x2c3558 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2C355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3558u;
        // 0x2c355c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3558) {
            ctx->pc = 0x2C35C0u;
            goto label_2c35c0;
        }
    }
    ctx->pc = 0x2C3560u;
label_2c3560:
    // 0x2c3560: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c3560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c3564:
    // 0x2c3564: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c3564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c3568:
    // 0x2c3568: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2c356c:
    // 0x2c356c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2c356cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2c3570:
    // 0x2c3570: 0xc0b10e4  jal         func_2C4390
label_2c3574:
    if (ctx->pc == 0x2C3574u) {
        ctx->pc = 0x2C3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3570u;
        // 0x2c3574: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3578u;
        goto label_2c3578;
    }
    ctx->pc = 0x2C3570u;
    SET_GPR_U32(ctx, 31, 0x2C3578u);
    ctx->pc = 0x2C3574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3570u;
    // 0x2c3574: 0x8c642f84  lw          $a0, 0x2F84($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4390u, 0x2C3570u, 0x2C3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3578u;
label_2c3578:
    // 0x2c3578: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c3578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2c357c:
    // 0x2c357c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2c357cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2c3580:
    // 0x2c3580: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c3584:
    if (ctx->pc == 0x2C3584u) {
        ctx->pc = 0x2C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3580u;
        // 0x2c3584: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3588u;
        goto label_2c3588;
    }
    ctx->pc = 0x2C3580u;
    {
        const bool branch_taken_0x2c3580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3580u;
        // 0x2c3584: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3580) {
            ctx->pc = 0x2C35B8u;
            goto label_2c35b8;
        }
    }
    ctx->pc = 0x2C3588u;
label_2c3588:
    // 0x2c3588: 0xc0b6dac  jal         func_2DB6B0
label_2c358c:
    if (ctx->pc == 0x2C358Cu) {
        ctx->pc = 0x2C3590u;
        goto label_2c3590;
    }
    ctx->pc = 0x2C3588u;
    SET_GPR_U32(ctx, 31, 0x2C3590u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C3588u, 0x2C3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3590u;
label_2c3590:
    // 0x2c3590: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x2c3590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
label_2c3594:
    // 0x2c3594: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_2c3598:
    if (ctx->pc == 0x2C3598u) {
        ctx->pc = 0x2C3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3594u;
        // 0x2c3598: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C359Cu;
        goto label_2c359c;
    }
    ctx->pc = 0x2C3594u;
    {
        const bool branch_taken_0x2c3594 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2C3598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3594u;
        // 0x2c3598: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3594) {
            ctx->pc = 0x2C35BCu;
            goto label_2c35bc;
        }
    }
    ctx->pc = 0x2C359Cu;
label_2c359c:
    // 0x2c359c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2c359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c35a0:
    // 0x2c35a0: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x2c35a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
label_2c35a4:
    // 0x2c35a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c35a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2c35a8:
    // 0x2c35a8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c35a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c35ac:
    // 0x2c35ac: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2c35acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2c35b0:
    // 0x2c35b0: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
label_2c35b4:
    // 0x2c35b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c35b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c35b8:
    // 0x2c35b8: 0xae2205e0  sw          $v0, 0x5E0($s1)
    ctx->pc = 0x2c35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1504), GPR_U32(ctx, 2));
label_2c35bc:
    // 0x2c35bc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2c35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2c35c0:
    // 0x2c35c0: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x2c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_2c35c4:
    // 0x2c35c4: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
label_2c35c8:
    if (ctx->pc == 0x2C35C8u) {
        ctx->pc = 0x2C35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35C4u;
        // 0x2c35c8: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C35CCu;
        goto label_2c35cc;
    }
    ctx->pc = 0x2C35C4u;
    {
        const bool branch_taken_0x2c35c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C35C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35C4u;
        // 0x2c35c8: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c35c4) {
            ctx->pc = 0x2C3660u;
            goto label_2c3660;
        }
    }
    ctx->pc = 0x2C35CCu;
label_2c35cc:
    // 0x2c35cc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2c35ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_2c35d0:
    // 0x2c35d0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2c35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2c35d4:
    // 0x2c35d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c35d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c35d8:
    // 0x2c35d8: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2c35dc:
    if (ctx->pc == 0x2C35DCu) {
        ctx->pc = 0x2C35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35D8u;
        // 0x2c35dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C35E0u;
        goto label_2c35e0;
    }
    ctx->pc = 0x2C35D8u;
    {
        const bool branch_taken_0x2c35d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c35d8) {
            ctx->pc = 0x2C35DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35D8u;
            // 0x2c35dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3664u;
            goto label_2c3664;
        }
    }
    ctx->pc = 0x2C35E0u;
label_2c35e0:
    // 0x2c35e0: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x2c35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_2c35e4:
    // 0x2c35e4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2c35e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_2c35e8:
    // 0x2c35e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c35e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c35ec:
    // 0x2c35ec: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_2c35f0:
    if (ctx->pc == 0x2C35F0u) {
        ctx->pc = 0x2C35F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C35ECu;
        // 0x2c35f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C35F4u;
        goto label_2c35f4;
    }
    ctx->pc = 0x2C35ECu;
    {
        const bool branch_taken_0x2c35ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c35ec) {
            ctx->pc = 0x2C35F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C35ECu;
            // 0x2c35f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3664u;
            goto label_2c3664;
        }
    }
    ctx->pc = 0x2C35F4u;
label_2c35f4:
    // 0x2c35f4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2c35f8:
    // 0x2c35f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c35f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2c35fc:
    // 0x2c35fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2c35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2c3600:
    // 0x2c3600: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2c3604:
    if (ctx->pc == 0x2C3604u) {
        ctx->pc = 0x2C3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3600u;
        // 0x2c3604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3608u;
        goto label_2c3608;
    }
    ctx->pc = 0x2C3600u;
    {
        const bool branch_taken_0x2c3600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3600) {
            ctx->pc = 0x2C3604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3600u;
            // 0x2c3604: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3664u;
            goto label_2c3664;
        }
    }
    ctx->pc = 0x2C3608u;
label_2c3608:
    // 0x2c3608: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c360c:
    // 0x2c360c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c360cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c3610:
    // 0x2c3610: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2c3614:
    if (ctx->pc == 0x2C3614u) {
        ctx->pc = 0x2C3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3610u;
        // 0x2c3614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3618u;
        goto label_2c3618;
    }
    ctx->pc = 0x2C3610u;
    {
        const bool branch_taken_0x2c3610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3610) {
            ctx->pc = 0x2C3614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3610u;
            // 0x2c3614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3664u;
            goto label_2c3664;
        }
    }
    ctx->pc = 0x2C3618u;
label_2c3618:
    // 0x2c3618: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c3618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2c361c:
    // 0x2c361c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x2c361cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_2c3620:
    // 0x2c3620: 0x9e020048  lwu         $v0, 0x48($s0)
    ctx->pc = 0x2c3620u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c3624:
    // 0x2c3624: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x2c3624u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_2c3628:
    // 0x2c3628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c3628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c362c:
    // 0x2c362c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2c3630:
    if (ctx->pc == 0x2C3630u) {
        ctx->pc = 0x2C3630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C362Cu;
        // 0x2c3630: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3634u;
        goto label_2c3634;
    }
    ctx->pc = 0x2C362Cu;
    {
        const bool branch_taken_0x2c362c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c362c) {
            ctx->pc = 0x2C3630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C362Cu;
            // 0x2c3630: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3644u;
            goto label_2c3644;
        }
    }
    ctx->pc = 0x2C3634u;
label_2c3634:
    // 0x2c3634: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c3634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2c3638:
    // 0x2c3638: 0xc0b0550  jal         func_2C1540
label_2c363c:
    if (ctx->pc == 0x2C363Cu) {
        ctx->pc = 0x2C363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3638u;
        // 0x2c363c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3640u;
        goto label_2c3640;
    }
    ctx->pc = 0x2C3638u;
    SET_GPR_U32(ctx, 31, 0x2C3640u);
    ctx->pc = 0x2C363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3638u;
    // 0x2c363c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1540u, 0x2C3638u, 0x2C3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3640u;
label_2c3640:
    // 0x2c3640: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2c3640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2c3644:
    // 0x2c3644: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2c3648:
    if (ctx->pc == 0x2C3648u) {
        ctx->pc = 0x2C3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3644u;
        // 0x2c3648: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C364Cu;
        goto label_2c364c;
    }
    ctx->pc = 0x2C3644u;
    {
        const bool branch_taken_0x2c3644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3644) {
            ctx->pc = 0x2C3648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3644u;
            // 0x2c3648: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3658u;
            goto label_2c3658;
        }
    }
    ctx->pc = 0x2C364Cu;
label_2c364c:
    // 0x2c364c: 0x80f809  jalr        $a0
label_2c3650:
    if (ctx->pc == 0x2C3650u) {
        ctx->pc = 0x2C3654u;
        goto label_2c3654;
    }
    ctx->pc = 0x2C364Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x2C3654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C364Cu, 0x2C3654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3654u;
label_2c3654:
    // 0x2c3654: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c3654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2c3658:
    // 0x2c3658: 0xc07dcd8  jal         func_1F7360
label_2c365c:
    if (ctx->pc == 0x2C365Cu) {
        ctx->pc = 0x2C365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3658u;
        // 0x2c365c: 0x24848288  addiu       $a0, $a0, -0x7D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3660u;
        goto label_2c3660;
    }
    ctx->pc = 0x2C3658u;
    SET_GPR_U32(ctx, 31, 0x2C3660u);
    ctx->pc = 0x2C365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3658u;
    // 0x2c365c: 0x24848288  addiu       $a0, $a0, -0x7D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7360u, 0x2C3658u, 0x2C3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3660u;
label_2c3660:
    // 0x2c3660: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c3660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3664:
    // 0x2c3664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3668:
    // 0x2c3668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c366c:
    // 0x2c366c: 0x3e00008  jr          $ra
label_2c3670:
    if (ctx->pc == 0x2C3670u) {
        ctx->pc = 0x2C3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C366Cu;
        // 0x2c3670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3674u;
        goto label_2c3674;
    }
    ctx->pc = 0x2C366Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C366Cu;
        // 0x2c3670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C366Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3674u;
label_2c3674:
    // 0x2c3674: 0x0  nop
    ctx->pc = 0x2c3674u;
    // NOP
    ctx->pc = 0x2c3678u;
}
