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

// Function: func_0011CEE8
// Address: 0x11cee8 - 0x11d198
void func_0011CEE8_0x11cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011CEE8_0x11cee8");
#endif

    switch (ctx->pc) {
        case 0x11cf34u: goto label_11cf34;
        case 0x11cf40u: goto label_11cf40;
        case 0x11cf64u: goto label_11cf64;
        case 0x11cf6cu: goto label_11cf6c;
        case 0x11cfbcu: goto label_11cfbc;
        case 0x11cfd0u: goto label_11cfd0;
        case 0x11cff0u: goto label_11cff0;
        case 0x11d034u: goto label_11d034;
        case 0x11d03cu: goto label_11d03c;
        case 0x11d05cu: goto label_11d05c;
        case 0x11d09cu: goto label_11d09c;
        case 0x11d0a8u: goto label_11d0a8;
        case 0x11d0ecu: goto label_11d0ec;
        case 0x11d128u: goto label_11d128;
        case 0x11d130u: goto label_11d130;
        case 0x11d140u: goto label_11d140;
        case 0x11d174u: goto label_11d174;
        case 0x11d180u: goto label_11d180;
        default: break;
    }

    ctx->pc = 0x11cee8u;

    // 0x11cee8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ceec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11cef0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11cef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11cef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11cef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cef8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11cefc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11cefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11cf04: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11cf08: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11cf08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11cf0c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11cf10: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11cf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11cf14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cf14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cf18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11cf18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf1c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11cf20: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11cf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11cf24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11cf28: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11cf28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11cf2c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11CF2Cu;
    SET_GPR_U32(ctx, 31, 0x11CF34u);
    ctx->pc = 0x11CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF2Cu;
    // 0x11cf30: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11CF2Cu, 0x11CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF34u;
label_11cf34:
    // 0x11cf34: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11cf38: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11CF38u;
    SET_GPR_U32(ctx, 31, 0x11CF40u);
    ctx->pc = 0x11CF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF38u;
    // 0x11cf3c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11CF38u, 0x11CF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF40u;
label_11cf40:
    // 0x11cf40: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11cf40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cf44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF44u;
    {
        const bool branch_taken_0x11cf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF44u;
        // 0x11cf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf44) {
            ctx->pc = 0x11CF5Cu;
            goto label_11cf5c;
        }
    }
    ctx->pc = 0x11CF4Cu;
    // 0x11cf4c: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11CF4Cu;
    {
        const bool branch_taken_0x11cf4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cf4c) {
            ctx->pc = 0x11CF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CF4Cu;
            // 0x11cf50: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D000u;
            goto label_11d000;
        }
    }
    ctx->pc = 0x11CF54u;
    // 0x11cf54: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF54u;
        // 0x11cf58: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11D184u;
            goto label_11d184;
        }
    }
    ctx->pc = 0x11CF5Cu;
label_11cf5c:
    // 0x11cf5c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11CF5Cu;
    SET_GPR_U32(ctx, 31, 0x11CF64u);
    ctx->pc = 0x11CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF5Cu;
    // 0x11cf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11CF5Cu, 0x11CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF64u;
label_11cf64:
    // 0x11cf64: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11CF64u;
    SET_GPR_U32(ctx, 31, 0x11CF6Cu);
    ctx->pc = 0x11CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF64u;
    // 0x11cf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11CF64u, 0x11CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF6Cu;
label_11cf6c:
    // 0x11cf6c: 0x3c013d3e  lui         $at, 0x3D3E
    ctx->pc = 0x11cf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15678 << 16));
    // 0x11cf70: 0x34210ded  ori         $at, $at, 0xDED
    ctx->pc = 0x11cf70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3565);
    // 0x11cf74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cf78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11cf78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf7c: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x11cf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x11cf80: 0x3421068e  ori         $at, $at, 0x68E
    ctx->pc = 0x11cf80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1678);
    // 0x11cf84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11cf84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11cf88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11cf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11cf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf98: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11cf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11cf9c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11cf9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11cfa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11cfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cfa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11cfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfa8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11cfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cfac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11cfacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11cfb0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x11cfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11cfb4: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11CFB4u;
    SET_GPR_U32(ctx, 31, 0x11CFBCu);
    ctx->pc = 0x11CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFB4u;
    // 0x11cfb8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11CFB4u, 0x11CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFBCu;
