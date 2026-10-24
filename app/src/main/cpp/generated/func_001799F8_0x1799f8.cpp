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

// Function: func_001799F8
// Address: 0x1799f8 - 0x179c00
void func_001799F8_0x1799f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001799F8_0x1799f8");
#endif

    switch (ctx->pc) {
        case 0x179a24u: goto label_179a24;
        case 0x179a38u: goto label_179a38;
        case 0x179a48u: goto label_179a48;
        case 0x179a58u: goto label_179a58;
        case 0x179a68u: goto label_179a68;
        case 0x179aa0u: goto label_179aa0;
        case 0x179b50u: goto label_179b50;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bc8u: goto label_179bc8;
        default: break;
    }

    ctx->pc = 0x1799f8u;

    // 0x1799f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1799f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1799fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1799fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x179a00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x179a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x179a04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x179a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x179a0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179a10: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x179a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x179a14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x179A14u;
    {
        const bool branch_taken_0x179a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a14) {
            ctx->pc = 0x179A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179A14u;
            // 0x179a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179A28u;
            goto label_179a28;
        }
    }
    ctx->pc = 0x179A1Cu;
    // 0x179a1c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x179A1Cu;
    SET_GPR_U32(ctx, 31, 0x179A24u);
    ctx->pc = 0x179A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A1Cu;
    // 0x179a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x179A1Cu, 0x179A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A24u;
label_179a24:
    // 0x179a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179a28:
    // 0x179a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a30: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x179A30u;
    SET_GPR_U32(ctx, 31, 0x179A38u);
    ctx->pc = 0x179A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A30u;
    // 0x179a34: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x179A30u, 0x179A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A38u;
label_179a38:
    // 0x179a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a3c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x179a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179a40: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x179A40u;
    SET_GPR_U32(ctx, 31, 0x179A48u);
    ctx->pc = 0x179A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A40u;
    // 0x179a44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x179A40u, 0x179A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A48u;
label_179a48:
    // 0x179a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a50: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x179A50u;
    SET_GPR_U32(ctx, 31, 0x179A58u);
    ctx->pc = 0x179A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A50u;
    // 0x179a54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x179A50u, 0x179A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A58u;
label_179a58:
    // 0x179a58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a5c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x179a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179a60: 0xc06dcc0  jal         func_1B7300
    ctx->pc = 0x179A60u;
    SET_GPR_U32(ctx, 31, 0x179A68u);
    ctx->pc = 0x179A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179A60u;
    // 0x179a64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7300u, 0x179A60u, 0x179A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A68u;
label_179a68:
    // 0x179a68: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x179a6c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x179a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x179a70: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x179a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179a74: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x179a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x179a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x179a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x179a7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179a80: 0x10850031  beq         $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x179A80u;
    {
        const bool branch_taken_0x179a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x179A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179A80u;
        // 0x179a84: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a80) {
            ctx->pc = 0x179B48u;
            goto label_179b48;
        }
    }
    ctx->pc = 0x179A88u;
    // 0x179a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a8c: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x179a8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x179a90: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x179a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x179a94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x179a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179a98: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x179a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179a9c: 0x0  nop
    ctx->pc = 0x179a9cu;
    // NOP
label_179aa0:
    // 0x179aa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179aa4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x179aa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179AA8u;
    {
        const bool branch_taken_0x179aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AA8u;
        // 0x179aac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179aa8) {
            ctx->pc = 0x179AB8u;
            goto label_179ab8;
        }
    }
    ctx->pc = 0x179AB0u;
    // 0x179ab0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x179ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179ab8:
    // 0x179ab8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x179ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x179abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179ABCu;
    {
        const bool branch_taken_0x179abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ABCu;
        // 0x179ac0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179abc) {
            ctx->pc = 0x179AD4u;
            goto label_179ad4;
        }
    }
    ctx->pc = 0x179AC4u;
    // 0x179ac4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x179ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x179ac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179ACCu;
    {
        const bool branch_taken_0x179acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ACCu;
        // 0x179ad0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179acc) {
            ctx->pc = 0x179AD8u;
            goto label_179ad8;
        }
    }
    ctx->pc = 0x179AD4u;
