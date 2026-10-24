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

// Function: __srefill
// Address: 0x3a6aa8 - 0x3a6c10
void ps2___srefill_0x3a6aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___srefill_0x3a6aa8");
#endif

    switch (ctx->pc) {
        case 0x3a6aa8u: goto label_3a6aa8;
        case 0x3a6aacu: goto label_3a6aac;
        case 0x3a6ab0u: goto label_3a6ab0;
        case 0x3a6ab4u: goto label_3a6ab4;
        case 0x3a6ab8u: goto label_3a6ab8;
        case 0x3a6abcu: goto label_3a6abc;
        case 0x3a6ac0u: goto label_3a6ac0;
        case 0x3a6ac4u: goto label_3a6ac4;
        case 0x3a6ac8u: goto label_3a6ac8;
        case 0x3a6accu: goto label_3a6acc;
        case 0x3a6ad0u: goto label_3a6ad0;
        case 0x3a6ad4u: goto label_3a6ad4;
        case 0x3a6ad8u: goto label_3a6ad8;
        case 0x3a6adcu: goto label_3a6adc;
        case 0x3a6ae0u: goto label_3a6ae0;
        case 0x3a6ae4u: goto label_3a6ae4;
        case 0x3a6ae8u: goto label_3a6ae8;
        case 0x3a6aecu: goto label_3a6aec;
        case 0x3a6af0u: goto label_3a6af0;
        case 0x3a6af4u: goto label_3a6af4;
        case 0x3a6af8u: goto label_3a6af8;
        case 0x3a6afcu: goto label_3a6afc;
        case 0x3a6b00u: goto label_3a6b00;
        case 0x3a6b04u: goto label_3a6b04;
        case 0x3a6b08u: goto label_3a6b08;
        case 0x3a6b0cu: goto label_3a6b0c;
        case 0x3a6b10u: goto label_3a6b10;
        case 0x3a6b14u: goto label_3a6b14;
        case 0x3a6b18u: goto label_3a6b18;
        case 0x3a6b1cu: goto label_3a6b1c;
        case 0x3a6b20u: goto label_3a6b20;
        case 0x3a6b24u: goto label_3a6b24;
        case 0x3a6b28u: goto label_3a6b28;
        case 0x3a6b2cu: goto label_3a6b2c;
        case 0x3a6b30u: goto label_3a6b30;
        case 0x3a6b34u: goto label_3a6b34;
        case 0x3a6b38u: goto label_3a6b38;
        case 0x3a6b3cu: goto label_3a6b3c;
        case 0x3a6b40u: goto label_3a6b40;
        case 0x3a6b44u: goto label_3a6b44;
        case 0x3a6b48u: goto label_3a6b48;
        case 0x3a6b4cu: goto label_3a6b4c;
        case 0x3a6b50u: goto label_3a6b50;
        case 0x3a6b54u: goto label_3a6b54;
        case 0x3a6b58u: goto label_3a6b58;
        case 0x3a6b5cu: goto label_3a6b5c;
        case 0x3a6b60u: goto label_3a6b60;
        case 0x3a6b64u: goto label_3a6b64;
        case 0x3a6b68u: goto label_3a6b68;
        case 0x3a6b6cu: goto label_3a6b6c;
        case 0x3a6b70u: goto label_3a6b70;
        case 0x3a6b74u: goto label_3a6b74;
        case 0x3a6b78u: goto label_3a6b78;
        case 0x3a6b7cu: goto label_3a6b7c;
        case 0x3a6b80u: goto label_3a6b80;
        case 0x3a6b84u: goto label_3a6b84;
        case 0x3a6b88u: goto label_3a6b88;
        case 0x3a6b8cu: goto label_3a6b8c;
        case 0x3a6b90u: goto label_3a6b90;
        case 0x3a6b94u: goto label_3a6b94;
        case 0x3a6b98u: goto label_3a6b98;
        case 0x3a6b9cu: goto label_3a6b9c;
        case 0x3a6ba0u: goto label_3a6ba0;
        case 0x3a6ba4u: goto label_3a6ba4;
        case 0x3a6ba8u: goto label_3a6ba8;
        case 0x3a6bacu: goto label_3a6bac;
        case 0x3a6bb0u: goto label_3a6bb0;
        case 0x3a6bb4u: goto label_3a6bb4;
        case 0x3a6bb8u: goto label_3a6bb8;
        case 0x3a6bbcu: goto label_3a6bbc;
        case 0x3a6bc0u: goto label_3a6bc0;
        case 0x3a6bc4u: goto label_3a6bc4;
        case 0x3a6bc8u: goto label_3a6bc8;
        case 0x3a6bccu: goto label_3a6bcc;
        case 0x3a6bd0u: goto label_3a6bd0;
        case 0x3a6bd4u: goto label_3a6bd4;
        case 0x3a6bd8u: goto label_3a6bd8;
        case 0x3a6bdcu: goto label_3a6bdc;
        case 0x3a6be0u: goto label_3a6be0;
        case 0x3a6be4u: goto label_3a6be4;
        case 0x3a6be8u: goto label_3a6be8;
        case 0x3a6becu: goto label_3a6bec;
        case 0x3a6bf0u: goto label_3a6bf0;
        case 0x3a6bf4u: goto label_3a6bf4;
        case 0x3a6bf8u: goto label_3a6bf8;
        case 0x3a6bfcu: goto label_3a6bfc;
        case 0x3a6c00u: goto label_3a6c00;
        case 0x3a6c04u: goto label_3a6c04;
        case 0x3a6c08u: goto label_3a6c08;
        case 0x3a6c0cu: goto label_3a6c0c;
        default: break;
    }

    ctx->pc = 0x3a6aa8u;

