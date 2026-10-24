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

// Function: func_0018AFF8
// Address: 0x18aff8 - 0x18b240
void func_0018AFF8_0x18aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018AFF8_0x18aff8");
#endif

    switch (ctx->pc) {
        case 0x18b024u: goto label_18b024;
        case 0x18b030u: goto label_18b030;
        case 0x18b04cu: goto label_18b04c;
        case 0x18b06cu: goto label_18b06c;
        case 0x18b084u: goto label_18b084;
        case 0x18b0c8u: goto label_18b0c8;
        case 0x18b178u: goto label_18b178;
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b1f0u: goto label_18b1f0;
        default: break;
    }

    ctx->pc = 0x18aff8u;

    // 0x18aff8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18aff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18affc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18affcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18b000: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18b004: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b008: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18b008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18b00c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18b00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18b010: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x18b014: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B014u;
    {
        const bool branch_taken_0x18b014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b014) {
            ctx->pc = 0x18B018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B014u;
            // 0x18b018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B028u;
            goto label_18b028;
        }
    }
    ctx->pc = 0x18B01Cu;
    // 0x18b01c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18B01Cu;
    SET_GPR_U32(ctx, 31, 0x18B024u);
    ctx->pc = 0x18B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B01Cu;
    // 0x18b020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18B01Cu, 0x18B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B024u;
label_18b024:
    // 0x18b024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b028:
    // 0x18b028: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B028u;
    SET_GPR_U32(ctx, 31, 0x18B030u);
    ctx->pc = 0x18B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B028u;
    // 0x18b02c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B028u, 0x18B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B030u;
label_18b030:
    // 0x18b030: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x18b030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x18b034: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b040: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18b040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18b044: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B044u;
    SET_GPR_U32(ctx, 31, 0x18B04Cu);
    ctx->pc = 0x18B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B044u;
    // 0x18b048: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B044u, 0x18B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B04Cu;
label_18b04c:
    // 0x18b04c: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x18b04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b050: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18b054: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18b054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18b058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b05c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x18b05cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18b060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b064: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B064u;
    SET_GPR_U32(ctx, 31, 0x18B06Cu);
    ctx->pc = 0x18B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B064u;
    // 0x18b068: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B064u, 0x18B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B06Cu;
label_18b06c:
    // 0x18b06c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b078: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18b078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18b07c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B07Cu;
    SET_GPR_U32(ctx, 31, 0x18B084u);
    ctx->pc = 0x18B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B07Cu;
    // 0x18b080: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B07Cu, 0x18B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B084u;
label_18b084:
    // 0x18b084: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b088: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x18b088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18b08c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18b090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b094: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18b098: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x18b098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x18b09c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18b0a0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18b0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b0a4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18b0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18b0a8: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18B0A8u;
    {
        const bool branch_taken_0x18b0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0A8u;
        // 0x18b0ac: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0a8) {
            ctx->pc = 0x18B170u;
            goto label_18b170;
        }
    }
    ctx->pc = 0x18B0B0u;
    // 0x18b0b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b0b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0b4: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18b0b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18b0b8: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18b0bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18b0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0c0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18b0c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b0c4: 0x0  nop
    ctx->pc = 0x18b0c4u;
    // NOP
label_18b0c8:
    // 0x18b0c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0cc: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18b0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18b0d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B0D0u;
    {
        const bool branch_taken_0x18b0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0D0u;
        // 0x18b0d4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0d0) {
            ctx->pc = 0x18B0E0u;
            goto label_18b0e0;
        }
    }
    ctx->pc = 0x18B0D8u;
    // 0x18b0d8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18b0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b0dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b0e0:
    // 0x18b0e0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18b0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18b0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B0E4u;
    {
        const bool branch_taken_0x18b0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0E4u;
        // 0x18b0e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0e4) {
            ctx->pc = 0x18B0FCu;
            goto label_18b0fc;
        }
    }
    ctx->pc = 0x18B0ECu;
    // 0x18b0ec: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18b0f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b0f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B0F4u;
    {
        const bool branch_taken_0x18b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B0F4u;
        // 0x18b0f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b0f4) {
            ctx->pc = 0x18B100u;
            goto label_18b100;
        }
    }
    ctx->pc = 0x18B0FCu;
