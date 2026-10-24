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

// Function: func_001BCD70
// Address: 0x1bcd70 - 0x1bcfb0
void func_001BCD70_0x1bcd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BCD70_0x1bcd70");
#endif

    switch (ctx->pc) {
        case 0x1bcd9cu: goto label_1bcd9c;
        case 0x1bcda8u: goto label_1bcda8;
        case 0x1bcdc4u: goto label_1bcdc4;
        case 0x1bcde4u: goto label_1bcde4;
        case 0x1bcdfcu: goto label_1bcdfc;
        case 0x1bce48u: goto label_1bce48;
        case 0x1bcefcu: goto label_1bcefc;
        case 0x1bcf68u: goto label_1bcf68;
        case 0x1bcf78u: goto label_1bcf78;
        default: break;
    }

    ctx->pc = 0x1bcd70u;

    // 0x1bcd70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1bcd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1bcd74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1bcd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1bcd78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1bcd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1bcd7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcd7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcd80: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bcd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bcd84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bcd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bcd88: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bcd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bcd8c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCD8Cu;
    {
        const bool branch_taken_0x1bcd8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcd8c) {
            ctx->pc = 0x1BCD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCD8Cu;
            // 0x1bcd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCDA0u;
            goto label_1bcda0;
        }
    }
    ctx->pc = 0x1BCD94u;
    // 0x1bcd94: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BCD94u;
    SET_GPR_U32(ctx, 31, 0x1BCD9Cu);
    ctx->pc = 0x1BCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCD94u;
    // 0x1bcd98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BCD94u, 0x1BCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCD9Cu;
label_1bcd9c:
    // 0x1bcd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcda0:
    // 0x1bcda0: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BCDA0u;
    SET_GPR_U32(ctx, 31, 0x1BCDA8u);
    ctx->pc = 0x1BCDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDA0u;
    // 0x1bcda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BCDA0u, 0x1BCDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDA8u;
label_1bcda8:
    // 0x1bcda8: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x1bcda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x1bcdac: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1bcdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bcdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdb8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bcdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bcdbc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BCDBCu;
    SET_GPR_U32(ctx, 31, 0x1BCDC4u);
    ctx->pc = 0x1BCDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDBCu;
    // 0x1bcdc0: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BCDBCu, 0x1BCDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDC4u;
label_1bcdc4:
    // 0x1bcdc4: 0x8c460380  lw          $a2, 0x380($v0)
    ctx->pc = 0x1bcdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bcdc8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1bcdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1bcdcc: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1bcdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bcdd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdd4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1bcdd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1bcdd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bcdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcddc: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BCDDCu;
    SET_GPR_U32(ctx, 31, 0x1BCDE4u);
    ctx->pc = 0x1BCDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDDCu;
    // 0x1bcde0: 0xac460380  sw          $a2, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BCDDCu, 0x1BCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDE4u;
label_1bcde4:
    // 0x1bcde4: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1bcde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bcde8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcdec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bcdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcdf0: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1bcdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1bcdf4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BCDF4u;
    SET_GPR_U32(ctx, 31, 0x1BCDFCu);
    ctx->pc = 0x1BCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCDF4u;
    // 0x1bcdf8: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BCDF4u, 0x1BCDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCDFCu;
label_1bcdfc:
    // 0x1bcdfc: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1bcdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bce00: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1bce00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1bce04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bce04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bce08: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bce0c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1bce0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1bce10: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x1bce10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x1bce14: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x1bce14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1bce18: 0x82230624  lb          $v1, 0x624($s1)
    ctx->pc = 0x1bce18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1bce1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bce1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bce20: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1bce20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bce24: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BCE24u;
    {
        const bool branch_taken_0x1bce24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE24u;
        // 0x1bce28: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce24) {
            ctx->pc = 0x1BCEF4u;
            goto label_1bcef4;
        }
    }
    ctx->pc = 0x1BCE2Cu;
    // 0x1bce2c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1bce2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1bce30: 0x10460030  beq         $v0, $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BCE30u;
    {
        const bool branch_taken_0x1bce30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE30u;
        // 0x1bce34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce30) {
            ctx->pc = 0x1BCEF4u;
            goto label_1bcef4;
        }
    }
    ctx->pc = 0x1BCE38u;
    // 0x1bce38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bce38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce3c: 0x240afff7  addiu       $t2, $zero, -0x9
    ctx->pc = 0x1bce3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1bce40: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1bce40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1bce44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bce44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bce48:
    // 0x1bce48: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bce4c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1bce4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1bce50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCE50u;
    {
        const bool branch_taken_0x1bce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE50u;
        // 0x1bce54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce50) {
            ctx->pc = 0x1BCE60u;
            goto label_1bce60;
        }
    }
    ctx->pc = 0x1BCE58u;
    // 0x1bce58: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1bce58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bce5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bce5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bce60:
    // 0x1bce60: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1bce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bce64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCE64u;
    {
        const bool branch_taken_0x1bce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE64u;
        // 0x1bce68: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce64) {
            ctx->pc = 0x1BCE7Cu;
            goto label_1bce7c;
        }
    }
    ctx->pc = 0x1BCE6Cu;
    // 0x1bce6c: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1bce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1bce70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bce74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCE74u;
    {
        const bool branch_taken_0x1bce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE74u;
        // 0x1bce78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce74) {
            ctx->pc = 0x1BCE80u;
            goto label_1bce80;
        }
    }
    ctx->pc = 0x1BCE7Cu;
