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

// Function: func_00350D08
// Address: 0x350d08 - 0x350f48
void func_00350D08_0x350d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350D08_0x350d08");
#endif

    switch (ctx->pc) {
        case 0x350d50u: goto label_350d50;
        case 0x350d70u: goto label_350d70;
        case 0x350d90u: goto label_350d90;
        case 0x350df4u: goto label_350df4;
        case 0x350e04u: goto label_350e04;
        case 0x350e4cu: goto label_350e4c;
        case 0x350e64u: goto label_350e64;
        case 0x350e78u: goto label_350e78;
        case 0x350ee4u: goto label_350ee4;
        case 0x350f04u: goto label_350f04;
        case 0x350f20u: goto label_350f20;
        default: break;
    }

    ctx->pc = 0x350d08u;

    // 0x350d08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x350d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x350d0c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x350d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x350d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x350d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d14: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x350d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x350d18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x350d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d1c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x350d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x350d20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x350d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d24: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x350d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x350d28: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x350d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d2c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x350d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x350d30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x350d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d34: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x350d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x350d38: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x350d38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x350d3c: 0x8e301fc8  lw          $s0, 0x1FC8($s1)
    ctx->pc = 0x350d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8136)));
    // 0x350d40: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x350d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x350d44: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x350d44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x350d48: 0xc0d30ae  jal         func_34C2B8
    ctx->pc = 0x350D48u;
    SET_GPR_U32(ctx, 31, 0x350D50u);
    ctx->pc = 0x350D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D48u;
    // 0x350d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x350D48u, 0x350D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D50u;
label_350d50:
    // 0x350d50: 0x54400076  bnel        $v0, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x350D50u;
    {
        const bool branch_taken_0x350d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350d50) {
            ctx->pc = 0x350D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x350D50u;
            // 0x350d54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x350F2Cu;
            goto label_350f2c;
        }
    }
    ctx->pc = 0x350D58u;
    // 0x350d58: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x350d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x350d5c: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x350D5Cu;
    {
        const bool branch_taken_0x350d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D5Cu;
        // 0x350d60: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d5c) {
            ctx->pc = 0x350F28u;
            goto label_350f28;
        }
    }
    ctx->pc = 0x350D64u;
    // 0x350d64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d68: 0xc0d447e  jal         func_3511F8
    ctx->pc = 0x350D68u;
    SET_GPR_U32(ctx, 31, 0x350D70u);
    ctx->pc = 0x350D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D68u;
    // 0x350d6c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3511F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3511F8u, 0x350D68u, 0x350D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D70u;
label_350d70:
    // 0x350d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x350d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350d78: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x350D78u;
    {
        const bool branch_taken_0x350d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x350D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D78u;
        // 0x350d7c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d78) {
            ctx->pc = 0x350DC8u;
            goto label_350dc8;
        }
    }
    ctx->pc = 0x350D80u;
    // 0x350d80: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x350D80u;
    {
        const bool branch_taken_0x350d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D80u;
        // 0x350d84: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d80) {
            ctx->pc = 0x350D98u;
            goto label_350d98;
        }
    }
    ctx->pc = 0x350D88u;
    // 0x350d88: 0xc0d4442  jal         func_351108
    ctx->pc = 0x350D88u;
    SET_GPR_U32(ctx, 31, 0x350D90u);
    ctx->pc = 0x350D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350D88u;
    // 0x350d8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351108u, 0x350D88u, 0x350D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D90u;
label_350d90:
    // 0x350d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x350D90u;
    {
        const bool branch_taken_0x350d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D90u;
        // 0x350d94: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350d90) {
            ctx->pc = 0x350DB0u;
            goto label_350db0;
        }
    }
    ctx->pc = 0x350D98u;
label_350d98:
    // 0x350d98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x350d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x350d9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350da0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x350da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x350da4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x350da4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x350da8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x350da8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x350dac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x350dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_350db0:
    // 0x350db0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x350db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x350db4: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x350DB4u;
    {
        const bool branch_taken_0x350db4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x350DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DB4u;
        // 0x350db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350db4) {
            ctx->pc = 0x350F28u;
            goto label_350f28;
        }
    }
    ctx->pc = 0x350DBCu;
    // 0x350dbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x350dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350dc0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x350DC0u;
    {
        const bool branch_taken_0x350dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DC0u;
        // 0x350dc4: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350dc0) {
            ctx->pc = 0x350F24u;
            goto label_350f24;
        }
    }
    ctx->pc = 0x350DC8u;
