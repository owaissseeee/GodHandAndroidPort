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

// Function: func_0011C988
// Address: 0x11c988 - 0x11cee8
void func_0011C988_0x11c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011C988_0x11c988");
#endif

    switch (ctx->pc) {
        case 0x11c9d8u: goto label_11c9d8;
        case 0x11c9e4u: goto label_11c9e4;
        case 0x11ca18u: goto label_11ca18;
        case 0x11ca20u: goto label_11ca20;
        case 0x11ca6cu: goto label_11ca6c;
        case 0x11ca80u: goto label_11ca80;
        case 0x11ca88u: goto label_11ca88;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb4cu: goto label_11cb4c;
        case 0x11cb54u: goto label_11cb54;
        case 0x11cbb8u: goto label_11cbb8;
        case 0x11cbccu: goto label_11cbcc;
        case 0x11cbd8u: goto label_11cbd8;
        case 0x11cca8u: goto label_11cca8;
        case 0x11ccb0u: goto label_11ccb0;
        case 0x11ccc4u: goto label_11ccc4;
        case 0x11ccfcu: goto label_11ccfc;
        case 0x11cd24u: goto label_11cd24;
        case 0x11cd78u: goto label_11cd78;
        case 0x11cd90u: goto label_11cd90;
        case 0x11cda4u: goto label_11cda4;
        case 0x11cdb8u: goto label_11cdb8;
        case 0x11cdccu: goto label_11cdcc;
        case 0x11cdf0u: goto label_11cdf0;
        case 0x11cdfcu: goto label_11cdfc;
        case 0x11ce50u: goto label_11ce50;
        case 0x11ce68u: goto label_11ce68;
        case 0x11ce7cu: goto label_11ce7c;
        case 0x11ce84u: goto label_11ce84;
        case 0x11ce98u: goto label_11ce98;
        case 0x11cebcu: goto label_11cebc;
        case 0x11cec8u: goto label_11cec8;
        default: break;
    }

    ctx->pc = 0x11c988u;

    // 0x11c988: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c98c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11c990: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c998: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11c9a4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11c9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11c9ac: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11c9b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11c9b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11c9b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11c9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c9b8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11c9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c9c0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11c9c4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11c9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11c9c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11c9cc: 0x8e320694  lw          $s2, 0x694($s1)
    ctx->pc = 0x11c9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11c9d0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11C9D0u;
    SET_GPR_U32(ctx, 31, 0x11C9D8u);
    ctx->pc = 0x11C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9D0u;
    // 0x11c9d4: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11C9D0u, 0x11C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9D8u;
label_11c9d8:
    // 0x11c9d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11c9dc: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11C9DCu;
    SET_GPR_U32(ctx, 31, 0x11C9E4u);
    ctx->pc = 0x11C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9DCu;
    // 0x11c9e0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11C9DCu, 0x11C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9E4u;
label_11c9e4:
    // 0x11c9e4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11c9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c9e8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x11c9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x11c9ec: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x11C9ECu;
    {
        const bool branch_taken_0x11c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C9ECu;
        // 0x11c9f0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c9ec) {
            ctx->pc = 0x11CEC8u;
            goto label_11cec8;
        }
    }
    ctx->pc = 0x11C9F4u;
    // 0x11c9f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11c9f8: 0x2442c650  addiu       $v0, $v0, -0x39B0
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952528));
    // 0x11c9fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ca00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ca04: 0x800008  jr          $a0
    ctx->pc = 0x11CA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CA0Cu: goto label_11ca0c;
            case 0x11CB2Cu: goto label_11cb2c;
            case 0x11CB6Cu: goto label_11cb6c;
            case 0x11CC70u: goto label_11cc70;
            case 0x11CD2Cu: goto label_11cd2c;
            case 0x11CD9Cu: goto label_11cd9c;
            case 0x11CE04u: goto label_11ce04;
            case 0x11CE74u: goto label_11ce74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CA04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11CA0Cu;
label_11ca0c:
    // 0x11ca0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca10: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11CA10u;
    SET_GPR_U32(ctx, 31, 0x11CA18u);
    ctx->pc = 0x11CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA10u;
    // 0x11ca14: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11CA10u, 0x11CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA18u;
