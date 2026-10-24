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

// Function: func_0011C608
// Address: 0x11c608 - 0x11c988
void func_0011C608_0x11c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011C608_0x11c608");
#endif

    switch (ctx->pc) {
        case 0x11c654u: goto label_11c654;
        case 0x11c660u: goto label_11c660;
        case 0x11c6d4u: goto label_11c6d4;
        case 0x11c6dcu: goto label_11c6dc;
        case 0x11c6e4u: goto label_11c6e4;
        case 0x11c6f8u: goto label_11c6f8;
        case 0x11c710u: goto label_11c710;
        case 0x11c754u: goto label_11c754;
        case 0x11c75cu: goto label_11c75c;
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c7d4u: goto label_11c7d4;
        case 0x11c7f0u: goto label_11c7f0;
        case 0x11c7f8u: goto label_11c7f8;
        case 0x11c840u: goto label_11c840;
        case 0x11c84cu: goto label_11c84c;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c880u: goto label_11c880;
        case 0x11c890u: goto label_11c890;
        case 0x11c8a4u: goto label_11c8a4;
        case 0x11c8b8u: goto label_11c8b8;
        case 0x11c8e0u: goto label_11c8e0;
        case 0x11c8ecu: goto label_11c8ec;
        case 0x11c90cu: goto label_11c90c;
        case 0x11c920u: goto label_11c920;
        case 0x11c928u: goto label_11c928;
        case 0x11c93cu: goto label_11c93c;
        case 0x11c960u: goto label_11c960;
        case 0x11c96cu: goto label_11c96c;
        default: break;
    }

    ctx->pc = 0x11c608u;

    // 0x11c608: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c60c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11c610: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11c614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11c61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c624: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11c624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11c628: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11c628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11c62c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11c62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11c630: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11c630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11c634: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c63c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x11c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11c640: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x11c640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x11c644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c648: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x11c648u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x11c64c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11C64Cu;
    SET_GPR_U32(ctx, 31, 0x11C654u);
    ctx->pc = 0x11C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C64Cu;
    // 0x11c650: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11C64Cu, 0x11C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C654u;
label_11c654:
    // 0x11c654: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11c654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11c658: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11C658u;
    SET_GPR_U32(ctx, 31, 0x11C660u);
    ctx->pc = 0x11C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C658u;
    // 0x11c65c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11C658u, 0x11C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C660u;
label_11c660:
    // 0x11c660: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11c660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c664: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x11c664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c668: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x11C668u;
    {
        const bool branch_taken_0x11c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C668u;
        // 0x11c66c: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c668) {
            ctx->pc = 0x11C96Cu;
            goto label_11c96c;
        }
    }
    ctx->pc = 0x11C670u;
    // 0x11c670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11c670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11c674: 0x2442c630  addiu       $v0, $v0, -0x39D0
    ctx->pc = 0x11c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952496));
    // 0x11c678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11c67c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c680: 0x800008  jr          $a0
    ctx->pc = 0x11C680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C688u: goto label_11c688;
            case 0x11C71Cu: goto label_11c71c;
            case 0x11C774u: goto label_11c774;
            case 0x11C7E8u: goto label_11c7e8;
            case 0x11C854u: goto label_11c854;
            case 0x11C89Cu: goto label_11c89c;
            case 0x11C8F4u: goto label_11c8f4;
            case 0x11C918u: goto label_11c918;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11C688u;
label_11c688:
    // 0x11c688: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c68c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11c68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c690: 0x3c01bd98  lui         $at, 0xBD98
    ctx->pc = 0x11c690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48536 << 16));
    // 0x11c694: 0x3421c7e3  ori         $at, $at, 0xC7E3
    ctx->pc = 0x11c694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51171);
    // 0x11c698: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11c698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c69c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c69cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a0: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11c6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c6a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a8: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x11c6ac: 0x34211f8a  ori         $at, $at, 0x1F8A
    ctx->pc = 0x11c6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8074);
    // 0x11c6b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c6bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c6c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c6c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c6c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11c6c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11c6c8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11c6c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11c6cc: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11C6CCu;
    SET_GPR_U32(ctx, 31, 0x11C6D4u);
    ctx->pc = 0x11C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6CCu;
    // 0x11c6d0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11C6CCu, 0x11C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6D4u;
label_11c6d4:
    // 0x11c6d4: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11C6D4u;
    SET_GPR_U32(ctx, 31, 0x11C6DCu);
    ctx->pc = 0x11C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6D4u;
    // 0x11c6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11C6D4u, 0x11C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6DCu;
label_11c6dc:
    // 0x11c6dc: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11C6DCu;
    SET_GPR_U32(ctx, 31, 0x11C6E4u);
    ctx->pc = 0x11C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6DCu;
    // 0x11c6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11C6DCu, 0x11C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6E4u;
label_11c6e4:
    // 0x11c6e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c6e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c6e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x11c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11c6f0: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C6F0u;
    SET_GPR_U32(ctx, 31, 0x11C6F8u);
    ctx->pc = 0x11C6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6F0u;
    // 0x11c6f4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C6F0u, 0x11C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6F8u;
