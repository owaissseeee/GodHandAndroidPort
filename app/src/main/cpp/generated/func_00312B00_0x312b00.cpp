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

// Function: func_00312B00
// Address: 0x312b00 - 0x312db8
void func_00312B00_0x312b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00312B00_0x312b00");
#endif

    switch (ctx->pc) {
        case 0x312becu: goto label_312bec;
        case 0x312bfcu: goto label_312bfc;
        case 0x312c0cu: goto label_312c0c;
        case 0x312c1cu: goto label_312c1c;
        case 0x312c2cu: goto label_312c2c;
        case 0x312c3cu: goto label_312c3c;
        case 0x312c4cu: goto label_312c4c;
        case 0x312c80u: goto label_312c80;
        case 0x312c8cu: goto label_312c8c;
        case 0x312ca4u: goto label_312ca4;
        case 0x312ce0u: goto label_312ce0;
        case 0x312d1cu: goto label_312d1c;
        case 0x312d40u: goto label_312d40;
        case 0x312d58u: goto label_312d58;
        case 0x312d60u: goto label_312d60;
        case 0x312d7cu: goto label_312d7c;
        default: break;
    }

    ctx->pc = 0x312b00u;

    // 0x312b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x312b04: 0x24020374  addiu       $v0, $zero, 0x374
    ctx->pc = 0x312b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 884));
    // 0x312b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x312b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x312b0c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x312b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x312b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x312b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x312b18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x312b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b1c: 0x12020045  beq         $s0, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x312B1Cu;
    {
        const bool branch_taken_0x312b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B1Cu;
        // 0x312b20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b1c) {
            ctx->pc = 0x312C34u;
            goto label_312c34;
        }
    }
    ctx->pc = 0x312B24u;
    // 0x312b24: 0x2a020375  slti        $v0, $s0, 0x375
    ctx->pc = 0x312b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)885) ? 1 : 0);
    // 0x312b28: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x312B28u;
    {
        const bool branch_taken_0x312b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B28u;
        // 0x312b2c: 0x24020212  addiu       $v0, $zero, 0x212 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b28) {
            ctx->pc = 0x312B8Cu;
            goto label_312b8c;
        }
    }
    ctx->pc = 0x312B30u;
    // 0x312b30: 0x12020030  beq         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x312B30u;
    {
        const bool branch_taken_0x312b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B30u;
        // 0x312b34: 0x2a020213  slti        $v0, $s0, 0x213 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)531) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b30) {
            ctx->pc = 0x312BF4u;
            goto label_312bf4;
        }
    }
    ctx->pc = 0x312B38u;
    // 0x312b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x312B38u;
    {
        const bool branch_taken_0x312b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B38u;
        // 0x312b3c: 0x24020257  addiu       $v0, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b38) {
            ctx->pc = 0x312B58u;
            goto label_312b58;
        }
    }
    ctx->pc = 0x312B40u;
    // 0x312b40: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x312B40u;
    {
        const bool branch_taken_0x312b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B40u;
        // 0x312b44: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b40) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312B48u;
    // 0x312b48: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x312B48u;
    {
        const bool branch_taken_0x312b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x312b48) {
            ctx->pc = 0x312BE4u;
            goto label_312be4;
        }
    }
    ctx->pc = 0x312B50u;
    // 0x312b50: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x312B50u;
    {
        const bool branch_taken_0x312b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b50) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312B58u;
label_312b58:
    // 0x312b58: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x312B58u;
    {
        const bool branch_taken_0x312b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B58u;
        // 0x312b5c: 0x2a020258  slti        $v0, $s0, 0x258 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)600) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b58) {
            ctx->pc = 0x312C14u;
            goto label_312c14;
        }
    }
    ctx->pc = 0x312B60u;
    // 0x312b60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312B60u;
    {
        const bool branch_taken_0x312b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B60u;
        // 0x312b64: 0x24020253  addiu       $v0, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b60) {
            ctx->pc = 0x312B78u;
            goto label_312b78;
        }
    }
    ctx->pc = 0x312B68u;
    // 0x312b68: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x312B68u;
    {
        const bool branch_taken_0x312b68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x312b68) {
            ctx->pc = 0x312C04u;
            goto label_312c04;
        }
    }
    ctx->pc = 0x312B70u;
    // 0x312b70: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x312B70u;
    {
        const bool branch_taken_0x312b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b70) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312B78u;
