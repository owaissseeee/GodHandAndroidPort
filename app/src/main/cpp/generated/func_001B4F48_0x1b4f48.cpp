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

// Function: func_001B4F48
// Address: 0x1b4f48 - 0x1b5160
void func_001B4F48_0x1b4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4F48_0x1b4f48");
#endif

    switch (ctx->pc) {
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f9cu: goto label_1b4f9c;
        case 0x1b4facu: goto label_1b4fac;
        case 0x1b4fbcu: goto label_1b4fbc;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b50a0u: goto label_1b50a0;
        case 0x1b5110u: goto label_1b5110;
        case 0x1b5120u: goto label_1b5120;
        case 0x1b5144u: goto label_1b5144;
        default: break;
    }

    ctx->pc = 0x1b4f48u;

    // 0x1b4f48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b4f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b4f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b4f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b4f5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b4f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b4f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b4f64: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B4F64u;
    SET_GPR_U32(ctx, 31, 0x1B4F6Cu);
    ctx->pc = 0x1B4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F64u;
    // 0x1b4f68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B4F64u, 0x1B4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F6Cu;
label_1b4f6c:
    // 0x1b4f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4f74: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B4F74u;
    SET_GPR_U32(ctx, 31, 0x1B4F7Cu);
    ctx->pc = 0x1B4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F74u;
    // 0x1b4f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B4F74u, 0x1B4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F7Cu;
label_1b4f7c:
    // 0x1b4f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f80: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b4f84: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x1B4F84u;
    SET_GPR_U32(ctx, 31, 0x1B4F8Cu);
    ctx->pc = 0x1B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F84u;
    // 0x1b4f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x1B4F84u, 0x1B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F8Cu;
label_1b4f8c:
    // 0x1b4f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f94: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1B4F94u;
    SET_GPR_U32(ctx, 31, 0x1B4F9Cu);
    ctx->pc = 0x1B4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F94u;
    // 0x1b4f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1B4F94u, 0x1B4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F9Cu;
label_1b4f9c:
    // 0x1b4f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4fa4: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1B4FA4u;
    SET_GPR_U32(ctx, 31, 0x1B4FACu);
    ctx->pc = 0x1B4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FA4u;
    // 0x1b4fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1B4FA4u, 0x1B4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FACu;
label_1b4fac:
    // 0x1b4fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fb0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b4fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b4fb4: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x1B4FB4u;
    SET_GPR_U32(ctx, 31, 0x1B4FBCu);
    ctx->pc = 0x1B4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FB4u;
    // 0x1b4fb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x1B4FB4u, 0x1B4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FBCu;
label_1b4fbc:
    // 0x1b4fbc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1b4fc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1b4fc4: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1b4fc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b4fc8: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1b4fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b4fcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4fd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4fd4: 0x10850030  beq         $a0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B4FD4u;
    {
        const bool branch_taken_0x1b4fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1B4FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FD4u;
        // 0x1b4fd8: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fd4) {
            ctx->pc = 0x1B5098u;
            goto label_1b5098;
        }
    }
    ctx->pc = 0x1B4FDCu;
    // 0x1b4fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b4fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fe0: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1b4fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1b4fe4: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1b4fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1b4fe8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b4fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4fec: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b4fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1b4ff0:
    // 0x1b4ff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ff4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1b4ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b4ff8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4FF8u;
    {
        const bool branch_taken_0x1b4ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF8u;
        // 0x1b4ffc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ff8) {
            ctx->pc = 0x1B5008u;
            goto label_1b5008;
        }
    }
    ctx->pc = 0x1B5000u;
    // 0x1b5000: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b5000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b5004: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b5004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5008:
    // 0x1b5008: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b5008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B500Cu;
    {
        const bool branch_taken_0x1b500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B500Cu;
        // 0x1b5010: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b500c) {
            ctx->pc = 0x1B5024u;
            goto label_1b5024;
        }
    }
    ctx->pc = 0x1B5014u;
    // 0x1b5014: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b5014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b5018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b501c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B501Cu;
        // 0x1b5020: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5028u;
            goto label_1b5028;
        }
    }
    ctx->pc = 0x1B5024u;
