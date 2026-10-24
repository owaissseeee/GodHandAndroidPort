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

// Function: Slot2_showLayersForMode
// Address: 0x1e3630 - 0x1e3758
void Slot2_showLayersForMode_0x1e3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_showLayersForMode_0x1e3630");
#endif

    switch (ctx->pc) {
        case 0x1e3688u: goto label_1e3688;
        case 0x1e3694u: goto label_1e3694;
        case 0x1e36acu: goto label_1e36ac;
        case 0x1e36b8u: goto label_1e36b8;
        case 0x1e36d0u: goto label_1e36d0;
        case 0x1e36dcu: goto label_1e36dc;
        case 0x1e36ecu: goto label_1e36ec;
        case 0x1e36f8u: goto label_1e36f8;
        case 0x1e3704u: goto label_1e3704;
        case 0x1e3714u: goto label_1e3714;
        case 0x1e3720u: goto label_1e3720;
        case 0x1e372cu: goto label_1e372c;
        case 0x1e3738u: goto label_1e3738;
        case 0x1e3744u: goto label_1e3744;
        default: break;
    }

    ctx->pc = 0x1e3630u;

    // 0x1e3630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3634: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e363c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3644: 0x9603048e  lhu         $v1, 0x48E($s0)
    ctx->pc = 0x1e3644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1166)));
    // 0x1e3648: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3648u;
    {
        const bool branch_taken_0x1e3648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3648u;
        // 0x1e364c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3648) {
            ctx->pc = 0x1E36A0u;
            goto label_1e36a0;
        }
    }
    ctx->pc = 0x1E3650u;
    // 0x1e3650: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3650u;
    {
        const bool branch_taken_0x1e3650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3650) {
            ctx->pc = 0x1E3654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3650u;
            // 0x1e3654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3668u;
            goto label_1e3668;
        }
    }
    ctx->pc = 0x1E3658u;
    // 0x1e3658: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3658u;
    {
        const bool branch_taken_0x1e3658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3658) {
            ctx->pc = 0x1E365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3658u;
            // 0x1e365c: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3680u;
            goto label_1e3680;
        }
    }
    ctx->pc = 0x1E3660u;
    // 0x1e3660: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E3660u;
    {
        const bool branch_taken_0x1e3660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3660u;
        // 0x1e3664: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3660) {
            ctx->pc = 0x1E3748u;
            goto label_1e3748;
        }
    }
    ctx->pc = 0x1E3668u;
label_1e3668:
    // 0x1e3668: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E3668u;
    {
        const bool branch_taken_0x1e3668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3668u;
        // 0x1e366c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3668) {
            ctx->pc = 0x1E36C4u;
            goto label_1e36c4;
        }
    }
    ctx->pc = 0x1E3670u;
    // 0x1e3670: 0x50620026  beql        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E3670u;
    {
        const bool branch_taken_0x1e3670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e3670) {
            ctx->pc = 0x1E3674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E3670u;
            // 0x1e3674: 0x8e040434  lw          $a0, 0x434($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E370Cu;
            goto label_1e370c;
        }
    }
    ctx->pc = 0x1E3678u;
    // 0x1e3678: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1E3678u;
    {
        const bool branch_taken_0x1e3678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3678u;
        // 0x1e367c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3678) {
            ctx->pc = 0x1E3748u;
            goto label_1e3748;
        }
    }
    ctx->pc = 0x1E3680u;
label_1e3680:
    // 0x1e3680: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3680u;
    SET_GPR_U32(ctx, 31, 0x1E3688u);
    ctx->pc = 0x1E3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3680u;
    // 0x1e3684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3680u, 0x1E3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3688u;
label_1e3688:
    // 0x1e3688: 0x8e040438  lw          $a0, 0x438($s0)
    ctx->pc = 0x1e3688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1e368c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E368Cu;
    SET_GPR_U32(ctx, 31, 0x1E3694u);
    ctx->pc = 0x1E3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E368Cu;
    // 0x1e3690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E368Cu, 0x1E3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3694u;
