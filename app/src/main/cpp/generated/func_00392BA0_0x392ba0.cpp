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

// Function: func_00392BA0
// Address: 0x392ba0 - 0x392cd0
void func_00392BA0_0x392ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00392BA0_0x392ba0");
#endif

    switch (ctx->pc) {
        case 0x392ba0u: goto label_392ba0;
        case 0x392ba4u: goto label_392ba4;
        case 0x392ba8u: goto label_392ba8;
        case 0x392bacu: goto label_392bac;
        case 0x392bb0u: goto label_392bb0;
        case 0x392bb4u: goto label_392bb4;
        case 0x392bb8u: goto label_392bb8;
        case 0x392bbcu: goto label_392bbc;
        case 0x392bc0u: goto label_392bc0;
        case 0x392bc4u: goto label_392bc4;
        case 0x392bc8u: goto label_392bc8;
        case 0x392bccu: goto label_392bcc;
        case 0x392bd0u: goto label_392bd0;
        case 0x392bd4u: goto label_392bd4;
        case 0x392bd8u: goto label_392bd8;
        case 0x392bdcu: goto label_392bdc;
        case 0x392be0u: goto label_392be0;
        case 0x392be4u: goto label_392be4;
        case 0x392be8u: goto label_392be8;
        case 0x392becu: goto label_392bec;
        case 0x392bf0u: goto label_392bf0;
        case 0x392bf4u: goto label_392bf4;
        case 0x392bf8u: goto label_392bf8;
        case 0x392bfcu: goto label_392bfc;
        case 0x392c00u: goto label_392c00;
        case 0x392c04u: goto label_392c04;
        case 0x392c08u: goto label_392c08;
        case 0x392c0cu: goto label_392c0c;
        case 0x392c10u: goto label_392c10;
        case 0x392c14u: goto label_392c14;
        case 0x392c18u: goto label_392c18;
        case 0x392c1cu: goto label_392c1c;
        case 0x392c20u: goto label_392c20;
        case 0x392c24u: goto label_392c24;
        case 0x392c28u: goto label_392c28;
        case 0x392c2cu: goto label_392c2c;
        case 0x392c30u: goto label_392c30;
        case 0x392c34u: goto label_392c34;
        case 0x392c38u: goto label_392c38;
        case 0x392c3cu: goto label_392c3c;
        case 0x392c40u: goto label_392c40;
        case 0x392c44u: goto label_392c44;
        case 0x392c48u: goto label_392c48;
        case 0x392c4cu: goto label_392c4c;
        case 0x392c50u: goto label_392c50;
        case 0x392c54u: goto label_392c54;
        case 0x392c58u: goto label_392c58;
        case 0x392c5cu: goto label_392c5c;
        case 0x392c60u: goto label_392c60;
        case 0x392c64u: goto label_392c64;
        case 0x392c68u: goto label_392c68;
        case 0x392c6cu: goto label_392c6c;
        case 0x392c70u: goto label_392c70;
        case 0x392c74u: goto label_392c74;
        case 0x392c78u: goto label_392c78;
        case 0x392c7cu: goto label_392c7c;
        case 0x392c80u: goto label_392c80;
        case 0x392c84u: goto label_392c84;
        case 0x392c88u: goto label_392c88;
        case 0x392c8cu: goto label_392c8c;
        case 0x392c90u: goto label_392c90;
        case 0x392c94u: goto label_392c94;
        case 0x392c98u: goto label_392c98;
        case 0x392c9cu: goto label_392c9c;
        case 0x392ca0u: goto label_392ca0;
        case 0x392ca4u: goto label_392ca4;
        case 0x392ca8u: goto label_392ca8;
        case 0x392cacu: goto label_392cac;
        case 0x392cb0u: goto label_392cb0;
        case 0x392cb4u: goto label_392cb4;
        case 0x392cb8u: goto label_392cb8;
        case 0x392cbcu: goto label_392cbc;
        case 0x392cc0u: goto label_392cc0;
        case 0x392cc4u: goto label_392cc4;
        case 0x392cc8u: goto label_392cc8;
        case 0x392cccu: goto label_392ccc;
        default: break;
    }

    ctx->pc = 0x392ba0u;

label_392ba0:
    // 0x392ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_392ba4:
    // 0x392ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_392ba8:
    // 0x392ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_392bac:
    // 0x392bac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392bb0:
    // 0x392bb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x392bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392bb4:
    // 0x392bb4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x392bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_392bb8:
    // 0x392bb8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_392bbc:
    if (ctx->pc == 0x392BBCu) {
        ctx->pc = 0x392BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BB8u;
        // 0x392bbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BC0u;
        goto label_392bc0;
    }
    ctx->pc = 0x392BB8u;
    {
        const bool branch_taken_0x392bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bb8) {
            ctx->pc = 0x392BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392BB8u;
            // 0x392bbc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392BD8u;
            goto label_392bd8;
        }
    }
    ctx->pc = 0x392BC0u;
label_392bc0:
    // 0x392bc0: 0xc0e93ee  jal         func_3A4FB8
