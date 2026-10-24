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

// Function: func_00377AC0
// Address: 0x377ac0 - 0x377bc8
void func_00377AC0_0x377ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377AC0_0x377ac0");
#endif

    switch (ctx->pc) {
        case 0x377af0u: goto label_377af0;
        default: break;
    }

    ctx->pc = 0x377ac0u;

    // 0x377ac0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377ac4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x377ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ac8: 0x2446cf20  addiu       $a2, $v0, -0x30E0
    ctx->pc = 0x377ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x377acc: 0x24eb0060  addiu       $t3, $a3, 0x60
    ctx->pc = 0x377accu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x377ad0: 0x24ea0068  addiu       $t2, $a3, 0x68
    ctx->pc = 0x377ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x377ad4: 0x24e90070  addiu       $t1, $a3, 0x70
    ctx->pc = 0x377ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x377ad8: 0x24ce0f00  addiu       $t6, $a2, 0xF00
    ctx->pc = 0x377ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 3840));
    // 0x377adc: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x377adcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x377ae0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x377ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377ae4: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x377ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377ae8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x377ae8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76CF20u));
    // 0x377aec: 0x0  nop
    ctx->pc = 0x377aecu;
    // NOP
label_377af0:
    // 0x377af0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x377AF0u;
    {
        const bool branch_taken_0x377af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377af0) {
            ctx->pc = 0x377AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377AF0u;
            // 0x377af4: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377BB0u;
            goto label_377bb0;
        }
    }
    ctx->pc = 0x377AF8u;
    // 0x377af8: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x377af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x377afc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x377afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x377b00: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x377B00u;
    {
        const bool branch_taken_0x377b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x377b00) {
            ctx->pc = 0x377B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377B00u;
            // 0x377b04: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377BB0u;
            goto label_377bb0;
        }
    }
    ctx->pc = 0x377B08u;
    // 0x377b08: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x377b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x377b0c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x377b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x377b10: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x377B10u;
    {
        const bool branch_taken_0x377b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x377b10) {
            ctx->pc = 0x377B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377B10u;
            // 0x377b14: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377BB0u;
            goto label_377bb0;
        }
    }
    ctx->pc = 0x377B18u;
    // 0x377b18: 0x510d0005  beql        $t0, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x377B18u;
    {
        const bool branch_taken_0x377b18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 13));
        if (branch_taken_0x377b18) {
            ctx->pc = 0x377B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377B18u;
            // 0x377b1c: 0x94c2001a  lhu         $v0, 0x1A($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377B30u;
            goto label_377b30;
        }
    }
    ctx->pc = 0x377B20u;
    // 0x377b20: 0x510c0013  beql        $t0, $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x377B20u;
    {
        const bool branch_taken_0x377b20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x377b20) {
            ctx->pc = 0x377B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377B20u;
            // 0x377b24: 0x94c2001a  lhu         $v0, 0x1A($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377B70u;
            goto label_377b70;
        }
    }
    ctx->pc = 0x377B28u;
    // 0x377b28: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x377B28u;
    {
        const bool branch_taken_0x377b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B28u;
        // 0x377b2c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b28) {
            ctx->pc = 0x377BB0u;
            goto label_377bb0;
        }
    }
    ctx->pc = 0x377B30u;
label_377b30:
    // 0x377b30: 0x94c50006  lhu         $a1, 0x6($a2)
    ctx->pc = 0x377b30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x377b34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x377b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377b38: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x377b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x377b3c: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x377b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
    // 0x377b40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x377b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x377b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x377b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377b48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x377b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x377b4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x377b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x377b50: 0x1622021  addu        $a0, $t3, $v0
    ctx->pc = 0x377b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x377b54: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x377b54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x377b58: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x377b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x377b5c: 0xa4c30026  sh          $v1, 0x26($a2)
    ctx->pc = 0x377b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x377b60: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x377b60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377b64: 0xa4c50006  sh          $a1, 0x6($a2)
    ctx->pc = 0x377b64u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x377b68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x377B68u;
    {
        const bool branch_taken_0x377b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B68u;
        // 0x377b6c: 0xa4c40028  sh          $a0, 0x28($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 40), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b68) {
            ctx->pc = 0x377BACu;
            goto label_377bac;
        }
    }
    ctx->pc = 0x377B70u;
label_377b70:
    // 0x377b70: 0x94c40006  lhu         $a0, 0x6($a2)
    ctx->pc = 0x377b70u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x377b74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x377b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377b78: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x377b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x377b7c: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x377b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x377b80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x377b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x377b84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x377b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377b88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x377b88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x377b8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x377b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x377b90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x377b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x377b94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x377b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x377b98: 0x213c3  sra         $v0, $v0, 15
    ctx->pc = 0x377b98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 15));
    // 0x377b9c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x377b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x377ba0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x377ba0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x377ba4: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x377ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x377ba8: 0xa4c3002c  sh          $v1, 0x2C($a2)
    ctx->pc = 0x377ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 3));
label_377bac:
    // 0x377bac: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x377bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_377bb0:
    // 0x377bb0: 0xce102a  slt         $v0, $a2, $t6
    ctx->pc = 0x377bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x377bb4: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x377BB4u;
    {
        const bool branch_taken_0x377bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377bb4) {
            ctx->pc = 0x377BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377BB4u;
            // 0x377bb8: 0x94c20000  lhu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377af0;
        }
    }
    ctx->pc = 0x377BBCu;
    // 0x377bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x377BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377BC4u;
    // 0x377bc4: 0x0  nop
    ctx->pc = 0x377bc4u;
    // NOP
    ctx->pc = 0x377bc8u;
}
