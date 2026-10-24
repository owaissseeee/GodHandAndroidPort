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

// Function: func_0011BAF8
// Address: 0x11baf8 - 0x11bf20
void func_0011BAF8_0x11baf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011BAF8_0x11baf8");
#endif

    switch (ctx->pc) {
        case 0x11bb48u: goto label_11bb48;
        case 0x11bb54u: goto label_11bb54;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bbf0u: goto label_11bbf0;
        case 0x11bc04u: goto label_11bc04;
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc14u: goto label_11bc14;
        case 0x11bc68u: goto label_11bc68;
        case 0x11bc70u: goto label_11bc70;
        case 0x11bc98u: goto label_11bc98;
        case 0x11bca4u: goto label_11bca4;
        case 0x11bcc4u: goto label_11bcc4;
        case 0x11bce0u: goto label_11bce0;
        case 0x11bce8u: goto label_11bce8;
        case 0x11bd08u: goto label_11bd08;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd54u: goto label_11bd54;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bda4u: goto label_11bda4;
        case 0x11bde0u: goto label_11bde0;
        case 0x11bde8u: goto label_11bde8;
        case 0x11bdf4u: goto label_11bdf4;
        case 0x11be28u: goto label_11be28;
        case 0x11be34u: goto label_11be34;
        case 0x11be4cu: goto label_11be4c;
        case 0x11be64u: goto label_11be64;
        case 0x11be78u: goto label_11be78;
        case 0x11be80u: goto label_11be80;
        case 0x11be94u: goto label_11be94;
        case 0x11beb8u: goto label_11beb8;
        case 0x11bec4u: goto label_11bec4;
        case 0x11bed0u: goto label_11bed0;
        case 0x11bef4u: goto label_11bef4;
        default: break;
    }

    ctx->pc = 0x11baf8u;

    // 0x11baf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11bafc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11bb00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11bb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11bb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11bb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11bb0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11bb14: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11bb18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bb1c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11bb20: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11bb20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11bb24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb28: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11bb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bb30: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11bb34: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11bb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11bb38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11bb3c: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11bb40: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11BB40u;
    SET_GPR_U32(ctx, 31, 0x11BB48u);
    ctx->pc = 0x11BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB40u;
    // 0x11bb44: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11BB40u, 0x11BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB48u;
label_11bb48:
    // 0x11bb48: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11bb4c: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11BB4Cu;
    SET_GPR_U32(ctx, 31, 0x11BB54u);
    ctx->pc = 0x11BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB4Cu;
    // 0x11bb50: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11BB4Cu, 0x11BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB54u;
label_11bb54:
    // 0x11bb54: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11bb54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11bb58: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x11bb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11bb5c: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x11BB5Cu;
    {
        const bool branch_taken_0x11bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB5Cu;
        // 0x11bb60: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb5c) {
            ctx->pc = 0x11BF04u;
            goto label_11bf04;
        }
    }
    ctx->pc = 0x11BB64u;
    // 0x11bb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11bb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11bb68: 0x2442c5f0  addiu       $v0, $v0, -0x3A10
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x11bb6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11bb70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bb74: 0x800008  jr          $a0
    ctx->pc = 0x11BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB7Cu: goto label_11bb7c;
            case 0x11BC30u: goto label_11bc30;
            case 0x11BCACu: goto label_11bcac;
            case 0x11BCD8u: goto label_11bcd8;
            case 0x11BE3Cu: goto label_11be3c;
            case 0x11BE70u: goto label_11be70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11BB7Cu;
label_11bb7c:
    // 0x11bb7c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11bb80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11bb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11bb84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11bb88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11bb8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb90: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11bb94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb98: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x11bb9c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11BB9Cu;
    SET_GPR_U32(ctx, 31, 0x11BBA4u);
    ctx->pc = 0x11BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB9Cu;
    // 0x11bba0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11BB9Cu, 0x11BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBA4u;
label_11bba4:
    // 0x11bba4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11bba8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11bba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbac: 0x3c01be2b  lui         $at, 0xBE2B
    ctx->pc = 0x11bbacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48683 << 16));
    // 0x11bbb0: 0x3421020c  ori         $at, $at, 0x20C
    ctx->pc = 0x11bbb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)524);
    // 0x11bbb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11bbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11bbb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11bbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbbc: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11bbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11bbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbc4: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x11bbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x11bbc8: 0x342140b8  ori         $at, $at, 0x40B8
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16568);
    // 0x11bbcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11bbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bbd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bbdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11bbdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11bbe0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11bbe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11bbe4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11bbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11bbe8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11BBE8u;
    SET_GPR_U32(ctx, 31, 0x11BBF0u);
    ctx->pc = 0x11BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBE8u;
    // 0x11bbec: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11BBE8u, 0x11BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBF0u;
