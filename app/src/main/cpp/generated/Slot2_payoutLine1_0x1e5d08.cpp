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

// Function: Slot2_payoutLine1
// Address: 0x1e5d08 - 0x1e5f30
void Slot2_payoutLine1_0x1e5d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_payoutLine1_0x1e5d08");
#endif

    switch (ctx->pc) {
        case 0x1e5d80u: goto label_1e5d80;
        case 0x1e5d90u: goto label_1e5d90;
        case 0x1e5da0u: goto label_1e5da0;
        case 0x1e5df0u: goto label_1e5df0;
        case 0x1e5e24u: goto label_1e5e24;
        case 0x1e5e40u: goto label_1e5e40;
        case 0x1e5e6cu: goto label_1e5e6c;
        case 0x1e5ea0u: goto label_1e5ea0;
        case 0x1e5ebcu: goto label_1e5ebc;
        case 0x1e5eccu: goto label_1e5ecc;
        case 0x1e5edcu: goto label_1e5edc;
        case 0x1e5ef8u: goto label_1e5ef8;
        default: break;
    }

    ctx->pc = 0x1e5d08u;

    // 0x1e5d08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e5d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d10: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e5d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e5d14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e5d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e5d18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e5d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e5d20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5d24: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e5d28: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E5D28u;
    {
        const bool branch_taken_0x1e5d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D28u;
        // 0x1e5d2c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d28) {
            ctx->pc = 0x1E5DB0u;
            goto label_1e5db0;
        }
    }
    ctx->pc = 0x1E5D30u;
    // 0x1e5d30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5D30u;
    {
        const bool branch_taken_0x1e5d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d30) {
            ctx->pc = 0x1E5D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5D30u;
            // 0x1e5d34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5D48u;
            goto label_1e5d48;
        }
    }
    ctx->pc = 0x1E5D38u;
    // 0x1e5d38: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5D38u;
    {
        const bool branch_taken_0x1e5d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D38u;
        // 0x1e5d3c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d38) {
            ctx->pc = 0x1E5D60u;
            goto label_1e5d60;
        }
    }
    ctx->pc = 0x1E5D40u;
    // 0x1e5d40: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E5D40u;
    {
        const bool branch_taken_0x1e5d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D40u;
        // 0x1e5d44: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d40) {
            ctx->pc = 0x1E5F1Cu;
            goto label_1e5f1c;
        }
    }
    ctx->pc = 0x1E5D48u;
label_1e5d48:
    // 0x1e5d48: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1E5D48u;
    {
        const bool branch_taken_0x1e5d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D48u;
        // 0x1e5d4c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d48) {
            ctx->pc = 0x1E5E54u;
            goto label_1e5e54;
        }
    }
    ctx->pc = 0x1E5D50u;
    // 0x1e5d50: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1E5D50u;
    {
        const bool branch_taken_0x1e5d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D50u;
        // 0x1e5d54: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d50) {
            ctx->pc = 0x1E5F08u;
            goto label_1e5f08;
        }
    }
    ctx->pc = 0x1E5D58u;
    // 0x1e5d58: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1E5D58u;
    {
        const bool branch_taken_0x1e5d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5D58u;
        // 0x1e5d5c: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d58) {
            ctx->pc = 0x1E5F1Cu;
            goto label_1e5f1c;
        }
    }
    ctx->pc = 0x1E5D60u;
label_1e5d60:
    // 0x1e5d60: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1e5d60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1e5d64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d68: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e5d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5d6c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1e5d6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x1e5d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d78: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1E5D78u;
    SET_GPR_U32(ctx, 31, 0x1E5D80u);
    ctx->pc = 0x1E5D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D78u;
    // 0x1e5d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1E5D78u, 0x1E5D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D80u;
label_1e5d80:
    // 0x1e5d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d88: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E5D88u;
    SET_GPR_U32(ctx, 31, 0x1E5D90u);
    ctx->pc = 0x1E5D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D88u;
    // 0x1e5d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E5D88u, 0x1E5D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5D90u;