label_179ad4:
    // 0x179ad4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179ad8:
    // 0x179ad8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x179ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x179adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ae0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x179ae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x179ae4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x179ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x179ae8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x179ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x179aec: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179af0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179AF0u;
    {
        const bool branch_taken_0x179af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179AF0u;
        // 0x179af4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179af0) {
            ctx->pc = 0x179B00u;
            goto label_179b00;
        }
    }
    ctx->pc = 0x179AF8u;
    // 0x179af8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x179af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179afc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179b00:
    // 0x179b00: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x179b04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179B04u;
    {
        const bool branch_taken_0x179b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B04u;
        // 0x179b08: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b04) {
            ctx->pc = 0x179B1Cu;
            goto label_179b1c;
        }
    }
    ctx->pc = 0x179B0Cu;
    // 0x179b0c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x179b10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179B14u;
    {
        const bool branch_taken_0x179b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B14u;
        // 0x179b18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b14) {
            ctx->pc = 0x179B20u;
            goto label_179b20;
        }
    }
    ctx->pc = 0x179B1Cu;
label_179b1c:
    // 0x179b1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179b20:
    // 0x179b20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x179b24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x179b28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179b2c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x179b2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x179b30: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x179b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x179b34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179B34u;
    {
        const bool branch_taken_0x179b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B34u;
        // 0x179b38: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b34) {
            ctx->pc = 0x179B48u;
            goto label_179b48;
        }
    }
    ctx->pc = 0x179B3Cu;
    // 0x179b3c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179b40: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x179B40u;
    {
        const bool branch_taken_0x179b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x179b40) {
            ctx->pc = 0x179B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179B40u;
            // 0x179b44: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179aa0;
        }
    }
    ctx->pc = 0x179B48u;
label_179b48:
    // 0x179b48: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x179B48u;
    SET_GPR_U32(ctx, 31, 0x179B50u);
    ctx->pc = 0x179B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B48u;
    // 0x179b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x179B48u, 0x179B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B50u;
label_179b50:
    // 0x179b50: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x179b50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179b54: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x179b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x179b58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x179b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x179b5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x179b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179b60: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x179b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x179b64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x179b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x179b68: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x179b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x179b6c: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x179b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x179b70: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x179b74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x179b74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x179b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179b7c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x179b7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179b80: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x179b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x179b84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x179b84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x179b88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x179b88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x179b8c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x179b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x179b90: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x179b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179b94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x179b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x179b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x179b9c: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x179b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x179ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x179ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179ba4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179ba8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x179ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179bac: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x179BACu;
    {
        const bool branch_taken_0x179bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x179BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BACu;
        // 0x179bb0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bac) {
            ctx->pc = 0x179BE4u;
            goto label_179be4;
        }
    }
    ctx->pc = 0x179BB4u;
    // 0x179bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179bb8:
    // 0x179bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x179bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bbc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x179bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179bc0: 0xc05e5ee  jal         func_1797B8
    ctx->pc = 0x179BC0u;
    SET_GPR_U32(ctx, 31, 0x179BC8u);
    ctx->pc = 0x179BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BC0u;
    // 0x179bc4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1797B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1797B8u, 0x179BC0u, 0x179BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BC8u;
label_179bc8:
    // 0x179bc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x179bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x179bcc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x179bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x179bd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x179BD0u;
    {
        const bool branch_taken_0x179bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179bd0) {
            ctx->pc = 0x179BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179BD0u;
            // 0x179bd4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179BE8u;
            goto label_179be8;
        }
    }
    ctx->pc = 0x179BD8u;
    // 0x179bd8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x179bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x179bdc: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x179BDCu;
    {
        const bool branch_taken_0x179bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x179BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BDCu;
        // 0x179be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bdc) {
            ctx->pc = 0x179BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179bb8;
        }
    }
    ctx->pc = 0x179BE4u;
label_179be4:
    // 0x179be4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x179be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_179be8:
    // 0x179be8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x179be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179bec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x179becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179bf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x179BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BF4u;
        // 0x179bf8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179BFCu;
    // 0x179bfc: 0x0  nop
    ctx->pc = 0x179bfcu;
    // NOP
    ctx->pc = 0x179c00u;
}