label_11bbf0:
    // 0x11bbf0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11bbf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11bbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11bbf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11bbfc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11BBFCu;
    SET_GPR_U32(ctx, 31, 0x11BC04u);
    ctx->pc = 0x11BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBFCu;
    // 0x11bc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11BBFCu, 0x11BC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC04u;
label_11bc04:
    // 0x11bc04: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11BC04u;
    SET_GPR_U32(ctx, 31, 0x11BC0Cu);
    ctx->pc = 0x11BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC04u;
    // 0x11bc08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11BC04u, 0x11BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC0Cu;
label_11bc0c:
    // 0x11bc0c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11BC0Cu;
    SET_GPR_U32(ctx, 31, 0x11BC14u);
    ctx->pc = 0x11BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC0Cu;
    // 0x11bc10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11BC0Cu, 0x11BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC14u;
label_11bc14:
    // 0x11bc14: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11bc14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11bc18: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x11bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11bc1c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11bc20: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11bc24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bc28: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11bc28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11bc2c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11bc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11bc30:
    // 0x11bc30: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11bc30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11bc34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11BC34u;
    {
        const bool branch_taken_0x11bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC34u;
        // 0x11bc38: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc34) {
            ctx->pc = 0x11BC60u;
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BC3Cu;
    // 0x11bc3c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BC3Cu;
    {
        const bool branch_taken_0x11bc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC3Cu;
        // 0x11bc40: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc3c) {
            ctx->pc = 0x11BC60u;
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BC44u;
    // 0x11bc44: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x11bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11bc48: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11bc48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11bc4c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11bc50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11bc50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bc54: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x11bc54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11bc58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11bc58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11bc5c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11bc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11bc60:
    // 0x11bc60: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11BC60u;
    SET_GPR_U32(ctx, 31, 0x11BC68u);
    ctx->pc = 0x11BC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC60u;
    // 0x11bc64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11BC60u, 0x11BC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC68u;
label_11bc68:
    // 0x11bc68: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11BC68u;
    SET_GPR_U32(ctx, 31, 0x11BC70u);
    ctx->pc = 0x11BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC68u;
    // 0x11bc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11BC68u, 0x11BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC70u;
    {
        const bool branch_taken_0x11bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bc70) {
            ctx->pc = 0x11BC84u;
            goto label_11bc84;
        }
    }
    ctx->pc = 0x11BC78u;
    // 0x11bc78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11bc78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11bc7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bc80: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11bc80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11bc84:
    // 0x11bc84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bc88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11bc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11bc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc90: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11BC90u;
    SET_GPR_U32(ctx, 31, 0x11BC98u);
    ctx->pc = 0x11BC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC90u;
    // 0x11bc94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11BC90u, 0x11BC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC98u;
label_11bc98:
    // 0x11bc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc9c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11BC9Cu;
    SET_GPR_U32(ctx, 31, 0x11BCA4u);
    ctx->pc = 0x11BCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC9Cu;
    // 0x11bca0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11BC9Cu, 0x11BCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCA4u;
label_11bca4:
    // 0x11bca4: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x11BCA4u;
    {
        const bool branch_taken_0x11bca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCA4u;
        // 0x11bca8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca4) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BCACu;
label_11bcac:
    // 0x11bcac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11bcb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11bcb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11bcb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcb8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11bcb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11bcbc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11BCBCu;
    SET_GPR_U32(ctx, 31, 0x11BCC4u);
    ctx->pc = 0x11BCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCBCu;
    // 0x11bcc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11BCBCu, 0x11BCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCC4u;
label_11bcc4:
    // 0x11bcc4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11bcc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11bcc8: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x11bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x11bccc: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11bcd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bcd4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11bcd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11bcd8:
    // 0x11bcd8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11BCD8u;
    SET_GPR_U32(ctx, 31, 0x11BCE0u);
    ctx->pc = 0x11BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCD8u;
    // 0x11bcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11BCD8u, 0x11BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCE0u;
label_11bce0:
    // 0x11bce0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11BCE0u;
    SET_GPR_U32(ctx, 31, 0x11BCE8u);
    ctx->pc = 0x11BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCE0u;
    // 0x11bce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11BCE0u, 0x11BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCE8u;
label_11bce8:
    // 0x11bce8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BCE8u;
    {
        const bool branch_taken_0x11bce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bce8) {
            ctx->pc = 0x11BD34u;
            goto label_11bd34;
        }
    }
    ctx->pc = 0x11BCF0u;
    // 0x11bcf0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11bcf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11bcf4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BCF4u;
    {
        const bool branch_taken_0x11bcf4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF4u;
        // 0x11bcf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf4) {
            ctx->pc = 0x11BD24u;
            goto label_11bd24;
        }
    }
    ctx->pc = 0x11BCFCu;
    // 0x11bcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd00: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11BD00u;
    SET_GPR_U32(ctx, 31, 0x11BD08u);
    ctx->pc = 0x11BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD00u;
    // 0x11bd04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11BD00u, 0x11BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD08u;