label_312b78:
    // 0x312b78: 0x2402036e  addiu       $v0, $zero, 0x36E
    ctx->pc = 0x312b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 878));
    // 0x312b7c: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x312B7Cu;
    {
        const bool branch_taken_0x312b7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x312b7c) {
            ctx->pc = 0x312C24u;
            goto label_312c24;
        }
    }
    ctx->pc = 0x312B84u;
    // 0x312b84: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x312B84u;
    {
        const bool branch_taken_0x312b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b84) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312B8Cu;
label_312b8c:
    // 0x312b8c: 0x24021200  addiu       $v0, $zero, 0x1200
    ctx->pc = 0x312b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4608));
    // 0x312b90: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x312B90u;
    {
        const bool branch_taken_0x312b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B90u;
        // 0x312b94: 0x2a021201  slti        $v0, $s0, 0x1201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b90) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312B98u;
    // 0x312b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x312B98u;
    {
        const bool branch_taken_0x312b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B98u;
        // 0x312b9c: 0x24020628  addiu       $v0, $zero, 0x628 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b98) {
            ctx->pc = 0x312BB8u;
            goto label_312bb8;
        }
    }
    ctx->pc = 0x312BA0u;
    // 0x312ba0: 0x1202001c  beq         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x312BA0u;
    {
        const bool branch_taken_0x312ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BA0u;
        // 0x312ba4: 0x24021100  addiu       $v0, $zero, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ba0) {
            ctx->pc = 0x312C14u;
            goto label_312c14;
        }
    }
    ctx->pc = 0x312BA8u;
    // 0x312ba8: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x312BA8u;
    {
        const bool branch_taken_0x312ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x312BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BA8u;
        // 0x312bac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ba8) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312BB0u;
    // 0x312bb0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x312BB0u;
    {
        const bool branch_taken_0x312bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312bb0) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312BB8u;
label_312bb8:
    // 0x312bb8: 0x3402ff01  ori         $v0, $zero, 0xFF01
    ctx->pc = 0x312bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65281);
    // 0x312bbc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x312bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x312bc0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x312BC0u;
    {
        const bool branch_taken_0x312bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BC0u;
        // 0x312bc4: 0x3402ff02  ori         $v0, $zero, 0xFF02 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65282);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bc0) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312BC8u;
    // 0x312bc8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x312bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x312bcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312BCCu;
    {
        const bool branch_taken_0x312bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BCCu;
        // 0x312bd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bcc) {
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312BD4u;
    // 0x312bd4: 0x1602001b  bne         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x312BD4u;
    {
        const bool branch_taken_0x312bd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x312bd4) {
            ctx->pc = 0x312C44u;
            goto label_312c44;
        }
    }
    ctx->pc = 0x312BDCu;
label_312bdc:
    // 0x312bdc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x312BDCu;
    {
        const bool branch_taken_0x312bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BDCu;
        // 0x312be0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bdc) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312BE4u;
label_312be4:
    // 0x312be4: 0xc0c4bdc  jal         func_312F70
    ctx->pc = 0x312BE4u;
    SET_GPR_U32(ctx, 31, 0x312BECu);
    ctx->pc = 0x312F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F70u, 0x312BE4u, 0x312BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BECu;
label_312bec:
    // 0x312bec: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x312BECu;
    {
        const bool branch_taken_0x312bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BECu;
        // 0x312bf0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bec) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312BF4u;
label_312bf4:
    // 0x312bf4: 0xc0c4c84  jal         func_313210
    ctx->pc = 0x312BF4u;
    SET_GPR_U32(ctx, 31, 0x312BFCu);
    ctx->pc = 0x313210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313210u, 0x312BF4u, 0x312BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BFCu;
label_312bfc:
    // 0x312bfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x312BFCu;
    {
        const bool branch_taken_0x312bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BFCu;
        // 0x312c00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312bfc) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C04u;
label_312c04:
    // 0x312c04: 0xc0c4cb4  jal         func_3132D0
    ctx->pc = 0x312C04u;
    SET_GPR_U32(ctx, 31, 0x312C0Cu);
    ctx->pc = 0x3132D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3132D0u, 0x312C04u, 0x312C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C0Cu;
label_312c0c:
    // 0x312c0c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x312C0Cu;
    {
        const bool branch_taken_0x312c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C0Cu;
        // 0x312c10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c0c) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C14u;
label_312c14:
    // 0x312c14: 0xc0c4ce4  jal         func_313390
    ctx->pc = 0x312C14u;
    SET_GPR_U32(ctx, 31, 0x312C1Cu);
    ctx->pc = 0x313390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313390u, 0x312C14u, 0x312C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C1Cu;
label_312c1c:
    // 0x312c1c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x312C1Cu;
    {
        const bool branch_taken_0x312c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C1Cu;
        // 0x312c20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c1c) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C24u;
label_312c24:
    // 0x312c24: 0xc0c604e  jal         func_318138
    ctx->pc = 0x312C24u;
    SET_GPR_U32(ctx, 31, 0x312C2Cu);
    ctx->pc = 0x318138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318138u, 0x312C24u, 0x312C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C2Cu;
label_312c2c:
    // 0x312c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x312C2Cu;
    {
        const bool branch_taken_0x312c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C2Cu;
        // 0x312c30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c2c) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C34u;
label_312c34:
    // 0x312c34: 0xc0c604e  jal         func_318138
    ctx->pc = 0x312C34u;
    SET_GPR_U32(ctx, 31, 0x312C3Cu);
    ctx->pc = 0x318138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318138u, 0x312C34u, 0x312C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C3Cu;
label_312c3c:
    // 0x312c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x312C3Cu;
    {
        const bool branch_taken_0x312c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C3Cu;
        // 0x312c40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c3c) {
            ctx->pc = 0x312C50u;
            goto label_312c50;
        }
    }
    ctx->pc = 0x312C44u;
label_312c44:
    // 0x312c44: 0xc0c606a  jal         func_3181A8
    ctx->pc = 0x312C44u;
    SET_GPR_U32(ctx, 31, 0x312C4Cu);
    ctx->pc = 0x3181A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3181A8u, 0x312C44u, 0x312C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C4Cu;
label_312c4c:
    // 0x312c4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x312c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312c50:
    // 0x312c50: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x312C50u;
    {
        const bool branch_taken_0x312c50 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x312C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C50u;
        // 0x312c54: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c50) {
            ctx->pc = 0x312C60u;
            goto label_312c60;
        }
    }
    ctx->pc = 0x312C58u;
    // 0x312c58: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x312C58u;
    {
        const bool branch_taken_0x312c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C58u;
        // 0x312c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c58) {
            ctx->pc = 0x312D9Cu;
            goto label_312d9c;
        }
    }
    ctx->pc = 0x312C60u;
label_312c60:
    // 0x312c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c64: 0x90663d18  lbu         $a2, 0x3D18($v1)
    ctx->pc = 0x312c64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15640)));
    // 0x312c68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c6c: 0xa22602fc  sb          $a2, 0x2FC($s1)
    ctx->pc = 0x312c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 764), (uint8_t)GPR_U32(ctx, 6));
    // 0x312c70: 0x90623d18  lbu         $v0, 0x3D18($v1)
    ctx->pc = 0x312c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15640)));
    // 0x312c74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x312c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x312c78: 0xc0539a4  jal         func_14E690
    ctx->pc = 0x312C78u;
    SET_GPR_U32(ctx, 31, 0x312C80u);
    ctx->pc = 0x312C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C78u;
    // 0x312c7c: 0xa0623d18  sb          $v0, 0x3D18($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 15640), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E690u, 0x312C78u, 0x312C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C80u;