label_11c6f8:
    // 0x11c6f8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11c6fc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11c700: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11c700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c704: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11c708: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C708u;
    SET_GPR_U32(ctx, 31, 0x11C710u);
    ctx->pc = 0x11C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C708u;
    // 0x11c70c: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C708u, 0x11C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C710u;
label_11c710:
    // 0x11c710: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11c710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c718: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11c718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c71c:
    // 0x11c71c: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x11c71cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
    // 0x11c720: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11C720u;
    {
        const bool branch_taken_0x11c720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C720u;
        // 0x11c724: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c720) {
            ctx->pc = 0x11C74Cu;
            goto label_11c74c;
        }
    }
    ctx->pc = 0x11C728u;
    // 0x11c728: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C728u;
    {
        const bool branch_taken_0x11c728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C728u;
        // 0x11c72c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c728) {
            ctx->pc = 0x11C74Cu;
            goto label_11c74c;
        }
    }
    ctx->pc = 0x11C730u;
    // 0x11c730: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x11c734: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11c734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c738: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x11c73c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11c73cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c740: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x11c740u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c744: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11c744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11c748: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11c748u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11c74c:
    // 0x11c74c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C74Cu;
    SET_GPR_U32(ctx, 31, 0x11C754u);
    ctx->pc = 0x11C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C74Cu;
    // 0x11c750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C74Cu, 0x11C754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C754u;
label_11c754:
    // 0x11c754: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C754u;
    SET_GPR_U32(ctx, 31, 0x11C75Cu);
    ctx->pc = 0x11C758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C754u;
    // 0x11c758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C754u, 0x11C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C75Cu;
label_11c75c:
    // 0x11c75c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x11C75Cu;
    {
        const bool branch_taken_0x11c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c75c) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C764u;
    // 0x11c764: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11c764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c76c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x11C76Cu;
    {
        const bool branch_taken_0x11c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C76Cu;
        // 0x11c770: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c76c) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C774u;
label_11c774:
    // 0x11c774: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c77c: 0x3c01bd98  lui         $at, 0xBD98
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48536 << 16));
    // 0x11c780: 0x3421c7e3  ori         $at, $at, 0xC7E3
    ctx->pc = 0x11c780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51171);
    // 0x11c784: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11c784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11c788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c78c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c790: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11c790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c794: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x11c798: 0x34211f8a  ori         $at, $at, 0x1F8A
    ctx->pc = 0x11c798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8074);
    // 0x11c79c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c7a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c7a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c7ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c7acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c7b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11c7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11c7b4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11c7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11c7b8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11C7B8u;
    SET_GPR_U32(ctx, 31, 0x11C7C0u);
    ctx->pc = 0x11C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7B8u;
    // 0x11c7bc: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11C7B8u, 0x11C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7C0u;
label_11c7c0:
    // 0x11c7c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c7c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11c7cc: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C7CCu;
    SET_GPR_U32(ctx, 31, 0x11C7D4u);
    ctx->pc = 0x11C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7CCu;
    // 0x11c7d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C7CCu, 0x11C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7D4u;
label_11c7d4:
    // 0x11c7d4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11c7d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c7d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11c7dc: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x11c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x11c7e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c7e4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c7e8:
    // 0x11c7e8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C7E8u;
    SET_GPR_U32(ctx, 31, 0x11C7F0u);
    ctx->pc = 0x11C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7E8u;
    // 0x11c7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C7E8u, 0x11C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C7F0u;
    SET_GPR_U32(ctx, 31, 0x11C7F8u);
    ctx->pc = 0x11C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F0u;
    // 0x11c7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C7F0u, 0x11C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F8u;
label_11c7f8:
    // 0x11c7f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C7F8u;
    {
        const bool branch_taken_0x11c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7F8u;
        // 0x11c7fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7f8) {
            ctx->pc = 0x11C804u;
            goto label_11c804;
        }
    }
    ctx->pc = 0x11C800u;
    // 0x11c800: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x11c800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
label_11c804:
    // 0x11c804: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x11c804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x11c808: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x11C808u;
    {
        const bool branch_taken_0x11c808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C808u;
        // 0x11c80c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c808) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C810u;
    // 0x11c810: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C818u;
    // 0x11c818: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x11C818u;
    {
        const bool branch_taken_0x11c818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C818u;
        // 0x11c81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c818) {
            ctx->pc = 0x11C844u;
            goto label_11c844;
        }
    }
    ctx->pc = 0x11C820u;
    // 0x11c820: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x11c820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x11c824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c828: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x11c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c82c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c830: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11c834: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11c834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11c838: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11C838u;
    SET_GPR_U32(ctx, 31, 0x11C840u);
    ctx->pc = 0x11C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C838u;
    // 0x11c83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11C838u, 0x11C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C840u;
label_11c840:
    // 0x11c840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11c844:
    // 0x11c844: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11C844u;
    SET_GPR_U32(ctx, 31, 0x11C84Cu);
    ctx->pc = 0x11C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C844u;
    // 0x11c848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11C844u, 0x11C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C84Cu;