label_3a6aa8:
    // 0x3a6aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a6aac:
    // 0x3a6aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a6ab0:
    // 0x3a6ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a6ab4:
    // 0x3a6ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6ab8:
    // 0x3a6ab8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a6abc:
    // 0x3a6abc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_3a6ac0:
    if (ctx->pc == 0x3A6AC0u) {
        ctx->pc = 0x3A6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6ABCu;
        // 0x3a6ac0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6AC4u;
        goto label_3a6ac4;
    }
    ctx->pc = 0x3A6ABCu;
    {
        const bool branch_taken_0x3a6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6abc) {
            ctx->pc = 0x3A6AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6ABCu;
            // 0x3a6ac0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6AD8u;
            goto label_3a6ad8;
        }
    }
    ctx->pc = 0x3A6AC4u;
label_3a6ac4:
    // 0x3a6ac4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a6ac8:
    // 0x3a6ac8: 0x8c43a62c  lw          $v1, -0x59D4($v0)
    ctx->pc = 0x3a6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a6acc:
    // 0x3a6acc: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a6accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a6ad0:
    // 0x3a6ad0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a6ad4:
    // 0x3a6ad4: 0x0  nop
    ctx->pc = 0x3a6ad4u;
    // NOP
label_3a6ad8:
    // 0x3a6ad8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x3a6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3a6adc:
    // 0x3a6adc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3a6ae0:
    if (ctx->pc == 0x3A6AE0u) {
        ctx->pc = 0x3A6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6ADCu;
        // 0x3a6ae0: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6AE4u;
        goto label_3a6ae4;
    }
    ctx->pc = 0x3A6ADCu;
    {
        const bool branch_taken_0x3a6adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6adc) {
            ctx->pc = 0x3A6AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6ADCu;
            // 0x3a6ae0: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6AF0u;
            goto label_3a6af0;
        }
    }
    ctx->pc = 0x3A6AE4u;
label_3a6ae4:
    // 0x3a6ae4: 0xc0e987c  jal         func_3A61F0
label_3a6ae8:
    if (ctx->pc == 0x3A6AE8u) {
        ctx->pc = 0x3A6AECu;
        goto label_3a6aec;
    }
    ctx->pc = 0x3A6AE4u;
    SET_GPR_U32(ctx, 31, 0x3A6AECu);
    ctx->pc = 0x3A61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A61F0u, 0x3A6AE4u, 0x3A6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6AECu;
label_3a6aec:
    // 0x3a6aec: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x3a6aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6af0:
    // 0x3a6af0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x3a6af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_3a6af4:
    // 0x3a6af4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3a6af8:
    if (ctx->pc == 0x3A6AF8u) {
        ctx->pc = 0x3A6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AF4u;
        // 0x3a6af8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6AFCu;
        goto label_3a6afc;
    }
    ctx->pc = 0x3A6AF4u;
    {
        const bool branch_taken_0x3a6af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AF4u;
        // 0x3a6af8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6af4) {
            ctx->pc = 0x3A6B14u;
            goto label_3a6b14;
        }
    }
    ctx->pc = 0x3A6AFCu;