label_312c80:
    // 0x312c80: 0xa6300300  sh          $s0, 0x300($s1)
    ctx->pc = 0x312c80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 768), (uint16_t)GPR_U32(ctx, 16));
    // 0x312c84: 0xc0c1e38  jal         func_3078E0
    ctx->pc = 0x312C84u;
    SET_GPR_U32(ctx, 31, 0x312C8Cu);
    ctx->pc = 0x312C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C84u;
    // 0x312c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3078E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3078E0u, 0x312C84u, 0x312C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312C8Cu;
label_312c8c:
    // 0x312c8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x312c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x312c90: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x312C90u;
    {
        const bool branch_taken_0x312c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x312C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C90u;
        // 0x312c94: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c90) {
            ctx->pc = 0x312CC8u;
            goto label_312cc8;
        }
    }
    ctx->pc = 0x312C98u;
    // 0x312c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c9c: 0xc07fa92  jal         func_1FEA48
    ctx->pc = 0x312C9Cu;
    SET_GPR_U32(ctx, 31, 0x312CA4u);
    ctx->pc = 0x312CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312C9Cu;
    // 0x312ca0: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA48u, 0x312C9Cu, 0x312CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CA4u;
label_312ca4:
    // 0x312ca4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ca8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x312CA8u;
    {
        const bool branch_taken_0x312ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CA8u;
        // 0x312cac: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ca8) {
            ctx->pc = 0x312CECu;
            goto label_312cec;
        }
    }
    ctx->pc = 0x312CB0u;
    // 0x312cb0: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x312cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x312cb4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x312cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x312cb8: 0x26104220  addiu       $s0, $s0, 0x4220
    ctx->pc = 0x312cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16928));
    // 0x312cbc: 0x962502fe  lhu         $a1, 0x2FE($s1)
    ctx->pc = 0x312cbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x312cc0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x312CC0u;
    {
        const bool branch_taken_0x312cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CC0u;
        // 0x312cc4: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cc0) {
            ctx->pc = 0x312D10u;
            goto label_312d10;
        }
    }
    ctx->pc = 0x312CC8u;
