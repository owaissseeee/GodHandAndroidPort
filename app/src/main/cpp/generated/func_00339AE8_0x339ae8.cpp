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

// Function: func_00339AE8
// Address: 0x339ae8 - 0x339c68
void func_00339AE8_0x339ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00339AE8_0x339ae8");
#endif

    switch (ctx->pc) {
        case 0x339ae8u: goto label_339ae8;
        case 0x339aecu: goto label_339aec;
        case 0x339af0u: goto label_339af0;
        case 0x339af4u: goto label_339af4;
        case 0x339af8u: goto label_339af8;
        case 0x339afcu: goto label_339afc;
        case 0x339b00u: goto label_339b00;
        case 0x339b04u: goto label_339b04;
        case 0x339b08u: goto label_339b08;
        case 0x339b0cu: goto label_339b0c;
        case 0x339b10u: goto label_339b10;
        case 0x339b14u: goto label_339b14;
        case 0x339b18u: goto label_339b18;
        case 0x339b1cu: goto label_339b1c;
        case 0x339b20u: goto label_339b20;
        case 0x339b24u: goto label_339b24;
        case 0x339b28u: goto label_339b28;
        case 0x339b2cu: goto label_339b2c;
        case 0x339b30u: goto label_339b30;
        case 0x339b34u: goto label_339b34;
        case 0x339b38u: goto label_339b38;
        case 0x339b3cu: goto label_339b3c;
        case 0x339b40u: goto label_339b40;
        case 0x339b44u: goto label_339b44;
        case 0x339b48u: goto label_339b48;
        case 0x339b4cu: goto label_339b4c;
        case 0x339b50u: goto label_339b50;
        case 0x339b54u: goto label_339b54;
        case 0x339b58u: goto label_339b58;
        case 0x339b5cu: goto label_339b5c;
        case 0x339b60u: goto label_339b60;
        case 0x339b64u: goto label_339b64;
        case 0x339b68u: goto label_339b68;
        case 0x339b6cu: goto label_339b6c;
        case 0x339b70u: goto label_339b70;
        case 0x339b74u: goto label_339b74;
        case 0x339b78u: goto label_339b78;
        case 0x339b7cu: goto label_339b7c;
        case 0x339b80u: goto label_339b80;
        case 0x339b84u: goto label_339b84;
        case 0x339b88u: goto label_339b88;
        case 0x339b8cu: goto label_339b8c;
        case 0x339b90u: goto label_339b90;
        case 0x339b94u: goto label_339b94;
        case 0x339b98u: goto label_339b98;
        case 0x339b9cu: goto label_339b9c;
        case 0x339ba0u: goto label_339ba0;
        case 0x339ba4u: goto label_339ba4;
        case 0x339ba8u: goto label_339ba8;
        case 0x339bacu: goto label_339bac;
        case 0x339bb0u: goto label_339bb0;
        case 0x339bb4u: goto label_339bb4;
        case 0x339bb8u: goto label_339bb8;
        case 0x339bbcu: goto label_339bbc;
        case 0x339bc0u: goto label_339bc0;
        case 0x339bc4u: goto label_339bc4;
        case 0x339bc8u: goto label_339bc8;
        case 0x339bccu: goto label_339bcc;
        case 0x339bd0u: goto label_339bd0;
        case 0x339bd4u: goto label_339bd4;
        case 0x339bd8u: goto label_339bd8;
        case 0x339bdcu: goto label_339bdc;
        case 0x339be0u: goto label_339be0;
        case 0x339be4u: goto label_339be4;
        case 0x339be8u: goto label_339be8;
        case 0x339becu: goto label_339bec;
        case 0x339bf0u: goto label_339bf0;
        case 0x339bf4u: goto label_339bf4;
        case 0x339bf8u: goto label_339bf8;
        case 0x339bfcu: goto label_339bfc;
        case 0x339c00u: goto label_339c00;
        case 0x339c04u: goto label_339c04;
        case 0x339c08u: goto label_339c08;
        case 0x339c0cu: goto label_339c0c;
        case 0x339c10u: goto label_339c10;
        case 0x339c14u: goto label_339c14;
        case 0x339c18u: goto label_339c18;
        case 0x339c1cu: goto label_339c1c;
        case 0x339c20u: goto label_339c20;
        case 0x339c24u: goto label_339c24;
        case 0x339c28u: goto label_339c28;
        case 0x339c2cu: goto label_339c2c;
        case 0x339c30u: goto label_339c30;
        case 0x339c34u: goto label_339c34;
        case 0x339c38u: goto label_339c38;
        case 0x339c3cu: goto label_339c3c;
        case 0x339c40u: goto label_339c40;
        case 0x339c44u: goto label_339c44;
        case 0x339c48u: goto label_339c48;
        case 0x339c4cu: goto label_339c4c;
        case 0x339c50u: goto label_339c50;
        case 0x339c54u: goto label_339c54;
        case 0x339c58u: goto label_339c58;
        case 0x339c5cu: goto label_339c5c;
        case 0x339c60u: goto label_339c60;
        case 0x339c64u: goto label_339c64;
        default: break;
    }

    ctx->pc = 0x339ae8u;