label_3a6afc:
    // 0x3a6afc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3a6afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_3a6b00:
    // 0x3a6b00: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3a6b04:
    if (ctx->pc == 0x3A6B04u) {
        ctx->pc = 0x3A6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B00u;
        // 0x3a6b04: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B08u;
        goto label_3a6b08;
    }
    ctx->pc = 0x3A6B00u;
    {
        const bool branch_taken_0x3a6b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b00) {
            ctx->pc = 0x3A6B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6B00u;
            // 0x3a6b04: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6B58u;
            goto label_3a6b58;
        }
    }
    ctx->pc = 0x3A6B08u;
label_3a6b08:
    // 0x3a6b08: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3a6b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_3a6b0c:
    // 0x3a6b0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3a6b10:
    if (ctx->pc == 0x3A6B10u) {
        ctx->pc = 0x3A6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B0Cu;
        // 0x3a6b10: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B14u;
        goto label_3a6b14;
    }
    ctx->pc = 0x3A6B0Cu;
    {
        const bool branch_taken_0x3a6b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B0Cu;
        // 0x3a6b10: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b0c) {
            ctx->pc = 0x3A6B1Cu;
            goto label_3a6b1c;
        }
    }
    ctx->pc = 0x3A6B14u;
label_3a6b14:
    // 0x3a6b14: 0x1000003a  b           . + 4 + (0x3A << 2)
label_3a6b18:
    if (ctx->pc == 0x3A6B18u) {
        ctx->pc = 0x3A6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B14u;
        // 0x3a6b18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B1Cu;
        goto label_3a6b1c;
    }
    ctx->pc = 0x3A6B14u;
    {
        const bool branch_taken_0x3a6b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B14u;
        // 0x3a6b18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b14) {
            ctx->pc = 0x3A6C00u;
            goto label_3a6c00;
        }
    }
    ctx->pc = 0x3A6B1Cu;
label_3a6b1c:
    // 0x3a6b1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3a6b20:
    if (ctx->pc == 0x3A6B20u) {
        ctx->pc = 0x3A6B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B1Cu;
        // 0x3a6b20: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B24u;
        goto label_3a6b24;
    }
    ctx->pc = 0x3A6B1Cu;
    {
        const bool branch_taken_0x3a6b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b1c) {
            ctx->pc = 0x3A6B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6B1Cu;
            // 0x3a6b20: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6B4Cu;
            goto label_3a6b4c;
        }
    }
    ctx->pc = 0x3A6B24u;
label_3a6b24:
    // 0x3a6b24: 0xc0e9808  jal         func_3A6020
label_3a6b28:
    if (ctx->pc == 0x3A6B28u) {
        ctx->pc = 0x3A6B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B24u;
        // 0x3a6b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B2Cu;
        goto label_3a6b2c;
    }
    ctx->pc = 0x3A6B24u;
    SET_GPR_U32(ctx, 31, 0x3A6B2Cu);
    ctx->pc = 0x3A6B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B24u;
    // 0x3a6b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6020u, 0x3A6B24u, 0x3A6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B2Cu;
label_3a6b2c:
    // 0x3a6b2c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_3a6b30:
    if (ctx->pc == 0x3A6B30u) {
        ctx->pc = 0x3A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B2Cu;
        // 0x3a6b30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B34u;
        goto label_3a6b34;
    }
    ctx->pc = 0x3A6B2Cu;
    {
        const bool branch_taken_0x3a6b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B2Cu;
        // 0x3a6b30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b2c) {
            ctx->pc = 0x3A6C00u;
            goto label_3a6c00;
        }
    }
    ctx->pc = 0x3A6B34u;
label_3a6b34:
    // 0x3a6b34: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6b34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6b38:
    // 0x3a6b38: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3a6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3a6b3c:
    // 0x3a6b3c: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x3a6b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
label_3a6b40:
    // 0x3a6b40: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3a6b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_3a6b44:
    // 0x3a6b44: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a6b44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_3a6b48:
    // 0x3a6b48: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6b4c:
    // 0x3a6b4c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3a6b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3a6b50:
    // 0x3a6b50: 0x1000000a  b           . + 4 + (0xA << 2)
label_3a6b54:
    if (ctx->pc == 0x3A6B54u) {
        ctx->pc = 0x3A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B50u;
        // 0x3a6b54: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B58u;
        goto label_3a6b58;
    }
    ctx->pc = 0x3A6B50u;
    {
        const bool branch_taken_0x3a6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B50u;
        // 0x3a6b54: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b50) {
            ctx->pc = 0x3A6B7Cu;
            goto label_3a6b7c;
        }
    }
    ctx->pc = 0x3A6B58u;