label_1e5d90:
    // 0x1e5d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5d98: 0xc079adc  jal         func_1E6B70
    ctx->pc = 0x1E5D98u;
    SET_GPR_U32(ctx, 31, 0x1E5DA0u);
    ctx->pc = 0x1E5D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5D98u;
    // 0x1e5d9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6B70u, 0x1E5D98u, 0x1E5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DA0u;
label_1e5da0:
    // 0x1e5da0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e5da4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e5da8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1E5DA8u;
    {
        const bool branch_taken_0x1e5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DA8u;
        // 0x1e5dac: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5da8) {
            ctx->pc = 0x1E5EE0u;
            goto label_1e5ee0;
        }
    }
    ctx->pc = 0x1E5DB0u;
label_1e5db0:
    // 0x1e5db0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e5db4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5DB4u;
    {
        const bool branch_taken_0x1e5db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DB4u;
        // 0x1e5db8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5db4) {
            ctx->pc = 0x1E5DC8u;
            goto label_1e5dc8;
        }
    }
    ctx->pc = 0x1E5DBCu;
    // 0x1e5dbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5dc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5DC0u;
    {
        const bool branch_taken_0x1e5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DC0u;
        // 0x1e5dc4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dc0) {
            ctx->pc = 0x1E5DCCu;
            goto label_1e5dcc;
        }
    }
    ctx->pc = 0x1E5DC8u;
label_1e5dc8:
    // 0x1e5dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5dcc:
    // 0x1e5dcc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5dd0: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1E5DD0u;
    {
        const bool branch_taken_0x1e5dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DD0u;
        // 0x1e5dd4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dd0) {
            ctx->pc = 0x1E5F14u;
            goto label_1e5f14;
        }
    }
    ctx->pc = 0x1E5DD8u;
    // 0x1e5dd8: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1e5dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e5ddc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1e5ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1e5de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5de8: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1E5DE8u;
    SET_GPR_U32(ctx, 31, 0x1E5DF0u);
    ctx->pc = 0x1E5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5DE8u;
    // 0x1e5dec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1E5DE8u, 0x1E5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DF0u;
label_1e5df0:
    // 0x1e5df0: 0x8e23036c  lw          $v1, 0x36C($s1)
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x1e5df4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e5df8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1e5df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1e5dfc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e5e00: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e5e00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5e04: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5E04u;
    {
        const bool branch_taken_0x1e5e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e04) {
            ctx->pc = 0x1E5E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E04u;
            // 0x1e5e08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E0Cu;
            goto label_1e5e0c;
        }
    }
    ctx->pc = 0x1E5E0Cu;
label_1e5e0c:
    // 0x1e5e0c: 0x1812  mflo        $v1
    ctx->pc = 0x1e5e0cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1e5e10: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x1e5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x1e5e14: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1e5e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1e5e18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e1c: 0xc07a392  jal         func_1E8E48
    ctx->pc = 0x1E5E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E24u);
    ctx->pc = 0x1E5E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E1Cu;
    // 0x1e5e20: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8E48u, 0x1E5E1Cu, 0x1E5E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E24u;
label_1e5e24:
    // 0x1e5e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5e2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e5e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5e30: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1e5e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e5e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e38: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E5E38u;
    SET_GPR_U32(ctx, 31, 0x1E5E40u);
    ctx->pc = 0x1E5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E38u;
    // 0x1e5e3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E5E38u, 0x1E5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E40u;
label_1e5e40:
    // 0x1e5e40: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e5e44: 0xae2203f0  sw          $v0, 0x3F0($s1)
    ctx->pc = 0x1e5e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 2));
    // 0x1e5e48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5e4c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1E5E4Cu;
    {
        const bool branch_taken_0x1e5e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E4Cu;
        // 0x1e5e50: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e4c) {
            ctx->pc = 0x1E5F14u;
            goto label_1e5f14;
        }
    }
    ctx->pc = 0x1E5E54u;
label_1e5e54:
    // 0x1e5e54: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e5e58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E5E58u;
    {
        const bool branch_taken_0x1e5e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E58u;
        // 0x1e5e5c: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e58) {
            ctx->pc = 0x1E5E90u;
            goto label_1e5e90;
        }
    }
    ctx->pc = 0x1E5E60u;
    // 0x1e5e60: 0x26129b70  addiu       $s2, $s0, -0x6490
    ctx->pc = 0x1e5e60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e5e64: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1E5E64u;
    SET_GPR_U32(ctx, 31, 0x1E5E6Cu);
    ctx->pc = 0x1E5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E64u;
    // 0x1e5e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1E5E64u, 0x1E5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E6Cu;
