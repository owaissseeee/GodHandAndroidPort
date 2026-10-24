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

// Function: func_0038C688
// Address: 0x38c688 - 0x38c768
void func_0038C688_0x38c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C688_0x38c688");
#endif

    switch (ctx->pc) {
        case 0x38c688u: goto label_38c688;
        case 0x38c68cu: goto label_38c68c;
        case 0x38c690u: goto label_38c690;
        case 0x38c694u: goto label_38c694;
        case 0x38c698u: goto label_38c698;
        case 0x38c69cu: goto label_38c69c;
        case 0x38c6a0u: goto label_38c6a0;
        case 0x38c6a4u: goto label_38c6a4;
        case 0x38c6a8u: goto label_38c6a8;
        case 0x38c6acu: goto label_38c6ac;
        case 0x38c6b0u: goto label_38c6b0;
        case 0x38c6b4u: goto label_38c6b4;
        case 0x38c6b8u: goto label_38c6b8;
        case 0x38c6bcu: goto label_38c6bc;
        case 0x38c6c0u: goto label_38c6c0;
        case 0x38c6c4u: goto label_38c6c4;
        case 0x38c6c8u: goto label_38c6c8;
        case 0x38c6ccu: goto label_38c6cc;
        case 0x38c6d0u: goto label_38c6d0;
        case 0x38c6d4u: goto label_38c6d4;
        case 0x38c6d8u: goto label_38c6d8;
        case 0x38c6dcu: goto label_38c6dc;
        case 0x38c6e0u: goto label_38c6e0;
        case 0x38c6e4u: goto label_38c6e4;
        case 0x38c6e8u: goto label_38c6e8;
        case 0x38c6ecu: goto label_38c6ec;
        case 0x38c6f0u: goto label_38c6f0;
        case 0x38c6f4u: goto label_38c6f4;
        case 0x38c6f8u: goto label_38c6f8;
        case 0x38c6fcu: goto label_38c6fc;
        case 0x38c700u: goto label_38c700;
        case 0x38c704u: goto label_38c704;
        case 0x38c708u: goto label_38c708;
        case 0x38c70cu: goto label_38c70c;
        case 0x38c710u: goto label_38c710;
        case 0x38c714u: goto label_38c714;
        case 0x38c718u: goto label_38c718;
        case 0x38c71cu: goto label_38c71c;
        case 0x38c720u: goto label_38c720;
        case 0x38c724u: goto label_38c724;
        case 0x38c728u: goto label_38c728;
        case 0x38c72cu: goto label_38c72c;
        case 0x38c730u: goto label_38c730;
        case 0x38c734u: goto label_38c734;
        case 0x38c738u: goto label_38c738;
        case 0x38c73cu: goto label_38c73c;
        case 0x38c740u: goto label_38c740;
        case 0x38c744u: goto label_38c744;
        case 0x38c748u: goto label_38c748;
        case 0x38c74cu: goto label_38c74c;
        case 0x38c750u: goto label_38c750;
        case 0x38c754u: goto label_38c754;
        case 0x38c758u: goto label_38c758;
        case 0x38c75cu: goto label_38c75c;
        case 0x38c760u: goto label_38c760;
        case 0x38c764u: goto label_38c764;
        default: break;
    }

    ctx->pc = 0x38c688u;

label_38c688:
    // 0x38c688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c68c:
    // 0x38c68c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38c690:
    // 0x38c690: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c694:
    // 0x38c694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c698:
    // 0x38c698: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c69c:
    // 0x38c69c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x38c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_38c6a0:
    // 0x38c6a0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38c6a4:
    if (ctx->pc == 0x38C6A4u) {
        ctx->pc = 0x38C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6A0u;
        // 0x38c6a4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6A8u;
        goto label_38c6a8;
    }
    ctx->pc = 0x38C6A0u;
    {
        const bool branch_taken_0x38c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c6a0) {
            ctx->pc = 0x38C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C6A0u;
            // 0x38c6a4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C6C0u;
            goto label_38c6c0;
        }
    }
    ctx->pc = 0x38C6A8u;
label_38c6a8:
    // 0x38c6a8: 0xc0e30bc  jal         func_38C2F0
