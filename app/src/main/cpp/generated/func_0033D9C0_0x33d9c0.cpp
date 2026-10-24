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

// Function: func_0033D9C0
// Address: 0x33d9c0 - 0x33dae0
void func_0033D9C0_0x33d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D9C0_0x33d9c0");
#endif

    ctx->pc = 0x33d9c0u;

    // 0x33d9c0: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x33d9c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d9c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x33d9c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d9c8: 0x91820007  lbu         $v0, 0x7($t4)
    ctx->pc = 0x33d9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x33d9cc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x33d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d9d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x33d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33d9d4: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x33d9d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d9d8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x33d9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33d9dc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x33d9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d9e0: 0x91820009  lbu         $v0, 0x9($t4)
    ctx->pc = 0x33d9e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x33d9e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x33d9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x33d9e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d9ec: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x33d9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d9f0: 0x9583002a  lhu         $v1, 0x2A($t4)
    ctx->pc = 0x33d9f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 42)));
    // 0x33d9f4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x33d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x33d9f8: 0x91840008  lbu         $a0, 0x8($t4)
    ctx->pc = 0x33d9f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x33d9fc: 0x108f0018  beq         $a0, $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x33D9FCu;
    {
        const bool branch_taken_0x33d9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x33DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D9FCu;
        // 0x33da00: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d9fc) {
            ctx->pc = 0x33DA60u;
            goto label_33da60;
        }
    }
    ctx->pc = 0x33DA04u;
    // 0x33da04: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DA04u;
    {
        const bool branch_taken_0x33da04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da04) {
            ctx->pc = 0x33DA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DA04u;
            // 0x33da08: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DA20u;
            goto label_33da20;
        }
    }
    ctx->pc = 0x33DA0Cu;
    // 0x33da0c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33DA0Cu;
    {
        const bool branch_taken_0x33da0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da0c) {
            ctx->pc = 0x33DA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DA0Cu;
            // 0x33da10: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DA30u;
            goto label_33da30;
        }
    }
    ctx->pc = 0x33DA14u;
    // 0x33da14: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x33DA14u;
    {
        const bool branch_taken_0x33da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA14u;
        // 0x33da18: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da14) {
            ctx->pc = 0x33DAA8u;
            goto label_33daa8;
        }
    }
    ctx->pc = 0x33DA1Cu;
    // 0x33da1c: 0x0  nop
    ctx->pc = 0x33da1cu;
    // NOP
label_33da20:
    // 0x33da20: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x33DA20u;
    {
        const bool branch_taken_0x33da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33da20) {
            ctx->pc = 0x33DA24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DA20u;
            // 0x33da24: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DAA8u;
            goto label_33daa8;
        }
    }
    ctx->pc = 0x33DA28u;
    // 0x33da28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x33DA28u;
    {
        const bool branch_taken_0x33da28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA28u;
        // 0x33da2c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da28) {
            ctx->pc = 0x33DA80u;
            goto label_33da80;
        }
    }
    ctx->pc = 0x33DA30u;
label_33da30:
    // 0x33da30: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x33da30u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33da34: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x33da34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33da38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33da38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33da3c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x33da3cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33da40: 0xadaf0000  sw          $t7, 0x0($t5)
    ctx->pc = 0x33da40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 15));
    // 0x33da44: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x33da44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33da48: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x33da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33da4c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x33da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x33da50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33da54: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x33DA54u;
    {
        const bool branch_taken_0x33da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA54u;
        // 0x33da58: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da54) {
            ctx->pc = 0x33DAA0u;
            goto label_33daa0;
        }
    }
    ctx->pc = 0x33DA5Cu;
    // 0x33da5c: 0x0  nop
    ctx->pc = 0x33da5cu;
    // NOP
label_33da60:
    // 0x33da60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33da64: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x33da64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33da68: 0x81430000  lb          $v1, 0x0($t2)
    ctx->pc = 0x33da68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33da6c: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x33da6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33da70: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x33da70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x33da74: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x33da74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x33da78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33DA78u;
    {
        const bool branch_taken_0x33da78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DA78u;
        // 0x33da7c: 0x8d82000c  lw          $v0, 0xC($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33da78) {
            ctx->pc = 0x33DAA0u;
            goto label_33daa0;
        }
    }
    ctx->pc = 0x33DA80u;
label_33da80:
    // 0x33da80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33da80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33da84: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x33da84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33da88: 0x81420000  lb          $v0, 0x0($t2)
    ctx->pc = 0x33da88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33da8c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x33da8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33da90: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x33da90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x33da94: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x33da94u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x33da98: 0x8d82000c  lw          $v0, 0xC($t4)
    ctx->pc = 0x33da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33da9c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_33daa0:
    // 0x33daa0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x33daa0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x33daa4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33daa8:
    // 0x33daa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33daac: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x33daacu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33dab0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33dab4: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x33dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x33dab8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x33dab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33dabc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33dabcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dac0: 0x8d83000c  lw          $v1, 0xC($t4)
    ctx->pc = 0x33dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x33dac4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x33dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x33dac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33dacc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x33daccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x33dad0: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x33dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x33dad4: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x33dad4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x33dad8: 0x3e00008  jr          $ra
    ctx->pc = 0x33DAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DAD8u;
        // 0x33dadc: 0xa0e60000  sb          $a2, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DAE0u;
}
