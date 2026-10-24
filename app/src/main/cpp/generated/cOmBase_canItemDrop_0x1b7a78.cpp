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

// Function: cOmBase_canItemDrop
// Address: 0x1b7a78 - 0x1b7bb8
void cOmBase_canItemDrop_0x1b7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_canItemDrop_0x1b7a78");
#endif

    switch (ctx->pc) {
        case 0x1b7aacu: goto label_1b7aac;
        default: break;
    }

    ctx->pc = 0x1b7a78u;

    // 0x1b7a78: 0x9c8205b0  lwu         $v0, 0x5B0($a0)
    ctx->pc = 0x1b7a78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 1456)));
    // 0x1b7a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7a80: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1b7a80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1b7a84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b7a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b7a88: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7A88u;
    {
        const bool branch_taken_0x1b7a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A88u;
        // 0x1b7a8c: 0x240209c3  addiu       $v0, $zero, 0x9C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2499));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a88) {
            ctx->pc = 0x1B7A9Cu;
            goto label_1b7a9c;
        }
    }
    ctx->pc = 0x1B7A90u;
    // 0x1b7a90: 0x8c830560  lw          $v1, 0x560($a0)
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x1b7a94: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7A94u;
    {
        const bool branch_taken_0x1b7a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B7A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A94u;
        // 0x1b7a98: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a94) {
            ctx->pc = 0x1B7AA4u;
            goto label_1b7aa4;
        }
    }
    ctx->pc = 0x1B7A9Cu;
label_1b7a9c:
    // 0x1b7a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A9Cu;
        // 0x1b7aa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AA4u;
label_1b7aa4:
    // 0x1b7aa4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7AA4u;
    {
        const bool branch_taken_0x1b7aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7aa4) {
            ctx->pc = 0x1B7AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7AA4u;
            // 0x1b7aa8: 0x948402fe  lhu         $a0, 0x2FE($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7AB4u;
            goto label_1b7ab4;
        }
    }
    ctx->pc = 0x1B7AACu;
label_1b7aac:
    // 0x1b7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AACu;
        // 0x1b7ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AB4u;
label_1b7ab4:
    // 0x1b7ab4: 0x28820346  slti        $v0, $a0, 0x346
    ctx->pc = 0x1b7ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)838) ? 1 : 0);
    // 0x1b7ab8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B7AB8u;
    {
        const bool branch_taken_0x1b7ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AB8u;
        // 0x1b7abc: 0x2882033f  slti        $v0, $a0, 0x33F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)831) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ab8) {
            ctx->pc = 0x1B7B3Cu;
            goto label_1b7b3c;
        }
    }
    ctx->pc = 0x1B7AC0u;
    // 0x1b7ac0: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B7AC0u;
    {
        const bool branch_taken_0x1b7ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AC0u;
        // 0x1b7ac4: 0x2882032d  slti        $v0, $a0, 0x32D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)813) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ac0) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7AC8u;
    // 0x1b7ac8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7AC8u;
    {
        const bool branch_taken_0x1b7ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AC8u;
        // 0x1b7acc: 0x2882032a  slti        $v0, $a0, 0x32A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)810) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ac8) {
            ctx->pc = 0x1B7B08u;
            goto label_1b7b08;
        }
    }
    ctx->pc = 0x1B7AD0u;
    // 0x1b7ad0: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B7AD0u;
    {
        const bool branch_taken_0x1b7ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AD0u;
        // 0x1b7ad4: 0x2882030d  slti        $v0, $a0, 0x30D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)781) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ad0) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7AD8u;
    // 0x1b7ad8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7AD8u;
    {
        const bool branch_taken_0x1b7ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AD8u;
        // 0x1b7adc: 0x28820309  slti        $v0, $a0, 0x309 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)777) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ad8) {
            ctx->pc = 0x1B7B00u;
            goto label_1b7b00;
        }
    }
    ctx->pc = 0x1B7AE0u;
    // 0x1b7ae0: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B7AE0u;
    {
        const bool branch_taken_0x1b7ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AE0u;
        // 0x1b7ae4: 0x28820303  slti        $v0, $a0, 0x303 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)771) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ae0) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7AE8u;
    // 0x1b7ae8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B7AE8u;
    {
        const bool branch_taken_0x1b7ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AE8u;
        // 0x1b7aec: 0x28820301  slti        $v0, $a0, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)769) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7ae8) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7AF0u;
    // 0x1b7af0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B7AF0u;
    {
        const bool branch_taken_0x1b7af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7af0) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7AF8u;
    // 0x1b7af8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B7AF8u;
    {
        const bool branch_taken_0x1b7af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7af8) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B00u;
label_1b7b00:
    // 0x1b7b00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1B7B00u;
    {
        const bool branch_taken_0x1b7b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B00u;
        // 0x1b7b04: 0x24020325  addiu       $v0, $zero, 0x325 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 805));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b00) {
            ctx->pc = 0x1B7BA8u;
            goto label_1b7ba8;
        }
    }
    ctx->pc = 0x1B7B08u;
label_1b7b08:
    // 0x1b7b08: 0x24020332  addiu       $v0, $zero, 0x332
    ctx->pc = 0x1b7b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 818));
    // 0x1b7b0c: 0x1082ffe7  beq         $a0, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B7B0Cu;
    {
        const bool branch_taken_0x1b7b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B0Cu;
        // 0x1b7b10: 0x28820333  slti        $v0, $a0, 0x333 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)819) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b0c) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B14u;
    // 0x1b7b14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7B14u;
    {
        const bool branch_taken_0x1b7b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B14u;
        // 0x1b7b18: 0x28820330  slti        $v0, $a0, 0x330 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)816) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b14) {
            ctx->pc = 0x1B7B34u;
            goto label_1b7b34;
        }
    }
    ctx->pc = 0x1B7B1Cu;
    // 0x1b7b1c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7B1Cu;
    {
        const bool branch_taken_0x1b7b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B1Cu;
        // 0x1b7b20: 0x2882032e  slti        $v0, $a0, 0x32E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)814) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b1c) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B24u;
    // 0x1b7b24: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B7B24u;
    {
        const bool branch_taken_0x1b7b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b24) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B2Cu;
    // 0x1b7b2c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B7B2Cu;
    {
        const bool branch_taken_0x1b7b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b2c) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B34u;
label_1b7b34:
    // 0x1b7b34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B7B34u;
    {
        const bool branch_taken_0x1b7b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B34u;
        // 0x1b7b38: 0x2402033d  addiu       $v0, $zero, 0x33D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 829));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b34) {
            ctx->pc = 0x1B7BA8u;
            goto label_1b7ba8;
        }
    }
    ctx->pc = 0x1B7B3Cu;