label_11bd08:
    // 0x11bd08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bd0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11bd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11bd10: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11bd10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11bd14: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11bd14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11bd18: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11bd18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bd1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BD1Cu;
    {
        const bool branch_taken_0x11bd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD1Cu;
        // 0x11bd20: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd1c) {
            ctx->pc = 0x11BD34u;
            goto label_11bd34;
        }
    }
    ctx->pc = 0x11BD24u;
label_11bd24:
    // 0x11bd24: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11bd28: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11bd2c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11bd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11bd30: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11bd30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11bd34:
    // 0x11bd34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bd38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11bd38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11bd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd40: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11BD40u;
    SET_GPR_U32(ctx, 31, 0x11BD48u);
    ctx->pc = 0x11BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD40u;
    // 0x11bd44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11BD40u, 0x11BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD48u;
label_11bd48:
    // 0x11bd48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11bd48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11bd4c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11BD4Cu;
    SET_GPR_U32(ctx, 31, 0x11BD54u);
    ctx->pc = 0x11BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD4Cu;
    // 0x11bd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11BD4Cu, 0x11BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD54u;
label_11bd54:
    // 0x11bd54: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11bd58: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x11BD58u;
    {
        const bool branch_taken_0x11bd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD58u;
        // 0x11bd5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd58) {
            ctx->pc = 0x11BF04u;
            goto label_11bf04;
        }
    }
    ctx->pc = 0x11BD60u;
    // 0x11bd60: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x11BD60u;
    {
        const bool branch_taken_0x11bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD60u;
        // 0x11bd64: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd60) {
            ctx->pc = 0x11BF04u;
            goto label_11bf04;
        }
    }
    ctx->pc = 0x11BD68u;
    // 0x11bd68: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x11bd6c: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11bd70: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11bd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11bd74: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11BD74u;
    SET_GPR_U32(ctx, 31, 0x11BD7Cu);
    ctx->pc = 0x11BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD74u;
    // 0x11bd78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11BD74u, 0x11BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11BD7Cu;
    {
        const bool branch_taken_0x11bd7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd7c) {
            ctx->pc = 0x11BD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD7Cu;
            // 0x11bd80: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BDA8u;
            goto label_11bda8;
        }
    }
    ctx->pc = 0x11BD84u;
    // 0x11bd84: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x11bd88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11bd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bd8c: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bd90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11bd90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11bd94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11bd94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11bd98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11bd98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11bd9c: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11BD9Cu;
    SET_GPR_U32(ctx, 31, 0x11BDA4u);
    ctx->pc = 0x11BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD9Cu;
    // 0x11bda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11BD9Cu, 0x11BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDA4u;
label_11bda4:
    // 0x11bda4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11bda4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11bda8:
    // 0x11bda8: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11BDA8u;
    {
        const bool branch_taken_0x11bda8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDA8u;
        // 0x11bdac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bda8) {
            ctx->pc = 0x11BE04u;
            goto label_11be04;
        }
    }
    ctx->pc = 0x11BDB0u;
    // 0x11bdb0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11bdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11bdb4: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11bdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11bdb8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11bdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11bdbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdc0: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11bdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11bdc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11bdc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11bdc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11bdccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11bdd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11bdd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11BDD8u;
    SET_GPR_U32(ctx, 31, 0x11BDE0u);
    ctx->pc = 0x11BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDD8u;
    // 0x11bddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11BDD8u, 0x11BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDE0u;
label_11bde0:
    // 0x11bde0: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11BDE0u;
    SET_GPR_U32(ctx, 31, 0x11BDE8u);
    ctx->pc = 0x11BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDE0u;
    // 0x11bde4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11BDE0u, 0x11BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDE8u;
label_11bde8:
    // 0x11bde8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdec: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11BDECu;
    SET_GPR_U32(ctx, 31, 0x11BDF4u);
    ctx->pc = 0x11BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDECu;
    // 0x11bdf0: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11BDECu, 0x11BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDF4u;
label_11bdf4:
    // 0x11bdf4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11bdf8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11bdfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11BDFCu;
    {
        const bool branch_taken_0x11bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDFCu;
        // 0x11be00: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdfc) {
            ctx->pc = 0x11BE28u;
            goto label_11be28;
        }
    }
    ctx->pc = 0x11BE04u;
