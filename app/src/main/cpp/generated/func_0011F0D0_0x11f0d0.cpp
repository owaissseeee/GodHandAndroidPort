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

// Function: func_0011F0D0
// Address: 0x11f0d0 - 0x11f438
void func_0011F0D0_0x11f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011F0D0_0x11f0d0");
#endif

    switch (ctx->pc) {
        case 0x11f124u: goto label_11f124;
        case 0x11f130u: goto label_11f130;
        case 0x11f174u: goto label_11f174;
        case 0x11f17cu: goto label_11f17c;
        case 0x11f1c8u: goto label_11f1c8;
        case 0x11f1dcu: goto label_11f1dc;
        case 0x11f1fcu: goto label_11f1fc;
        case 0x11f210u: goto label_11f210;
        case 0x11f218u: goto label_11f218;
        case 0x11f240u: goto label_11f240;
        case 0x11f264u: goto label_11f264;
        case 0x11f270u: goto label_11f270;
        case 0x11f2b4u: goto label_11f2b4;
        case 0x11f2c0u: goto label_11f2c0;
        case 0x11f310u: goto label_11f310;
        case 0x11f330u: goto label_11f330;
        case 0x11f340u: goto label_11f340;
        case 0x11f358u: goto label_11f358;
        case 0x11f394u: goto label_11f394;
        case 0x11f3a4u: goto label_11f3a4;
        case 0x11f3b0u: goto label_11f3b0;
        case 0x11f3c0u: goto label_11f3c0;
        case 0x11f3e0u: goto label_11f3e0;
        case 0x11f3e8u: goto label_11f3e8;
        case 0x11f410u: goto label_11f410;
        case 0x11f41cu: goto label_11f41c;
        default: break;
    }

    ctx->pc = 0x11f0d0u;

    // 0x11f0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11f0d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11f0d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f0dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11f0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f0e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f0ec: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11f0f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11f0f4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11f0f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11f0f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11f0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11f0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f100: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11f100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11f104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f108: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11f108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f10c: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x11f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x11f110: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x11f110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x11f114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f118: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x11f118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x11f11c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11F11Cu;
    SET_GPR_U32(ctx, 31, 0x11F124u);
    ctx->pc = 0x11F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F11Cu;
    // 0x11f120: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11F11Cu, 0x11F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F124u;
label_11f124:
    // 0x11f124: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11f124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11f128: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11F128u;
    SET_GPR_U32(ctx, 31, 0x11F130u);
    ctx->pc = 0x11F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F128u;
    // 0x11f12c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11F128u, 0x11F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F130u;
label_11f130:
    // 0x11f130: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x11f130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11f134: 0x10720034  beq         $v1, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x11F134u;
    {
        const bool branch_taken_0x11f134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x11F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F134u;
        // 0x11f138: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f134) {
            ctx->pc = 0x11F208u;
            goto label_11f208;
        }
    }
    ctx->pc = 0x11F13Cu;
    // 0x11f13c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F13Cu;
    {
        const bool branch_taken_0x11f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f13c) {
            ctx->pc = 0x11F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F13Cu;
            // 0x11f140: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F154u;
            goto label_11f154;
        }
    }
    ctx->pc = 0x11F144u;
    // 0x11f144: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F144u;
    {
        const bool branch_taken_0x11f144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f144) {
            ctx->pc = 0x11F16Cu;
            goto label_11f16c;
        }
    }
    ctx->pc = 0x11F14Cu;
    // 0x11f14c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x11F14Cu;
    {
        const bool branch_taken_0x11f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F14Cu;
        // 0x11f150: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f14c) {
            ctx->pc = 0x11F420u;
            goto label_11f420;
        }
    }
    ctx->pc = 0x11F154u;
label_11f154:
    // 0x11f154: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x11F154u;
    {
        const bool branch_taken_0x11f154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F154u;
        // 0x11f158: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f154) {
            ctx->pc = 0x11F380u;
            goto label_11f380;
        }
    }
    ctx->pc = 0x11F15Cu;
    // 0x11f15c: 0x5062009c  beql        $v1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x11F15Cu;
    {
        const bool branch_taken_0x11f15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f15c) {
            ctx->pc = 0x11F160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F15Cu;
            // 0x11f160: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F3D0u;
            goto label_11f3d0;
        }
    }
    ctx->pc = 0x11F164u;
    // 0x11f164: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x11F164u;
    {
        const bool branch_taken_0x11f164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F164u;
        // 0x11f168: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f164) {
            ctx->pc = 0x11F420u;
            goto label_11f420;
        }
    }
    ctx->pc = 0x11F16Cu;