label_11ca18:
    // 0x11ca18: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11CA18u;
    SET_GPR_U32(ctx, 31, 0x11CA20u);
    ctx->pc = 0x11CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA18u;
    // 0x11ca1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11CA18u, 0x11CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA20u;
label_11ca20:
    // 0x11ca20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11ca24: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11ca24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca28: 0x3c01bda8  lui         $at, 0xBDA8
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48552 << 16));
    // 0x11ca2c: 0x34215879  ori         $at, $at, 0x5879
    ctx->pc = 0x11ca2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22649);
    // 0x11ca30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ca30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ca34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ca34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca38: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ca3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca40: 0x3c013a6b  lui         $at, 0x3A6B
    ctx->pc = 0x11ca40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14955 << 16));
    // 0x11ca44: 0x3421edfa  ori         $at, $at, 0xEDFA
    ctx->pc = 0x11ca44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60922);
    // 0x11ca48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ca48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ca4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ca54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ca54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ca58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ca58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ca5c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11ca5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11ca60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11ca60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ca64: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11CA64u;
    SET_GPR_U32(ctx, 31, 0x11CA6Cu);
    ctx->pc = 0x11CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA64u;
    // 0x11ca68: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11CA64u, 0x11CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA6Cu;
label_11ca6c:
    // 0x11ca6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ca6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ca70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca74: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11ca78: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11CA78u;
    SET_GPR_U32(ctx, 31, 0x11CA80u);
    ctx->pc = 0x11CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA78u;
    // 0x11ca7c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11CA78u, 0x11CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA80u;
label_11ca80:
    // 0x11ca80: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x11CA80u;
    SET_GPR_U32(ctx, 31, 0x11CA88u);
    ctx->pc = 0x11CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA80u;
    // 0x11ca84: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x11CA80u, 0x11CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA88u;
label_11ca88:
    // 0x11ca88: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x11ca88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ca8c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11ca90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CA90u;
    {
        const bool branch_taken_0x11ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA90u;
        // 0x11ca94: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca90) {
            ctx->pc = 0x11CAB0u;
            goto label_11cab0;
        }
    }
    ctx->pc = 0x11CA98u;
    // 0x11ca98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ca9c: 0x2442c670  addiu       $v0, $v0, -0x3990
    ctx->pc = 0x11ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952560));
    // 0x11caa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11caa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11caa8: 0x800008  jr          $a0
    ctx->pc = 0x11CAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CAB0u: goto label_11cab0;
            case 0x11CAC4u: goto label_11cac4;
            case 0x11CAD8u: goto label_11cad8;
            case 0x11CAE8u: goto label_11cae8;
            case 0x11CAF8u: goto label_11caf8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CAA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11CAB0u;
label_11cab0:
    // 0x11cab0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11cab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11cab4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11cab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cabc: 0x0  nop
    ctx->pc = 0x11cabcu;
    // NOP
    // 0x11cac0: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cac4:
    // 0x11cac4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x11cac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x11cac8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11cac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11cacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11caccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cad0: 0x0  nop
    ctx->pc = 0x11cad0u;
    // NOP
    // 0x11cad4: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cad8:
    // 0x11cad8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11cad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11cadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cae0: 0x0  nop
    ctx->pc = 0x11cae0u;
    // NOP
    // 0x11cae4: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cae8:
    // 0x11cae8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11cae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11caec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11caecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11caf0: 0x0  nop
    ctx->pc = 0x11caf0u;
    // NOP
    // 0x11caf4: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11caf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11caf8:
    // 0x11caf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11caf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cb00: 0x26049b70  addiu       $a0, $s0, -0x6490
    ctx->pc = 0x11cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x11cb04: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11cb08: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11CB08u;
    SET_GPR_U32(ctx, 31, 0x11CB10u);
    ctx->pc = 0x11CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB08u;
    // 0x11cb0c: 0xe62015c0  swc1        $f0, 0x15C0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11CB08u, 0x11CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB10u;