label_11be04:
    // 0x11be04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11be0c: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11be0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11be10: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11be10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11be14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11be18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11be1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be20: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11BE20u;
    SET_GPR_U32(ctx, 31, 0x11BE28u);
    ctx->pc = 0x11BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE20u;
    // 0x11be24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11BE20u, 0x11BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE28u;
label_11be28:
    // 0x11be28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be2c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11BE2Cu;
    SET_GPR_U32(ctx, 31, 0x11BE34u);
    ctx->pc = 0x11BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE2Cu;
    // 0x11be30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11BE2Cu, 0x11BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE34u;
label_11be34:
    // 0x11be34: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11BE34u;
    {
        const bool branch_taken_0x11be34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE34u;
        // 0x11be38: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be34) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BE3Cu;
label_11be3c:
    // 0x11be3c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11be3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11be40: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x11be40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11be44: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11BE44u;
    SET_GPR_U32(ctx, 31, 0x11BE4Cu);
    ctx->pc = 0x11BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE44u;
    // 0x11be48: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11BE44u, 0x11BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE4Cu;
label_11be4c:
    // 0x11be4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11be4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11be50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11be50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11be54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11be58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11be5c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11BE5Cu;
    SET_GPR_U32(ctx, 31, 0x11BE64u);
    ctx->pc = 0x11BE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE5Cu;
    // 0x11be60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11BE5Cu, 0x11BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE64u;
label_11be64:
    // 0x11be64: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11be64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11be68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11be6c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11be6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11be70:
    // 0x11be70: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11BE70u;
    SET_GPR_U32(ctx, 31, 0x11BE78u);
    ctx->pc = 0x11BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE70u;
    // 0x11be74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11BE70u, 0x11BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE78u;
label_11be78:
    // 0x11be78: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11BE78u;
    SET_GPR_U32(ctx, 31, 0x11BE80u);
    ctx->pc = 0x11BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE78u;
    // 0x11be7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11BE78u, 0x11BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE80u;
label_11be80:
    // 0x11be80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BE80u;
    {
        const bool branch_taken_0x11be80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE80u;
        // 0x11be84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be80) {
            ctx->pc = 0x11BEA4u;
            goto label_11bea4;
        }
    }
    ctx->pc = 0x11BE88u;
    // 0x11be88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11be88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be8c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11BE8Cu;
    SET_GPR_U32(ctx, 31, 0x11BE94u);
    ctx->pc = 0x11BE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE8Cu;
    // 0x11be90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11BE8Cu, 0x11BE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE94u;
label_11be94:
    // 0x11be94: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11be94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11be98: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11be98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11be9c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11be9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bea0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11bea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11bea4:
    // 0x11bea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11bea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11beac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beb0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11BEB0u;
    SET_GPR_U32(ctx, 31, 0x11BEB8u);
    ctx->pc = 0x11BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEB0u;
    // 0x11beb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11BEB0u, 0x11BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEB8u;
label_11beb8:
    // 0x11beb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bebc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11BEBCu;
    SET_GPR_U32(ctx, 31, 0x11BEC4u);
    ctx->pc = 0x11BEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEBCu;
    // 0x11bec0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11BEBCu, 0x11BEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEC4u;
label_11bec4:
    // 0x11bec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bec8: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11BEC8u;
    SET_GPR_U32(ctx, 31, 0x11BED0u);
    ctx->pc = 0x11BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEC8u;
    // 0x11becc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11BEC8u, 0x11BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BED0u;
label_11bed0:
    // 0x11bed0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BED0u;
    {
        const bool branch_taken_0x11bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED0u;
        // 0x11bed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed0) {
            ctx->pc = 0x11BEE8u;
            goto label_11bee8;
        }
    }
    ctx->pc = 0x11BED8u;
    // 0x11bed8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11bed8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11bedc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11bee0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BEE0u;
    {
        const bool branch_taken_0x11bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE0u;
        // 0x11bee4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bee0) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BEE8u;
label_11bee8:
    // 0x11bee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beec: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11BEECu;
    SET_GPR_U32(ctx, 31, 0x11BEF4u);
    ctx->pc = 0x11BEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEECu;
    // 0x11bef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11BEECu, 0x11BEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEF4u;
label_11bef4:
    // 0x11bef4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11bef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bef8: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11bef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11befc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11befcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11bf00: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11bf00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_11bf04:
    // 0x11bf04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11bf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11bf08:
    // 0x11bf08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11bf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bf0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bf0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf14: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11bf18: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF18u;
        // 0x11bf1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BF20u;
}
