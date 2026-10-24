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

// Function: func_0022B9E0
// Address: 0x22b9e0 - 0x22bd10
void func_0022B9E0_0x22b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0022B9E0_0x22b9e0");
#endif

    switch (ctx->pc) {
        case 0x22ba48u: goto label_22ba48;
        case 0x22ba74u: goto label_22ba74;
        case 0x22ba9cu: goto label_22ba9c;
        case 0x22babcu: goto label_22babc;
        case 0x22bac4u: goto label_22bac4;
        case 0x22bae4u: goto label_22bae4;
        case 0x22bb10u: goto label_22bb10;
        case 0x22bb4cu: goto label_22bb4c;
        case 0x22bb6cu: goto label_22bb6c;
        case 0x22bb74u: goto label_22bb74;
        case 0x22bbb0u: goto label_22bbb0;
        case 0x22bbbcu: goto label_22bbbc;
        case 0x22bbd0u: goto label_22bbd0;
        case 0x22bbfcu: goto label_22bbfc;
        case 0x22bc10u: goto label_22bc10;
        case 0x22bc40u: goto label_22bc40;
        case 0x22bc4cu: goto label_22bc4c;
        case 0x22bc90u: goto label_22bc90;
        case 0x22bcc4u: goto label_22bcc4;
        default: break;
    }

    ctx->pc = 0x22b9e0u;

    // 0x22b9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22b9e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22b9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b9ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x22b9f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x22b9f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22b9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b9f8: 0xa204186a  sb          $a0, 0x186A($s0)
    ctx->pc = 0x22b9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b9fc: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x22ba00: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22ba04: 0x920602f6  lbu         $a2, 0x2F6($s0)
    ctx->pc = 0x22ba04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22ba08: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x22ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x22ba0c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22ba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x22ba10: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x22ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x22ba14: 0x2cc50006  sltiu       $a1, $a2, 0x6
    ctx->pc = 0x22ba14u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x22ba18: 0x10a0008c  beqz        $a1, . + 4 + (0x8C << 2)
    ctx->pc = 0x22BA18u;
    {
        const bool branch_taken_0x22ba18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BA18u;
        // 0x22ba1c: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba18) {
            ctx->pc = 0x22BC4Cu;
            goto label_22bc4c;
        }
    }
    ctx->pc = 0x22BA20u;
    // 0x22ba20: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x22ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x22ba24: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x22ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22ba28: 0x24428c50  addiu       $v0, $v0, -0x73B0
    ctx->pc = 0x22ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937680));
    // 0x22ba2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ba30: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ba34: 0x800008  jr          $a0
    ctx->pc = 0x22BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BA3Cu: goto label_22ba3c;
            case 0x22BA88u: goto label_22ba88;
            case 0x22BAD4u: goto label_22bad4;
            case 0x22BB2Cu: goto label_22bb2c;
            case 0x22BBC4u: goto label_22bbc4;
            case 0x22BC08u: goto label_22bc08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BA34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22BA3Cu;
label_22ba3c:
    // 0x22ba3c: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22ba3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ba40: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22BA40u;
    SET_GPR_U32(ctx, 31, 0x22BA48u);
    ctx->pc = 0x22BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA40u;
    // 0x22ba44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22BA40u, 0x22BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA48u;
label_22ba48:
    // 0x22ba48: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22ba4c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22ba4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22ba50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22ba50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ba54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba58: 0x8c652200  lw          $a1, 0x2200($v1)
    ctx->pc = 0x22ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8704)));
    // 0x22ba5c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22ba5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22ba60: 0x8c662204  lw          $a2, 0x2204($v1)
    ctx->pc = 0x22ba60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8708)));
    // 0x22ba64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22ba64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22ba6c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22BA6Cu;
    SET_GPR_U32(ctx, 31, 0x22BA74u);
    ctx->pc = 0x22BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BA6Cu;
    // 0x22ba70: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22BA6Cu, 0x22BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA74u;