label_11c84c:
    // 0x11c84c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x11C84Cu;
    {
        const bool branch_taken_0x11c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c84c) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C854u;
label_11c854:
    // 0x11c854: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11c854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11c858: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11c85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c860: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11c860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c864: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C864u;
    SET_GPR_U32(ctx, 31, 0x11C86Cu);
    ctx->pc = 0x11C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C864u;
    // 0x11c868: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C864u, 0x11C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C86Cu;
label_11c86c:
    // 0x11c86c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11c870: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11c870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11c874: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11c874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11c878: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11C878u;
    SET_GPR_U32(ctx, 31, 0x11C880u);
    ctx->pc = 0x11C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C878u;
    // 0x11c87c: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11C878u, 0x11C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C880u;
label_11c880:
    // 0x11c880: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11c880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11c884: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11c884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11c888: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C888u;
    SET_GPR_U32(ctx, 31, 0x11C890u);
    ctx->pc = 0x11C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C888u;
    // 0x11c88c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C888u, 0x11C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C890u;
label_11c890:
    // 0x11c890: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11c890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c898: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11c898u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c89c:
    // 0x11c89c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C89Cu;
    SET_GPR_U32(ctx, 31, 0x11C8A4u);
    ctx->pc = 0x11C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C89Cu;
    // 0x11c8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C89Cu, 0x11C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8A4u;
label_11c8a4:
    // 0x11c8a4: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x11c8a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x11c8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8ac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c8b0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C8B0u;
    SET_GPR_U32(ctx, 31, 0x11C8B8u);
    ctx->pc = 0x11C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8B0u;
    // 0x11c8b4: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C8B0u, 0x11C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8B8u;
label_11c8b8:
    // 0x11c8b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C8B8u;
    {
        const bool branch_taken_0x11c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8B8u;
        // 0x11c8bc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8b8) {
            ctx->pc = 0x11C8CCu;
            goto label_11c8cc;
        }
    }
    ctx->pc = 0x11C8C0u;
    // 0x11c8c0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x11c8c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c8c8: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_11c8cc:
    // 0x11c8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c8d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C8D8u;
    SET_GPR_U32(ctx, 31, 0x11C8E0u);
    ctx->pc = 0x11C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8D8u;
    // 0x11c8dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C8D8u, 0x11C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8E0u;
label_11c8e0:
    // 0x11c8e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C8E4u;
    SET_GPR_U32(ctx, 31, 0x11C8ECu);
    ctx->pc = 0x11C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8E4u;
    // 0x11c8e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C8E4u, 0x11C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8ECu;
label_11c8ec:
    // 0x11c8ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11C8ECu;
    {
        const bool branch_taken_0x11c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8ECu;
        // 0x11c8f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c8ec) {
            ctx->pc = 0x11C970u;
            goto label_11c970;
        }
    }
    ctx->pc = 0x11C8F4u;
label_11c8f4:
    // 0x11c8f4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11c8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11c8f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11c8fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c900: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11c900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c904: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C904u;
    SET_GPR_U32(ctx, 31, 0x11C90Cu);
    ctx->pc = 0x11C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C904u;
    // 0x11c908: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C904u, 0x11C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C90Cu;
label_11c90c:
    // 0x11c90c: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11c90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11c910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c914: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11c914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c918:
    // 0x11c918: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C918u;
    SET_GPR_U32(ctx, 31, 0x11C920u);
    ctx->pc = 0x11C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C918u;
    // 0x11c91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C918u, 0x11C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C920u;
label_11c920:
    // 0x11c920: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C920u;
    // 0x11c924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C920u, 0x11C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C928u;
    {
        const bool branch_taken_0x11c928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C928u;
        // 0x11c92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c928) {
            ctx->pc = 0x11C94Cu;
            goto label_11c94c;
        }
    }
    ctx->pc = 0x11C930u;
    // 0x11c930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c934: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11C934u;
    SET_GPR_U32(ctx, 31, 0x11C93Cu);
    ctx->pc = 0x11C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C934u;
    // 0x11c938: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11C934u, 0x11C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C93Cu;
label_11c93c:
    // 0x11c93c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11c93cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c940: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11c940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c944: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11c944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c948: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11c948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11c94c:
    // 0x11c94c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c950: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c958: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C958u;
    SET_GPR_U32(ctx, 31, 0x11C960u);
    ctx->pc = 0x11C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C958u;
    // 0x11c95c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C958u, 0x11C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C960u;
label_11c960:
    // 0x11c960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c964: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C964u;
    SET_GPR_U32(ctx, 31, 0x11C96Cu);
    ctx->pc = 0x11C968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C964u;
    // 0x11c968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C964u, 0x11C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C96Cu;
label_11c96c:
    // 0x11c96c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11c96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11c970:
    // 0x11c970: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11c970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c974: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c978: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c97c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C984u;
    // 0x11c984: 0x0  nop
    ctx->pc = 0x11c984u;
    // NOP
    ctx->pc = 0x11c988u;
}