label_11f16c:
    // 0x11f16c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11F16Cu;
    SET_GPR_U32(ctx, 31, 0x11F174u);
    ctx->pc = 0x11F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F16Cu;
    // 0x11f170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11F16Cu, 0x11F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F174u;
label_11f174:
    // 0x11f174: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11F174u;
    SET_GPR_U32(ctx, 31, 0x11F17Cu);
    ctx->pc = 0x11F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F174u;
    // 0x11f178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11F174u, 0x11F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F17Cu;
label_11f17c:
    // 0x11f17c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11f180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f184: 0x3c013dc6  lui         $at, 0x3DC6
    ctx->pc = 0x11f184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15814 << 16));
    // 0x11f188: 0x34217382  ori         $at, $at, 0x7382
    ctx->pc = 0x11f188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29570);
    // 0x11f18c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11f18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f190: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11f190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f194: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11f194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f19c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x11f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x11f1a0: 0x3421ad43  ori         $at, $at, 0xAD43
    ctx->pc = 0x11f1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44355);
    // 0x11f1a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f1a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f1b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f1b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f1b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11f1b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f1bc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11f1bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f1c0: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11F1C0u;
    SET_GPR_U32(ctx, 31, 0x11F1C8u);
    ctx->pc = 0x11F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1C0u;
    // 0x11f1c4: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11F1C0u, 0x11F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1C8u;
label_11f1c8:
    // 0x11f1c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f1c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1d0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x11f1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11f1d4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11F1D4u;
    SET_GPR_U32(ctx, 31, 0x11F1DCu);
    ctx->pc = 0x11F1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1D4u;
    // 0x11f1d8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11F1D4u, 0x11F1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1DCu;
label_11f1dc:
    // 0x11f1dc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11f1e0: 0xae1215b4  sw          $s2, 0x15B4($s0)
    ctx->pc = 0x11f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 18));
    // 0x11f1e4: 0xae1215b0  sw          $s2, 0x15B0($s0)
    ctx->pc = 0x11f1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 18));
    // 0x11f1e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11f1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11f1ec: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x11f1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f1f0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11f1f4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F1F4u;
    SET_GPR_U32(ctx, 31, 0x11F1FCu);
    ctx->pc = 0x11F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1F4u;
    // 0x11f1f8: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F1F4u, 0x11F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1FCu;
label_11f1fc:
    // 0x11f1fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11f1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11f200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f204: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11f204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_11f208:
    // 0x11f208: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11F208u;
    SET_GPR_U32(ctx, 31, 0x11F210u);
    ctx->pc = 0x11F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F208u;
    // 0x11f20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11F208u, 0x11F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F210u;
label_11f210:
    // 0x11f210: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11F210u;
    SET_GPR_U32(ctx, 31, 0x11F218u);
    ctx->pc = 0x11F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F210u;
    // 0x11f214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11F210u, 0x11F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F218u;
label_11f218:
    // 0x11f218: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11F218u;
    {
        const bool branch_taken_0x11f218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f218) {
            ctx->pc = 0x11F250u;
            goto label_11f250;
        }
    }
    ctx->pc = 0x11F220u;
    // 0x11f220: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11f220u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11f224: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F224u;
    {
        const bool branch_taken_0x11f224 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F224u;
        // 0x11f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f224) {
            ctx->pc = 0x11F234u;
            goto label_11f234;
        }
    }
    ctx->pc = 0x11F22Cu;
    // 0x11f22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f230: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x11f230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_11f234:
    // 0x11f234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f238: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11F238u;
    SET_GPR_U32(ctx, 31, 0x11F240u);
    ctx->pc = 0x11F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F238u;
    // 0x11f23c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11F238u, 0x11F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F240u;
label_11f240:
    // 0x11f240: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x11f240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f244: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x11f244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f248: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x11f248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11f24c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x11f24cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_11f250:
    // 0x11f250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f25c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11F25Cu;
    SET_GPR_U32(ctx, 31, 0x11F264u);
    ctx->pc = 0x11F260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F25Cu;
    // 0x11f260: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11F25Cu, 0x11F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F264u;
label_11f264:
    // 0x11f264: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11f264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11f268: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11F268u;
    SET_GPR_U32(ctx, 31, 0x11F270u);
    ctx->pc = 0x11F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F268u;
    // 0x11f26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11F268u, 0x11F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F270u;