label_11cb10:
    // 0x11cb10: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11cb10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cb14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11cb18: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11cb1c: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11cb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cb24: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11cb24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11cb28: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11cb28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11cb2c:
    // 0x11cb2c: 0x26430550  addiu       $v1, $s2, 0x550
    ctx->pc = 0x11cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x11cb30: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11cb34: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11cb34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cb38: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11cb38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cb3c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11cb3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11cb40: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11cb44: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11CB44u;
    SET_GPR_U32(ctx, 31, 0x11CB4Cu);
    ctx->pc = 0x11CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB44u;
    // 0x11cb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11CB44u, 0x11CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB4Cu;
label_11cb4c:
    // 0x11cb4c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11CB4Cu;
    SET_GPR_U32(ctx, 31, 0x11CB54u);
    ctx->pc = 0x11CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB4Cu;
    // 0x11cb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11CB4Cu, 0x11CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB54u;
label_11cb54:
    // 0x11cb54: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x11CB54u;
    {
        const bool branch_taken_0x11cb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb54) {
            ctx->pc = 0x11CDDCu;
            goto label_11cddc;
        }
    }
    ctx->pc = 0x11CB5Cu;
    // 0x11cb5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11cb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cb60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cb64: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x11CB64u;
    {
        const bool branch_taken_0x11cb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB64u;
        // 0x11cb68: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb64) {
            ctx->pc = 0x11CDDCu;
            goto label_11cddc;
        }
    }
    ctx->pc = 0x11CB6Cu;
label_11cb6c:
    // 0x11cb6c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11cb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11cb70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11cb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb74: 0x3c01bda8  lui         $at, 0xBDA8
    ctx->pc = 0x11cb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48552 << 16));
    // 0x11cb78: 0x34215879  ori         $at, $at, 0x5879
    ctx->pc = 0x11cb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22649);
    // 0x11cb7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cb80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cb80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb84: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11cb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb8c: 0x3c013a6b  lui         $at, 0x3A6B
    ctx->pc = 0x11cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14955 << 16));
    // 0x11cb90: 0x3421edfa  ori         $at, $at, 0xEDFA
    ctx->pc = 0x11cb90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60922);
    // 0x11cb94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11cb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cb98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cba4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11cba4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11cba8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11cba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cbac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11cbacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11cbb0: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11CBB0u;
    SET_GPR_U32(ctx, 31, 0x11CBB8u);
    ctx->pc = 0x11CBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBB0u;
    // 0x11cbb4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11CBB0u, 0x11CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBB8u;
label_11cbb8:
    // 0x11cbb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11cbb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11cbbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbc0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11cbc4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11CBC4u;
    SET_GPR_U32(ctx, 31, 0x11CBCCu);
    ctx->pc = 0x11CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBC4u;
    // 0x11cbc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11CBC4u, 0x11CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBCCu;
label_11cbcc:
    // 0x11cbcc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11cbd0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x11CBD0u;
    SET_GPR_U32(ctx, 31, 0x11CBD8u);
    ctx->pc = 0x11CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBD0u;
    // 0x11cbd4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x11CBD0u, 0x11CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBD8u;
label_11cbd8:
    // 0x11cbd8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x11cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11cbdc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x11cbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x11cbe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CBE0u;
    {
        const bool branch_taken_0x11cbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE0u;
        // 0x11cbe4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe0) {
            ctx->pc = 0x11CC00u;
            goto label_11cc00;
        }
    }
    ctx->pc = 0x11CBE8u;
    // 0x11cbe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11cbec: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x11cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x11cbf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cbf4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cbf8: 0x800008  jr          $a0
    ctx->pc = 0x11CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11CC00u: goto label_11cc00;
            case 0x11CC14u: goto label_11cc14;
            case 0x11CC28u: goto label_11cc28;
            case 0x11CC38u: goto label_11cc38;
            case 0x11CC48u: goto label_11cc48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CBF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11CC00u;
label_11cc00:
    // 0x11cc00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x11cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x11cc04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11cc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11cc08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc0c: 0x0  nop
    ctx->pc = 0x11cc0cu;
    // NOP
    // 0x11cc10: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cc14:
    // 0x11cc14: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x11cc18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x11cc18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x11cc1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc20: 0x0  nop
    ctx->pc = 0x11cc20u;
    // NOP
    // 0x11cc24: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cc28:
    // 0x11cc28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11cc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11cc2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc30: 0x0  nop
    ctx->pc = 0x11cc30u;
    // NOP
    // 0x11cc34: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cc38:
    // 0x11cc38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11cc3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cc3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc40: 0x0  nop
    ctx->pc = 0x11cc40u;
    // NOP
    // 0x11cc44: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