label_18b0fc:
    // 0x18b0fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b100:
    // 0x18b100: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18b104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b108: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18b108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18b10c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18b10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18b110: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18b110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18b114: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18b114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b118: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B118u;
    {
        const bool branch_taken_0x18b118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B118u;
        // 0x18b11c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b118) {
            ctx->pc = 0x18B128u;
            goto label_18b128;
        }
    }
    ctx->pc = 0x18B120u;
    // 0x18b120: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18b120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b124: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18b124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b128:
    // 0x18b128: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18b12c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B12Cu;
    {
        const bool branch_taken_0x18b12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B12Cu;
        // 0x18b130: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b12c) {
            ctx->pc = 0x18B144u;
            goto label_18b144;
        }
    }
    ctx->pc = 0x18B134u;
    // 0x18b134: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18b138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B13Cu;
    {
        const bool branch_taken_0x18b13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B13Cu;
        // 0x18b140: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b13c) {
            ctx->pc = 0x18B148u;
            goto label_18b148;
        }
    }
    ctx->pc = 0x18B144u;
label_18b144:
    // 0x18b144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b148:
    // 0x18b148: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18b14c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18b150: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18b150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18b154: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x18b154u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b158: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18b158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18b15c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B15Cu;
    {
        const bool branch_taken_0x18b15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B15Cu;
        // 0x18b160: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b15c) {
            ctx->pc = 0x18B170u;
            goto label_18b170;
        }
    }
    ctx->pc = 0x18B164u;
    // 0x18b164: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18b164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b168: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18B168u;
    {
        const bool branch_taken_0x18b168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b168) {
            ctx->pc = 0x18B16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B168u;
            // 0x18b16c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b0c8;
        }
    }
    ctx->pc = 0x18B170u;
label_18b170:
    // 0x18b170: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18B170u;
    SET_GPR_U32(ctx, 31, 0x18B178u);
    ctx->pc = 0x18B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B170u;
    // 0x18b174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18B170u, 0x18B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B178u;
label_18b178:
    // 0x18b178: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18b178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b17c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18b180: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b188: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18b188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18b18c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18b190: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18b190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18b194: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18b194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18b198: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18b19c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18b19cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18b1a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b1a4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18b1a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b1a8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18b1a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18b1ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18b1acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18b1b0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18b1b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18b1b4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18b1b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18b1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18b1c4: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x18b1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x18b1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b1cc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18b1ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b1d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18b1d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18b1d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18B1D4u;
    {
        const bool branch_taken_0x18b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1D4u;
        // 0x18b1d8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1d4) {
            ctx->pc = 0x18B20Cu;
            goto label_18b20c;
        }
    }
    ctx->pc = 0x18B1DCu;
    // 0x18b1dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b1e0:
    // 0x18b1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18b1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18b1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18b1e8: 0xc062b6a  jal         func_18ADA8
    ctx->pc = 0x18B1E8u;
    SET_GPR_U32(ctx, 31, 0x18B1F0u);
    ctx->pc = 0x18B1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1E8u;
    // 0x18b1ec: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ADA8u, 0x18B1E8u, 0x18B1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1F0u;
label_18b1f0:
    // 0x18b1f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18b1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18b1f4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x18b1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18b1f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B1F8u;
    {
        const bool branch_taken_0x18b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b1f8) {
            ctx->pc = 0x18B1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B1F8u;
            // 0x18b1fc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B210u;
            goto label_18b210;
        }
    }
    ctx->pc = 0x18B200u;
    // 0x18b200: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18b200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18b204: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18B204u;
    {
        const bool branch_taken_0x18b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B204u;
        // 0x18b208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b204) {
            ctx->pc = 0x18B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b1e0;
        }
    }
    ctx->pc = 0x18B20Cu;
label_18b20c:
    // 0x18b20c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18b20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18b210:
    // 0x18b210: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18b210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b214: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18b214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b218: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b21c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B21Cu;
        // 0x18b220: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B224u;
    // 0x18b224: 0x0  nop
    ctx->pc = 0x18b224u;
    // NOP
    // 0x18b228: 0x0  nop
    ctx->pc = 0x18b228u;
    // NOP
    // 0x18b22c: 0x0  nop
    ctx->pc = 0x18b22cu;
    // NOP
    // 0x18b230: 0x0  nop
    ctx->pc = 0x18b230u;
    // NOP
    // 0x18b234: 0x0  nop
    ctx->pc = 0x18b234u;
    // NOP
    // 0x18b238: 0x0  nop
    ctx->pc = 0x18b238u;
    // NOP
    // 0x18b23c: 0x0  nop
    ctx->pc = 0x18b23cu;
    // NOP
    ctx->pc = 0x18b240u;
}
