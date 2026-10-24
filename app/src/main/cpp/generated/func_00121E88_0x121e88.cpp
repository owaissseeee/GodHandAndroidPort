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

// Function: func_00121E88
// Address: 0x121e88 - 0x122140
void func_00121E88_0x121e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00121E88_0x121e88");
#endif

    switch (ctx->pc) {
        case 0x121ec8u: goto label_121ec8;
        case 0x121ed4u: goto label_121ed4;
        case 0x121f50u: goto label_121f50;
        case 0x121f64u: goto label_121f64;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f74u: goto label_121f74;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fd0u: goto label_121fd0;
        case 0x121ff0u: goto label_121ff0;
        case 0x122030u: goto label_122030;
        case 0x12203cu: goto label_12203c;
        case 0x12206cu: goto label_12206c;
        case 0x122094u: goto label_122094;
        case 0x1220d0u: goto label_1220d0;
        case 0x1220d8u: goto label_1220d8;
        case 0x1220e4u: goto label_1220e4;
        case 0x122118u: goto label_122118;
        case 0x122124u: goto label_122124;
        default: break;
    }

    ctx->pc = 0x121e88u;

    // 0x121e88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x121e8c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x121e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121e94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x121e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x121e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x121ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121ea8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x121ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x121eac: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x121eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x121eb0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x121eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x121eb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x121eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x121eb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ebc: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x121ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x121ec0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x121EC0u;
    SET_GPR_U32(ctx, 31, 0x121EC8u);
    ctx->pc = 0x121EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EC0u;
    // 0x121ec4: 0x8e300694  lw          $s0, 0x694($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x121EC0u, 0x121EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EC8u;
label_121ec8:
    // 0x121ec8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x121ecc: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x121ECCu;
    SET_GPR_U32(ctx, 31, 0x121ED4u);
    ctx->pc = 0x121ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121ECCu;
    // 0x121ed0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x121ECCu, 0x121ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ED4u;
label_121ed4:
    // 0x121ed4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x121ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x121ed8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x121ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x121edc: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x121edcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x121ee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x121ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x121ee4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121EE4u;
    {
        const bool branch_taken_0x121ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EE4u;
        // 0x121ee8: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ee4) {
            ctx->pc = 0x121F00u;
            goto label_121f00;
        }
    }
    ctx->pc = 0x121EECu;
    // 0x121eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ef0: 0x50820028  beql        $a0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x121EF0u;
    {
        const bool branch_taken_0x121ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x121ef0) {
            ctx->pc = 0x121EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121EF0u;
            // 0x121ef4: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F94u;
            goto label_121f94;
        }
    }
    ctx->pc = 0x121EF8u;
    // 0x121ef8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x121EF8u;
    {
        const bool branch_taken_0x121ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EF8u;
        // 0x121efc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ef8) {
            ctx->pc = 0x122128u;
            goto label_122128;
        }
    }
    ctx->pc = 0x121F00u;
label_121f00:
    // 0x121f00: 0x3c01bed4  lui         $at, 0xBED4
    ctx->pc = 0x121f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48852 << 16));
    // 0x121f04: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x121f04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x121f08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121f0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x121f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f10: 0x3c01bed9  lui         $at, 0xBED9
    ctx->pc = 0x121f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48857 << 16));
    // 0x121f14: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x121f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x121f18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x121f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f2c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x121f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x121f30: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x121f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x121f34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x121f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121f38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x121f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f3c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x121f3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x121f40: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x121f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x121f44: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x121f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x121f48: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x121F48u;
    SET_GPR_U32(ctx, 31, 0x121F50u);
    ctx->pc = 0x121F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F48u;
    // 0x121f4c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x121F48u, 0x121F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F50u;
label_121f50:
    // 0x121f50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x121f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121f54: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x121f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x121f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f5c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121F5Cu;
    SET_GPR_U32(ctx, 31, 0x121F64u);
    ctx->pc = 0x121F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F5Cu;
    // 0x121f60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121F5Cu, 0x121F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F64u;
