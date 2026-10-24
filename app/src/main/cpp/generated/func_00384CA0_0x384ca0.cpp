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

// Function: func_00384CA0
// Address: 0x384ca0 - 0x384ec8
void func_00384CA0_0x384ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384CA0_0x384ca0");
#endif

    switch (ctx->pc) {
        case 0x384cfcu: goto label_384cfc;
        case 0x384d14u: goto label_384d14;
        case 0x384d48u: goto label_384d48;
        case 0x384da0u: goto label_384da0;
        case 0x384dacu: goto label_384dac;
        case 0x384dc0u: goto label_384dc0;
        case 0x384de4u: goto label_384de4;
        case 0x384e00u: goto label_384e00;
        case 0x384e10u: goto label_384e10;
        case 0x384e1cu: goto label_384e1c;
        case 0x384e30u: goto label_384e30;
        case 0x384e54u: goto label_384e54;
        case 0x384e5cu: goto label_384e5c;
        case 0x384e68u: goto label_384e68;
        case 0x384e74u: goto label_384e74;
        case 0x384e80u: goto label_384e80;
        case 0x384ea4u: goto label_384ea4;
        default: break;
    }

    ctx->pc = 0x384ca0u;

    // 0x384ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x384ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x384ca4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x384ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x384ca8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x384ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x384cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x384cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x384cb4: 0x26110470  addiu       $s1, $s0, 0x470
    ctx->pc = 0x384cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
    // 0x384cb8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x384cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x384cbc: 0x26120484  addiu       $s2, $s0, 0x484
    ctx->pc = 0x384cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
    // 0x384cc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x384cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384cc4: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x384cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x384cc8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x384CC8u;
    {
        const bool branch_taken_0x384cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CC8u;
        // 0x384ccc: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384cc8) {
            ctx->pc = 0x384D1Cu;
            goto label_384d1c;
        }
    }
    ctx->pc = 0x384CD0u;
    // 0x384cd0: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x384cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x384cd4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x384cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x384cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x384CD8u;
    {
        const bool branch_taken_0x384cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD8u;
        // 0x384cdc: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384cd8) {
            ctx->pc = 0x384CE8u;
            goto label_384ce8;
        }
    }
    ctx->pc = 0x384CE0u;
    // 0x384ce0: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x384CE0u;
    {
        const bool branch_taken_0x384ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CE0u;
        // 0x384ce4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ce0) {
            ctx->pc = 0x384EA4u;
            goto label_384ea4;
        }
    }
    ctx->pc = 0x384CE8u;
label_384ce8:
    // 0x384ce8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x384ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384cec: 0x24e7cd90  addiu       $a3, $a3, -0x3270
    ctx->pc = 0x384cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954384));
    // 0x384cf0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x384cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x384cf4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384CF4u;
    SET_GPR_U32(ctx, 31, 0x384CFCu);
    ctx->pc = 0x384CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384CF4u;
    // 0x384cf8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384CF4u, 0x384CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384CFCu;
label_384cfc:
    // 0x384cfc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384d00: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x384d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x384d04: 0x24e7cdb0  addiu       $a3, $a3, -0x3250
    ctx->pc = 0x384d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954416));
    // 0x384d08: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x384d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x384d0c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384D0Cu;
    SET_GPR_U32(ctx, 31, 0x384D14u);
    ctx->pc = 0x384D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D0Cu;
    // 0x384d10: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384D0Cu, 0x384D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D14u;
label_384d14:
    // 0x384d14: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x384D14u;
    {
        const bool branch_taken_0x384d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D14u;
        // 0x384d18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d14) {
            ctx->pc = 0x384EA8u;
            goto label_384ea8;
        }
    }
    ctx->pc = 0x384D1Cu;
label_384d1c:
    // 0x384d1c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x384d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x384d20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x384D20u;
    {
        const bool branch_taken_0x384d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D20u;
        // 0x384d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d20) {
            ctx->pc = 0x384D40u;
            goto label_384d40;
        }
    }
    ctx->pc = 0x384D28u;
    // 0x384d28: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x384d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x384d2c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x384d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x384d30: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x384D30u;
    {
        const bool branch_taken_0x384d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384d30) {
            ctx->pc = 0x384D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384D30u;
            // 0x384d34: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384E78u;
            goto label_384e78;
        }
    }
    ctx->pc = 0x384D38u;
    // 0x384d38: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x384D38u;
    {
        const bool branch_taken_0x384d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d38) {
            ctx->pc = 0x384E78u;
            goto label_384e78;
        }
    }
    ctx->pc = 0x384D40u;
label_384d40:
    // 0x384d40: 0xc0e035a  jal         func_380D68
    ctx->pc = 0x384D40u;
    SET_GPR_U32(ctx, 31, 0x384D48u);
    ctx->pc = 0x384D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D40u;
    // 0x384d44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380D68u, 0x384D40u, 0x384D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D48u;