label_3a6b58:
    // 0x3a6b58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3a6b5c:
    if (ctx->pc == 0x3A6B5Cu) {
        ctx->pc = 0x3A6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B58u;
        // 0x3a6b5c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B60u;
        goto label_3a6b60;
    }
    ctx->pc = 0x3A6B58u;
    {
        const bool branch_taken_0x3a6b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b58) {
            ctx->pc = 0x3A6B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6B58u;
            // 0x3a6b5c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6B80u;
            goto label_3a6b80;
        }
    }
    ctx->pc = 0x3A6B60u;
label_3a6b60:
    // 0x3a6b60: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3a6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3a6b64:
    // 0x3a6b64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a6b68:
    if (ctx->pc == 0x3A6B68u) {
        ctx->pc = 0x3A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B64u;
        // 0x3a6b68: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B6Cu;
        goto label_3a6b6c;
    }
    ctx->pc = 0x3A6B64u;
    {
        const bool branch_taken_0x3a6b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B64u;
        // 0x3a6b68: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b64) {
            ctx->pc = 0x3A6B7Cu;
            goto label_3a6b7c;
        }
    }
    ctx->pc = 0x3A6B6Cu;
label_3a6b6c:
    // 0x3a6b6c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3a6b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3a6b70:
    // 0x3a6b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a6b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6b74:
    // 0x3a6b74: 0x10000022  b           . + 4 + (0x22 << 2)
label_3a6b78:
    if (ctx->pc == 0x3A6B78u) {
        ctx->pc = 0x3A6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B74u;
        // 0x3a6b78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B7Cu;
        goto label_3a6b7c;
    }
    ctx->pc = 0x3A6B74u;
    {
        const bool branch_taken_0x3a6b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B74u;
        // 0x3a6b78: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b74) {
            ctx->pc = 0x3A6C00u;
            goto label_3a6c00;
        }
    }
    ctx->pc = 0x3A6B7Cu;
label_3a6b7c:
    // 0x3a6b7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3a6b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a6b80:
    // 0x3a6b80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3a6b84:
    if (ctx->pc == 0x3A6B84u) {
        ctx->pc = 0x3A6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B80u;
        // 0x3a6b84: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B88u;
        goto label_3a6b88;
    }
    ctx->pc = 0x3A6B80u;
    {
        const bool branch_taken_0x3a6b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6b80) {
            ctx->pc = 0x3A6B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6B80u;
            // 0x3a6b84: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6B94u;
            goto label_3a6b94;
        }
    }
    ctx->pc = 0x3A6B88u;
label_3a6b88:
    // 0x3a6b88: 0xc0e9a54  jal         func_3A6950
label_3a6b8c:
    if (ctx->pc == 0x3A6B8Cu) {
        ctx->pc = 0x3A6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B88u;
        // 0x3a6b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6B90u;
        goto label_3a6b90;
    }
    ctx->pc = 0x3A6B88u;
    SET_GPR_U32(ctx, 31, 0x3A6B90u);
    ctx->pc = 0x3A6B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B88u;
    // 0x3a6b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6950u, 0x3A6B88u, 0x3A6B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B90u;
label_3a6b90:
    // 0x3a6b90: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6b90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6b94:
    // 0x3a6b94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3a6b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3a6b98:
    // 0x3a6b98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a6b9c:
    if (ctx->pc == 0x3A6B9Cu) {
        ctx->pc = 0x3A6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B98u;
        // 0x3a6b9c: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BA0u;
        goto label_3a6ba0;
    }
    ctx->pc = 0x3A6B98u;
    {
        const bool branch_taken_0x3a6b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B98u;
        // 0x3a6b9c: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b98) {
            ctx->pc = 0x3A6BACu;
            goto label_3a6bac;
        }
    }
    ctx->pc = 0x3A6BA0u;
label_3a6ba0:
    // 0x3a6ba0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a6ba4:
    // 0x3a6ba4: 0xc0e9a0c  jal         func_3A6830