label_121f64:
    // 0x121f64: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x121F64u;
    SET_GPR_U32(ctx, 31, 0x121F6Cu);
    ctx->pc = 0x121F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F64u;
    // 0x121f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x121F64u, 0x121F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F6Cu;
label_121f6c:
    // 0x121f6c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x121F6Cu;
    SET_GPR_U32(ctx, 31, 0x121F74u);
    ctx->pc = 0x121F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F6Cu;
    // 0x121f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x121F6Cu, 0x121F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F74u;
label_121f74:
    // 0x121f74: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x121f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x121f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121f7c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x121f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121f80: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x121f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x121f84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121f88: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x121f88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x121f8c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x121f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x121f90: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x121f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_121f94:
    // 0x121f94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x121F94u;
    {
        const bool branch_taken_0x121f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F94u;
        // 0x121f98: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f94) {
            ctx->pc = 0x121FC0u;
            goto label_121fc0;
        }
    }
    ctx->pc = 0x121F9Cu;
    // 0x121f9c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121F9Cu;
    {
        const bool branch_taken_0x121f9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x121FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F9Cu;
        // 0x121fa0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f9c) {
            ctx->pc = 0x121FC0u;
            goto label_121fc0;
        }
    }
    ctx->pc = 0x121FA4u;
    // 0x121fa4: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x121fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x121fa8: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x121fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x121fac: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x121facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x121fb0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121fb4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x121fb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x121fb8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x121fb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x121fbc: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x121fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_121fc0:
    // 0x121fc0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121FC0u;
    SET_GPR_U32(ctx, 31, 0x121FC8u);
    ctx->pc = 0x121FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FC0u;
    // 0x121fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121FC0u, 0x121FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FC8u;
label_121fc8:
    // 0x121fc8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x121FC8u;
    SET_GPR_U32(ctx, 31, 0x121FD0u);
    ctx->pc = 0x121FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FC8u;
    // 0x121fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121FC8u, 0x121FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FD0u;
label_121fd0:
    // 0x121fd0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x121FD0u;
    {
        const bool branch_taken_0x121fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fd0) {
            ctx->pc = 0x12201Cu;
            goto label_12201c;
        }
    }
    ctx->pc = 0x121FD8u;
    // 0x121fd8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x121fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x121fdc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121FDCu;
    {
        const bool branch_taken_0x121fdc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x121FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FDCu;
        // 0x121fe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121fdc) {
            ctx->pc = 0x12200Cu;
            goto label_12200c;
        }
    }
    ctx->pc = 0x121FE4u;
    // 0x121fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121fe8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121FE8u;
    SET_GPR_U32(ctx, 31, 0x121FF0u);
    ctx->pc = 0x121FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121FE8u;
    // 0x121fec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121FE8u, 0x121FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FF0u;
label_121ff0:
    // 0x121ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121ff4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x121ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121ff8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x121ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x121ffc: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x121ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x122000: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x122000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x122004: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x122004u;
    {
        const bool branch_taken_0x122004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122004u;
        // 0x122008: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122004) {
            ctx->pc = 0x12201Cu;
            goto label_12201c;
        }
    }
    ctx->pc = 0x12200Cu;
label_12200c:
    // 0x12200c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x12200cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x122010: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x122014: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x122014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x122018: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x122018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_12201c:
    // 0x12201c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12201cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x122020: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x122020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x122024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122028: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x122028u;
    SET_GPR_U32(ctx, 31, 0x122030u);
    ctx->pc = 0x12202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122028u;
    // 0x12202c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x122028u, 0x122030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122030u;
label_122030:
    // 0x122030: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x122030u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x122034: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x122034u;
    SET_GPR_U32(ctx, 31, 0x12203Cu);
    ctx->pc = 0x122038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122034u;
    // 0x122038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x122034u, 0x12203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12203Cu;