label_1e3694:
    // 0x1e3694: 0x8e04043c  lw          $a0, 0x43C($s0)
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x1e3698: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E3698u;
    {
        const bool branch_taken_0x1e3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3698u;
        // 0x1e369c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3698) {
            ctx->pc = 0x1E36E4u;
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E36A0u;
label_1e36a0:
    // 0x1e36a0: 0x8e040434  lw          $a0, 0x434($s0)
    ctx->pc = 0x1e36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1e36a4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36A4u;
    SET_GPR_U32(ctx, 31, 0x1E36ACu);
    ctx->pc = 0x1E36A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36A4u;
    // 0x1e36a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36A4u, 0x1E36ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36ACu;
label_1e36ac:
    // 0x1e36ac: 0x8e040438  lw          $a0, 0x438($s0)
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1e36b0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36B0u;
    SET_GPR_U32(ctx, 31, 0x1E36B8u);
    ctx->pc = 0x1E36B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36B0u;
    // 0x1e36b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36B0u, 0x1E36B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36B8u;
label_1e36b8:
    // 0x1e36b8: 0x8e04043c  lw          $a0, 0x43C($s0)
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x1e36bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E36BCu;
    {
        const bool branch_taken_0x1e36bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E36BCu;
        // 0x1e36c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36bc) {
            ctx->pc = 0x1E36E4u;
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E36C4u;
label_1e36c4:
    // 0x1e36c4: 0x8e040434  lw          $a0, 0x434($s0)
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1e36c8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36C8u;
    SET_GPR_U32(ctx, 31, 0x1E36D0u);
    ctx->pc = 0x1E36CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36C8u;
    // 0x1e36cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36C8u, 0x1E36D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36D0u;
label_1e36d0:
    // 0x1e36d0: 0x8e040438  lw          $a0, 0x438($s0)
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1e36d4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36D4u;
    SET_GPR_U32(ctx, 31, 0x1E36DCu);
    ctx->pc = 0x1E36D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36D4u;
    // 0x1e36d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36D4u, 0x1E36DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36DCu;
label_1e36dc:
    // 0x1e36dc: 0x8e04043c  lw          $a0, 0x43C($s0)
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x1e36e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e36e4:
    // 0x1e36e4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36E4u;
    SET_GPR_U32(ctx, 31, 0x1E36ECu);
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36E4u, 0x1E36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36ECu;
label_1e36ec:
    // 0x1e36ec: 0x8e040440  lw          $a0, 0x440($s0)
    ctx->pc = 0x1e36ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x1e36f0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36F0u;
    SET_GPR_U32(ctx, 31, 0x1E36F8u);
    ctx->pc = 0x1E36F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36F0u;
    // 0x1e36f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36F0u, 0x1E36F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E36F8u;
label_1e36f8:
    // 0x1e36f8: 0x8e040444  lw          $a0, 0x444($s0)
    ctx->pc = 0x1e36f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x1e36fc: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E36FCu;
    SET_GPR_U32(ctx, 31, 0x1E3704u);
    ctx->pc = 0x1E3700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E36FCu;
    // 0x1e3700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E36FCu, 0x1E3704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3704u;
label_1e3704:
    // 0x1e3704: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E3704u;
    {
        const bool branch_taken_0x1e3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3704u;
        // 0x1e3708: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3704) {
            ctx->pc = 0x1E3748u;
            goto label_1e3748;
        }
    }
    ctx->pc = 0x1E370Cu;
label_1e370c:
    // 0x1e370c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E370Cu;
    SET_GPR_U32(ctx, 31, 0x1E3714u);
    ctx->pc = 0x1E3710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E370Cu;
    // 0x1e3710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E370Cu, 0x1E3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3714u;
label_1e3714:
    // 0x1e3714: 0x8e040438  lw          $a0, 0x438($s0)
    ctx->pc = 0x1e3714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1080)));
    // 0x1e3718: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3718u;
    SET_GPR_U32(ctx, 31, 0x1E3720u);
    ctx->pc = 0x1E371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3718u;
    // 0x1e371c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3718u, 0x1E3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3720u;
label_1e3720:
    // 0x1e3720: 0x8e04043c  lw          $a0, 0x43C($s0)
    ctx->pc = 0x1e3720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1084)));
    // 0x1e3724: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3724u;
    SET_GPR_U32(ctx, 31, 0x1E372Cu);
    ctx->pc = 0x1E3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3724u;
    // 0x1e3728: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3724u, 0x1E372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E372Cu;
label_1e372c:
    // 0x1e372c: 0x8e040440  lw          $a0, 0x440($s0)
    ctx->pc = 0x1e372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1088)));
    // 0x1e3730: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3730u;
    SET_GPR_U32(ctx, 31, 0x1E3738u);
    ctx->pc = 0x1E3734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3730u;
    // 0x1e3734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3730u, 0x1E3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3738u;
label_1e3738:
    // 0x1e3738: 0x8e040444  lw          $a0, 0x444($s0)
    ctx->pc = 0x1e3738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x1e373c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E373Cu;
    SET_GPR_U32(ctx, 31, 0x1E3744u);
    ctx->pc = 0x1E3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E373Cu;
    // 0x1e3740: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E373Cu, 0x1E3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3744u;
label_1e3744:
    // 0x1e3744: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3748:
    // 0x1e3748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e374c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E374Cu;
        // 0x1e3750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3754u;
    // 0x1e3754: 0x0  nop
    ctx->pc = 0x1e3754u;
    // NOP
    ctx->pc = 0x1e3758u;
}