label_38c6ac:
    if (ctx->pc == 0x38C6ACu) {
        ctx->pc = 0x38C6B0u;
        goto label_38c6b0;
    }
    ctx->pc = 0x38C6A8u;
    SET_GPR_U32(ctx, 31, 0x38C6B0u);
    ctx->pc = 0x38C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2F0u, 0x38C6A8u, 0x38C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6B0u;
label_38c6b0:
    // 0x38c6b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c6b4:
    // 0x38c6b4: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_38c6b8:
    if (ctx->pc == 0x38C6B8u) {
        ctx->pc = 0x38C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B4u;
        // 0x38c6b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6BCu;
        goto label_38c6bc;
    }
    ctx->pc = 0x38C6B4u;
    {
        const bool branch_taken_0x38c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x38C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6B4u;
        // 0x38c6b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6b4) {
            ctx->pc = 0x38C758u;
            goto label_38c758;
        }
    }
    ctx->pc = 0x38C6BCu;
label_38c6bc:
    // 0x38c6bc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38c6c0:
    // 0x38c6c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38c6c4:
    // 0x38c6c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38c6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38c6c8:
    // 0x38c6c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38c6cc:
    if (ctx->pc == 0x38C6CCu) {
        ctx->pc = 0x38C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6C8u;
        // 0x38c6cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6D0u;
        goto label_38c6d0;
    }
    ctx->pc = 0x38C6C8u;
    {
        const bool branch_taken_0x38c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c6c8) {
            ctx->pc = 0x38C6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C6C8u;
            // 0x38c6cc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C6E0u;
            goto label_38c6e0;
        }
    }
    ctx->pc = 0x38C6D0u;
label_38c6d0:
    // 0x38c6d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38c6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38c6d4:
    // 0x38c6d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c6d8:
    // 0x38c6d8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_38c6dc:
    if (ctx->pc == 0x38C6DCu) {
        ctx->pc = 0x38C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D8u;
        // 0x38c6dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6E0u;
        goto label_38c6e0;
    }
    ctx->pc = 0x38C6D8u;
    {
        const bool branch_taken_0x38c6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6D8u;
        // 0x38c6dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c6d8) {
            ctx->pc = 0x38C758u;
            goto label_38c758;
        }
    }
    ctx->pc = 0x38C6E0u;
label_38c6e0:
    // 0x38c6e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_38c6e4:
    // 0x38c6e4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_38c6e8:
    if (ctx->pc == 0x38C6E8u) {
        ctx->pc = 0x38C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6E4u;
        // 0x38c6e8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6ECu;
        goto label_38c6ec;
    }
    ctx->pc = 0x38C6E4u;
    {
        const bool branch_taken_0x38c6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c6e4) {
            ctx->pc = 0x38C6E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C6E4u;
            // 0x38c6e8: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C718u;
            goto label_38c718;
        }
    }
    ctx->pc = 0x38C6ECu;
label_38c6ec:
    // 0x38c6ec: 0xc0e30a0  jal         func_38C280
label_38c6f0:
    if (ctx->pc == 0x38C6F0u) {
        ctx->pc = 0x38C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C6ECu;
        // 0x38c6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C6F4u;
        goto label_38c6f4;
    }
    ctx->pc = 0x38C6ECu;
    SET_GPR_U32(ctx, 31, 0x38C6F4u);
    ctx->pc = 0x38C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C6ECu;
    // 0x38c6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C280u, 0x38C6ECu, 0x38C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C6F4u;
label_38c6f4:
    // 0x38c6f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38c6f8:
    // 0x38c6f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38c6fc:
    // 0x38c6fc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x38c6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38c700:
    // 0x38c700: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_38c704:
    if (ctx->pc == 0x38C704u) {
        ctx->pc = 0x38C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C700u;
        // 0x38c704: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C708u;
        goto label_38c708;
    }
    ctx->pc = 0x38C700u;
    {
        const bool branch_taken_0x38c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c700) {
            ctx->pc = 0x38C704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C700u;
            // 0x38c704: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C718u;
            goto label_38c718;
        }
    }
    ctx->pc = 0x38C708u;
label_38c708:
    // 0x38c708: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38c708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38c70c:
    // 0x38c70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c710:
    // 0x38c710: 0x10000011  b           . + 4 + (0x11 << 2)