label_22ba74:
    // 0x22ba74: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22ba74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22ba78: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x22ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x22ba7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ba80: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x22ba80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
    // 0x22ba84: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22ba88:
    // 0x22ba88: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x22ba88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x22ba8c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22BA8Cu;
    {
        const bool branch_taken_0x22ba8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ba8c) {
            ctx->pc = 0x22BABCu;
            goto label_22babc;
        }
    }
    ctx->pc = 0x22BA94u;
    // 0x22ba94: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22BA94u;
    SET_GPR_U32(ctx, 31, 0x22BA9Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22BA94u, 0x22BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BA9Cu;
label_22ba9c:
    // 0x22ba9c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22baa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22baa4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22baa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x22baa8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22baa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22baac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22baacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bab0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22bab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22bab4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22BAB4u;
    SET_GPR_U32(ctx, 31, 0x22BABCu);
    ctx->pc = 0x22BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BAB4u;
    // 0x22bab8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22BAB4u, 0x22BABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BABCu;
label_22babc:
    // 0x22babc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22BABCu;
    SET_GPR_U32(ctx, 31, 0x22BAC4u);
    ctx->pc = 0x22BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BABCu;
    // 0x22bac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22BABCu, 0x22BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAC4u;
label_22bac4:
    // 0x22bac4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x22BAC4u;
    {
        const bool branch_taken_0x22bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bac4) {
            ctx->pc = 0x22BB9Cu;
            goto label_22bb9c;
        }
    }
    ctx->pc = 0x22BACCu;
    // 0x22bacc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x22BACCu;
    {
        const bool branch_taken_0x22bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BACCu;
        // 0x22bad0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bacc) {
            ctx->pc = 0x22BB94u;
            goto label_22bb94;
        }
    }
    ctx->pc = 0x22BAD4u;
label_22bad4:
    // 0x22bad4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bad8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x22bad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22badc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22BADCu;
    SET_GPR_U32(ctx, 31, 0x22BAE4u);
    ctx->pc = 0x22BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BADCu;
    // 0x22bae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22BADCu, 0x22BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BAE4u;
label_22bae4:
    // 0x22bae4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bae8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22bae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22baec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22baecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22baf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22baf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22baf4: 0x8c652208  lw          $a1, 0x2208($v1)
    ctx->pc = 0x22baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8712)));
    // 0x22baf8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22baf8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22bafc: 0x8c66220c  lw          $a2, 0x220C($v1)
    ctx->pc = 0x22bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8716)));
    // 0x22bb00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22bb00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb04: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22bb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22bb08: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22BB08u;
    SET_GPR_U32(ctx, 31, 0x22BB10u);
    ctx->pc = 0x22BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB08u;
    // 0x22bb0c: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22BB08u, 0x22BB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB10u;
label_22bb10:
    // 0x22bb10: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22bb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22bb14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bb18: 0xe6140600  swc1        $f20, 0x600($s0)
    ctx->pc = 0x22bb18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x22bb1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bb20: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x22bb20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bb24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22bb24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bb28: 0xae0305f8  sw          $v1, 0x5F8($s0)
    ctx->pc = 0x22bb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 3));
label_22bb2c:
    // 0x22bb2c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x22bb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x22bb30: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22BB30u;
    {
        const bool branch_taken_0x22bb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bb30) {
            ctx->pc = 0x22BB6Cu;
            goto label_22bb6c;
        }
    }
    ctx->pc = 0x22BB38u;
    // 0x22bb38: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x22bb3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22BB3Cu;
    {
        const bool branch_taken_0x22bb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB3Cu;
        // 0x22bb40: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb3c) {
            ctx->pc = 0x22BB6Cu;
            goto label_22bb6c;
        }
    }
    ctx->pc = 0x22BB44u;
    // 0x22bb44: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22BB44u;
    SET_GPR_U32(ctx, 31, 0x22BB4Cu);
    ctx->pc = 0x22BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB44u;
    // 0x22bb48: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22BB44u, 0x22BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB4Cu;