label_1bce7c:
    // 0x1bce7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bce80:
    // 0x1bce80: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1bce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1bce84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bce84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bce88: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x1bce88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1bce8c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x1bce8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x1bce90: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1bce90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1bce94: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1bce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1bce98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCE98u;
    {
        const bool branch_taken_0x1bce98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE98u;
        // 0x1bce9c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bce98) {
            ctx->pc = 0x1BCEA8u;
            goto label_1bcea8;
        }
    }
    ctx->pc = 0x1BCEA0u;
    // 0x1bcea0: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bcea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcea8:
    // 0x1bcea8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1bcea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bceac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCEACu;
    {
        const bool branch_taken_0x1bceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEACu;
        // 0x1bceb0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bceac) {
            ctx->pc = 0x1BCEC4u;
            goto label_1bcec4;
        }
    }
    ctx->pc = 0x1BCEB4u;
    // 0x1bceb4: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1bceb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bcebc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCEBCu;
    {
        const bool branch_taken_0x1bcebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEBCu;
        // 0x1bcec0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcebc) {
            ctx->pc = 0x1BCEC8u;
            goto label_1bcec8;
        }
    }
    ctx->pc = 0x1BCEC4u;
label_1bcec4:
    // 0x1bcec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bcec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bcec8:
    // 0x1bcec8: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x1bcec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1bcecc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bceccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bced0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x1bced0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1bced4: 0xac430154  sw          $v1, 0x154($v0)
    ctx->pc = 0x1bced4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 3));
    // 0x1bced8: 0x82220624  lb          $v0, 0x624($s1)
    ctx->pc = 0x1bced8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1bcedc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1bcedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bcee0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCEE0u;
    {
        const bool branch_taken_0x1bcee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEE0u;
        // 0x1bcee4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcee0) {
            ctx->pc = 0x1BCEF4u;
            goto label_1bcef4;
        }
    }
    ctx->pc = 0x1BCEE8u;
    // 0x1bcee8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1bcee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1bceec: 0x1446ffd6  bne         $v0, $a2, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1BCEECu;
    {
        const bool branch_taken_0x1bceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEECu;
        // 0x1bcef0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bceec) {
            ctx->pc = 0x1BCE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bce48;
        }
    }
    ctx->pc = 0x1BCEF4u;
label_1bcef4:
    // 0x1bcef4: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1BCEF4u;
    SET_GPR_U32(ctx, 31, 0x1BCEFCu);
    ctx->pc = 0x1BCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCEF4u;
    // 0x1bcef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1BCEF4u, 0x1BCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCEFCu;
label_1bcefc:
    // 0x1bcefc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1bcefcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bcf00: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bcf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bcf04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bcf08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bcf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcf0c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1bcf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1bcf10: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1bcf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1bcf14: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1bcf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1bcf18: 0xe641000c  swc1        $f1, 0xC($s2)
    ctx->pc = 0x1bcf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1bcf1c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1bcf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1bcf20: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bcf20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bcf24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf28: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bcf28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf2c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1bcf2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1bcf30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1bcf30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1bcf34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1bcf34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1bcf38: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1bcf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1bcf3c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bcf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcf40: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1bcf40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcf44: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1bcf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1bcf48: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1bcf48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1bcf4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf50: 0x82220624  lb          $v0, 0x624($s1)
    ctx->pc = 0x1bcf50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1bcf54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1bcf54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bcf58: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bcf58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bcf5c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCF5Cu;
    {
        const bool branch_taken_0x1bcf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF5Cu;
        // 0x1bcf60: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf5c) {
            ctx->pc = 0x1BCF84u;
            goto label_1bcf84;
        }
    }
    ctx->pc = 0x1BCF64u;
    // 0x1bcf64: 0x0  nop
    ctx->pc = 0x1bcf64u;
    // NOP
label_1bcf68:
    // 0x1bcf68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bcf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcf6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1bcf6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bcf70: 0xc06f2ce  jal         func_1BCB38
    ctx->pc = 0x1BCF70u;
    SET_GPR_U32(ctx, 31, 0x1BCF78u);
    ctx->pc = 0x1BCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF70u;
    // 0x1bcf74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCB38u, 0x1BCF70u, 0x1BCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF78u;
label_1bcf78:
    // 0x1bcf78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bcf78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bcf7c: 0x82220624  lb          $v0, 0x624($s1)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1bcf80: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bcf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bcf84:
    // 0x1bcf84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCF84u;
    {
        const bool branch_taken_0x1bcf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf84) {
            ctx->pc = 0x1BCF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCF84u;
            // 0x1bcf88: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCF9Cu;
            goto label_1bcf9c;
        }
    }
    ctx->pc = 0x1BCF8Cu;
    // 0x1bcf8c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1bcf8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1bcf90: 0x1450fff5  bne         $v0, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1BCF90u;
    {
        const bool branch_taken_0x1bcf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BCF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF90u;
        // 0x1bcf94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf90) {
            ctx->pc = 0x1BCF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bcf68;
        }
    }
    ctx->pc = 0x1BCF98u;
    // 0x1bcf98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1bcf98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bcf9c:
    // 0x1bcf9c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1bcf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bcfa0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bcfa4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bcfa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bcfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFA8u;
        // 0x1bcfac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCFB0u;
}