label_11cfbc:
    // 0x11cfbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11cfbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11cfc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11cfc8: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11CFC8u;
    SET_GPR_U32(ctx, 31, 0x11CFD0u);
    ctx->pc = 0x11CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFC8u;
    // 0x11cfcc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11CFC8u, 0x11CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFD0u;
label_11cfd0:
    // 0x11cfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cfd4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11cfd8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11cfdc: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11cfe0: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11cfe0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11cfe4: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11cfe8: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11CFE8u;
    SET_GPR_U32(ctx, 31, 0x11CFF0u);
    ctx->pc = 0x11CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CFE8u;
    // 0x11cfec: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11CFE8u, 0x11CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CFF0u;
label_11cff0:
    // 0x11cff0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11cff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11cff4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11cff8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11cff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11cffc: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11cffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_11d000:
    // 0x11d000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11D000u;
    {
        const bool branch_taken_0x11d000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D000u;
        // 0x11d004: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d000) {
            ctx->pc = 0x11D02Cu;
            goto label_11d02c;
        }
    }
    ctx->pc = 0x11D008u;
    // 0x11d008: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11D008u;
    {
        const bool branch_taken_0x11d008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D008u;
        // 0x11d00c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d008) {
            ctx->pc = 0x11D02Cu;
            goto label_11d02c;
        }
    }
    ctx->pc = 0x11D010u;
    // 0x11d010: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11d010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11d014: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11d014u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11d018: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x11d018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11d01c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11d01cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d020: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11d020u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d024: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11d024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11d028: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11d028u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11d02c:
    // 0x11d02c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11D02Cu;
    SET_GPR_U32(ctx, 31, 0x11D034u);
    ctx->pc = 0x11D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D02Cu;
    // 0x11d030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11D02Cu, 0x11D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D034u;
label_11d034:
    // 0x11d034: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11D034u;
    SET_GPR_U32(ctx, 31, 0x11D03Cu);
    ctx->pc = 0x11D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D034u;
    // 0x11d038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11D034u, 0x11D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D03Cu;
label_11d03c:
    // 0x11d03c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D03Cu;
    {
        const bool branch_taken_0x11d03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d03c) {
            ctx->pc = 0x11D088u;
            goto label_11d088;
        }
    }
    ctx->pc = 0x11D044u;
    // 0x11d044: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11d048: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D048u;
    {
        const bool branch_taken_0x11d048 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D048u;
        // 0x11d04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d048) {
            ctx->pc = 0x11D078u;
            goto label_11d078;
        }
    }
    ctx->pc = 0x11D050u;
    // 0x11d050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d054: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11D054u;
    SET_GPR_U32(ctx, 31, 0x11D05Cu);
    ctx->pc = 0x11D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D054u;
    // 0x11d058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11D054u, 0x11D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D05Cu;
label_11d05c:
    // 0x11d05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d060: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d064: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11d064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11d068: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11d068u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11d06c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11d06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11d070: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D070u;
    {
        const bool branch_taken_0x11d070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D070u;
        // 0x11d074: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d070) {
            ctx->pc = 0x11D088u;
            goto label_11d088;
        }
    }
    ctx->pc = 0x11D078u;
label_11d078:
    // 0x11d078: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11d078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11d07c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11d080: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d084: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11d084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11d088:
    // 0x11d088: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11d088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11d08c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11d08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11d090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d094: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11D094u;
    SET_GPR_U32(ctx, 31, 0x11D09Cu);
    ctx->pc = 0x11D098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D094u;
    // 0x11d098: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11D094u, 0x11D09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D09Cu;