label_1b7b3c:
    // 0x1b7b3c: 0x28820412  slti        $v0, $a0, 0x412
    ctx->pc = 0x1b7b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1042) ? 1 : 0);
    // 0x1b7b40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B7B40u;
    {
        const bool branch_taken_0x1b7b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B40u;
        // 0x1b7b44: 0x28820410  slti        $v0, $a0, 0x410 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1040) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b40) {
            ctx->pc = 0x1B7B78u;
            goto label_1b7b78;
        }
    }
    ctx->pc = 0x1B7B48u;
    // 0x1b7b48: 0x1040ffd8  beqz        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1B7B48u;
    {
        const bool branch_taken_0x1b7b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B48u;
        // 0x1b7b4c: 0x28820347  slti        $v0, $a0, 0x347 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)839) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b48) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B50u;
    // 0x1b7b50: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B7B50u;
    {
        const bool branch_taken_0x1b7b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B50u;
        // 0x1b7b54: 0x28820349  slti        $v0, $a0, 0x349 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)841) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b50) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B58u;
    // 0x1b7b58: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B7B58u;
    {
        const bool branch_taken_0x1b7b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B58u;
        // 0x1b7b5c: 0x28820403  slti        $v0, $a0, 0x403 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1027) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b58) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B60u;
    // 0x1b7b60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B7B60u;
    {
        const bool branch_taken_0x1b7b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B60u;
        // 0x1b7b64: 0x28820400  slti        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b60) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B68u;
    // 0x1b7b68: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B7B68u;
    {
        const bool branch_taken_0x1b7b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b68) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B70u;
    // 0x1b7b70: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B7B70u;
    {
        const bool branch_taken_0x1b7b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b70) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B78u;
label_1b7b78:
    // 0x1b7b78: 0x2402041f  addiu       $v0, $zero, 0x41F
    ctx->pc = 0x1b7b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x1b7b7c: 0x1082ffcb  beq         $a0, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1B7B7Cu;
    {
        const bool branch_taken_0x1b7b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B7Cu;
        // 0x1b7b80: 0x28820420  slti        $v0, $a0, 0x420 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1056) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b7c) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7B84u;
    // 0x1b7b84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B7B84u;
    {
        const bool branch_taken_0x1b7b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B84u;
        // 0x1b7b88: 0x2882041b  slti        $v0, $a0, 0x41B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1051) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b84) {
            ctx->pc = 0x1B7BA4u;
            goto label_1b7ba4;
        }
    }
    ctx->pc = 0x1B7B8Cu;
    // 0x1b7b8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7B8Cu;
    {
        const bool branch_taken_0x1b7b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B8Cu;
        // 0x1b7b90: 0x28820418  slti        $v0, $a0, 0x418 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1048) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7b8c) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B94u;
    // 0x1b7b94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7B94u;
    {
        const bool branch_taken_0x1b7b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b94) {
            ctx->pc = 0x1B7BB0u;
            goto label_1b7bb0;
        }
    }
    ctx->pc = 0x1B7B9Cu;
    // 0x1b7b9c: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1B7B9Cu;
    {
        const bool branch_taken_0x1b7b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7b9c) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7BA4u;
label_1b7ba4:
    // 0x1b7ba4: 0x2402042e  addiu       $v0, $zero, 0x42E
    ctx->pc = 0x1b7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1070));
label_1b7ba8:
    // 0x1b7ba8: 0x1082ffc0  beq         $a0, $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1B7BA8u;
    {
        const bool branch_taken_0x1b7ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7ba8) {
            ctx->pc = 0x1B7AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7aac;
        }
    }
    ctx->pc = 0x1B7BB0u;
label_1b7bb0:
    // 0x1b7bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7BB0u;
        // 0x1b7bb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7BB8u;
}
