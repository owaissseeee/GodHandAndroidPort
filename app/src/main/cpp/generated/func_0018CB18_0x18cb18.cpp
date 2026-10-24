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

// Function: func_0018CB18
// Address: 0x18cb18 - 0x18cd48
void func_0018CB18_0x18cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CB18_0x18cb18");
#endif

    switch (ctx->pc) {
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb8cu: goto label_18cb8c;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cbe8u: goto label_18cbe8;
        case 0x18cc98u: goto label_18cc98;
        case 0x18cd00u: goto label_18cd00;
        case 0x18cd10u: goto label_18cd10;
        default: break;
    }

    ctx->pc = 0x18cb18u;

    // 0x18cb18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18cb1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18cb20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18cb24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18cb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18cb2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18cb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18cb30: 0x8e240650  lw          $a0, 0x650($s1)
    ctx->pc = 0x18cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x18cb34: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CB34u;
    {
        const bool branch_taken_0x18cb34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb34) {
            ctx->pc = 0x18CB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB34u;
            // 0x18cb38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CB48u;
            goto label_18cb48;
        }
    }
    ctx->pc = 0x18CB3Cu;
    // 0x18cb3c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18CB3Cu;
    SET_GPR_U32(ctx, 31, 0x18CB44u);
    ctx->pc = 0x18CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB3Cu;
    // 0x18cb40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18CB3Cu, 0x18CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB44u;
label_18cb44:
    // 0x18cb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18cb48:
    // 0x18cb48: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18CB48u;
    SET_GPR_U32(ctx, 31, 0x18CB50u);
    ctx->pc = 0x18CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB48u;
    // 0x18cb4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18CB48u, 0x18CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB50u;
label_18cb50:
    // 0x18cb50: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x18cb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x18cb54: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18cb58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb60: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18cb64: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18CB64u;
    SET_GPR_U32(ctx, 31, 0x18CB6Cu);
    ctx->pc = 0x18CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB64u;
    // 0x18cb68: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18CB64u, 0x18CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB6Cu;
label_18cb6c:
    // 0x18cb6c: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x18cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18cb70: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18cb74: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18cb78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb7c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x18cb7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18cb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb84: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18CB84u;
    SET_GPR_U32(ctx, 31, 0x18CB8Cu);
    ctx->pc = 0x18CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB84u;
    // 0x18cb88: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18CB84u, 0x18CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB8Cu;
label_18cb8c:
    // 0x18cb8c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18cb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cb98: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18cb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18cb9c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18CB9Cu;
    SET_GPR_U32(ctx, 31, 0x18CBA4u);
    ctx->pc = 0x18CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB9Cu;
    // 0x18cba0: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18CB9Cu, 0x18CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBA4u;
label_18cba4:
    // 0x18cba4: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18cba8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x18cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x18cbac: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x18cbacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18cbb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbb4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18cbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x18cbb8: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x18cbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x18cbbc: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x18cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x18cbc0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18cbc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18cbc4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18cbc8: 0x10650031  beq         $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x18CBC8u;
    {
        const bool branch_taken_0x18cbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x18CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBC8u;
        // 0x18cbcc: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cbc8) {
            ctx->pc = 0x18CC90u;
            goto label_18cc90;
        }
    }
    ctx->pc = 0x18CBD0u;
    // 0x18cbd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18cbd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbd4: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x18cbd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x18cbd8: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x18cbd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x18cbdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18cbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cbe0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x18cbe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18cbe4: 0x0  nop
    ctx->pc = 0x18cbe4u;
    // NOP
label_18cbe8:
    // 0x18cbe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cbec: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18cbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18cbf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CBF0u;
    {
        const bool branch_taken_0x18cbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBF0u;
        // 0x18cbf4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cbf0) {
            ctx->pc = 0x18CC00u;
            goto label_18cc00;
        }
    }
    ctx->pc = 0x18CBF8u;
    // 0x18cbf8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18cbf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18cbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cc00:
    // 0x18cc00: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18cc04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CC04u;
    {
        const bool branch_taken_0x18cc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC04u;
        // 0x18cc08: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc04) {
            ctx->pc = 0x18CC1Cu;
            goto label_18cc1c;
        }
    }
    ctx->pc = 0x18CC0Cu;
    // 0x18cc0c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18cc10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cc14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CC14u;
    {
        const bool branch_taken_0x18cc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC14u;
        // 0x18cc18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc14) {
            ctx->pc = 0x18CC20u;
            goto label_18cc20;
        }
    }
    ctx->pc = 0x18CC1Cu;
