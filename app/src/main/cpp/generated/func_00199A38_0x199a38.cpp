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

// Function: func_00199A38
// Address: 0x199a38 - 0x199c68
void func_00199A38_0x199a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00199A38_0x199a38");
#endif

    switch (ctx->pc) {
        case 0x199a64u: goto label_199a64;
        case 0x199a70u: goto label_199a70;
        case 0x199a8cu: goto label_199a8c;
        case 0x199aacu: goto label_199aac;
        case 0x199ac4u: goto label_199ac4;
        case 0x199b08u: goto label_199b08;
        case 0x199bb8u: goto label_199bb8;
        case 0x199c20u: goto label_199c20;
        case 0x199c30u: goto label_199c30;
        default: break;
    }

    ctx->pc = 0x199a38u;

    // 0x199a38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x199a3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x199a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x199a40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x199a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x199a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x199a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a48: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x199a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x199a4c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x199a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x199a50: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x199a54: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A54u;
    {
        const bool branch_taken_0x199a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199a54) {
            ctx->pc = 0x199A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199A54u;
            // 0x199a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199A68u;
            goto label_199a68;
        }
    }
    ctx->pc = 0x199A5Cu;
    // 0x199a5c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x199A5Cu;
    SET_GPR_U32(ctx, 31, 0x199A64u);
    ctx->pc = 0x199A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A5Cu;
    // 0x199a60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x199A5Cu, 0x199A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A64u;
label_199a64:
    // 0x199a64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_199a68:
    // 0x199a68: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199A68u;
    SET_GPR_U32(ctx, 31, 0x199A70u);
    ctx->pc = 0x199A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A68u;
    // 0x199a6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199A68u, 0x199A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A70u;
label_199a70:
    // 0x199a70: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x199a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x199a74: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x199a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a80: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x199a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x199a84: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199A84u;
    SET_GPR_U32(ctx, 31, 0x199A8Cu);
    ctx->pc = 0x199A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199A84u;
    // 0x199a88: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199A84u, 0x199A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A8Cu;
label_199a8c:
    // 0x199a8c: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x199a90: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x199a94: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x199a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x199a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a9c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x199a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x199aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199aa4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199AA4u;
    SET_GPR_U32(ctx, 31, 0x199AACu);
    ctx->pc = 0x199AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199AA4u;
    // 0x199aa8: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199AA4u, 0x199AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AACu;
label_199aac:
    // 0x199aac: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x199aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x199ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199ab8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x199ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x199abc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x199ABCu;
    SET_GPR_U32(ctx, 31, 0x199AC4u);
    ctx->pc = 0x199AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199ABCu;
    // 0x199ac0: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x199ABCu, 0x199AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AC4u;
label_199ac4:
    // 0x199ac4: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x199ac8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x199acc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x199ad0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199ad4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x199ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x199ad8: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x199ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x199adc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x199ae0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x199ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199ae4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x199ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x199ae8: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x199AE8u;
    {
        const bool branch_taken_0x199ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x199AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AE8u;
        // 0x199aec: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ae8) {
            ctx->pc = 0x199BB0u;
            goto label_199bb0;
        }
    }
    ctx->pc = 0x199AF0u;
    // 0x199af0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x199af0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199af4: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x199af8: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x199af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x199afc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199b00: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x199b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199b04: 0x0  nop
    ctx->pc = 0x199b04u;
    // NOP
label_199b08:
    // 0x199b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b0c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x199b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199b10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199B10u;
    {
        const bool branch_taken_0x199b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B10u;
        // 0x199b14: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b10) {
            ctx->pc = 0x199B20u;
            goto label_199b20;
        }
    }
    ctx->pc = 0x199B18u;
    // 0x199b18: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199b20:
    // 0x199b20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x199b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x199b24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199B24u;
    {
        const bool branch_taken_0x199b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B24u;
        // 0x199b28: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b24) {
            ctx->pc = 0x199B3Cu;
            goto label_199b3c;
        }
    }
    ctx->pc = 0x199B2Cu;
    // 0x199b2c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x199b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x199b30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199b34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x199B34u;
    {
        const bool branch_taken_0x199b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B34u;
        // 0x199b38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b34) {
            ctx->pc = 0x199B40u;
            goto label_199b40;
        }
    }
    ctx->pc = 0x199B3Cu;
