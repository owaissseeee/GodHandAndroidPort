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

// Function: _IO_do_write
// Address: 0x392a80 - 0x392ba0
void ps2__IO_do_write_0x392a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_do_write_0x392a80");
#endif

    switch (ctx->pc) {
        case 0x392a80u: goto label_392a80;
        case 0x392a84u: goto label_392a84;
        case 0x392a88u: goto label_392a88;
        case 0x392a8cu: goto label_392a8c;
        case 0x392a90u: goto label_392a90;
        case 0x392a94u: goto label_392a94;
        case 0x392a98u: goto label_392a98;
        case 0x392a9cu: goto label_392a9c;
        case 0x392aa0u: goto label_392aa0;
        case 0x392aa4u: goto label_392aa4;
        case 0x392aa8u: goto label_392aa8;
        case 0x392aacu: goto label_392aac;
        case 0x392ab0u: goto label_392ab0;
        case 0x392ab4u: goto label_392ab4;
        case 0x392ab8u: goto label_392ab8;
        case 0x392abcu: goto label_392abc;
        case 0x392ac0u: goto label_392ac0;
        case 0x392ac4u: goto label_392ac4;
        case 0x392ac8u: goto label_392ac8;
        case 0x392accu: goto label_392acc;
        case 0x392ad0u: goto label_392ad0;
        case 0x392ad4u: goto label_392ad4;
        case 0x392ad8u: goto label_392ad8;
        case 0x392adcu: goto label_392adc;
        case 0x392ae0u: goto label_392ae0;
        case 0x392ae4u: goto label_392ae4;
        case 0x392ae8u: goto label_392ae8;
        case 0x392aecu: goto label_392aec;
        case 0x392af0u: goto label_392af0;
        case 0x392af4u: goto label_392af4;
        case 0x392af8u: goto label_392af8;
        case 0x392afcu: goto label_392afc;
        case 0x392b00u: goto label_392b00;
        case 0x392b04u: goto label_392b04;
        case 0x392b08u: goto label_392b08;
        case 0x392b0cu: goto label_392b0c;
        case 0x392b10u: goto label_392b10;
        case 0x392b14u: goto label_392b14;
        case 0x392b18u: goto label_392b18;
        case 0x392b1cu: goto label_392b1c;
        case 0x392b20u: goto label_392b20;
        case 0x392b24u: goto label_392b24;
        case 0x392b28u: goto label_392b28;
        case 0x392b2cu: goto label_392b2c;
        case 0x392b30u: goto label_392b30;
        case 0x392b34u: goto label_392b34;
        case 0x392b38u: goto label_392b38;
        case 0x392b3cu: goto label_392b3c;
        case 0x392b40u: goto label_392b40;
        case 0x392b44u: goto label_392b44;
        case 0x392b48u: goto label_392b48;
        case 0x392b4cu: goto label_392b4c;
        case 0x392b50u: goto label_392b50;
        case 0x392b54u: goto label_392b54;
        case 0x392b58u: goto label_392b58;
        case 0x392b5cu: goto label_392b5c;
        case 0x392b60u: goto label_392b60;
        case 0x392b64u: goto label_392b64;
        case 0x392b68u: goto label_392b68;
        case 0x392b6cu: goto label_392b6c;
        case 0x392b70u: goto label_392b70;
        case 0x392b74u: goto label_392b74;
        case 0x392b78u: goto label_392b78;
        case 0x392b7cu: goto label_392b7c;
        case 0x392b80u: goto label_392b80;
        case 0x392b84u: goto label_392b84;
        case 0x392b88u: goto label_392b88;
        case 0x392b8cu: goto label_392b8c;
        case 0x392b90u: goto label_392b90;
        case 0x392b94u: goto label_392b94;
        case 0x392b98u: goto label_392b98;
        case 0x392b9cu: goto label_392b9c;
        default: break;
    }

    ctx->pc = 0x392a80u;

