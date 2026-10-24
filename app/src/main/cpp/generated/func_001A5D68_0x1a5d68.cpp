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

// Function: func_001A5D68
// Address: 0x1a5d68 - 0x1a5f88
void func_001A5D68_0x1a5d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A5D68_0x1a5d68");
#endif

    switch (ctx->pc) {
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5f28u: goto label_1a5f28;
        case 0x1a5f38u: goto label_1a5f38;
        default: break;
    }

    ctx->pc = 0x1a5d68u;

    // 0x1a5d68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a5d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a5d6c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a5d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a5d70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a5d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a5d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a5d7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a5d80: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1a5d84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5D84u;
            // 0x1a5d88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D98u;
            goto label_1a5d98;
        }
    }
    ctx->pc = 0x1A5D8Cu;
    // 0x1a5d8c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A5D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A5D94u);
    ctx->pc = 0x1A5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D8Cu;
    // 0x1a5d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A5D8Cu, 0x1A5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D94u;
label_1a5d94:
    // 0x1a5d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d98:
    // 0x1a5d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5da0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A5DA0u;
    SET_GPR_U32(ctx, 31, 0x1A5DA8u);
    ctx->pc = 0x1A5DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DA0u;
    // 0x1a5da4: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A5DA0u, 0x1A5DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DA8u;
label_1a5da8:
    // 0x1a5da8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a5db0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1A5DB0u;
    SET_GPR_U32(ctx, 31, 0x1A5DB8u);
    ctx->pc = 0x1A5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DB0u;
    // 0x1a5db4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1A5DB0u, 0x1A5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DB8u;
label_1a5db8:
    // 0x1a5db8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dc0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1A5DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DC0u;
    // 0x1a5dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A5DC0u, 0x1A5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dcc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a5dd0: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1A5DD0u;
    SET_GPR_U32(ctx, 31, 0x1A5DD8u);
    ctx->pc = 0x1A5DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5DD0u;
    // 0x1a5dd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1A5DD0u, 0x1A5DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5DD8u;
label_1a5dd8:
    // 0x1a5dd8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1a5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1a5ddc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1a5de0: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1a5de0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5de4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1a5de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a5de8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a5de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a5dec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5df0: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A5DF0u;
    {
        const bool branch_taken_0x1a5df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DF0u;
        // 0x1a5df4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5df0) {
            ctx->pc = 0x1A5EB8u;
            goto label_1a5eb8;
        }
    }
    ctx->pc = 0x1A5DF8u;
    // 0x1a5df8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a5df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5dfc: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1a5dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1a5e00: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1a5e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1a5e04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a5e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5e08: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1a5e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5e0c: 0x0  nop
    ctx->pc = 0x1a5e0cu;
    // NOP
label_1a5e10:
    // 0x1a5e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e14: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1a5e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a5e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5E18u;
    {
        const bool branch_taken_0x1a5e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E18u;
        // 0x1a5e1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e18) {
            ctx->pc = 0x1A5E28u;
            goto label_1a5e28;
        }
    }
    ctx->pc = 0x1A5E20u;
    // 0x1a5e20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1a5e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a5e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e28:
    // 0x1a5e28: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a5e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a5e2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5E2Cu;
    {
        const bool branch_taken_0x1a5e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E2Cu;
        // 0x1a5e30: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e2c) {
            ctx->pc = 0x1A5E44u;
            goto label_1a5e44;
        }
    }
    ctx->pc = 0x1A5E34u;
    // 0x1a5e34: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a5e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a5e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5E3Cu;
    {
        const bool branch_taken_0x1a5e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E3Cu;
        // 0x1a5e40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e3c) {
            ctx->pc = 0x1A5E48u;
            goto label_1a5e48;
        }
    }
    ctx->pc = 0x1A5E44u;
label_1a5e44:
    // 0x1a5e44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e48:
    // 0x1a5e48: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a5e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5e50: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1a5e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1a5e54: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1a5e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1a5e58: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1a5e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1a5e5c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5e60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5E60u;
    {
        const bool branch_taken_0x1a5e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E60u;
        // 0x1a5e64: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e60) {
            ctx->pc = 0x1A5E70u;
            goto label_1a5e70;
        }
    }
    ctx->pc = 0x1A5E68u;
    // 0x1a5e68: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a5e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a5e6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a5e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e70:
    // 0x1a5e70: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1a5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a5e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5E74u;
    {
        const bool branch_taken_0x1a5e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E74u;
        // 0x1a5e78: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e74) {
            ctx->pc = 0x1A5E8Cu;
            goto label_1a5e8c;
        }
    }
    ctx->pc = 0x1A5E7Cu;
    // 0x1a5e7c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1a5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1a5e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5e84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A5E84u;
    {
        const bool branch_taken_0x1a5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E84u;
        // 0x1a5e88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e84) {
            ctx->pc = 0x1A5E90u;
            goto label_1a5e90;
        }
    }
    ctx->pc = 0x1A5E8Cu;