label_384d48:
    // 0x384d48: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x384d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384d4c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x384D4Cu;
    {
        const bool branch_taken_0x384d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384d4c) {
            ctx->pc = 0x384D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384D4Cu;
            // 0x384d50: 0x8e630034  lw          $v1, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384D64u;
            goto label_384d64;
        }
    }
    ctx->pc = 0x384D54u;
    // 0x384d54: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x384d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x384d58: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x384D58u;
    {
        const bool branch_taken_0x384d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D58u;
        // 0x384d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d58) {
            ctx->pc = 0x384E14u;
            goto label_384e14;
        }
    }
    ctx->pc = 0x384D60u;
    // 0x384d60: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x384d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_384d64:
    // 0x384d64: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x384d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x384d68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384D68u;
    {
        const bool branch_taken_0x384d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D68u;
        // 0x384d6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d68) {
            ctx->pc = 0x384D7Cu;
            goto label_384d7c;
        }
    }
    ctx->pc = 0x384D70u;
    // 0x384d70: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x384d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x384d74: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x384D74u;
    {
        const bool branch_taken_0x384d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D74u;
        // 0x384d78: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d74) {
            ctx->pc = 0x384EA8u;
            goto label_384ea8;
        }
    }
    ctx->pc = 0x384D7Cu;
label_384d7c:
    // 0x384d7c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x384d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x384d80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x384D80u;
    {
        const bool branch_taken_0x384d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D80u;
        // 0x384d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d80) {
            ctx->pc = 0x384DB4u;
            goto label_384db4;
        }
    }
    ctx->pc = 0x384D88u;
    // 0x384d88: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x384d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x384d8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x384d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x384d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384D90u;
    {
        const bool branch_taken_0x384d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d90) {
            ctx->pc = 0x384DA4u;
            goto label_384da4;
        }
    }
    ctx->pc = 0x384D98u;
    // 0x384d98: 0xc0e0370  jal         func_380DC0
    ctx->pc = 0x384D98u;
    SET_GPR_U32(ctx, 31, 0x384DA0u);
    ctx->pc = 0x384D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D98u;
    // 0x384d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380DC0u, 0x384D98u, 0x384DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DA0u;
label_384da0:
    // 0x384da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384da4:
    // 0x384da4: 0xc0e13b2  jal         func_384EC8
    ctx->pc = 0x384DA4u;
    SET_GPR_U32(ctx, 31, 0x384DACu);
    ctx->pc = 0x384DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DA4u;
    // 0x384da8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384EC8u, 0x384DA4u, 0x384DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DACu;
label_384dac:
    // 0x384dac: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x384DACu;
    {
        const bool branch_taken_0x384dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DACu;
        // 0x384db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dac) {
            ctx->pc = 0x384E78u;
            goto label_384e78;
        }
    }
    ctx->pc = 0x384DB4u;
label_384db4:
    // 0x384db4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x384db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384db8: 0xc0e03e0  jal         func_380F80
    ctx->pc = 0x384DB8u;
    SET_GPR_U32(ctx, 31, 0x384DC0u);
    ctx->pc = 0x384DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DB8u;
    // 0x384dbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F80u, 0x384DB8u, 0x384DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DC0u;
label_384dc0:
    // 0x384dc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x384DC0u;
    {
        const bool branch_taken_0x384dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384dc0) {
            ctx->pc = 0x384DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384DC0u;
            // 0x384dc4: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384DC8u;
            goto label_384dc8;
        }
    }
    ctx->pc = 0x384DC8u;
label_384dc8:
    // 0x384dc8: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x384dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x384dcc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x384dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x384dd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384DD0u;
    {
        const bool branch_taken_0x384dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DD0u;
        // 0x384dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dd0) {
            ctx->pc = 0x384DE4u;
            goto label_384de4;
        }
    }
    ctx->pc = 0x384DD8u;
    // 0x384dd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x384dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ddc: 0xc0e03c4  jal         func_380F10
    ctx->pc = 0x384DDCu;
    SET_GPR_U32(ctx, 31, 0x384DE4u);
    ctx->pc = 0x384DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DDCu;
    // 0x384de0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F10u, 0x384DDCu, 0x384DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DE4u;
label_384de4:
    // 0x384de4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x384de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x384de8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x384de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x384dec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x384DECu;
    {
        const bool branch_taken_0x384dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DECu;
        // 0x384df0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dec) {
            ctx->pc = 0x384E00u;
            goto label_384e00;
        }
    }
    ctx->pc = 0x384DF4u;
    // 0x384df4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x384df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384df8: 0xc0e03a2  jal         func_380E88
    ctx->pc = 0x384DF8u;
    SET_GPR_U32(ctx, 31, 0x384E00u);
    ctx->pc = 0x384DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DF8u;
    // 0x384dfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380E88u, 0x384DF8u, 0x384E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E00u;