label_22bb4c:
    // 0x22bb4c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bb54: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x22bb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
    // 0x22bb58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x22bb58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x22bb5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22bb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bb60: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x22bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22bb64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22BB64u;
    SET_GPR_U32(ctx, 31, 0x22BB6Cu);
    ctx->pc = 0x22BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB64u;
    // 0x22bb68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22BB64u, 0x22BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB6Cu;
label_22bb6c:
    // 0x22bb6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22BB6Cu;
    SET_GPR_U32(ctx, 31, 0x22BB74u);
    ctx->pc = 0x22BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BB6Cu;
    // 0x22bb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22BB6Cu, 0x22BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BB74u;
label_22bb74:
    // 0x22bb74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BB74u;
    {
        const bool branch_taken_0x22bb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bb74) {
            ctx->pc = 0x22BB9Cu;
            goto label_22bb9c;
        }
    }
    ctx->pc = 0x22BB7Cu;
    // 0x22bb7c: 0x96020568  lhu         $v0, 0x568($s0)
    ctx->pc = 0x22bb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x22bb80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22bb84: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x22bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x22bb88: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BB88u;
    {
        const bool branch_taken_0x22bb88 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x22BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BB88u;
        // 0x22bb8c: 0xa6020568  sh          $v0, 0x568($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bb88) {
            ctx->pc = 0x22BB9Cu;
            goto label_22bb9c;
        }
    }
    ctx->pc = 0x22BB90u;
    // 0x22bb90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22bb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_22bb94:
    // 0x22bb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bb98: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22bb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22bb9c:
    // 0x22bb9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bba0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22bba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22bba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bba8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22BBA8u;
    SET_GPR_U32(ctx, 31, 0x22BBB0u);
    ctx->pc = 0x22BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBA8u;
    // 0x22bbac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22BBA8u, 0x22BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBB0u;
label_22bbb0:
    // 0x22bbb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22bbb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22bbb4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22BBB4u;
    SET_GPR_U32(ctx, 31, 0x22BBBCu);
    ctx->pc = 0x22BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBB4u;
    // 0x22bbb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22BBB4u, 0x22BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBBCu;
label_22bbbc:
    // 0x22bbbc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22BBBCu;
    {
        const bool branch_taken_0x22bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BBBCu;
        // 0x22bbc0: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bbbc) {
            ctx->pc = 0x22BC50u;
            goto label_22bc50;
        }
    }
    ctx->pc = 0x22BBC4u;
label_22bbc4:
    // 0x22bbc4: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x22bbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bbc8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22BBC8u;
    SET_GPR_U32(ctx, 31, 0x22BBD0u);
    ctx->pc = 0x22BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBC8u;
    // 0x22bbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22BBC8u, 0x22BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBD0u;
label_22bbd0:
    // 0x22bbd0: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x22bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x22bbd4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x22bbd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x22bbd8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22bbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22bbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbe0: 0x8c652210  lw          $a1, 0x2210($v1)
    ctx->pc = 0x22bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8720)));
    // 0x22bbe4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x22bbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22bbe8: 0x8c662214  lw          $a2, 0x2214($v1)
    ctx->pc = 0x22bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8724)));
    // 0x22bbec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22bbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bbf0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x22bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22bbf4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x22BBF4u;
    SET_GPR_U32(ctx, 31, 0x22BBFCu);
    ctx->pc = 0x22BBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BBF4u;
    // 0x22bbf8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x22BBF4u, 0x22BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BBFCu;
label_22bbfc:
    // 0x22bbfc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x22bbfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22bc00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22bc04: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x22bc04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_22bc08:
    // 0x22bc08: 0xc055f06  jal         func_157C18
    ctx->pc = 0x22BC08u;
    SET_GPR_U32(ctx, 31, 0x22BC10u);
    ctx->pc = 0x22BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC08u;
    // 0x22bc0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x22BC08u, 0x22BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC10u;