label_11cc48:
    // 0x11cc48: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11cc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cc4c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11cc50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cc54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cc54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cc58: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11cc5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cc60: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11cc64: 0xe62015c0  swc1        $f0, 0x15C0($s1)
    ctx->pc = 0x11cc64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5568), bits); }
    // 0x11cc68: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11cc68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11cc6c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11cc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11cc70:
    // 0x11cc70: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11cc70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11cc74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11CC74u;
    {
        const bool branch_taken_0x11cc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC74u;
        // 0x11cc78: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc74) {
            ctx->pc = 0x11CCA0u;
            goto label_11cca0;
        }
    }
    ctx->pc = 0x11CC7Cu;
    // 0x11cc7c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CC7Cu;
    {
        const bool branch_taken_0x11cc7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC7Cu;
        // 0x11cc80: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc7c) {
            ctx->pc = 0x11CCA0u;
            goto label_11cca0;
        }
    }
    ctx->pc = 0x11CC84u;
    // 0x11cc84: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11cc88: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11cc88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11cc8c: 0x26430550  addiu       $v1, $s2, 0x550
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1360));
    // 0x11cc90: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11cc90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cc94: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11cc94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11cc98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11cc98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11cc9c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11cc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11cca0:
    // 0x11cca0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11CCA0u;
    SET_GPR_U32(ctx, 31, 0x11CCA8u);
    ctx->pc = 0x11CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCA0u;
    // 0x11cca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11CCA0u, 0x11CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCA8u;
label_11cca8:
    // 0x11cca8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11CCA8u;
    SET_GPR_U32(ctx, 31, 0x11CCB0u);
    ctx->pc = 0x11CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCA8u;
    // 0x11ccac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11CCA8u, 0x11CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCB0u;
label_11ccb0:
    // 0x11ccb0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x11ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x11ccb4: 0xc62c15c0  lwc1        $f12, 0x15C0($s1)
    ctx->pc = 0x11ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11ccb8: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x11ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x11ccbc: 0xc0aa6b4  jal         func_2A9AD0
    ctx->pc = 0x11CCBCu;
    SET_GPR_U32(ctx, 31, 0x11CCC4u);
    ctx->pc = 0x11CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCBCu;
    // 0x11ccc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9AD0u, 0x11CCBCu, 0x11CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCC4u;
label_11ccc4:
    // 0x11ccc4: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11ccc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CCC8u;
    {
        const bool branch_taken_0x11ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCC8u;
        // 0x11cccc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccc8) {
            ctx->pc = 0x11CCD8u;
            goto label_11ccd8;
        }
    }
    ctx->pc = 0x11CCD0u;
    // 0x11ccd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11CCD0u;
    {
        const bool branch_taken_0x11ccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCD0u;
        // 0x11ccd4: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccd0) {
            ctx->pc = 0x11CD10u;
            goto label_11cd10;
        }
    }
    ctx->pc = 0x11CCD8u;
label_11ccd8:
    // 0x11ccd8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x11ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11ccdc: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CCDCu;
    {
        const bool branch_taken_0x11ccdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCDCu;
        // 0x11cce0: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccdc) {
            ctx->pc = 0x11CCFCu;
            goto label_11ccfc;
        }
    }
    ctx->pc = 0x11CCE4u;
    // 0x11cce4: 0xc640076c  lwc1        $f0, 0x76C($s2)
    ctx->pc = 0x11cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cce8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11cce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11ccec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11ccecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11ccf0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11ccf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11ccf4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11CCF4u;
    SET_GPR_U32(ctx, 31, 0x11CCFCu);
    ctx->pc = 0x11CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCF4u;
    // 0x11ccf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11CCF4u, 0x11CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCFCu;