label_312cc8:
    // 0x312cc8: 0x3a42ffff  xori        $v0, $s2, 0xFFFF
    ctx->pc = 0x312cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)65535);
    // 0x312ccc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x312CCCu;
    {
        const bool branch_taken_0x312ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CCCu;
        // 0x312cd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ccc) {
            ctx->pc = 0x312D44u;
            goto label_312d44;
        }
    }
    ctx->pc = 0x312CD4u;
    // 0x312cd4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x312cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x312cd8: 0xc07fa92  jal         func_1FEA48
    ctx->pc = 0x312CD8u;
    SET_GPR_U32(ctx, 31, 0x312CE0u);
    ctx->pc = 0x312CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312CD8u;
    // 0x312cdc: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA48u, 0x312CD8u, 0x312CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312CE0u;
label_312ce0:
    // 0x312ce0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312ce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312ce4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x312CE4u;
    {
        const bool branch_taken_0x312ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CE4u;
        // 0x312ce8: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ce4) {
            ctx->pc = 0x312CFCu;
            goto label_312cfc;
        }
    }
    ctx->pc = 0x312CECu;
label_312cec:
    // 0x312cec: 0xae230304  sw          $v1, 0x304($s1)
    ctx->pc = 0x312cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 3));
    // 0x312cf0: 0x24424220  addiu       $v0, $v0, 0x4220
    ctx->pc = 0x312cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16928));
    // 0x312cf4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x312CF4u;
    {
        const bool branch_taken_0x312cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CF4u;
        // 0x312cf8: 0xae2202c8  sw          $v0, 0x2C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cf4) {
            ctx->pc = 0x312D44u;
            goto label_312d44;
        }
    }
    ctx->pc = 0x312CFCu;
