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

// Function: cFont_setTextureAddr
// Address: 0x2a4cb0 - 0x2a4df8
void cFont_setTextureAddr_0x2a4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cFont_setTextureAddr_0x2a4cb0");
#endif

    switch (ctx->pc) {
        case 0x2a4d88u: goto label_2a4d88;
        case 0x2a4dc0u: goto label_2a4dc0;
        default: break;
    }

    ctx->pc = 0x2a4cb0u;

    // 0x2a4cb0: 0x10c0004f  beqz        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x2A4CB0u;
    {
        const bool branch_taken_0x2a4cb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CB0u;
        // 0x2a4cb4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4cb0) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CB8u;
    // 0x2a4cb8: 0x10e0004d  beqz        $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x2A4CB8u;
    {
        const bool branch_taken_0x2a4cb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cb8) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CC0u;
    // 0x2a4cc0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x2a4cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a4cc4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2A4CC4u;
    {
        const bool branch_taken_0x2a4cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cc4) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CCCu;
    // 0x2a4ccc: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x2a4cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2a4cd0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2A4CD0u;
    {
        const bool branch_taken_0x2a4cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cd0) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CD8u;
    // 0x2a4cd8: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x2a4cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a4cdc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A4CDCu;
    {
        const bool branch_taken_0x2a4cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cdc) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CE4u;
    // 0x2a4ce4: 0x90e20006  lbu         $v0, 0x6($a3)
    ctx->pc = 0x2a4ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2a4ce8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2A4CE8u;
    {
        const bool branch_taken_0x2a4ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ce8) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CF0u;
    // 0x2a4cf0: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x2a4cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x2a4cf4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A4CF4u;
    {
        const bool branch_taken_0x2a4cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cf4) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4CFCu;
    // 0x2a4cfc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4d00: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A4D00u;
    {
        const bool branch_taken_0x2a4d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d00) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D08u;
    // 0x2a4d08: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x2a4d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4d0c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A4D0Cu;
    {
        const bool branch_taken_0x2a4d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d0c) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D14u;
    // 0x2a4d14: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x2a4d14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x2a4d18: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A4D18u;
    {
        const bool branch_taken_0x2a4d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d18) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D20u;
    // 0x2a4d20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a4d24: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A4D24u;
    {
        const bool branch_taken_0x2a4d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d24) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D2Cu;
    // 0x2a4d2c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2a4d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a4d30: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A4D30u;
    {
        const bool branch_taken_0x2a4d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D30u;
        // 0x2a4d34: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d30) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D38u;
    // 0x2a4d38: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4d3c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2a4d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x2a4d40: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a4d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d44: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2a4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2a4d48: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x2a4d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2a4d4c: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x2a4d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d50: 0x94e20004  lhu         $v0, 0x4($a3)
    ctx->pc = 0x2a4d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a4d54: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x2a4d54u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4d58: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2a4d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2a4d5c: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2a4d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a4d60: 0x90e20007  lbu         $v0, 0x7($a3)
    ctx->pc = 0x2a4d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x2a4d64: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x2a4d64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2a4d68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4d6c: 0x4600020  bltz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A4D6Cu;
    {
        const bool branch_taken_0x2a4d6c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A4D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D6Cu;
        // 0x2a4d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d6c) {
            ctx->pc = 0x2A4DF0u;
            goto label_2a4df0;
        }
    }
    ctx->pc = 0x2A4D74u;
    // 0x2a4d74: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a4d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a4d78: 0x94c30010  lhu         $v1, 0x10($a2)
    ctx->pc = 0x2a4d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a4d7c: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x2a4d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4d80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4D80u;
    {
        const bool branch_taken_0x2a4d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D80u;
        // 0x2a4d84: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d80) {
            ctx->pc = 0x2A4DA8u;
            goto label_2a4da8;
        }
    }
    ctx->pc = 0x2A4D88u;
label_2a4d88:
    // 0x2a4d88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4d8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a4d90: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a4d94: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2a4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2a4d98: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x2a4d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a4d9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2a4d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a4da0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4DA0u;
    {
        const bool branch_taken_0x2a4da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DA0u;
        // 0x2a4da4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4da0) {
            ctx->pc = 0x2A4D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4d88;
        }
    }
    ctx->pc = 0x2A4DA8u;
label_2a4da8:
    // 0x2a4da8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a4dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4db0: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x2a4db0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2a4db4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2a4db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4db8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4DB8u;
    {
        const bool branch_taken_0x2a4db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DB8u;
        // 0x2a4dbc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4db8) {
            ctx->pc = 0x2A4DE0u;
            goto label_2a4de0;
        }
    }
    ctx->pc = 0x2A4DC0u;
label_2a4dc0:
    // 0x2a4dc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4dc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a4dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a4dc8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a4dcc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2a4dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2a4dd0: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x2a4dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x2a4dd4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2a4dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a4dd8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4DD8u;
    {
        const bool branch_taken_0x2a4dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DD8u;
        // 0x2a4ddc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4dd8) {
            ctx->pc = 0x2A4DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4dc0;
        }
    }
    ctx->pc = 0x2A4DE0u;
label_2a4de0:
    // 0x2a4de0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4de4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a4de8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a4de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a4dec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2a4decu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2a4df0:
    // 0x2a4df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4DF8u;
}