label_1a5e8c:
    // 0x1a5e8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e90:
    // 0x1a5e90: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1a5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1a5e94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a5e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a5e98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a5e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a5e9c: 0x28a30007  slti        $v1, $a1, 0x7
    ctx->pc = 0x1a5e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a5ea0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1a5ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1a5ea4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5EA4u;
    {
        const bool branch_taken_0x1a5ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5EA4u;
        // 0x1a5ea8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ea4) {
            ctx->pc = 0x1A5EB8u;
            goto label_1a5eb8;
        }
    }
    ctx->pc = 0x1A5EACu;
    // 0x1a5eac: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5eacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5eb0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A5EB0u;
    {
        const bool branch_taken_0x1a5eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a5eb0) {
            ctx->pc = 0x1A5EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5EB0u;
            // 0x1a5eb4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5e10;
        }
    }
    ctx->pc = 0x1A5EB8u;
label_1a5eb8:
    // 0x1a5eb8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1A5EB8u;
    SET_GPR_U32(ctx, 31, 0x1A5EC0u);
    ctx->pc = 0x1A5EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5EB8u;
    // 0x1a5ebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1A5EB8u, 0x1A5EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5EC0u;
label_1a5ec0:
    // 0x1a5ec0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1a5ec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a5ec4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a5ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a5ec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a5ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5ecc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a5eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a5ed0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1a5ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1a5ed4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1a5ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1a5ed8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1a5ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1a5edc: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1a5edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1a5ee0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1a5ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1a5ee4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1a5ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1a5ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5eec: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a5eecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5ef0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1a5ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1a5ef4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1a5ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1a5ef8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1a5ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1a5efc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1a5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1a5f00: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1a5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a5f04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1a5f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5f08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a5f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1a5f0c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1a5f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1a5f10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a5f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5f14: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5f18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5f18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5f1c: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5F1Cu;
    {
        const bool branch_taken_0x1a5f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F1Cu;
        // 0x1a5f20: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f1c) {
            ctx->pc = 0x1A5F54u;
            goto label_1a5f54;
        }
    }
    ctx->pc = 0x1A5F24u;
    // 0x1a5f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a5f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5f28:
    // 0x1a5f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5f2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a5f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a5f30: 0xc0696ca  jal         func_1A5B28
    ctx->pc = 0x1A5F30u;
    SET_GPR_U32(ctx, 31, 0x1A5F38u);
    ctx->pc = 0x1A5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5F30u;
    // 0x1a5f34: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5B28u, 0x1A5F30u, 0x1A5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5F38u;
label_1a5f38:
    // 0x1a5f38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a5f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a5f3c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1a5f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1a5f40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5F40u;
    {
        const bool branch_taken_0x1a5f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5f40) {
            ctx->pc = 0x1A5F44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5F40u;
            // 0x1a5f44: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5F58u;
            goto label_1a5f58;
        }
    }
    ctx->pc = 0x1A5F48u;
    // 0x1a5f48: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1a5f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1a5f4c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A5F4Cu;
    {
        const bool branch_taken_0x1a5f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F4Cu;
        // 0x1a5f50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5f4c) {
            ctx->pc = 0x1A5F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5f28;
        }
    }
    ctx->pc = 0x1A5F54u;
label_1a5f54:
    // 0x1a5f54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a5f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5f58:
    // 0x1a5f58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a5f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5f5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a5f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a5f60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5F64u;
        // 0x1a5f68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5F6Cu;
    // 0x1a5f6c: 0x0  nop
    ctx->pc = 0x1a5f6cu;
    // NOP
    // 0x1a5f70: 0x0  nop
    ctx->pc = 0x1a5f70u;
    // NOP
    // 0x1a5f74: 0x0  nop
    ctx->pc = 0x1a5f74u;
    // NOP
    // 0x1a5f78: 0x0  nop
    ctx->pc = 0x1a5f78u;
    // NOP
    // 0x1a5f7c: 0x0  nop
    ctx->pc = 0x1a5f7cu;
    // NOP
    // 0x1a5f80: 0x0  nop
    ctx->pc = 0x1a5f80u;
    // NOP
    // 0x1a5f84: 0x0  nop
    ctx->pc = 0x1a5f84u;
    // NOP
    ctx->pc = 0x1a5f88u;
}