label_1e5e6c:
    // 0x1e5e6c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5E6Cu;
    {
        const bool branch_taken_0x1e5e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e6c) {
            ctx->pc = 0x1E5E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E6Cu;
            // 0x1e5e70: 0x8e2503f0  lw          $a1, 0x3F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E94u;
            goto label_1e5e94;
        }
    }
    ctx->pc = 0x1E5E74u;
    // 0x1e5e74: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1e5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1e5e78: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x1e5e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1e5e7c: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x1e5e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x1e5e80: 0xdc437650  ld          $v1, 0x7650($v0)
    ctx->pc = 0x1e5e80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30288)));
    // 0x1e5e84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e5e88: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5E88u;
    {
        const bool branch_taken_0x1e5e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e88) {
            ctx->pc = 0x1E5E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E88u;
            // 0x1e5e8c: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5EECu;
            goto label_1e5eec;
        }
    }
    ctx->pc = 0x1E5E90u;
label_1e5e90:
    // 0x1e5e90: 0x8e2503f0  lw          $a1, 0x3F0($s1)
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
label_1e5e94:
    // 0x1e5e94: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e5e98: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1E5E98u;
    SET_GPR_U32(ctx, 31, 0x1E5EA0u);
    ctx->pc = 0x1E5E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E98u;
    // 0x1e5e9c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1E5E98u, 0x1E5EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EA0u;
label_1e5ea0:
    // 0x1e5ea0: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1e5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1e5ea4: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x1e5ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1e5ea8: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e5eac: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x1e5eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e5eb0: 0x2812  mflo        $a1
    ctx->pc = 0x1e5eb0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1e5eb4: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E5EB4u;
    SET_GPR_U32(ctx, 31, 0x1E5EBCu);
    ctx->pc = 0x1E5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EB4u;
    // 0x1e5eb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E5EB4u, 0x1E5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EBCu;
label_1e5ebc:
    // 0x1e5ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ec4: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ECCu);
    ctx->pc = 0x1E5EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EC4u;
    // 0x1e5ec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E5EC4u, 0x1E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e5eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ed4: 0xc079adc  jal         func_1E6B70
    ctx->pc = 0x1E5ED4u;
    SET_GPR_U32(ctx, 31, 0x1E5EDCu);
    ctx->pc = 0x1E5ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5ED4u;
    // 0x1e5ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6B70u, 0x1E5ED4u, 0x1E5EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EDCu;
label_1e5edc:
    // 0x1e5edc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e5ee0:
    // 0x1e5ee0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5ee4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E5EE4u;
    {
        const bool branch_taken_0x1e5ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5EE4u;
        // 0x1e5ee8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ee4) {
            ctx->pc = 0x1E5F14u;
            goto label_1e5f14;
        }
    }
    ctx->pc = 0x1E5EECu;
label_1e5eec:
    // 0x1e5eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ef0: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E5EF0u;
    SET_GPR_U32(ctx, 31, 0x1E5EF8u);
    ctx->pc = 0x1E5EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EF0u;
    // 0x1e5ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E5EF0u, 0x1E5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EF8u;
label_1e5ef8:
    // 0x1e5ef8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1e5efc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1e5f00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5F00u;
    {
        const bool branch_taken_0x1e5f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F00u;
        // 0x1e5f04: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f00) {
            ctx->pc = 0x1E5F14u;
            goto label_1e5f14;
        }
    }
    ctx->pc = 0x1E5F08u;
label_1e5f08:
    // 0x1e5f08: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e5f0c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1e5f10: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e5f14:
    // 0x1e5f14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e5f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5f18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e5f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e5f1c:
    // 0x1e5f1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e5f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5f20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F24u;
        // 0x1e5f28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5F2Cu;
    // 0x1e5f2c: 0x0  nop
    ctx->pc = 0x1e5f2cu;
    // NOP
    ctx->pc = 0x1e5f30u;
}