label_350dc8:
    // 0x350dc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x350dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350dcc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x350dccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x350dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dd4: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x350dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x350dd8: 0x14800053  bnez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x350DD8u;
    {
        const bool branch_taken_0x350dd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x350DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350DD8u;
        // 0x350ddc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350dd8) {
            ctx->pc = 0x350F28u;
            goto label_350f28;
        }
    }
    ctx->pc = 0x350DE0u;
    // 0x350de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350de4: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x350de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x350de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dec: 0xc0d31b6  jal         func_34C6D8
    ctx->pc = 0x350DECu;
    SET_GPR_U32(ctx, 31, 0x350DF4u);
    ctx->pc = 0x350DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DECu;
    // 0x350df0: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C6D8u, 0x350DECu, 0x350DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350DF4u;
label_350df4:
    // 0x350df4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x350df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350df8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350dfc: 0xc0d43d2  jal         func_350F48
    ctx->pc = 0x350DFCu;
    SET_GPR_U32(ctx, 31, 0x350E04u);
    ctx->pc = 0x350E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350DFCu;
    // 0x350e00: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350F48u, 0x350DFCu, 0x350E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E04u;
label_350e04:
    // 0x350e04: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x350E04u;
    {
        const bool branch_taken_0x350e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E04u;
        // 0x350e08: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e04) {
            ctx->pc = 0x350E64u;
            goto label_350e64;
        }
    }
    ctx->pc = 0x350E0Cu;
    // 0x350e0c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x350E0Cu;
    {
        const bool branch_taken_0x350e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x350E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E0Cu;
        // 0x350e10: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e0c) {
            ctx->pc = 0x350E28u;
            goto label_350e28;
        }
    }
    ctx->pc = 0x350E14u;
    // 0x350e14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x350e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350e18: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x350e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x350e1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x350E1Cu;
    {
        const bool branch_taken_0x350e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E1Cu;
        // 0x350e20: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e1c) {
            ctx->pc = 0x350E30u;
            goto label_350e30;
        }
    }
    ctx->pc = 0x350E24u;
    // 0x350e24: 0x0  nop
    ctx->pc = 0x350e24u;
    // NOP
label_350e28:
    // 0x350e28: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x350e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350e2c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x350e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_350e30:
    // 0x350e30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x350e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350e34: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x350E34u;
    {
        const bool branch_taken_0x350e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E34u;
        // 0x350e38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e34) {
            ctx->pc = 0x350E64u;
            goto label_350e64;
        }
    }
    ctx->pc = 0x350E3Cu;
    // 0x350e3c: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x350e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x350e40: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x350e44: 0xc0d44d4  jal         func_351350
    ctx->pc = 0x350E44u;
    SET_GPR_U32(ctx, 31, 0x350E4Cu);
    ctx->pc = 0x350E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E44u;
    // 0x350e48: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351350u, 0x350E44u, 0x350E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E4Cu;
label_350e4c:
    // 0x350e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e50: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x350e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x350e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x350e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e5c: 0xc0d31d2  jal         func_34C748
    ctx->pc = 0x350E5Cu;
    SET_GPR_U32(ctx, 31, 0x350E64u);
    ctx->pc = 0x350E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E5Cu;
    // 0x350e60: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C748u, 0x350E5Cu, 0x350E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E64u;