label_11f270:
    // 0x11f270: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11f270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x11f274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11f278: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11F278u;
    {
        const bool branch_taken_0x11f278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F278u;
        // 0x11f27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f278) {
            ctx->pc = 0x11F2C8u;
            goto label_11f2c8;
        }
    }
    ctx->pc = 0x11F280u;
    // 0x11f280: 0x8e0215b4  lw          $v0, 0x15B4($s0)
    ctx->pc = 0x11f280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x11f284: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F284u;
    {
        const bool branch_taken_0x11f284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F284u;
        // 0x11f288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f284) {
            ctx->pc = 0x11F2C8u;
            goto label_11f2c8;
        }
    }
    ctx->pc = 0x11F28Cu;
    // 0x11f28c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F28Cu;
    {
        const bool branch_taken_0x11f28c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F28Cu;
        // 0x11f290: 0xae0015b4  sw          $zero, 0x15B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f28c) {
            ctx->pc = 0x11F2B4u;
            goto label_11f2b4;
        }
    }
    ctx->pc = 0x11F294u;
    // 0x11f294: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11f294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11f298: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f29c: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x11f29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f2a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f2a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f2a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f2a8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f2a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f2ac: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F2ACu;
    SET_GPR_U32(ctx, 31, 0x11F2B4u);
    ctx->pc = 0x11F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2ACu;
    // 0x11f2b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F2ACu, 0x11F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2B4u;
label_11f2b4:
    // 0x11f2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f2b8: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F2B8u;
    SET_GPR_U32(ctx, 31, 0x11F2C0u);
    ctx->pc = 0x11F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F2B8u;
    // 0x11f2bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F2B8u, 0x11F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2C0u;
label_11f2c0:
    // 0x11f2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F2C0u;
    {
        const bool branch_taken_0x11f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2C0u;
        // 0x11f2c4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2c0) {
            ctx->pc = 0x11F2D0u;
            goto label_11f2d0;
        }
    }
    ctx->pc = 0x11F2C8u;
label_11f2c8:
    // 0x11f2c8: 0xae0215b4  sw          $v0, 0x15B4($s0)
    ctx->pc = 0x11f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5556), GPR_U32(ctx, 2));
    // 0x11f2cc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11f2ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_11f2d0:
    // 0x11f2d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11f2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11f2d4: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x11F2D4u;
    {
        const bool branch_taken_0x11f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f2d4) {
            ctx->pc = 0x11F2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F2D4u;
            // 0x11f2d8: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F35Cu;
            goto label_11f35c;
        }
    }
    ctx->pc = 0x11F2DCu;
    // 0x11f2dc: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x11f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x11f2e0: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x11F2E0u;
    {
        const bool branch_taken_0x11f2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f2e0) {
            ctx->pc = 0x11F2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F2E0u;
            // 0x11f2e4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F35Cu;
            goto label_11f35c;
        }
    }
    ctx->pc = 0x11F2E8u;
    // 0x11f2e8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F2E8u;
    {
        const bool branch_taken_0x11f2e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E8u;
        // 0x11f2ec: 0xae0015b0  sw          $zero, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2e8) {
            ctx->pc = 0x11F310u;
            goto label_11f310;
        }
    }
    ctx->pc = 0x11F2F0u;
    // 0x11f2f0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x11f2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x11f2f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f2f8: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x11f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f2fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f2fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f300: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f300u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f304: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f304u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f308: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F308u;
    SET_GPR_U32(ctx, 31, 0x11F310u);
    ctx->pc = 0x11F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F308u;
    // 0x11f30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F308u, 0x11F310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F310u;
label_11f310:
    // 0x11f310: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11f310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11f314: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11F314u;
    {
        const bool branch_taken_0x11f314 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11f314) {
            ctx->pc = 0x11F318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F314u;
            // 0x11f318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F350u;
            goto label_11f350;
        }
    }
    ctx->pc = 0x11F31Cu;
    // 0x11f31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f320: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11f320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11f324: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11f328: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11F328u;
    SET_GPR_U32(ctx, 31, 0x11F330u);
    ctx->pc = 0x11F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F328u;
    // 0x11f32c: 0xa602054a  sh          $v0, 0x54A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11F328u, 0x11F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F330u;
label_11f330:
    // 0x11f330: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11f330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11f334: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11f338: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F338u;
    SET_GPR_U32(ctx, 31, 0x11F340u);
    ctx->pc = 0x11F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F338u;
    // 0x11f33c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F338u, 0x11F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F340u;