label_312cfc:
    // 0x312cfc: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x312cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x312d00: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x312d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x312d04: 0x26104220  addiu       $s0, $s0, 0x4220
    ctx->pc = 0x312d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16928));
    // 0x312d08: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x312d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x312d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_312d10:
    // 0x312d10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x312d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d14: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x312D14u;
    SET_GPR_U32(ctx, 31, 0x312D1Cu);
    ctx->pc = 0x312D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D14u;
    // 0x312d18: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x312D14u, 0x312D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D1Cu;
label_312d1c:
    // 0x312d1c: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x312d20: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x312d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x312d24: 0xae3002c8  sw          $s0, 0x2C8($s1)
    ctx->pc = 0x312d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 16));
    // 0x312d28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x312d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x312d2c: 0xae220304  sw          $v0, 0x304($s1)
    ctx->pc = 0x312d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 2));
    // 0x312d30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312D30u;
    {
        const bool branch_taken_0x312d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D30u;
        // 0x312d34: 0xae230250  sw          $v1, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d30) {
            ctx->pc = 0x312D44u;
            goto label_312d44;
        }
    }
    ctx->pc = 0x312D38u;
    // 0x312d38: 0xc0c49de  jal         func_312778
    ctx->pc = 0x312D38u;
    SET_GPR_U32(ctx, 31, 0x312D40u);
    ctx->pc = 0x312D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D38u;
    // 0x312d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312778u, 0x312D38u, 0x312D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D40u;
label_312d40:
    // 0x312d40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x312d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312d44:
    // 0x312d44: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x312D44u;
    {
        const bool branch_taken_0x312d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D44u;
        // 0x312d48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d44) {
            ctx->pc = 0x312D98u;
            goto label_312d98;
        }
    }
    ctx->pc = 0x312D4Cu;
    // 0x312d4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x312D4Cu;
    {
        const bool branch_taken_0x312d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d4c) {
            ctx->pc = 0x312D74u;
            goto label_312d74;
        }
    }
    ctx->pc = 0x312D54u;
    // 0x312d54: 0x0  nop
    ctx->pc = 0x312d54u;
    // NOP
label_312d58:
    // 0x312d58: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x312D58u;
    SET_GPR_U32(ctx, 31, 0x312D60u);
    ctx->pc = 0x312D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D58u;
    // 0x312d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x312D58u, 0x312D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D60u;
label_312d60:
    // 0x312d60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x312d64: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x312d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x312d68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x312d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x312d6c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x312d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x312d70: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x312d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
label_312d74:
    // 0x312d74: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x312D74u;
    SET_GPR_U32(ctx, 31, 0x312D7Cu);
    ctx->pc = 0x312D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312D74u;
    // 0x312d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x312D74u, 0x312D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312D7Cu;
label_312d7c:
    // 0x312d7c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x312d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x312d80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x312D80u;
    {
        const bool branch_taken_0x312d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312D80u;
        // 0x312d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d80) {
            ctx->pc = 0x312D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d58;
        }
    }
    ctx->pc = 0x312D88u;
    // 0x312d88: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x312d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x312d8c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x312d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x312d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312d94: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x312d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_312d98:
    // 0x312d98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x312d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312d9c:
    // 0x312d9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x312d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312da0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x312da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312da4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x312da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312dac: 0x3e00008  jr          $ra
    ctx->pc = 0x312DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DACu;
        // 0x312db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312DB4u;
    // 0x312db4: 0x0  nop
    ctx->pc = 0x312db4u;
    // NOP
    ctx->pc = 0x312db8u;
}