label_199b3c:
    // 0x199b3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199b40:
    // 0x199b40: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x199b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x199b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x199b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b48: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x199b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x199b4c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x199b50: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x199b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x199b54: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199b58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x199B58u;
    {
        const bool branch_taken_0x199b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B58u;
        // 0x199b5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b58) {
            ctx->pc = 0x199B68u;
            goto label_199b68;
        }
    }
    ctx->pc = 0x199B60u;
    // 0x199b60: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x199b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x199b64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x199b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199b68:
    // 0x199b68: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x199b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x199b6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199B6Cu;
    {
        const bool branch_taken_0x199b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B6Cu;
        // 0x199b70: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b6c) {
            ctx->pc = 0x199B84u;
            goto label_199b84;
        }
    }
    ctx->pc = 0x199B74u;
    // 0x199b74: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x199b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x199b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x199b7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x199B7Cu;
    {
        const bool branch_taken_0x199b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B7Cu;
        // 0x199b80: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b7c) {
            ctx->pc = 0x199B88u;
            goto label_199b88;
        }
    }
    ctx->pc = 0x199B84u;
label_199b84:
    // 0x199b84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x199b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199b88:
    // 0x199b88: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x199b8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199b90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x199b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x199b94: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x199b94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x199b98: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x199b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x199b9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199B9Cu;
    {
        const bool branch_taken_0x199b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B9Cu;
        // 0x199ba0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b9c) {
            ctx->pc = 0x199BB0u;
            goto label_199bb0;
        }
    }
    ctx->pc = 0x199BA4u;
    // 0x199ba4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199ba8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x199BA8u;
    {
        const bool branch_taken_0x199ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x199ba8) {
            ctx->pc = 0x199BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199BA8u;
            // 0x199bac: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199b08;
        }
    }
    ctx->pc = 0x199BB0u;
label_199bb0:
    // 0x199bb0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x199BB0u;
    SET_GPR_U32(ctx, 31, 0x199BB8u);
    ctx->pc = 0x199BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199BB0u;
    // 0x199bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x199BB0u, 0x199BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199BB8u;
label_199bb8:
    // 0x199bb8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x199bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199bbc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x199bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199bc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x199bc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x199bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x199bc8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x199bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x199bcc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x199bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x199bd0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x199bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x199bd4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x199bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x199bd8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x199bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x199bdc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x199bdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x199be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199be4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x199be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199be8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x199be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x199bec: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x199becu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x199bf0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x199bf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x199bf4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x199bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x199bf8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x199bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199bfc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x199c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x199c04: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x199c04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x199c08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199c0c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199c10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x199c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199c14: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x199C14u;
    {
        const bool branch_taken_0x199c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x199C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C14u;
        // 0x199c18: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c14) {
            ctx->pc = 0x199C4Cu;
            goto label_199c4c;
        }
    }
    ctx->pc = 0x199C1Cu;
    // 0x199c1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199c20:
    // 0x199c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x199c28: 0xc0665fa  jal         func_1997E8
    ctx->pc = 0x199C28u;
    SET_GPR_U32(ctx, 31, 0x199C30u);
    ctx->pc = 0x199C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C28u;
    // 0x199c2c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1997E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1997E8u, 0x199C28u, 0x199C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C30u;
label_199c30:
    // 0x199c30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x199c34: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x199c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x199c38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x199C38u;
    {
        const bool branch_taken_0x199c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199c38) {
            ctx->pc = 0x199C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199C38u;
            // 0x199c3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199C50u;
            goto label_199c50;
        }
    }
    ctx->pc = 0x199C40u;
    // 0x199c40: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x199c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x199c44: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x199C44u;
    {
        const bool branch_taken_0x199c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x199C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C44u;
        // 0x199c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c44) {
            ctx->pc = 0x199C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199c20;
        }
    }
    ctx->pc = 0x199C4Cu;
label_199c4c:
    // 0x199c4c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x199c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_199c50:
    // 0x199c50: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x199c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199c54: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x199c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199c58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x199C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C5Cu;
        // 0x199c60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C64u;
    // 0x199c64: 0x0  nop
    ctx->pc = 0x199c64u;
    // NOP
    ctx->pc = 0x199c68u;
}