label_11ccfc:
    // 0x11ccfc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11ccfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11cd00: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD00u;
    {
        const bool branch_taken_0x11cd00 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD00u;
        // 0x11cd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd00) {
            ctx->pc = 0x11CD14u;
            goto label_11cd14;
        }
    }
    ctx->pc = 0x11CD08u;
    // 0x11cd08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cd0c: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x11cd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_11cd10:
    // 0x11cd10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11cd14:
    // 0x11cd14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cd18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11cd18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11cd1c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11CD1Cu;
    SET_GPR_U32(ctx, 31, 0x11CD24u);
    ctx->pc = 0x11CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD1Cu;
    // 0x11cd20: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11CD1Cu, 0x11CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD24u;
label_11cd24:
    // 0x11cd24: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x11CD24u;
    {
        const bool branch_taken_0x11cd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD24u;
        // 0x11cd28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd24) {
            ctx->pc = 0x11CDE8u;
            goto label_11cde8;
        }
    }
    ctx->pc = 0x11CD2Cu;
label_11cd2c:
    // 0x11cd2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11cd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd34: 0x3c013de8  lui         $at, 0x3DE8
    ctx->pc = 0x11cd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15848 << 16));
    // 0x11cd38: 0x342109d5  ori         $at, $at, 0x9D5
    ctx->pc = 0x11cd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2517);
    // 0x11cd3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cd40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11cd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd44: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11cd48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11cd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd4c: 0x3c013f39  lui         $at, 0x3F39
    ctx->pc = 0x11cd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16185 << 16));
    // 0x11cd50: 0x3421a027  ori         $at, $at, 0xA027
    ctx->pc = 0x11cd50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40999);
    // 0x11cd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11cd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cd58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11cd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cd5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cd60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cd64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11cd64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11cd68: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11cd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cd6c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11cd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11cd70: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11CD70u;
    SET_GPR_U32(ctx, 31, 0x11CD78u);
    ctx->pc = 0x11CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD70u;
    // 0x11cd74: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11CD70u, 0x11CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD78u;
label_11cd78:
    // 0x11cd78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11cd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11cd7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11cd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cd80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cd84: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x11cd84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x11cd88: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11CD88u;
    SET_GPR_U32(ctx, 31, 0x11CD90u);
    ctx->pc = 0x11CD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD88u;
    // 0x11cd8c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11CD88u, 0x11CD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD90u;
label_11cd90:
    // 0x11cd90: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11cd90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cd94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cd98: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11cd98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11cd9c:
    // 0x11cd9c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11CD9Cu;
    SET_GPR_U32(ctx, 31, 0x11CDA4u);
    ctx->pc = 0x11CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD9Cu;
    // 0x11cda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11CD9Cu, 0x11CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDA4u;
label_11cda4:
    // 0x11cda4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11cda4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11cda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdac: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11cdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11cdb0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11CDB0u;
    SET_GPR_U32(ctx, 31, 0x11CDB8u);
    ctx->pc = 0x11CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDB0u;
    // 0x11cdb4: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11CDB0u, 0x11CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDB8u;
label_11cdb8:
    // 0x11cdb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CDB8u;
    {
        const bool branch_taken_0x11cdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDB8u;
        // 0x11cdbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdb8) {
            ctx->pc = 0x11CDDCu;
            goto label_11cddc;
        }
    }
    ctx->pc = 0x11CDC0u;
    // 0x11cdc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdc4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11CDC4u;
    SET_GPR_U32(ctx, 31, 0x11CDCCu);
    ctx->pc = 0x11CDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDC4u;
    // 0x11cdc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11CDC4u, 0x11CDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDCCu;
label_11cdcc:
    // 0x11cdcc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11cdccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11cdd0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11cdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11cdd4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11cdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11cdd8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11cdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11cddc:
    // 0x11cddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cde0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11cde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11cde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11cde8:
    // 0x11cde8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11CDE8u;
    SET_GPR_U32(ctx, 31, 0x11CDF0u);
    ctx->pc = 0x11CDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDE8u;
    // 0x11cdec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11CDE8u, 0x11CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDF0u;
label_11cdf0:
    // 0x11cdf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cdf4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11CDF4u;
    SET_GPR_U32(ctx, 31, 0x11CDFCu);
    ctx->pc = 0x11CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDF4u;
    // 0x11cdf8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11CDF4u, 0x11CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDFCu;