label_3a6ba8:
    if (ctx->pc == 0x3A6BA8u) {
        ctx->pc = 0x3A6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BA4u;
        // 0x3a6ba8: 0x24a56a88  addiu       $a1, $a1, 0x6A88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BACu;
        goto label_3a6bac;
    }
    ctx->pc = 0x3A6BA4u;
    SET_GPR_U32(ctx, 31, 0x3A6BACu);
    ctx->pc = 0x3A6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6BA4u;
    // 0x3a6ba8: 0x24a56a88  addiu       $a1, $a1, 0x6A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6830u, 0x3A6BA4u, 0x3A6BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6BACu;
label_3a6bac:
    // 0x3a6bac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3a6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a6bb0:
    // 0x3a6bb0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3a6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3a6bb4:
    // 0x3a6bb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3a6bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3a6bb8:
    // 0x3a6bb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3a6bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a6bbc:
    // 0x3a6bbc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3a6bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a6bc0:
    // 0x3a6bc0: 0x40f809  jalr        $v0
label_3a6bc4:
    if (ctx->pc == 0x3A6BC4u) {
        ctx->pc = 0x3A6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BC0u;
        // 0x3a6bc4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BC8u;
        goto label_3a6bc8;
    }
    ctx->pc = 0x3A6BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A6BC8u);
        ctx->pc = 0x3A6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BC0u;
        // 0x3a6bc4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6BC0u, 0x3A6BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A6BC8u;
label_3a6bc8:
    // 0x3a6bc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a6bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6bcc:
    // 0x3a6bcc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6bccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a6bd0:
    // 0x3a6bd0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3a6bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3a6bd4:
    // 0x3a6bd4: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x3a6bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_3a6bd8:
    // 0x3a6bd8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_3a6bdc:
    if (ctx->pc == 0x3A6BDCu) {
        ctx->pc = 0x3A6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BD8u;
        // 0x3a6bdc: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BE0u;
        goto label_3a6be0;
    }
    ctx->pc = 0x3A6BD8u;
    {
        const bool branch_taken_0x3a6bd8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3A6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BD8u;
        // 0x3a6bdc: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6bd8) {
            ctx->pc = 0x3A6BFCu;
            goto label_3a6bfc;
        }
    }
    ctx->pc = 0x3A6BE0u;
label_3a6be0:
    // 0x3a6be0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3a6be4:
    if (ctx->pc == 0x3A6BE4u) {
        ctx->pc = 0x3A6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BE0u;
        // 0x3a6be4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BE8u;
        goto label_3a6be8;
    }
    ctx->pc = 0x3A6BE0u;
    {
        const bool branch_taken_0x3a6be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6be0) {
            ctx->pc = 0x3A6BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6BE0u;
            // 0x3a6be4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6BF0u;
            goto label_3a6bf0;
        }
    }
    ctx->pc = 0x3A6BE8u;
label_3a6be8:
    // 0x3a6be8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a6bec:
    if (ctx->pc == 0x3A6BECu) {
        ctx->pc = 0x3A6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BE8u;
        // 0x3a6bec: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BF0u;
        goto label_3a6bf0;
    }
    ctx->pc = 0x3A6BE8u;
    {
        const bool branch_taken_0x3a6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BE8u;
        // 0x3a6bec: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6be8) {
            ctx->pc = 0x3A6BF4u;
            goto label_3a6bf4;
        }
    }
    ctx->pc = 0x3A6BF0u;
label_3a6bf0:
    // 0x3a6bf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a6bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a6bf4:
    // 0x3a6bf4: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_3a6bf8:
    if (ctx->pc == 0x3A6BF8u) {
        ctx->pc = 0x3A6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BF4u;
        // 0x3a6bf8: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6BFCu;
        goto label_3a6bfc;
    }
    ctx->pc = 0x3A6BF4u;
    {
        const bool branch_taken_0x3a6bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BF4u;
        // 0x3a6bf8: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6bf4) {
            ctx->pc = 0x3A6B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6b14;
        }
    }
    ctx->pc = 0x3A6BFCu;
label_3a6bfc:
    // 0x3a6bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a6bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6c00:
    // 0x3a6c00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a6c04:
    // 0x3a6c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6c08:
    // 0x3a6c08: 0x3e00008  jr          $ra
label_3a6c0c:
    if (ctx->pc == 0x3A6C0Cu) {
        ctx->pc = 0x3A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C08u;
        // 0x3a6c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6C10u;
        goto label_fallthrough_0x3a6c08;
    }
    ctx->pc = 0x3A6C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6C08u;
        // 0x3a6c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a6c08:
    ctx->pc = 0x3A6C10u;
}