label_339ae8:
    // 0x339ae8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_339aec:
    // 0x339aec: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x339aecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_339af0:
    // 0x339af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_339af4:
    // 0x339af4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x339af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339af8:
    // 0x339af8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x339af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_339afc:
    // 0x339afc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x339afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_339b00:
    // 0x339b00: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_339b04:
    if (ctx->pc == 0x339B04u) {
        ctx->pc = 0x339B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B00u;
        // 0x339b04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B08u;
        goto label_339b08;
    }
    ctx->pc = 0x339B00u;
    {
        const bool branch_taken_0x339b00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B00u;
        // 0x339b04: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b00) {
            ctx->pc = 0x339B30u;
            goto label_339b30;
        }
    }
    ctx->pc = 0x339B08u;
label_339b08:
    // 0x339b08: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339b0c:
    // 0x339b0c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339b10:
    // 0x339b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339b14:
    // 0x339b14: 0x24845b38  addiu       $a0, $a0, 0x5B38
    ctx->pc = 0x339b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23352));
label_339b18:
    // 0x339b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339b1c:
    // 0x339b1c: 0x24a55a80  addiu       $a1, $a1, 0x5A80
    ctx->pc = 0x339b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23168));
label_339b20:
    // 0x339b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339b24:
    // 0x339b24: 0x80ce516  j           func_339458
label_339b28:
    if (ctx->pc == 0x339B28u) {
        ctx->pc = 0x339B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B24u;
        // 0x339b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B2Cu;
        goto label_339b2c;
    }
    ctx->pc = 0x339B24u;
    ctx->pc = 0x339B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B24u;
    // 0x339b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339B24u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339B2Cu;
label_339b2c:
    // 0x339b2c: 0x0  nop
    ctx->pc = 0x339b2cu;
    // NOP
label_339b30:
    // 0x339b30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_339b34:
    // 0x339b34: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_339b38:
    if (ctx->pc == 0x339B38u) {
        ctx->pc = 0x339B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B34u;
        // 0x339b38: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B3Cu;
        goto label_339b3c;
    }
    ctx->pc = 0x339B34u;
    {
        const bool branch_taken_0x339b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339b34) {
            ctx->pc = 0x339B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339B34u;
            // 0x339b38: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B60u;
            goto label_339b60;
        }
    }
    ctx->pc = 0x339B3Cu;
label_339b3c:
    // 0x339b3c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x339b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_339b40:
    // 0x339b40: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x339b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_339b44:
    // 0x339b44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339b48:
    // 0x339b48: 0x24845b48  addiu       $a0, $a0, 0x5B48
    ctx->pc = 0x339b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23368));
label_339b4c:
    // 0x339b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339b50:
    // 0x339b50: 0x24a55ab0  addiu       $a1, $a1, 0x5AB0
    ctx->pc = 0x339b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23216));
label_339b54:
    // 0x339b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339b58:
    // 0x339b58: 0x80ce516  j           func_339458
label_339b5c:
    if (ctx->pc == 0x339B5Cu) {
        ctx->pc = 0x339B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B58u;
        // 0x339b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B60u;
        goto label_339b60;
    }
    ctx->pc = 0x339B58u;
    ctx->pc = 0x339B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B58u;
    // 0x339b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339458u, 0x339B58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x339B60u;