label_11d09c:
    // 0x11d09c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11d09cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11d0a0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11D0A0u;
    SET_GPR_U32(ctx, 31, 0x11D0A8u);
    ctx->pc = 0x11D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0A0u;
    // 0x11d0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11D0A0u, 0x11D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0A8u;
label_11d0a8:
    // 0x11d0a8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11d0a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11d0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11d0b0: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x11D0B0u;
    {
        const bool branch_taken_0x11d0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0b0) {
            ctx->pc = 0x11D0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0B0u;
            // 0x11d0b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D184u;
            goto label_11d184;
        }
    }
    ctx->pc = 0x11D0B8u;
    // 0x11d0b8: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11d0bc: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x11D0BCu;
    {
        const bool branch_taken_0x11d0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d0bc) {
            ctx->pc = 0x11D0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D0BCu;
            // 0x11d0c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D184u;
            goto label_11d184;
        }
    }
    ctx->pc = 0x11D0C4u;
    // 0x11d0c4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D0C4u;
    {
        const bool branch_taken_0x11d0c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0C4u;
        // 0x11d0c8: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0c4) {
            ctx->pc = 0x11D0ECu;
            goto label_11d0ec;
        }
    }
    ctx->pc = 0x11D0CCu;
    // 0x11d0cc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11d0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11d0d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11d0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11d0d4: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11d0d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11d0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11d0dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11d0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11d0e0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11d0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11d0e4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11D0E4u;
    SET_GPR_U32(ctx, 31, 0x11D0ECu);
    ctx->pc = 0x11D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0E4u;
    // 0x11d0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11D0E4u, 0x11D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0ECu;
label_11d0ec:
    // 0x11d0ec: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11d0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11d0f0: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11D0F0u;
    {
        const bool branch_taken_0x11d0f0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0F0u;
        // 0x11d0f4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0f0) {
            ctx->pc = 0x11D150u;
            goto label_11d150;
        }
    }
    ctx->pc = 0x11D0F8u;
    // 0x11d0f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11d0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11d0fc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11d0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11d100: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11d100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11d104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d108: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11d10c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d110: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d114: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d118: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d118u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d11c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11d11cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d120: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D120u;
    SET_GPR_U32(ctx, 31, 0x11D128u);
    ctx->pc = 0x11D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D120u;
    // 0x11d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D120u, 0x11D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D128u;
label_11d128:
    // 0x11d128: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11D128u;
    SET_GPR_U32(ctx, 31, 0x11D130u);
    ctx->pc = 0x11D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D128u;
    // 0x11d12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11D128u, 0x11D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D130u;
label_11d130:
    // 0x11d130: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11d134: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11d134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11d138: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11D138u;
    SET_GPR_U32(ctx, 31, 0x11D140u);
    ctx->pc = 0x11D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D138u;
    // 0x11d13c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11D138u, 0x11D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D140u;
label_11d140:
    // 0x11d140: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11d140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11d144: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11d148: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11D148u;
    {
        const bool branch_taken_0x11d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D148u;
        // 0x11d14c: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d148) {
            ctx->pc = 0x11D174u;
            goto label_11d174;
        }
    }
    ctx->pc = 0x11D150u;
label_11d150:
    // 0x11d150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d154: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11d154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11d158: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11d158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11d15c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11d15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11d160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11d164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11d168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d16c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11D16Cu;
    SET_GPR_U32(ctx, 31, 0x11D174u);
    ctx->pc = 0x11D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D16Cu;
    // 0x11d170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11D16Cu, 0x11D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D174u;
label_11d174:
    // 0x11d174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d178: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11D178u;
    SET_GPR_U32(ctx, 31, 0x11D180u);
    ctx->pc = 0x11D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D178u;
    // 0x11d17c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11D178u, 0x11D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D180u;
label_11d180:
    // 0x11d180: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11d180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11d184:
    // 0x11d184: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11d184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d188: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d18c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11d18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11d190: 0x3e00008  jr          $ra
    ctx->pc = 0x11D190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D190u;
        // 0x11d194: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D198u;
}