label_12203c:
    // 0x12203c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x12203cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x122040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x122040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x122044: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x122044u;
    {
        const bool branch_taken_0x122044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122044) {
            ctx->pc = 0x122048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122044u;
            // 0x122048: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122128u;
            goto label_122128;
        }
    }
    ctx->pc = 0x12204Cu;
    // 0x12204c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x12204cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x122050: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x122050u;
    {
        const bool branch_taken_0x122050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122050u;
        // 0x122054: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122050) {
            ctx->pc = 0x122124u;
            goto label_122124;
        }
    }
    ctx->pc = 0x122058u;
    // 0x122058: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x122058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x12205c: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x122060: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x122064: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x122064u;
    SET_GPR_U32(ctx, 31, 0x12206Cu);
    ctx->pc = 0x122068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122064u;
    // 0x122068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x122064u, 0x12206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12206Cu;
label_12206c:
    // 0x12206c: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12206Cu;
    {
        const bool branch_taken_0x12206c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12206c) {
            ctx->pc = 0x122070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12206Cu;
            // 0x122070: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122098u;
            goto label_122098;
        }
    }
    ctx->pc = 0x122074u;
    // 0x122074: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x122078: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12207c: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x12207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x122080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x122080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x122084: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x122088: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x122088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12208c: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x12208Cu;
    SET_GPR_U32(ctx, 31, 0x122094u);
    ctx->pc = 0x122090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12208Cu;
    // 0x122090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x12208Cu, 0x122094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122094u;
label_122094:
    // 0x122094: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x122094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_122098:
    // 0x122098: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x122098u;
    {
        const bool branch_taken_0x122098 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x12209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122098u;
        // 0x12209c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122098) {
            ctx->pc = 0x1220F4u;
            goto label_1220f4;
        }
    }
    ctx->pc = 0x1220A0u;
    // 0x1220a0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1220a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1220a4: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x1220a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x1220a8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1220a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1220ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1220acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220b0: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x1220b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x1220b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1220b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1220b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1220bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1220c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1220c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220c8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1220C8u;
    SET_GPR_U32(ctx, 31, 0x1220D0u);
    ctx->pc = 0x1220CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220C8u;
    // 0x1220cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1220C8u, 0x1220D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220D0u;
label_1220d0:
    // 0x1220d0: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x1220D0u;
    SET_GPR_U32(ctx, 31, 0x1220D8u);
    ctx->pc = 0x1220D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220D0u;
    // 0x1220d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x1220D0u, 0x1220D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220D8u;
label_1220d8:
    // 0x1220d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1220d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220dc: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1220DCu;
    SET_GPR_U32(ctx, 31, 0x1220E4u);
    ctx->pc = 0x1220E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1220DCu;
    // 0x1220e0: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1220DCu, 0x1220E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220E4u;
label_1220e4:
    // 0x1220e4: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x1220e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x1220e8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1220e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1220ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1220ECu;
    {
        const bool branch_taken_0x1220ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1220F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1220ECu;
        // 0x1220f0: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1220ec) {
            ctx->pc = 0x122118u;
            goto label_122118;
        }
    }
    ctx->pc = 0x1220F4u;
label_1220f4:
    // 0x1220f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1220f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1220f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1220f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1220fc: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x1220fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x122100: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x122100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122104: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x122104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122108: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x122108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12210c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12210cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122110: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x122110u;
    SET_GPR_U32(ctx, 31, 0x122118u);
    ctx->pc = 0x122114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122110u;
    // 0x122114: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x122110u, 0x122118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122118u;
label_122118:
    // 0x122118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x122118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12211c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x12211Cu;
    SET_GPR_U32(ctx, 31, 0x122124u);
    ctx->pc = 0x122120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12211Cu;
    // 0x122120: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x12211Cu, 0x122124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122124u;
label_122124:
    // 0x122124: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x122124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122128:
    // 0x122128: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x122128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12212c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12212cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122134: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x122134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x122138: 0x3e00008  jr          $ra
    ctx->pc = 0x122138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122138u;
        // 0x12213c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122140u;
}