label_11cdfc:
    // 0x11cdfc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11CDFCu;
    {
        const bool branch_taken_0x11cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CDFCu;
        // 0x11ce00: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cdfc) {
            ctx->pc = 0x11CECCu;
            goto label_11cecc;
        }
    }
    ctx->pc = 0x11CE04u;
label_11ce04:
    // 0x11ce04: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11ce08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ce08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce0c: 0x3c01bdce  lui         $at, 0xBDCE
    ctx->pc = 0x11ce0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48590 << 16));
    // 0x11ce10: 0x34213bcd  ori         $at, $at, 0x3BCD
    ctx->pc = 0x11ce10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15309);
    // 0x11ce14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ce14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ce18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11ce18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce1c: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11ce1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ce20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11ce20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce24: 0x3c013eb0  lui         $at, 0x3EB0
    ctx->pc = 0x11ce24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16048 << 16));
    // 0x11ce28: 0x3421f27c  ori         $at, $at, 0xF27C
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62076);
    // 0x11ce2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ce2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ce30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ce34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ce38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ce3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ce3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ce40: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11ce40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11ce44: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11ce44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11ce48: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11CE48u;
    SET_GPR_U32(ctx, 31, 0x11CE50u);
    ctx->pc = 0x11CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE48u;
    // 0x11ce4c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11CE48u, 0x11CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE50u;
label_11ce50:
    // 0x11ce50: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11ce54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11ce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ce58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce5c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x11ce5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x11ce60: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11CE60u;
    SET_GPR_U32(ctx, 31, 0x11CE68u);
    ctx->pc = 0x11CE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE60u;
    // 0x11ce64: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11CE60u, 0x11CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE68u;
label_11ce68:
    // 0x11ce68: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11ce68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11ce6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ce70: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11ce70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11ce74:
    // 0x11ce74: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11CE74u;
    SET_GPR_U32(ctx, 31, 0x11CE7Cu);
    ctx->pc = 0x11CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE74u;
    // 0x11ce78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11CE74u, 0x11CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE7Cu;
label_11ce7c:
    // 0x11ce7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11CE7Cu;
    SET_GPR_U32(ctx, 31, 0x11CE84u);
    ctx->pc = 0x11CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE7Cu;
    // 0x11ce80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11CE7Cu, 0x11CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE84u;
label_11ce84:
    // 0x11ce84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CE84u;
    {
        const bool branch_taken_0x11ce84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE84u;
        // 0x11ce88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ce84) {
            ctx->pc = 0x11CEA8u;
            goto label_11cea8;
        }
    }
    ctx->pc = 0x11CE8Cu;
    // 0x11ce8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce90: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11CE90u;
    SET_GPR_U32(ctx, 31, 0x11CE98u);
    ctx->pc = 0x11CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE90u;
    // 0x11ce94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11CE90u, 0x11CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE98u;
label_11ce98:
    // 0x11ce98: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11ce98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ce9c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11ce9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11cea0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11cea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11cea4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11cea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11cea8:
    // 0x11cea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ceac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ceacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ceb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ceb4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11CEB4u;
    SET_GPR_U32(ctx, 31, 0x11CEBCu);
    ctx->pc = 0x11CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEB4u;
    // 0x11ceb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11CEB4u, 0x11CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEBCu;
label_11cebc:
    // 0x11cebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cec0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11CEC0u;
    SET_GPR_U32(ctx, 31, 0x11CEC8u);
    ctx->pc = 0x11CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEC0u;
    // 0x11cec4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11CEC0u, 0x11CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEC8u;
label_11cec8:
    // 0x11cec8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11cec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11cecc:
    // 0x11cecc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11ceccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ced0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ced0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ced4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ced4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ced8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11ced8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11cedc: 0x3e00008  jr          $ra
    ctx->pc = 0x11CEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEDCu;
        // 0x11cee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CEE4u;
    // 0x11cee4: 0x0  nop
    ctx->pc = 0x11cee4u;
    // NOP
    ctx->pc = 0x11cee8u;
}