label_392bc4:
    if (ctx->pc == 0x392BC4u) {
        ctx->pc = 0x392BC8u;
        goto label_392bc8;
    }
    ctx->pc = 0x392BC0u;
    SET_GPR_U32(ctx, 31, 0x392BC8u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x392BC0u, 0x392BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392BC8u;
label_392bc8:
    // 0x392bc8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x392bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_392bcc:
    // 0x392bcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x392bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_392bd0:
    // 0x392bd0: 0x1000003a  b           . + 4 + (0x3A << 2)
label_392bd4:
    if (ctx->pc == 0x392BD4u) {
        ctx->pc = 0x392BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BD0u;
        // 0x392bd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BD8u;
        goto label_392bd8;
    }
    ctx->pc = 0x392BD0u;
    {
        const bool branch_taken_0x392bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BD0u;
        // 0x392bd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bd0) {
            ctx->pc = 0x392CBCu;
            goto label_392cbc;
        }
    }
    ctx->pc = 0x392BD8u;
label_392bd8:
    // 0x392bd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392bdc:
    // 0x392bdc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x392bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_392be0:
    // 0x392be0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_392be4:
    if (ctx->pc == 0x392BE4u) {
        ctx->pc = 0x392BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BE0u;
        // 0x392be4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BE8u;
        goto label_392be8;
    }
    ctx->pc = 0x392BE0u;
    {
        const bool branch_taken_0x392be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392be0) {
            ctx->pc = 0x392BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392BE0u;
            // 0x392be4: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392BF0u;
            goto label_392bf0;
        }
    }
    ctx->pc = 0x392BE8u;
label_392be8:
    // 0x392be8: 0x10000034  b           . + 4 + (0x34 << 2)
label_392bec:
    if (ctx->pc == 0x392BECu) {
        ctx->pc = 0x392BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BE8u;
        // 0x392bec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BF0u;
        goto label_392bf0;
    }
    ctx->pc = 0x392BE8u;
    {
        const bool branch_taken_0x392be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BE8u;
        // 0x392bec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392be8) {
            ctx->pc = 0x392CBCu;
            goto label_392cbc;
        }
    }
    ctx->pc = 0x392BF0u;
label_392bf0:
    // 0x392bf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_392bf4:
    if (ctx->pc == 0x392BF4u) {
        ctx->pc = 0x392BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF0u;
        // 0x392bf4: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392BF8u;
        goto label_392bf8;
    }
    ctx->pc = 0x392BF0u;
    {
        const bool branch_taken_0x392bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF0u;
        // 0x392bf4: 0x30620202  andi        $v0, $v1, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bf0) {
            ctx->pc = 0x392C08u;
            goto label_392c08;
        }
    }
    ctx->pc = 0x392BF8u;
label_392bf8:
    // 0x392bf8: 0xc0e31fc  jal         func_38C7F0
label_392bfc:
    if (ctx->pc == 0x392BFCu) {
        ctx->pc = 0x392BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BF8u;
        // 0x392bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C00u;
        goto label_392c00;
    }
    ctx->pc = 0x392BF8u;
    SET_GPR_U32(ctx, 31, 0x392C00u);
    ctx->pc = 0x392BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392BF8u;
    // 0x392bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C7F0u, 0x392BF8u, 0x392C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392C00u;
label_392c00:
    // 0x392c00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x392c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392c04:
    // 0x392c04: 0x30620202  andi        $v0, $v1, 0x202
    ctx->pc = 0x392c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_392c08:
    // 0x392c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_392c0c:
    if (ctx->pc == 0x392C0Cu) {
        ctx->pc = 0x392C10u;
        goto label_392c10;
    }
    ctx->pc = 0x392C08u;
    {
        const bool branch_taken_0x392c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c08) {
            ctx->pc = 0x392C18u;
            goto label_392c18;
        }
    }
    ctx->pc = 0x392C10u;
label_392c10:
    // 0x392c10: 0xc0e33b6  jal         func_38CED8
label_392c14:
    if (ctx->pc == 0x392C14u) {
        ctx->pc = 0x392C18u;
        goto label_392c18;
    }
    ctx->pc = 0x392C10u;
    SET_GPR_U32(ctx, 31, 0x392C18u);
    ctx->pc = 0x38CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CED8u, 0x392C10u, 0x392C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392C18u;
label_392c18:
    // 0x392c18: 0xc0e30bc  jal         func_38C2F0
label_392c1c:
    if (ctx->pc == 0x392C1Cu) {
        ctx->pc = 0x392C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C18u;
        // 0x392c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C20u;
        goto label_392c20;
    }
    ctx->pc = 0x392C18u;
    SET_GPR_U32(ctx, 31, 0x392C20u);
    ctx->pc = 0x392C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392C18u;
    // 0x392c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2F0u, 0x392C18u, 0x392C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392C20u;
label_392c20:
    // 0x392c20: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x392c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_392c24:
    // 0x392c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392c28:
    // 0x392c28: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x392c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_392c2c:
    // 0x392c2c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x392c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_392c30:
    // 0x392c30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x392c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_392c34:
    // 0x392c34: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x392c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_392c38:
    // 0x392c38: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x392c38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_392c3c:
    // 0x392c3c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x392c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_392c40:
    // 0x392c40: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x392c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_392c44:
    // 0x392c44: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x392c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_392c48:
    // 0x392c48: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x392c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_392c4c:
    // 0x392c4c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x392c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_392c50:
    // 0x392c50: 0x40f809  jalr        $v0