label_11f340:
    // 0x11f340: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x11f340u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x11f344: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f348: 0xa6020434  sh          $v0, 0x434($s0)
    ctx->pc = 0x11f348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f350:
    // 0x11f350: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F350u;
    SET_GPR_U32(ctx, 31, 0x11F358u);
    ctx->pc = 0x11F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F350u;
    // 0x11f354: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F350u, 0x11F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F358u;
label_11f358:
    // 0x11f358: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x11f358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_11f35c:
    // 0x11f35c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x11f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x11f360: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x11F360u;
    {
        const bool branch_taken_0x11f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f360) {
            ctx->pc = 0x11F364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F360u;
            // 0x11f364: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F420u;
            goto label_11f420;
        }
    }
    ctx->pc = 0x11F368u;
    // 0x11f368: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x11f368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x11f36c: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x11f36cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x11f370: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11F370u;
    {
        const bool branch_taken_0x11f370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F370u;
        // 0x11f374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f370) {
            ctx->pc = 0x11F41Cu;
            goto label_11f41c;
        }
    }
    ctx->pc = 0x11F378u;
    // 0x11f378: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x11F378u;
    {
        const bool branch_taken_0x11f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F378u;
        // 0x11f37c: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f378) {
            ctx->pc = 0x11F41Cu;
            goto label_11f41c;
        }
    }
    ctx->pc = 0x11F380u;
label_11f380:
    // 0x11f380: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11f380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f388: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x11f388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x11f38c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11F38Cu;
    SET_GPR_U32(ctx, 31, 0x11F394u);
    ctx->pc = 0x11F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F38Cu;
    // 0x11f390: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11F38Cu, 0x11F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F394u;
label_11f394:
    // 0x11f394: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x11f394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x11f398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f39c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F39Cu;
    SET_GPR_U32(ctx, 31, 0x11F3A4u);
    ctx->pc = 0x11F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F39Cu;
    // 0x11f3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F39Cu, 0x11F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3A4u;
label_11f3a4:
    // 0x11f3a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11f3a8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11F3A8u;
    SET_GPR_U32(ctx, 31, 0x11F3B0u);
    ctx->pc = 0x11F3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3A8u;
    // 0x11f3ac: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11F3A8u, 0x11F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3B0u;
label_11f3b0:
    // 0x11f3b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11f3b4: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11f3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11f3b8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F3B8u;
    SET_GPR_U32(ctx, 31, 0x11F3C0u);
    ctx->pc = 0x11F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3B8u;
    // 0x11f3bc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F3B8u, 0x11F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3C0u;
label_11f3c0:
    // 0x11f3c0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x11f3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x11f3c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11f3c8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x11f3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11f3cc: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x11f3ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
label_11f3d0:
    // 0x11f3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f3d4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f3d8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11F3D8u;
    SET_GPR_U32(ctx, 31, 0x11F3E0u);
    ctx->pc = 0x11F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3D8u;
    // 0x11f3dc: 0xa6020434  sh          $v0, 0x434($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11F3D8u, 0x11F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3E0u;
label_11f3e0:
    // 0x11f3e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11F3E0u;
    SET_GPR_U32(ctx, 31, 0x11F3E8u);
    ctx->pc = 0x11F3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3E0u;
    // 0x11f3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11F3E0u, 0x11F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3E8u;
label_11f3e8:
    // 0x11f3e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F3E8u;
    {
        const bool branch_taken_0x11f3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3E8u;
        // 0x11f3ec: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f3e8) {
            ctx->pc = 0x11F3FCu;
            goto label_11f3fc;
        }
    }
    ctx->pc = 0x11F3F0u;
    // 0x11f3f0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x11f3f4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f3f8: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11f3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
label_11f3fc:
    // 0x11f3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f400: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f408: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11F408u;
    SET_GPR_U32(ctx, 31, 0x11F410u);
    ctx->pc = 0x11F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F408u;
    // 0x11f40c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11F408u, 0x11F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F410u;
label_11f410:
    // 0x11f410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f414: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11F414u;
    SET_GPR_U32(ctx, 31, 0x11F41Cu);
    ctx->pc = 0x11F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F414u;
    // 0x11f418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11F414u, 0x11F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F41Cu;
label_11f41c:
    // 0x11f41c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11f420:
    // 0x11f420: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11f428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f42c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f430: 0x3e00008  jr          $ra
    ctx->pc = 0x11F430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F430u;
        // 0x11f434: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F438u;
}