label_1b5024:
    // 0x1b5024: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b5024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5028:
    // 0x1b5028: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b5028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b502c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b502cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5030: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1b5030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1b5034: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1b5038: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1b5038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1b503c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b503cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b5040: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5040u;
    {
        const bool branch_taken_0x1b5040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5040u;
        // 0x1b5044: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5040) {
            ctx->pc = 0x1B5050u;
            goto label_1b5050;
        }
    }
    ctx->pc = 0x1B5048u;
    // 0x1b5048: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b5048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b504c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b504cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b5050:
    // 0x1b5050: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1b5054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5054u;
    {
        const bool branch_taken_0x1b5054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5054u;
        // 0x1b5058: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5054) {
            ctx->pc = 0x1B506Cu;
            goto label_1b506c;
        }
    }
    ctx->pc = 0x1B505Cu;
    // 0x1b505c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1b505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b5060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5064u;
    {
        const bool branch_taken_0x1b5064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5064u;
        // 0x1b5068: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5064) {
            ctx->pc = 0x1B5070u;
            goto label_1b5070;
        }
    }
    ctx->pc = 0x1B506Cu;
label_1b506c:
    // 0x1b506c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5070:
    // 0x1b5070: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1b5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1b5074: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b5074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1b5078: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1b5078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b507c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x1b507cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b5080: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1b5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1b5084: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5084u;
    {
        const bool branch_taken_0x1b5084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5084u;
        // 0x1b5088: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5084) {
            ctx->pc = 0x1B5098u;
            goto label_1b5098;
        }
    }
    ctx->pc = 0x1B508Cu;
    // 0x1b508c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b508cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b5090: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1B5090u;
    {
        const bool branch_taken_0x1b5090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b5090) {
            ctx->pc = 0x1B5094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5090u;
            // 0x1b5094: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4ff0;
        }
    }
    ctx->pc = 0x1B5098u;
label_1b5098:
    // 0x1b5098: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1B5098u;
    SET_GPR_U32(ctx, 31, 0x1B50A0u);
    ctx->pc = 0x1B509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5098u;
    // 0x1b509c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1B5098u, 0x1B50A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50A0u;
label_1b50a0:
    // 0x1b50a0: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1b50a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b50a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b50a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b50a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b50ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b50acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b50b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b50b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b50b4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1b50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1b50b8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1b50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1b50bc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1b50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1b50c0: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1b50c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1b50c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b50c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b50c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b50c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b50cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b50ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b50d0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b50d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b50d4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1b50d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b50d8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b50d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b50dc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b50dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b50e0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b50e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b50e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b50e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b50e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b50e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50ec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b50ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b50f0: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x1b50f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x1b50f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b50f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b50f8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b50f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b50fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b50fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b5100: 0x1050000e  beq         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5100u;
    {
        const bool branch_taken_0x1b5100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5100u;
        // 0x1b5104: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5100) {
            ctx->pc = 0x1B513Cu;
            goto label_1b513c;
        }
    }
    ctx->pc = 0x1B5108u;
    // 0x1b5108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b5108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b510c: 0x0  nop
    ctx->pc = 0x1b510cu;
    // NOP
label_1b5110:
    // 0x1b5110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5114: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1b5114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b5118: 0xc06d342  jal         func_1B4D08
    ctx->pc = 0x1B5118u;
    SET_GPR_U32(ctx, 31, 0x1B5120u);
    ctx->pc = 0x1B511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5118u;
    // 0x1b511c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D08u, 0x1B5118u, 0x1B5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5120u;
label_1b5120:
    // 0x1b5120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b5124: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1b5124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b5128: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5128u;
    {
        const bool branch_taken_0x1b5128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5128) {
            ctx->pc = 0x1B513Cu;
            goto label_1b513c;
        }
    }
    ctx->pc = 0x1B5130u;
    // 0x1b5130: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b5130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b5134: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B5134u;
    {
        const bool branch_taken_0x1b5134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1B5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5134u;
        // 0x1b5138: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5134) {
            ctx->pc = 0x1B5110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5110;
        }
    }
    ctx->pc = 0x1B513Cu;
label_1b513c:
    // 0x1b513c: 0xc06d568  jal         func_1B55A0
    ctx->pc = 0x1B513Cu;
    SET_GPR_U32(ctx, 31, 0x1B5144u);
    ctx->pc = 0x1B5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B513Cu;
    // 0x1b5140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B55A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B55A0u, 0x1B513Cu, 0x1B5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5144u;
label_1b5144:
    // 0x1b5144: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b5144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5148: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b5148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b514c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b514cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5154: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5154u;
        // 0x1b5158: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B515Cu;
    // 0x1b515c: 0x0  nop
    ctx->pc = 0x1b515cu;
    // NOP
    ctx->pc = 0x1b5160u;
}