label_38c714:
    if (ctx->pc == 0x38C714u) {
        ctx->pc = 0x38C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C710u;
        // 0x38c714: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C718u;
        goto label_38c718;
    }
    ctx->pc = 0x38C710u;
    {
        const bool branch_taken_0x38c710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C710u;
        // 0x38c714: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c710) {
            ctx->pc = 0x38C758u;
            goto label_38c758;
        }
    }
    ctx->pc = 0x38C718u;
label_38c718:
    // 0x38c718: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_38c71c:
    if (ctx->pc == 0x38C71Cu) {
        ctx->pc = 0x38C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C718u;
        // 0x38c71c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C720u;
        goto label_38c720;
    }
    ctx->pc = 0x38C718u;
    {
        const bool branch_taken_0x38c718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c718) {
            ctx->pc = 0x38C71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C718u;
            // 0x38c71c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C738u;
            goto label_38c738;
        }
    }
    ctx->pc = 0x38C720u;
label_38c720:
    // 0x38c720: 0xc0e3106  jal         func_38C418
label_38c724:
    if (ctx->pc == 0x38C724u) {
        ctx->pc = 0x38C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C720u;
        // 0x38c724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C728u;
        goto label_38c728;
    }
    ctx->pc = 0x38C720u;
    SET_GPR_U32(ctx, 31, 0x38C728u);
    ctx->pc = 0x38C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C720u;
    // 0x38c724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C418u, 0x38C720u, 0x38C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C728u;
label_38c728:
    // 0x38c728: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38c72c:
    if (ctx->pc == 0x38C72Cu) {
        ctx->pc = 0x38C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C728u;
        // 0x38c72c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C730u;
        goto label_38c730;
    }
    ctx->pc = 0x38C728u;
    {
        const bool branch_taken_0x38c728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C728u;
        // 0x38c72c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c728) {
            ctx->pc = 0x38C748u;
            goto label_38c748;
        }
    }
    ctx->pc = 0x38C730u;
label_38c730:
    // 0x38c730: 0x1000000a  b           . + 4 + (0xA << 2)
label_38c734:
    if (ctx->pc == 0x38C734u) {
        ctx->pc = 0x38C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C730u;
        // 0x38c734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C738u;
        goto label_38c738;
    }
    ctx->pc = 0x38C730u;
    {
        const bool branch_taken_0x38c730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C730u;
        // 0x38c734: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c730) {
            ctx->pc = 0x38C75Cu;
            goto label_38c75c;
        }
    }
    ctx->pc = 0x38C738u;
label_38c738:
    // 0x38c738: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_38c73c:
    if (ctx->pc == 0x38C73Cu) {
        ctx->pc = 0x38C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C738u;
        // 0x38c73c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C740u;
        goto label_38c740;
    }
    ctx->pc = 0x38C738u;
    {
        const bool branch_taken_0x38c738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c738) {
            ctx->pc = 0x38C73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C738u;
            // 0x38c73c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C74Cu;
            goto label_38c74c;
        }
    }
    ctx->pc = 0x38C740u;
label_38c740:
    // 0x38c740: 0xc0e30e8  jal         func_38C3A0
label_38c744:
    if (ctx->pc == 0x38C744u) {
        ctx->pc = 0x38C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C740u;
        // 0x38c744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C748u;
        goto label_38c748;
    }
    ctx->pc = 0x38C740u;
    SET_GPR_U32(ctx, 31, 0x38C748u);
    ctx->pc = 0x38C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C740u;
    // 0x38c744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38C740u, 0x38C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38C748u;
label_38c748:
    // 0x38c748: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38c74c:
    // 0x38c74c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x38c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_38c750:
    // 0x38c750: 0x40f809  jalr        $v0
label_38c754:
    if (ctx->pc == 0x38C754u) {
        ctx->pc = 0x38C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C750u;
        // 0x38c754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C758u;
        goto label_38c758;
    }
    ctx->pc = 0x38C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C758u);
        ctx->pc = 0x38C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C750u;
        // 0x38c754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C750u, 0x38C758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C758u;
label_38c758:
    // 0x38c758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38c75c:
    // 0x38c75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c760:
    // 0x38c760: 0x3e00008  jr          $ra
label_38c764:
    if (ctx->pc == 0x38C764u) {
        ctx->pc = 0x38C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C760u;
        // 0x38c764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C768u;
        goto label_fallthrough_0x38c760;
    }
    ctx->pc = 0x38C760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C760u;
        // 0x38c764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38c760:
    ctx->pc = 0x38C768u;
}