label_384e00:
    // 0x384e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x384e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e08: 0xc0e0404  jal         func_381010
    ctx->pc = 0x384E08u;
    SET_GPR_U32(ctx, 31, 0x384E10u);
    ctx->pc = 0x384E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E08u;
    // 0x384e0c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381010u, 0x384E08u, 0x384E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E10u;
label_384e10:
    // 0x384e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384e14:
    // 0x384e14: 0xc0e13ea  jal         func_384FA8
    ctx->pc = 0x384E14u;
    SET_GPR_U32(ctx, 31, 0x384E1Cu);
    ctx->pc = 0x384E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E14u;
    // 0x384e18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384FA8u, 0x384E14u, 0x384E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E1Cu;
label_384e1c:
    // 0x384e1c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x384e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x384e20: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x384E20u;
    {
        const bool branch_taken_0x384e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E20u;
        // 0x384e24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e20) {
            ctx->pc = 0x384E38u;
            goto label_384e38;
        }
    }
    ctx->pc = 0x384E28u;
    // 0x384e28: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x384E28u;
    SET_GPR_U32(ctx, 31, 0x384E30u);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x384E28u, 0x384E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E30u;
label_384e30:
    // 0x384e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x384E30u;
    {
        const bool branch_taken_0x384e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E30u;
        // 0x384e34: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e30) {
            ctx->pc = 0x384E3Cu;
            goto label_384e3c;
        }
    }
    ctx->pc = 0x384E38u;
label_384e38:
    // 0x384e38: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x384e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_384e3c:
    // 0x384e3c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x384e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x384e40: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x384E40u;
    {
        const bool branch_taken_0x384e40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x384E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E40u;
        // 0x384e44: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e40) {
            ctx->pc = 0x384E78u;
            goto label_384e78;
        }
    }
    ctx->pc = 0x384E48u;
    // 0x384e48: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x384e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x384e4c: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x384E4Cu;
    SET_GPR_U32(ctx, 31, 0x384E54u);
    ctx->pc = 0x384E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E4Cu;
    // 0x384e50: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x384E4Cu, 0x384E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E54u;
label_384e54:
    // 0x384e54: 0xc0cadb8  jal         func_32B6E0
    ctx->pc = 0x384E54u;
    SET_GPR_U32(ctx, 31, 0x384E5Cu);
    ctx->pc = 0x384E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E54u;
    // 0x384e58: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B6E0u, 0x384E54u, 0x384E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E5Cu;
label_384e5c:
    // 0x384e5c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x384e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x384e60: 0xc0cab84  jal         func_32AE10
    ctx->pc = 0x384E60u;
    SET_GPR_U32(ctx, 31, 0x384E68u);
    ctx->pc = 0x384E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E60u;
    // 0x384e64: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE10u, 0x384E60u, 0x384E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E68u;
label_384e68:
    // 0x384e68: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x384e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x384e6c: 0xc0cb430  jal         func_32D0C0
    ctx->pc = 0x384E6Cu;
    SET_GPR_U32(ctx, 31, 0x384E74u);
    ctx->pc = 0x384E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E6Cu;
    // 0x384e70: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D0C0u, 0x384E6Cu, 0x384E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E74u;
label_384e74:
    // 0x384e74: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x384e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_384e78:
    // 0x384e78: 0xc0e152c  jal         func_3854B0
    ctx->pc = 0x384E78u;
    SET_GPR_U32(ctx, 31, 0x384E80u);
    ctx->pc = 0x384E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E78u;
    // 0x384e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3854B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3854B0u, 0x384E78u, 0x384E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E80u;
label_384e80:
    // 0x384e80: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x384e80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x384e84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x384e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x384e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384e8c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x384e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x384e90: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x384e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x384e94: 0x34e76060  ori         $a3, $a3, 0x6060
    ctx->pc = 0x384e94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24672);
    // 0x384e98: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x384e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x384e9c: 0xc0e019e  jal         func_380678
    ctx->pc = 0x384E9Cu;
    SET_GPR_U32(ctx, 31, 0x384EA4u);
    ctx->pc = 0x384EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E9Cu;
    // 0x384ea0: 0x3408fff8  ori         $t0, $zero, 0xFFF8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    ctx->in_delay_slot = false;
    ctx->pc = 0x380678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380678u, 0x384E9Cu, 0x384EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384EA4u;
label_384ea4:
    // 0x384ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x384ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384ea8:
    // 0x384ea8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x384ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384eac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x384eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384eb0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x384eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384eb4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x384eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x384EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EBCu;
        // 0x384ec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384EC4u;
    // 0x384ec4: 0x0  nop
    ctx->pc = 0x384ec4u;
    // NOP
    ctx->pc = 0x384ec8u;
}
