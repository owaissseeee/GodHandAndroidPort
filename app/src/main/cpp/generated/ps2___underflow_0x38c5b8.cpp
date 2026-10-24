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

// Function: __underflow
// Address: 0x38c5b8 - 0x38c688
void ps2___underflow_0x38c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___underflow_0x38c5b8");
#endif

    switch (ctx->pc) {
        case 0x38c5b8u: goto label_38c5b8;
        case 0x38c5bcu: goto label_38c5bc;
        case 0x38c5c0u: goto label_38c5c0;
        case 0x38c5c4u: goto label_38c5c4;
        case 0x38c5c8u: goto label_38c5c8;
        case 0x38c5ccu: goto label_38c5cc;
        case 0x38c5d0u: goto label_38c5d0;
        case 0x38c5d4u: goto label_38c5d4;
        case 0x38c5d8u: goto label_38c5d8;
        case 0x38c5dcu: goto label_38c5dc;
        case 0x38c5e0u: goto label_38c5e0;
        case 0x38c5e4u: goto label_38c5e4;
        case 0x38c5e8u: goto label_38c5e8;
        case 0x38c5ecu: goto label_38c5ec;
        case 0x38c5f0u: goto label_38c5f0;
        case 0x38c5f4u: goto label_38c5f4;
        case 0x38c5f8u: goto label_38c5f8;
        case 0x38c5fcu: goto label_38c5fc;
        case 0x38c600u: goto label_38c600;
        case 0x38c604u: goto label_38c604;
        case 0x38c608u: goto label_38c608;
        case 0x38c60cu: goto label_38c60c;
        case 0x38c610u: goto label_38c610;
        case 0x38c614u: goto label_38c614;
        case 0x38c618u: goto label_38c618;
        case 0x38c61cu: goto label_38c61c;
        case 0x38c620u: goto label_38c620;
        case 0x38c624u: goto label_38c624;
        case 0x38c628u: goto label_38c628;
        case 0x38c62cu: goto label_38c62c;
        case 0x38c630u: goto label_38c630;
        case 0x38c634u: goto label_38c634;
        case 0x38c638u: goto label_38c638;
        case 0x38c63cu: goto label_38c63c;
        case 0x38c640u: goto label_38c640;
        case 0x38c644u: goto label_38c644;
        case 0x38c648u: goto label_38c648;
        case 0x38c64cu: goto label_38c64c;
        case 0x38c650u: goto label_38c650;
        case 0x38c654u: goto label_38c654;
        case 0x38c658u: goto label_38c658;
        case 0x38c65cu: goto label_38c65c;
        case 0x38c660u: goto label_38c660;
        case 0x38c664u: goto label_38c664;
        case 0x38c668u: goto label_38c668;
        case 0x38c66cu: goto label_38c66c;
        case 0x38c670u: goto label_38c670;
        case 0x38c674u: goto label_38c674;
        case 0x38c678u: goto label_38c678;
        case 0x38c67cu: goto label_38c67c;
        case 0x38c680u: goto label_38c680;
        case 0x38c684u: goto label_38c684;
        default: break;
    }

    ctx->pc = 0x38c5b8u;

label_38c5b8:
    // 0x38c5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c5bc:
    // 0x38c5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38c5c0:
    // 0x38c5c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c5c4:
    // 0x38c5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c5c8:
    // 0x38c5c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c5cc:
    // 0x38c5cc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x38c5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_38c5d0:
    // 0x38c5d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38c5d4:
    if (ctx->pc == 0x38C5D4u) {
        ctx->pc = 0x38C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5D0u;
        // 0x38c5d4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5D8u;
        goto label_38c5d8;
    }
    ctx->pc = 0x38C5D0u;
    {
        const bool branch_taken_0x38c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c5d0) {
            ctx->pc = 0x38C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C5D0u;
            // 0x38c5d4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C5F0u;
            goto label_38c5f0;
        }
    }
    ctx->pc = 0x38C5D8u;
label_38c5d8:
    // 0x38c5d8: 0xc0e30bc  jal         func_38C2F0