label_392c54:
    if (ctx->pc == 0x392C54u) {
        ctx->pc = 0x392C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C50u;
        // 0x392c54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C58u;
        goto label_392c58;
    }
    ctx->pc = 0x392C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392C58u);
        ctx->pc = 0x392C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C50u;
        // 0x392c54: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392C50u, 0x392C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392C58u;
label_392c58:
    // 0x392c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392c5c:
    // 0x392c5c: 0x5c800009  bgtzl       $a0, . + 4 + (0x9 << 2)
label_392c60:
    if (ctx->pc == 0x392C60u) {
        ctx->pc = 0x392C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C5Cu;
        // 0x392c60: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C64u;
        goto label_392c64;
    }
    ctx->pc = 0x392C5Cu;
    {
        const bool branch_taken_0x392c5c = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x392c5c) {
            ctx->pc = 0x392C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x392C5Cu;
            // 0x392c60: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x392C84u;
            goto label_392c84;
        }
    }
    ctx->pc = 0x392C64u;
label_392c64:
    // 0x392c64: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_392c68:
    if (ctx->pc == 0x392C68u) {
        ctx->pc = 0x392C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C64u;
        // 0x392c68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C6Cu;
        goto label_392c6c;
    }
    ctx->pc = 0x392C64u;
    {
        const bool branch_taken_0x392c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x392C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C64u;
        // 0x392c68: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c64) {
            ctx->pc = 0x392C74u;
            goto label_392c74;
        }
    }
    ctx->pc = 0x392C6Cu;
label_392c6c:
    // 0x392c6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_392c70:
    if (ctx->pc == 0x392C70u) {
        ctx->pc = 0x392C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C6Cu;
        // 0x392c70: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C74u;
        goto label_392c74;
    }
    ctx->pc = 0x392C6Cu;
    {
        const bool branch_taken_0x392c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C6Cu;
        // 0x392c70: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c6c) {
            ctx->pc = 0x392C7Cu;
            goto label_392c7c;
        }
    }
    ctx->pc = 0x392C74u;
label_392c74:
    // 0x392c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x392c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_392c78:
    // 0x392c78: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x392c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_392c7c:
    // 0x392c7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x392c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_392c80:
    // 0x392c80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x392c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392c84:
    // 0x392c84: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x392c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_392c88:
    // 0x392c88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x392c88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_392c8c:
    // 0x392c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x392c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_392c90:
    // 0x392c90: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_392c94:
    if (ctx->pc == 0x392C94u) {
        ctx->pc = 0x392C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C90u;
        // 0x392c94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392C98u;
        goto label_392c98;
    }
    ctx->pc = 0x392C90u;
    {
        const bool branch_taken_0x392c90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x392C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C90u;
        // 0x392c94: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c90) {
            ctx->pc = 0x392CA0u;
            goto label_392ca0;
        }
    }
    ctx->pc = 0x392C98u;
label_392c98:
    // 0x392c98: 0x10000008  b           . + 4 + (0x8 << 2)
label_392c9c:
    if (ctx->pc == 0x392C9Cu) {
        ctx->pc = 0x392C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C98u;
        // 0x392c9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CA0u;
        goto label_392ca0;
    }
    ctx->pc = 0x392C98u;
    {
        const bool branch_taken_0x392c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C98u;
        // 0x392c9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c98) {
            ctx->pc = 0x392CBCu;
            goto label_392cbc;
        }
    }
    ctx->pc = 0x392CA0u;
label_392ca0:
    // 0x392ca0: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x392ca0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_392ca4:
    // 0x392ca4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x392ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392ca8:
    // 0x392ca8: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_392cac:
    if (ctx->pc == 0x392CACu) {
        ctx->pc = 0x392CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CA8u;
        // 0x392cac: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CB0u;
        goto label_392cb0;
    }
    ctx->pc = 0x392CA8u;
    {
        const bool branch_taken_0x392ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CA8u;
        // 0x392cac: 0x64102d  daddu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ca8) {
            ctx->pc = 0x392CB4u;
            goto label_392cb4;
        }
    }
    ctx->pc = 0x392CB0u;
label_392cb0:
    // 0x392cb0: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x392cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_392cb4:
    // 0x392cb4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x392cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_392cb8:
    // 0x392cb8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x392cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_392cbc:
    // 0x392cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_392cc0:
    // 0x392cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392cc4:
    // 0x392cc4: 0x3e00008  jr          $ra
label_392cc8:
    if (ctx->pc == 0x392CC8u) {
        ctx->pc = 0x392CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC4u;
        // 0x392cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392CCCu;
        goto label_392ccc;
    }
    ctx->pc = 0x392CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CC4u;
        // 0x392cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392CCCu;
label_392ccc:
    // 0x392ccc: 0x0  nop
    ctx->pc = 0x392cccu;
    // NOP
    ctx->pc = 0x392cd0u;
}