label_18cc1c:
    // 0x18cc1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cc20:
    // 0x18cc20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18cc24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc28: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18cc28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18cc2c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x18cc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x18cc30: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18cc34: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18cc34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18cc38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CC38u;
    {
        const bool branch_taken_0x18cc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC38u;
        // 0x18cc3c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc38) {
            ctx->pc = 0x18CC48u;
            goto label_18cc48;
        }
    }
    ctx->pc = 0x18CC40u;
    // 0x18cc40: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18cc40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18cc44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18cc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cc48:
    // 0x18cc48: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18cc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18cc4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CC4Cu;
    {
        const bool branch_taken_0x18cc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC4Cu;
        // 0x18cc50: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc4c) {
            ctx->pc = 0x18CC64u;
            goto label_18cc64;
        }
    }
    ctx->pc = 0x18CC54u;
    // 0x18cc54: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x18cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x18cc58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CC5Cu;
    {
        const bool branch_taken_0x18cc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC5Cu;
        // 0x18cc60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc5c) {
            ctx->pc = 0x18CC68u;
            goto label_18cc68;
        }
    }
    ctx->pc = 0x18CC64u;
label_18cc64:
    // 0x18cc64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18cc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18cc68:
    // 0x18cc68: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18cc6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18cc70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18cc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18cc74: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x18cc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18cc78: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x18cc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x18cc7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CC7Cu;
    {
        const bool branch_taken_0x18cc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC7Cu;
        // 0x18cc80: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cc7c) {
            ctx->pc = 0x18CC90u;
            goto label_18cc90;
        }
    }
    ctx->pc = 0x18CC84u;
    // 0x18cc84: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18cc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18cc88: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18CC88u;
    {
        const bool branch_taken_0x18cc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18cc88) {
            ctx->pc = 0x18CC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CC88u;
            // 0x18cc8c: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cbe8;
        }
    }
    ctx->pc = 0x18CC90u;
label_18cc90:
    // 0x18cc90: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x18CC90u;
    SET_GPR_U32(ctx, 31, 0x18CC98u);
    ctx->pc = 0x18CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CC90u;
    // 0x18cc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x18CC90u, 0x18CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CC98u;
label_18cc98:
    // 0x18cc98: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x18cc98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18cc9c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18cca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18cca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18cca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18cca8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18ccac: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18ccacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18ccb0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18ccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18ccb4: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x18ccb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x18ccb8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x18ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x18ccbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x18ccbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18ccc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ccc4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ccc4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ccc8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x18ccc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x18cccc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x18ccccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x18ccd0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18ccd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18ccd4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x18ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18ccd8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x18ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ccdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ccdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cce0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x18cce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18cce4: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x18cce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x18cce8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ccec: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18ccecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18ccf0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18ccf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18ccf4: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x18CCF4u;
    {
        const bool branch_taken_0x18ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCF4u;
        // 0x18ccf8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccf4) {
            ctx->pc = 0x18CD2Cu;
            goto label_18cd2c;
        }
    }
    ctx->pc = 0x18CCFCu;
    // 0x18ccfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18ccfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cd00:
    // 0x18cd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18cd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x18cd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18cd08: 0xc063232  jal         func_18C8C8
    ctx->pc = 0x18CD08u;
    SET_GPR_U32(ctx, 31, 0x18CD10u);
    ctx->pc = 0x18CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD08u;
    // 0x18cd0c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8C8u, 0x18CD08u, 0x18CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CD10u;
label_18cd10:
    // 0x18cd10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18cd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18cd14: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x18cd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18cd18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD18u;
    {
        const bool branch_taken_0x18cd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd18) {
            ctx->pc = 0x18CD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CD18u;
            // 0x18cd1c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CD30u;
            goto label_18cd30;
        }
    }
    ctx->pc = 0x18CD20u;
    // 0x18cd20: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x18cd20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x18cd24: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18CD24u;
    {
        const bool branch_taken_0x18cd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x18CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD24u;
        // 0x18cd28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd24) {
            ctx->pc = 0x18CD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cd00;
        }
    }
    ctx->pc = 0x18CD2Cu;
label_18cd2c:
    // 0x18cd2c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18cd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18cd30:
    // 0x18cd30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18cd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cd34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18cd34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cd38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18cd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD3Cu;
        // 0x18cd40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CD44u;
    // 0x18cd44: 0x0  nop
    ctx->pc = 0x18cd44u;
    // NOP
    ctx->pc = 0x18cd48u;
}