label_38c5dc:
    if (ctx->pc == 0x38C5DCu) {
        ctx->pc = 0x38C5E0u;
        goto label_38c5e0;
    }
    ctx->pc = 0x38C5D8u;
    SET_GPR_U32(ctx, 31, 0x38C5E0u);
    ctx->pc = 0x38C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2F0u, 0x38C5D8u, 0x38C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C5E0u;
label_38c5e0:
    // 0x38c5e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c5e4:
    // 0x38c5e4: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_38c5e8:
    if (ctx->pc == 0x38C5E8u) {
        ctx->pc = 0x38C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5E4u;
        // 0x38c5e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C5ECu;
        goto label_38c5ec;
    }
    ctx->pc = 0x38C5E4u;
    {
        const bool branch_taken_0x38c5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5E4u;
        // 0x38c5e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c5e4) {
            ctx->pc = 0x38C674u;
            goto label_38c674;
        }
    }
    ctx->pc = 0x38C5ECu;
label_38c5ec:
    // 0x38c5ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38c5f0:
    // 0x38c5f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38c5f4:
    // 0x38c5f4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38c5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38c5f8:
    // 0x38c5f8: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_38c5fc:
    if (ctx->pc == 0x38C5FCu) {
        ctx->pc = 0x38C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C5F8u;
        // 0x38c5fc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C600u;
        goto label_38c600;
    }
    ctx->pc = 0x38C5F8u;
    {
        const bool branch_taken_0x38c5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c5f8) {
            ctx->pc = 0x38C5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C5F8u;
            // 0x38c5fc: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C674u;
            goto label_38c674;
        }
    }
    ctx->pc = 0x38C600u;
label_38c600:
    // 0x38c600: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c604:
    // 0x38c604: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38c604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_38c608:
    // 0x38c608: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_38c60c:
    if (ctx->pc == 0x38C60Cu) {
        ctx->pc = 0x38C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C608u;
        // 0x38c60c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C610u;
        goto label_38c610;
    }
    ctx->pc = 0x38C608u;
    {
        const bool branch_taken_0x38c608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c608) {
            ctx->pc = 0x38C60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C608u;
            // 0x38c60c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C634u;
            goto label_38c634;
        }
    }
    ctx->pc = 0x38C610u;
label_38c610:
    // 0x38c610: 0xc0e30a0  jal         func_38C280
label_38c614:
    if (ctx->pc == 0x38C614u) {
        ctx->pc = 0x38C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C610u;
        // 0x38c614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C618u;
        goto label_38c618;
    }
    ctx->pc = 0x38C610u;
    SET_GPR_U32(ctx, 31, 0x38C618u);
    ctx->pc = 0x38C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C610u;
    // 0x38c614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C280u, 0x38C610u, 0x38C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C618u;
label_38c618:
    // 0x38c618: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38c61c:
    // 0x38c61c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38c620:
    // 0x38c620: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38c620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38c624:
    // 0x38c624: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_38c628:
    if (ctx->pc == 0x38C628u) {
        ctx->pc = 0x38C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C624u;
        // 0x38c628: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C62Cu;
        goto label_38c62c;
    }
    ctx->pc = 0x38C624u;
    {
        const bool branch_taken_0x38c624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c624) {
            ctx->pc = 0x38C628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C624u;
            // 0x38c628: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C634u;
            goto label_38c634;
        }
    }
    ctx->pc = 0x38C62Cu;
label_38c62c:
    // 0x38c62c: 0x10000011  b           . + 4 + (0x11 << 2)
label_38c630:
    if (ctx->pc == 0x38C630u) {
        ctx->pc = 0x38C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C62Cu;
        // 0x38c630: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C634u;
        goto label_38c634;
    }
    ctx->pc = 0x38C62Cu;
    {
        const bool branch_taken_0x38c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C62Cu;
        // 0x38c630: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c62c) {
            ctx->pc = 0x38C674u;
            goto label_38c674;
        }
    }
    ctx->pc = 0x38C634u;