label_22bc10:
    // 0x22bc10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BC10u;
    {
        const bool branch_taken_0x22bc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC10u;
        // 0x22bc14: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc10) {
            ctx->pc = 0x22BC2Cu;
            goto label_22bc2c;
        }
    }
    ctx->pc = 0x22BC18u;
    // 0x22bc18: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x22bc18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x22bc1c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x22bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x22bc20: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x22bc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x22bc24: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x22bc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x22bc28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x22bc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_22bc2c:
    // 0x22bc2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22bc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22bc30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22bc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x22BC38u;
    SET_GPR_U32(ctx, 31, 0x22BC40u);
    ctx->pc = 0x22BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC38u;
    // 0x22bc3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x22BC38u, 0x22BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC40u;
label_22bc40:
    // 0x22bc40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22bc40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22bc44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22BC44u;
    SET_GPR_U32(ctx, 31, 0x22BC4Cu);
    ctx->pc = 0x22BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC44u;
    // 0x22bc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22BC44u, 0x22BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC4Cu;
label_22bc4c:
    // 0x22bc4c: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x22bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22bc50:
    // 0x22bc50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22bc50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc54: 0x0  nop
    ctx->pc = 0x22bc54u;
    // NOP
    // 0x22bc58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22bc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22bc5c: 0x0  nop
    ctx->pc = 0x22bc5cu;
    // NOP
    // 0x22bc60: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x22BC60u;
    {
        const bool branch_taken_0x22bc60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22bc60) {
            ctx->pc = 0x22BC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BC60u;
            // 0x22bc64: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BC78u;
            goto label_22bc78;
        }
    }
    ctx->pc = 0x22BC68u;
    // 0x22bc68: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x22bc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22bc6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22bc6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22bc70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22BC70u;
    {
        const bool branch_taken_0x22bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC70u;
        // 0x22bc74: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc70) {
            ctx->pc = 0x22BCC4u;
            goto label_22bcc4;
        }
    }
    ctx->pc = 0x22BC78u;
label_22bc78:
    // 0x22bc78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22bc7c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x22BC7Cu;
    {
        const bool branch_taken_0x22bc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BC7Cu;
        // 0x22bc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bc7c) {
            ctx->pc = 0x22BCC4u;
            goto label_22bcc4;
        }
    }
    ctx->pc = 0x22BC84u;
    // 0x22bc84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22bc88: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x22BC88u;
    SET_GPR_U32(ctx, 31, 0x22BC90u);
    ctx->pc = 0x22BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BC88u;
    // 0x22bc8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x22BC88u, 0x22BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC90u;
label_22bc90:
    // 0x22bc90: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x22bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x22bc94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22bc94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22bc98: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22bc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x22bc9c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x22bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x22bca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22bca4: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x22bca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x22bca8: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x22bca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x22bcac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22bcacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22bcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22bcb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22bcb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcbc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x22BCBCu;
    SET_GPR_U32(ctx, 31, 0x22BCC4u);
    ctx->pc = 0x22BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BCBCu;
    // 0x22bcc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x22BCBCu, 0x22BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCC4u;
label_22bcc4:
    // 0x22bcc4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22bcc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x22bcc8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22bccc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22BCCCu;
    {
        const bool branch_taken_0x22bccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BCCCu;
        // 0x22bcd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bccc) {
            ctx->pc = 0x22BCD8u;
            goto label_22bcd8;
        }
    }
    ctx->pc = 0x22BCD4u;
    // 0x22bcd4: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_22bcd8:
    // 0x22bcd8: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x22bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x22bcdc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22BCDCu;
    {
        const bool branch_taken_0x22bcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bcdc) {
            ctx->pc = 0x22BCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22BCDCu;
            // 0x22bce0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22BCFCu;
            goto label_22bcfc;
        }
    }
    ctx->pc = 0x22BCE4u;
    // 0x22bce4: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x22bce8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22bcec: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22bcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x22bcf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x22bcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22bcf4: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x22bcf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22bcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22bcfc:
    // 0x22bcfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bd00: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x22bd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22bd04: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BD04u;
        // 0x22bd08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD0Cu;
    // 0x22bd0c: 0x0  nop
    ctx->pc = 0x22bd0cu;
    // NOP
    ctx->pc = 0x22bd10u;
}