label_339b60:
    // 0x339b60: 0x1900003b  blez        $t0, . + 4 + (0x3B << 2)
label_339b64:
    if (ctx->pc == 0x339B64u) {
        ctx->pc = 0x339B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B60u;
        // 0x339b64: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B68u;
        goto label_339b68;
    }
    ctx->pc = 0x339B60u;
    {
        const bool branch_taken_0x339b60 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x339B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B60u;
        // 0x339b64: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b60) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339B68u;
label_339b68:
    // 0x339b68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x339b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_339b6c:
    // 0x339b6c: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_339b70:
    if (ctx->pc == 0x339B70u) {
        ctx->pc = 0x339B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B6Cu;
        // 0x339b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B74u;
        goto label_339b74;
    }
    ctx->pc = 0x339B6Cu;
    {
        const bool branch_taken_0x339b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B6Cu;
        // 0x339b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b6c) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339B74u;
label_339b74:
    // 0x339b74: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_339b78:
    if (ctx->pc == 0x339B78u) {
        ctx->pc = 0x339B7Cu;
        goto label_339b7c;
    }
    ctx->pc = 0x339B74u;
    {
        const bool branch_taken_0x339b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x339b74) {
            ctx->pc = 0x339C10u;
            goto label_339c10;
        }
    }
    ctx->pc = 0x339B7Cu;
label_339b7c:
    // 0x339b7c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x339b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_339b80:
    // 0x339b80: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x339b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_339b84:
    // 0x339b84: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x339b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_339b88:
    // 0x339b88: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x339b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_339b8c:
    // 0x339b8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_339b90:
    if (ctx->pc == 0x339B90u) {
        ctx->pc = 0x339B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B8Cu;
        // 0x339b90: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B94u;
        goto label_339b94;
    }
    ctx->pc = 0x339B8Cu;
    {
        const bool branch_taken_0x339b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B8Cu;
        // 0x339b90: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b8c) {
            ctx->pc = 0x339BC0u;
            goto label_339bc0;
        }
    }
    ctx->pc = 0x339B94u;
label_339b94:
    // 0x339b94: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x339b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_339b98:
    // 0x339b98: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x339b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_339b9c:
    // 0x339b9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x339b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_339ba0:
    // 0x339ba0: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x339ba0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_339ba4:
    // 0x339ba4: 0xc0e9452  jal         func_3A5148
label_339ba8:
    if (ctx->pc == 0x339BA8u) {
        ctx->pc = 0x339BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BA4u;
        // 0x339ba8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339BACu;
        goto label_339bac;
    }
    ctx->pc = 0x339BA4u;
    SET_GPR_U32(ctx, 31, 0x339BACu);
    ctx->pc = 0x339BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BA4u;
    // 0x339ba8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x339BA4u, 0x339BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BACu;
label_339bac:
    // 0x339bac: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339bb0:
    // 0x339bb0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x339bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_339bb4:
    // 0x339bb4: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x339bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_339bb8:
    // 0x339bb8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x339bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_339bbc:
    // 0x339bbc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x339bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_339bc0:
    // 0x339bc0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x339bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_339bc4:
    // 0x339bc4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x339bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_339bc8:
    // 0x339bc8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_339bcc:
    if (ctx->pc == 0x339BCCu) {
        ctx->pc = 0x339BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BC8u;
        // 0x339bcc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339BD0u;
        goto label_339bd0;
    }
    ctx->pc = 0x339BC8u;
    {
        const bool branch_taken_0x339bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339bc8) {
            ctx->pc = 0x339BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339BC8u;
            // 0x339bcc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339BF4u;
            goto label_339bf4;
        }
    }
    ctx->pc = 0x339BD0u;
label_339bd0:
    // 0x339bd0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x339bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_339bd4:
    // 0x339bd4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x339bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_339bd8:
    // 0x339bd8: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x339bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_339bdc:
    // 0x339bdc: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x339bdcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_339be0:
    // 0x339be0: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x339be0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_339be4:
    // 0x339be4: 0xc0e9452  jal         func_3A5148