label_38c634:
    // 0x38c634: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38c638:
    if (ctx->pc == 0x38C638u) {
        ctx->pc = 0x38C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C634u;
        // 0x38c638: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C63Cu;
        goto label_38c63c;
    }
    ctx->pc = 0x38C634u;
    {
        const bool branch_taken_0x38c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c634) {
            ctx->pc = 0x38C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C634u;
            // 0x38c638: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C654u;
            goto label_38c654;
        }
    }
    ctx->pc = 0x38C63Cu;
label_38c63c:
    // 0x38c63c: 0xc0e3106  jal         func_38C418
label_38c640:
    if (ctx->pc == 0x38C640u) {
        ctx->pc = 0x38C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C63Cu;
        // 0x38c640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C644u;
        goto label_38c644;
    }
    ctx->pc = 0x38C63Cu;
    SET_GPR_U32(ctx, 31, 0x38C644u);
    ctx->pc = 0x38C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C63Cu;
    // 0x38c640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C418u, 0x38C63Cu, 0x38C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C644u;
label_38c644:
    // 0x38c644: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38c648:
    if (ctx->pc == 0x38C648u) {
        ctx->pc = 0x38C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C644u;
        // 0x38c648: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C64Cu;
        goto label_38c64c;
    }
    ctx->pc = 0x38C644u;
    {
        const bool branch_taken_0x38c644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C644u;
        // 0x38c648: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c644) {
            ctx->pc = 0x38C664u;
            goto label_38c664;
        }
    }
    ctx->pc = 0x38C64Cu;
label_38c64c:
    // 0x38c64c: 0x1000000a  b           . + 4 + (0xA << 2)
label_38c650:
    if (ctx->pc == 0x38C650u) {
        ctx->pc = 0x38C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C64Cu;
        // 0x38c650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C654u;
        goto label_38c654;
    }
    ctx->pc = 0x38C64Cu;
    {
        const bool branch_taken_0x38c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C64Cu;
        // 0x38c650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c64c) {
            ctx->pc = 0x38C678u;
            goto label_38c678;
        }
    }
    ctx->pc = 0x38C654u;
label_38c654:
    // 0x38c654: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_38c658:
    if (ctx->pc == 0x38C658u) {
        ctx->pc = 0x38C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C654u;
        // 0x38c658: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C65Cu;
        goto label_38c65c;
    }
    ctx->pc = 0x38C654u;
    {
        const bool branch_taken_0x38c654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c654) {
            ctx->pc = 0x38C658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C654u;
            // 0x38c658: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C668u;
            goto label_38c668;
        }
    }
    ctx->pc = 0x38C65Cu;
label_38c65c:
    // 0x38c65c: 0xc0e30e8  jal         func_38C3A0
label_38c660:
    if (ctx->pc == 0x38C660u) {
        ctx->pc = 0x38C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C65Cu;
        // 0x38c660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C664u;
        goto label_38c664;
    }
    ctx->pc = 0x38C65Cu;
    SET_GPR_U32(ctx, 31, 0x38C664u);
    ctx->pc = 0x38C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C65Cu;
    // 0x38c660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38C65Cu, 0x38C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C664u;
label_38c664:
    // 0x38c664: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38c664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38c668:
    // 0x38c668: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x38c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_38c66c:
    // 0x38c66c: 0x40f809  jalr        $v0
label_38c670:
    if (ctx->pc == 0x38C670u) {
        ctx->pc = 0x38C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C66Cu;
        // 0x38c670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C674u;
        goto label_38c674;
    }
    ctx->pc = 0x38C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C674u);
        ctx->pc = 0x38C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C66Cu;
        // 0x38c670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C66Cu, 0x38C674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C674u;
label_38c674:
    // 0x38c674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38c678:
    // 0x38c678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c67c:
    // 0x38c67c: 0x3e00008  jr          $ra
label_38c680:
    if (ctx->pc == 0x38C680u) {
        ctx->pc = 0x38C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C67Cu;
        // 0x38c680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C684u;
        goto label_38c684;
    }
    ctx->pc = 0x38C67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C67Cu;
        // 0x38c680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38C684u;
label_38c684:
    // 0x38c684: 0x0  nop
    ctx->pc = 0x38c684u;
    // NOP
    ctx->pc = 0x38c688u;
}
