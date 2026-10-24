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

// Function: func_00383C70
// Address: 0x383c70 - 0x383dd0
void func_00383C70_0x383c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383C70_0x383c70");
#endif

    switch (ctx->pc) {
        case 0x383cb8u: goto label_383cb8;
        case 0x383ce0u: goto label_383ce0;
        case 0x383d2cu: goto label_383d2c;
        case 0x383d48u: goto label_383d48;
        case 0x383d60u: goto label_383d60;
        case 0x383d6cu: goto label_383d6c;
        case 0x383d80u: goto label_383d80;
        case 0x383db0u: goto label_383db0;
        default: break;
    }

    ctx->pc = 0x383c70u;

    // 0x383c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x383c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x383c74: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x383c74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x383c78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x383c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x383c7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x383c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x383c80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x383c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x383c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x383c88: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x383c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x383c8c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x383C8Cu;
    {
        const bool branch_taken_0x383c8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C8Cu;
        // 0x383c90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c8c) {
            ctx->pc = 0x383CA0u;
            goto label_383ca0;
        }
    }
    ctx->pc = 0x383C94u;
    // 0x383c94: 0x26110026  addiu       $s1, $s0, 0x26
    ctx->pc = 0x383c94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
    // 0x383c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x383C98u;
    {
        const bool branch_taken_0x383c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C98u;
        // 0x383c9c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c98) {
            ctx->pc = 0x383CA8u;
            goto label_383ca8;
        }
    }
    ctx->pc = 0x383CA0u;
label_383ca0:
    // 0x383ca0: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x383ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x383ca4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x383ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383ca8:
    // 0x383ca8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383cac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x383CACu;
    {
        const bool branch_taken_0x383cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CACu;
        // 0x383cb0: 0x26230002  addiu       $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cac) {
            ctx->pc = 0x383CD8u;
            goto label_383cd8;
        }
    }
    ctx->pc = 0x383CB4u;
    // 0x383cb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x383cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_383cb8:
    // 0x383cb8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x383cb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x383cbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x383cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x383cc0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x383cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x383cc4: 0x0  nop
    ctx->pc = 0x383cc4u;
    // NOP
    // 0x383cc8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383CC8u;
    {
        const bool branch_taken_0x383cc8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x383CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CC8u;
        // 0x383ccc: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cc8) {
            ctx->pc = 0x383CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383cb8;
        }
    }
    ctx->pc = 0x383CD0u;
    // 0x383cd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x383CD0u;
    {
        const bool branch_taken_0x383cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CD0u;
        // 0x383cd4: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383cd0) {
            ctx->pc = 0x383D00u;
            goto label_383d00;
        }
    }
    ctx->pc = 0x383CD8u;
label_383cd8:
    // 0x383cd8: 0xc0e0f74  jal         func_383DD0
    ctx->pc = 0x383CD8u;
    SET_GPR_U32(ctx, 31, 0x383CE0u);
    ctx->pc = 0x383CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383CD8u;
    // 0x383cdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383DD0u, 0x383CD8u, 0x383CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383CE0u;
label_383ce0:
    // 0x383ce0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x383CE0u;
    {
        const bool branch_taken_0x383ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383ce0) {
            ctx->pc = 0x383CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383CE0u;
            // 0x383ce4: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383D00u;
            goto label_383d00;
        }
    }
    ctx->pc = 0x383CE8u;
    // 0x383ce8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383cec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x383cf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x383cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x383cf4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x383cf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383cf8: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x383cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x383cfc: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x383cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_383d00:
    // 0x383d00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383d04: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x383D04u;
    {
        const bool branch_taken_0x383d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D04u;
        // 0x383d08: 0x261200a4  addiu       $s2, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d04) {
            ctx->pc = 0x383D98u;
            goto label_383d98;
        }
    }
    ctx->pc = 0x383D0Cu;
    // 0x383d0c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x383d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x383d10: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x383D10u;
    {
        const bool branch_taken_0x383d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383d10) {
            ctx->pc = 0x383D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383D10u;
            // 0x383d14: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383DB4u;
            goto label_383db4;
        }
    }
    ctx->pc = 0x383D18u;
    // 0x383d18: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x383d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383d1c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x383D1Cu;
    {
        const bool branch_taken_0x383d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D1Cu;
        // 0x383d20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d1c) {
            ctx->pc = 0x383D50u;
            goto label_383d50;
        }
    }
    ctx->pc = 0x383D24u;
    // 0x383d24: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x383D24u;
    SET_GPR_U32(ctx, 31, 0x383D2Cu);
    ctx->pc = 0x383D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D24u;
    // 0x383d28: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x383D24u, 0x383D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D2Cu;
