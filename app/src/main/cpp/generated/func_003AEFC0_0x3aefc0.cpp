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

// Function: func_003AEFC0
// Address: 0x3aefc0 - 0x3af118
void func_003AEFC0_0x3aefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AEFC0_0x3aefc0");
#endif

    switch (ctx->pc) {
        case 0x3af010u: goto label_3af010;
        case 0x3af030u: goto label_3af030;
        case 0x3af048u: goto label_3af048;
        case 0x3af088u: goto label_3af088;
        case 0x3af0c0u: goto label_3af0c0;
        case 0x3af0ecu: goto label_3af0ec;
        default: break;
    }

    ctx->pc = 0x3aefc0u;

    // 0x3aefc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3aefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3aefc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3aefc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3aefc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3aefc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3aefcc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3aefccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3aefd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3aefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3aefd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3aefd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aefd8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3aefd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3aefdc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3aefdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aefe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3aefe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3aefe4: 0x148943  sra         $s1, $s4, 5
    ctx->pc = 0x3aefe4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 20), 5));
    // 0x3aefe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aefe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aefec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3aefecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeff0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3aeff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3aeff4: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3aeff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3aeff8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3aeff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3aeffc: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x3aeffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3af000: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3af000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3af004: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF004u;
    {
        const bool branch_taken_0x3af004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF004u;
        // 0x3af008: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af004) {
            ctx->pc = 0x3AF028u;
            goto label_3af028;
        }
    }
    ctx->pc = 0x3AF00Cu;
    // 0x3af00c: 0x0  nop
    ctx->pc = 0x3af00cu;
    // NOP
label_3af010:
    // 0x3af010: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3af010u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3af014: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x3af014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3af018: 0x0  nop
    ctx->pc = 0x3af018u;
    // NOP
    // 0x3af01c: 0x0  nop
    ctx->pc = 0x3af01cu;
    // NOP
    // 0x3af020: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AF020u;
    {
        const bool branch_taken_0x3af020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF020u;
        // 0x3af024: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af020) {
            ctx->pc = 0x3AF010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af010;
        }
    }
    ctx->pc = 0x3AF028u;
label_3af028:
    // 0x3af028: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3AF028u;
    SET_GPR_U32(ctx, 31, 0x3AF030u);
    ctx->pc = 0x3AF02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF028u;
    // 0x3af02c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3AF028u, 0x3AF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF030u;
label_3af030:
    // 0x3af030: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3af030u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af034: 0x3286001f  andi        $a2, $s4, 0x1F
    ctx->pc = 0x3af034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x3af038: 0x26430014  addiu       $v1, $s2, 0x14
    ctx->pc = 0x3af038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3af03c: 0x1a200008  blez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF03Cu;
    {
        const bool branch_taken_0x3af03c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3AF040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF03Cu;
        // 0x3af040: 0x26680014  addiu       $t0, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af03c) {
            ctx->pc = 0x3AF060u;
            goto label_3af060;
        }
    }
    ctx->pc = 0x3AF044u;
    // 0x3af044: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3af044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3af048:
    // 0x3af048: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x3af048u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x3af04c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3af04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3af050: 0x0  nop
    ctx->pc = 0x3af050u;
    // NOP
    // 0x3af054: 0x0  nop
    ctx->pc = 0x3af054u;
    // NOP
    // 0x3af058: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AF058u;
    {
        const bool branch_taken_0x3af058 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF058u;
        // 0x3af05c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af058) {
            ctx->pc = 0x3AF048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af048;
        }
    }
    ctx->pc = 0x3AF060u;
label_3af060:
    // 0x3af060: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3af060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3af064: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3af064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3af068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3af06c: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AF06Cu;
    {
        const bool branch_taken_0x3af06c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF06Cu;
        // 0x3af070: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af06c) {
            ctx->pc = 0x3AF0C0u;
            goto label_3af0c0;
        }
    }
    ctx->pc = 0x3AF074u;
    // 0x3af074: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3af074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3af078: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3af078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af07c: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x3af07cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3af080: 0x26090001  addiu       $t1, $s0, 0x1
    ctx->pc = 0x3af080u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3af084: 0x0  nop
    ctx->pc = 0x3af084u;
    // NOP
label_3af088:
    // 0x3af088: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3af088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3af08c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x3af08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3af090: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3af090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3af094: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3af094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3af098: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3af098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3af09c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3af09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3af0a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3af0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3af0a4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3af0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3af0a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3AF0A8u;
    {
        const bool branch_taken_0x3af0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0A8u;
        // 0x3af0ac: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0a8) {
            ctx->pc = 0x3AF088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af088;
        }
    }
    ctx->pc = 0x3AF0B0u;
    // 0x3af0b0: 0x123800b  movn        $s0, $t1, $v1
    ctx->pc = 0x3af0b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 9));
    // 0x3af0b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AF0B4u;
    {
        const bool branch_taken_0x3af0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0B4u;
        // 0x3af0b8: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0b4) {
            ctx->pc = 0x3AF0D8u;
            goto label_3af0d8;
        }
    }
    ctx->pc = 0x3AF0BCu;
    // 0x3af0bc: 0x0  nop
    ctx->pc = 0x3af0bcu;
    // NOP
label_3af0c0:
    // 0x3af0c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3af0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3af0c4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3af0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3af0c8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3af0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3af0cc: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3af0ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3af0d0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3AF0D0u;
    {
        const bool branch_taken_0x3af0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF0D0u;
        // 0x3af0d4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af0d0) {
            ctx->pc = 0x3AF0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3af0c0;
        }
    }
    ctx->pc = 0x3AF0D8u;
label_3af0d8:
    // 0x3af0d8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3af0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3af0dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3af0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af0e0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x3af0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x3af0e4: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3AF0E4u;
    SET_GPR_U32(ctx, 31, 0x3AF0ECu);
    ctx->pc = 0x3AF0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF0E4u;
    // 0x3af0e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3AF0E4u, 0x3AF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF0ECu;
label_3af0ec:
    // 0x3af0ec: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3af0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af0f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3af0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3af0f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3af0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af0f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3af0f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af0fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3af0fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af100: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3af100u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af104: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3af104u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af10c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF10Cu;
        // 0x3af110: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF114u;
    // 0x3af114: 0x0  nop
    ctx->pc = 0x3af114u;
    // NOP
    ctx->pc = 0x3af118u;
}