label_350e64:
    // 0x350e64: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x350e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x350e68: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x350E68u;
    {
        const bool branch_taken_0x350e68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x350e68) {
            ctx->pc = 0x350EFCu;
            goto label_350efc;
        }
    }
    ctx->pc = 0x350E70u;
    // 0x350e70: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x350E70u;
    SET_GPR_U32(ctx, 31, 0x350E78u);
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x350E70u, 0x350E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E78u;
label_350e78:
    // 0x350e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x350e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x350e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x350e80: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x350e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e84: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350E84u;
    {
        const bool branch_taken_0x350e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E84u;
        // 0x350e88: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e84) {
            ctx->pc = 0x350EB0u;
            goto label_350eb0;
        }
    }
    ctx->pc = 0x350E8Cu;
    // 0x350e8c: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x350e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x350e90: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x350E90u;
    {
        const bool branch_taken_0x350e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E90u;
        // 0x350e94: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e90) {
            ctx->pc = 0x350F10u;
            goto label_350f10;
        }
    }
    ctx->pc = 0x350E98u;
    // 0x350e98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x350e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x350e9c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x350E9Cu;
    {
        const bool branch_taken_0x350e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x350EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E9Cu;
        // 0x350ea0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e9c) {
            ctx->pc = 0x350EC8u;
            goto label_350ec8;
        }
    }
    ctx->pc = 0x350EA4u;
    // 0x350ea4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x350EA4u;
    {
        const bool branch_taken_0x350ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EA4u;
        // 0x350ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ea4) {
            ctx->pc = 0x350F18u;
            goto label_350f18;
        }
    }
    ctx->pc = 0x350EACu;
    // 0x350eac: 0x0  nop
    ctx->pc = 0x350eacu;
    // NOP
label_350eb0:
    // 0x350eb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350eb4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x350eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x350eb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x350EB8u;
    {
        const bool branch_taken_0x350eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EB8u;
        // 0x350ebc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350eb8) {
            ctx->pc = 0x350F10u;
            goto label_350f10;
        }
    }
    ctx->pc = 0x350EC0u;
    // 0x350ec0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x350EC0u;
    {
        const bool branch_taken_0x350ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EC0u;
        // 0x350ec4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ec0) {
            ctx->pc = 0x350EDCu;
            goto label_350edc;
        }
    }
    ctx->pc = 0x350EC8u;
label_350ec8:
    // 0x350ec8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x350ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350ecc: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x350eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x350ed0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x350ED0u;
    {
        const bool branch_taken_0x350ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x350ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350ED0u;
        // 0x350ed4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ed0) {
            ctx->pc = 0x350F10u;
            goto label_350f10;
        }
    }
    ctx->pc = 0x350ED8u;
    // 0x350ed8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_350edc:
    // 0x350edc: 0xc0d447e  jal         func_3511F8
    ctx->pc = 0x350EDCu;
    SET_GPR_U32(ctx, 31, 0x350EE4u);
    ctx->pc = 0x350EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350EDCu;
    // 0x350ee0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3511F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3511F8u, 0x350EDCu, 0x350EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EE4u;
label_350ee4:
    // 0x350ee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ee8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x350EE8u;
    {
        const bool branch_taken_0x350ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ee8) {
            ctx->pc = 0x350EFCu;
            goto label_350efc;
        }
    }
    ctx->pc = 0x350EF0u;
    // 0x350ef0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x350ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x350ef4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x350EF4u;
    {
        const bool branch_taken_0x350ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x350EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EF4u;
        // 0x350ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ef4) {
            ctx->pc = 0x350F18u;
            goto label_350f18;
        }
    }
    ctx->pc = 0x350EFCu;
label_350efc:
    // 0x350efc: 0xc0d445c  jal         func_351170
    ctx->pc = 0x350EFCu;
    SET_GPR_U32(ctx, 31, 0x350F04u);
    ctx->pc = 0x350F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350EFCu;
    // 0x350f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351170u, 0x350EFCu, 0x350F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F04u;
label_350f04:
    // 0x350f04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x350F04u;
    {
        const bool branch_taken_0x350f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F04u;
        // 0x350f08: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350f04) {
            ctx->pc = 0x350F2Cu;
            goto label_350f2c;
        }
    }
    ctx->pc = 0x350F0Cu;
    // 0x350f0c: 0x0  nop
    ctx->pc = 0x350f0cu;
    // NOP
label_350f10:
    // 0x350f10: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x350f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x350f14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x350f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_350f18:
    // 0x350f18: 0xc0d4442  jal         func_351108
    ctx->pc = 0x350F18u;
    SET_GPR_U32(ctx, 31, 0x350F20u);
    ctx->pc = 0x350F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F18u;
    // 0x350f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351108u, 0x350F18u, 0x350F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F20u;
label_350f20:
    // 0x350f20: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x350f20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_350f24:
    // 0x350f24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x350f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_350f28:
    // 0x350f28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x350f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_350f2c:
    // 0x350f2c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x350f2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x350f30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x350f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350f34: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x350f38: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x350f38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x350f3c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x350f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f40: 0x3e00008  jr          $ra
    ctx->pc = 0x350F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F40u;
        // 0x350f44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350F48u;
}