label_339be8:
    if (ctx->pc == 0x339BE8u) {
        ctx->pc = 0x339BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BE4u;
        // 0x339be8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339BECu;
        goto label_339bec;
    }
    ctx->pc = 0x339BE4u;
    SET_GPR_U32(ctx, 31, 0x339BECu);
    ctx->pc = 0x339BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BE4u;
    // 0x339be8: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x339BE4u, 0x339BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BECu;
label_339bec:
    // 0x339bec: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x339becu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339bf0:
    // 0x339bf0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x339bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_339bf4:
    // 0x339bf4: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x339bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_339bf8:
    // 0x339bf8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_339bfc:
    // 0x339bfc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x339bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_339c00:
    // 0x339c00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339c04:
    // 0x339c04: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_339c08:
    // 0x339c08: 0x10000011  b           . + 4 + (0x11 << 2)
label_339c0c:
    if (ctx->pc == 0x339C0Cu) {
        ctx->pc = 0x339C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C08u;
        // 0x339c0c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C10u;
        goto label_339c10;
    }
    ctx->pc = 0x339C08u;
    {
        const bool branch_taken_0x339c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C08u;
        // 0x339c0c: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c08) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339C10u;
label_339c10:
    // 0x339c10: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_339c14:
    if (ctx->pc == 0x339C14u) {
        ctx->pc = 0x339C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C10u;
        // 0x339c14: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C18u;
        goto label_339c18;
    }
    ctx->pc = 0x339C10u;
    {
        const bool branch_taken_0x339c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339c10) {
            ctx->pc = 0x339C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339C10u;
            // 0x339c14: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339C38u;
            goto label_339c38;
        }
    }
    ctx->pc = 0x339C18u;
label_339c18:
    // 0x339c18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_339c1c:
    // 0x339c1c: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x339c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_339c20:
    // 0x339c20: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x339c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_339c24:
    // 0x339c24: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x339c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_339c28:
    // 0x339c28: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339c2c:
    // 0x339c2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x339c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_339c30:
    // 0x339c30: 0x10000007  b           . + 4 + (0x7 << 2)
label_339c34:
    if (ctx->pc == 0x339C34u) {
        ctx->pc = 0x339C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C30u;
        // 0x339c34: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C38u;
        goto label_339c38;
    }
    ctx->pc = 0x339C30u;
    {
        const bool branch_taken_0x339c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C30u;
        // 0x339c34: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c30) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339C38u;
label_339c38:
    // 0x339c38: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x339c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_339c3c:
    // 0x339c3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_339c40:
    if (ctx->pc == 0x339C40u) {
        ctx->pc = 0x339C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C3Cu;
        // 0x339c40: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C44u;
        goto label_339c44;
    }
    ctx->pc = 0x339C3Cu;
    {
        const bool branch_taken_0x339c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C3Cu;
        // 0x339c40: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c3c) {
            ctx->pc = 0x339C50u;
            goto label_339c50;
        }
    }
    ctx->pc = 0x339C44u;
label_339c44:
    // 0x339c44: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x339c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_339c48:
    // 0x339c48: 0x40f809  jalr        $v0
label_339c4c:
    if (ctx->pc == 0x339C4Cu) {
        ctx->pc = 0x339C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C48u;
        // 0x339c4c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C50u;
        goto label_339c50;
    }
    ctx->pc = 0x339C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339C50u);
        ctx->pc = 0x339C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C48u;
        // 0x339c4c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C48u, 0x339C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339C50u;
label_339c50:
    // 0x339c50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x339c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339c54:
    // 0x339c54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x339c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_339c58:
    // 0x339c58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_339c5c:
    // 0x339c5c: 0x3e00008  jr          $ra
label_339c60:
    if (ctx->pc == 0x339C60u) {
        ctx->pc = 0x339C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C5Cu;
        // 0x339c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339C64u;
        goto label_339c64;
    }
    ctx->pc = 0x339C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C5Cu;
        // 0x339c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339C64u;
label_339c64:
    // 0x339c64: 0x0  nop
    ctx->pc = 0x339c64u;
    // NOP
    ctx->pc = 0x339c68u;
}