label_392a80:
    // 0x392a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x392a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_392a84:
    // 0x392a84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x392a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_392a88:
    // 0x392a88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x392a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_392a8c:
    // 0x392a8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x392a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_392a90:
    // 0x392a90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_392a94:
    // 0x392a94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x392a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_392a98:
    // 0x392a98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x392a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_392a9c:
    // 0x392a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_392aa0:
    // 0x392aa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x392aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_392aa4:
    // 0x392aa4: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_392aa8:
    if (ctx->pc == 0x392AA8u) {
        ctx->pc = 0x392AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AA4u;
        // 0x392aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AACu;
        goto label_392aac;
    }
    ctx->pc = 0x392AA4u;
    {
        const bool branch_taken_0x392aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AA4u;
        // 0x392aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392aa4) {
            ctx->pc = 0x392B80u;
            goto label_392b80;
        }
    }
    ctx->pc = 0x392AACu;
label_392aac:
    // 0x392aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x392aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392ab0:
    // 0x392ab0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x392ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_392ab4:
    // 0x392ab4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_392ab8:
    if (ctx->pc == 0x392AB8u) {
        ctx->pc = 0x392AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AB4u;
        // 0x392ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392ABCu;
        goto label_392abc;
    }
    ctx->pc = 0x392AB4u;
    {
        const bool branch_taken_0x392ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AB4u;
        // 0x392ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ab4) {
            ctx->pc = 0x392AC4u;
            goto label_392ac4;
        }
    }
    ctx->pc = 0x392ABCu;
label_392abc:
    // 0x392abc: 0x1000000f  b           . + 4 + (0xF << 2)
label_392ac0:
    if (ctx->pc == 0x392AC0u) {
        ctx->pc = 0x392AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ABCu;
        // 0x392ac0: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AC4u;
        goto label_392ac4;
    }
    ctx->pc = 0x392ABCu;
    {
        const bool branch_taken_0x392abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ABCu;
        // 0x392ac0: 0xfe020040  sd          $v0, 0x40($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392abc) {
            ctx->pc = 0x392AFCu;
            goto label_392afc;
        }
    }
    ctx->pc = 0x392AC4u;
label_392ac4:
    // 0x392ac4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x392ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_392ac8:
    // 0x392ac8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x392ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_392acc:
    // 0x392acc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_392ad0:
    if (ctx->pc == 0x392AD0u) {
        ctx->pc = 0x392AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ACCu;
        // 0x392ad0: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AD4u;
        goto label_392ad4;
    }
    ctx->pc = 0x392ACCu;
    {
        const bool branch_taken_0x392acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x392AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392ACCu;
        // 0x392ad0: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392acc) {
            ctx->pc = 0x392AFCu;
            goto label_392afc;
        }
    }
    ctx->pc = 0x392AD4u;
label_392ad4:
    // 0x392ad4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x392ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_392ad8:
    // 0x392ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392adc:
    // 0x392adc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x392adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_392ae0:
    // 0x392ae0: 0x40f809  jalr        $v0
label_392ae4:
    if (ctx->pc == 0x392AE4u) {
        ctx->pc = 0x392AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AE0u;
        // 0x392ae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AE8u;
        goto label_392ae8;
    }
    ctx->pc = 0x392AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392AE8u);
        ctx->pc = 0x392AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AE0u;
        // 0x392ae4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392AE0u, 0x392AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392AE8u;
label_392ae8:
    // 0x392ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x392ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392aec:
    // 0x392aec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x392aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392af0:
    // 0x392af0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_392af4:
    if (ctx->pc == 0x392AF4u) {
        ctx->pc = 0x392AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AF0u;
        // 0x392af4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392AF8u;
        goto label_392af8;
    }
    ctx->pc = 0x392AF0u;
    {
        const bool branch_taken_0x392af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x392AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392AF0u;
        // 0x392af4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392af0) {
            ctx->pc = 0x392B84u;
            goto label_392b84;
        }
    }
    ctx->pc = 0x392AF8u;
label_392af8:
    // 0x392af8: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x392af8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_392afc:
    // 0x392afc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x392afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_392b00:
    // 0x392b00: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x392b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
label_392b04:
    // 0x392b04: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x392b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_392b08:
    // 0x392b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x392b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_392b0c:
    // 0x392b0c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x392b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_392b10:
    // 0x392b10: 0x40f809  jalr        $v0