label_383d2c:
    // 0x383d2c: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x383d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x383d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x383d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d38: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x383d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x383d3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x383d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x383d40: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383D40u;
    SET_GPR_U32(ctx, 31, 0x383D48u);
    ctx->pc = 0x383D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D40u;
    // 0x383d44: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383D40u, 0x383D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D48u;
label_383d48:
    // 0x383d48: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x383D48u;
    {
        const bool branch_taken_0x383d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D48u;
        // 0x383d4c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d48) {
            ctx->pc = 0x383DB4u;
            goto label_383db4;
        }
    }
    ctx->pc = 0x383D50u;
label_383d50:
    // 0x383d50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x383d54: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x383D54u;
    {
        const bool branch_taken_0x383d54 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x383D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D54u;
        // 0x383d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d54) {
            ctx->pc = 0x383DB0u;
            goto label_383db0;
        }
    }
    ctx->pc = 0x383D5Cu;
    // 0x383d5c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x383d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_383d60:
    // 0x383d60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x383d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d64: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x383D64u;
    SET_GPR_U32(ctx, 31, 0x383D6Cu);
    ctx->pc = 0x383D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D64u;
    // 0x383d68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x383D64u, 0x383D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D6Cu;
label_383d6c:
    // 0x383d6c: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x383d6cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x383d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x383d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x383d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d78: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383D78u;
    SET_GPR_U32(ctx, 31, 0x383D80u);
    ctx->pc = 0x383D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D78u;
    // 0x383d7c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383D78u, 0x383D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D80u;
label_383d80:
    // 0x383d80: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x383d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x383d84: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x383d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383d88: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x383D88u;
    {
        const bool branch_taken_0x383d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383d88) {
            ctx->pc = 0x383D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383D88u;
            // 0x383d8c: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383d60;
        }
    }
    ctx->pc = 0x383D90u;
    // 0x383d90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x383D90u;
    {
        const bool branch_taken_0x383d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D90u;
        // 0x383d94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d90) {
            ctx->pc = 0x383DB4u;
            goto label_383db4;
        }
    }
    ctx->pc = 0x383D98u;
label_383d98:
    // 0x383d98: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x383d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x383d9c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x383D9Cu;
    {
        const bool branch_taken_0x383d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x383DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D9Cu;
        // 0x383da0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d9c) {
            ctx->pc = 0x383DB4u;
            goto label_383db4;
        }
    }
    ctx->pc = 0x383DA4u;
    // 0x383da4: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x383da4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x383da8: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x383DA8u;
    SET_GPR_U32(ctx, 31, 0x383DB0u);
    ctx->pc = 0x383DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383DA8u;
    // 0x383dac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x383DA8u, 0x383DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383DB0u;
label_383db0:
    // 0x383db0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x383db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383db4:
    // 0x383db4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x383db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383db8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383dbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x383dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x383DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383DC4u;
        // 0x383dc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383DCCu;
    // 0x383dcc: 0x0  nop
    ctx->pc = 0x383dccu;
    // NOP
    ctx->pc = 0x383dd0u;
}