label_392b14:
    if (ctx->pc == 0x392B14u) {
        ctx->pc = 0x392B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B10u;
        // 0x392b14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B18u;
        goto label_392b18;
    }
    ctx->pc = 0x392B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x392B18u);
        ctx->pc = 0x392B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B10u;
        // 0x392b14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B10u, 0x392B18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x392B18u;
label_392b18:
    // 0x392b18: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x392b18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_392b1c:
    // 0x392b1c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x392b1cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_392b20:
    // 0x392b20: 0x96020048  lhu         $v0, 0x48($s0)
    ctx->pc = 0x392b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_392b24:
    // 0x392b24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_392b28:
    if (ctx->pc == 0x392B28u) {
        ctx->pc = 0x392B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B24u;
        // 0x392b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B2Cu;
        goto label_392b2c;
    }
    ctx->pc = 0x392B24u;
    {
        const bool branch_taken_0x392b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B24u;
        // 0x392b28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b24) {
            ctx->pc = 0x392B44u;
            goto label_392b44;
        }
    }
    ctx->pc = 0x392B2Cu;
label_392b2c:
    // 0x392b2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x392b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_392b30:
    // 0x392b30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x392b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_392b34:
    // 0x392b34: 0xc0e3384  jal         func_38CE10
label_392b38:
    if (ctx->pc == 0x392B38u) {
        ctx->pc = 0x392B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B34u;
        // 0x392b38: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B3Cu;
        goto label_392b3c;
    }
    ctx->pc = 0x392B34u;
    SET_GPR_U32(ctx, 31, 0x392B3Cu);
    ctx->pc = 0x392B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392B34u;
    // 0x392b38: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE10u, 0x392B34u, 0x392B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392B3Cu;
label_392b3c:
    // 0x392b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x392b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_392b40:
    // 0x392b40: 0xa6020048  sh          $v0, 0x48($s0)
    ctx->pc = 0x392b40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 2));
label_392b44:
    // 0x392b44: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x392b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_392b48:
    // 0x392b48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x392b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_392b4c:
    // 0x392b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x392b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_392b50:
    // 0x392b50: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x392b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_392b54:
    // 0x392b54: 0x30630202  andi        $v1, $v1, 0x202
    ctx->pc = 0x392b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)514);
label_392b58:
    // 0x392b58: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x392b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_392b5c:
    // 0x392b5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x392b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_392b60:
    // 0x392b60: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x392b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_392b64:
    // 0x392b64: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_392b68:
    if (ctx->pc == 0x392B68u) {
        ctx->pc = 0x392B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B64u;
        // 0x392b68: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B6Cu;
        goto label_392b6c;
    }
    ctx->pc = 0x392B64u;
    {
        const bool branch_taken_0x392b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x392B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B64u;
        // 0x392b68: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b64) {
            ctx->pc = 0x392B70u;
            goto label_392b70;
        }
    }
    ctx->pc = 0x392B6Cu;
label_392b6c:
    // 0x392b6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x392b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_392b70:
    // 0x392b70: 0x2511826  xor         $v1, $s2, $s1
    ctx->pc = 0x392b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 17));
label_392b74:
    // 0x392b74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x392b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_392b78:
    // 0x392b78: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x392b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_392b7c:
    // 0x392b7c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x392b7cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_392b80:
    // 0x392b80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x392b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_392b84:
    // 0x392b84: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x392b84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_392b88:
    // 0x392b88: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x392b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_392b8c:
    // 0x392b8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x392b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_392b90:
    // 0x392b90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x392b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_392b94:
    // 0x392b94: 0x3e00008  jr          $ra
label_392b98:
    if (ctx->pc == 0x392B98u) {
        ctx->pc = 0x392B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B94u;
        // 0x392b98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x392B9Cu;
        goto label_392b9c;
    }
    ctx->pc = 0x392B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B94u;
        // 0x392b98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392B9Cu;
label_392b9c:
    // 0x392b9c: 0x0  nop
    ctx->pc = 0x392b9cu;
    // NOP
    ctx->pc = 0x392ba0u;
}
