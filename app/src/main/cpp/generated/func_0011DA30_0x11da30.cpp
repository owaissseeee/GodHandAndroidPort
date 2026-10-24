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

// Function: func_0011DA30
// Address: 0x11da30 - 0x11de30
void func_0011DA30_0x11da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011DA30_0x11da30");
#endif

    switch (ctx->pc) {
        case 0x11da84u: goto label_11da84;
        case 0x11da90u: goto label_11da90;
        case 0x11dad4u: goto label_11dad4;
        case 0x11dadcu: goto label_11dadc;
        case 0x11db28u: goto label_11db28;
        case 0x11db3cu: goto label_11db3c;
        case 0x11db5cu: goto label_11db5c;
        case 0x11db84u: goto label_11db84;
        case 0x11db9cu: goto label_11db9c;
        case 0x11dbe0u: goto label_11dbe0;
        case 0x11dbe8u: goto label_11dbe8;
        case 0x11dc08u: goto label_11dc08;
        case 0x11dc48u: goto label_11dc48;
        case 0x11dc54u: goto label_11dc54;
        case 0x11dc84u: goto label_11dc84;
        case 0x11dcacu: goto label_11dcac;
        case 0x11dce8u: goto label_11dce8;
        case 0x11dcf0u: goto label_11dcf0;
        case 0x11dcfcu: goto label_11dcfc;
        case 0x11dd30u: goto label_11dd30;
        case 0x11dd3cu: goto label_11dd3c;
        case 0x11dd60u: goto label_11dd60;
        case 0x11dd80u: goto label_11dd80;
        case 0x11ddc4u: goto label_11ddc4;
        case 0x11ddccu: goto label_11ddcc;
        case 0x11dde0u: goto label_11dde0;
        case 0x11de04u: goto label_11de04;
        case 0x11de10u: goto label_11de10;
        default: break;
    }

    ctx->pc = 0x11da30u;

    // 0x11da30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11da34: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11da34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11da38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11da3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11da44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11da44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11da48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11da4c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11da50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11da54: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11da54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11da58: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11da58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11da5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11da5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da60: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11da60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11da64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11da64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11da68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x11da68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11da6c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11da70: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11da70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11da74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11da78: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11da78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11da7c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11DA7Cu;
    SET_GPR_U32(ctx, 31, 0x11DA84u);
    ctx->pc = 0x11DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA7Cu;
    // 0x11da80: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11DA7Cu, 0x11DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA84u;
label_11da84:
    // 0x11da84: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11da84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11da88: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11DA88u;
    SET_GPR_U32(ctx, 31, 0x11DA90u);
    ctx->pc = 0x11DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA88u;
    // 0x11da8c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11DA88u, 0x11DA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA90u;
label_11da90:
    // 0x11da90: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11da90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11da94: 0x10720044  beq         $v1, $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x11DA94u;
    {
        const bool branch_taken_0x11da94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x11DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA94u;
        // 0x11da98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da94) {
            ctx->pc = 0x11DBA8u;
            goto label_11dba8;
        }
    }
    ctx->pc = 0x11DA9Cu;
    // 0x11da9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11DA9Cu;
    {
        const bool branch_taken_0x11da9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11da9c) {
            ctx->pc = 0x11DAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DA9Cu;
            // 0x11daa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DAB4u;
            goto label_11dab4;
        }
    }
    ctx->pc = 0x11DAA4u;
    // 0x11daa4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DAA4u;
    {
        const bool branch_taken_0x11daa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11daa4) {
            ctx->pc = 0x11DACCu;
            goto label_11dacc;
        }
    }
    ctx->pc = 0x11DAACu;
    // 0x11daac: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x11DAACu;
    {
        const bool branch_taken_0x11daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAACu;
        // 0x11dab0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11daac) {
            ctx->pc = 0x11DE14u;
            goto label_11de14;
        }
    }
    ctx->pc = 0x11DAB4u;
label_11dab4:
    // 0x11dab4: 0x106200a5  beq         $v1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x11DAB4u;
    {
        const bool branch_taken_0x11dab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAB4u;
        // 0x11dab8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dab4) {
            ctx->pc = 0x11DD4Cu;
            goto label_11dd4c;
        }
    }
    ctx->pc = 0x11DABCu;
    // 0x11dabc: 0x506200b4  beql        $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x11DABCu;
    {
        const bool branch_taken_0x11dabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11dabc) {
            ctx->pc = 0x11DAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DABCu;
            // 0x11dac0: 0x8622056e  lh          $v0, 0x56E($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD90u;
            goto label_11dd90;
        }
    }
    ctx->pc = 0x11DAC4u;
    // 0x11dac4: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x11DAC4u;
    {
        const bool branch_taken_0x11dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DAC4u;
        // 0x11dac8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dac4) {
            ctx->pc = 0x11DE14u;
            goto label_11de14;
        }
    }
    ctx->pc = 0x11DACCu;
label_11dacc:
    // 0x11dacc: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11DACCu;
    SET_GPR_U32(ctx, 31, 0x11DAD4u);
    ctx->pc = 0x11DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DACCu;
    // 0x11dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11DACCu, 0x11DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAD4u;
label_11dad4:
    // 0x11dad4: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11DAD4u;
    SET_GPR_U32(ctx, 31, 0x11DADCu);
    ctx->pc = 0x11DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAD4u;
    // 0x11dad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11DAD4u, 0x11DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DADCu;
label_11dadc:
    // 0x11dadc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11dae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11dae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dae4: 0x3c01bdeb  lui         $at, 0xBDEB
    ctx->pc = 0x11dae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48619 << 16));
    // 0x11dae8: 0x34211c43  ori         $at, $at, 0x1C43
    ctx->pc = 0x11dae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7235);
    // 0x11daec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11daecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11daf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11daf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daf4: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11daf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11daf8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11daf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dafc: 0x3c013f81  lui         $at, 0x3F81
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16257 << 16));
    // 0x11db00: 0x3421a9fc  ori         $at, $at, 0xA9FC
    ctx->pc = 0x11db00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43516);
    // 0x11db04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11db04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11db08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11db08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11db0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11db10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11db10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11db14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11db14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11db18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11db18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11db1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11db1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11db20: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11DB20u;
    SET_GPR_U32(ctx, 31, 0x11DB28u);
    ctx->pc = 0x11DB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB20u;
    // 0x11db24: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11DB20u, 0x11DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB28u;
label_11db28:
    // 0x11db28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11db28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11db2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db30: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x11db34: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11DB34u;
    SET_GPR_U32(ctx, 31, 0x11DB3Cu);
    ctx->pc = 0x11DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB34u;
    // 0x11db38: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11DB34u, 0x11DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB3Cu;
label_11db3c:
    // 0x11db3c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11db40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11db44: 0xae3215b0  sw          $s2, 0x15B0($s1)
    ctx->pc = 0x11db44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 18));
    // 0x11db48: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11db48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11db4c: 0xae3215b4  sw          $s2, 0x15B4($s1)
    ctx->pc = 0x11db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 18));
    // 0x11db50: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11db54: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11DB54u;
    SET_GPR_U32(ctx, 31, 0x11DB5Cu);
    ctx->pc = 0x11DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB54u;
    // 0x11db58: 0xa622056e  sh          $v0, 0x56E($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11DB54u, 0x11DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB5Cu;
label_11db5c:
    // 0x11db5c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x11DB5Cu;
    {
        const bool branch_taken_0x11db5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB5Cu;
        // 0x11db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db5c) {
            ctx->pc = 0x11DB94u;
            goto label_11db94;
        }
    }
    ctx->pc = 0x11DB64u;
    // 0x11db64: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11db68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11db68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11db6c: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11db6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11db70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11db70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11db74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11db74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11db78: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11db78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11db7c: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11DB7Cu;
    SET_GPR_U32(ctx, 31, 0x11DB84u);
    ctx->pc = 0x11DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB7Cu;
    // 0x11db80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11DB7Cu, 0x11DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB84u;
label_11db84:
    // 0x11db84: 0x8623054a  lh          $v1, 0x54A($s1)
    ctx->pc = 0x11db84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11db88: 0x58600001  blezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DB88u;
    {
        const bool branch_taken_0x11db88 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x11db88) {
            ctx->pc = 0x11DB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB88u;
            // 0x11db8c: 0xa632054a  sh          $s2, 0x54A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB90u;
            goto label_11db90;
        }
    }
    ctx->pc = 0x11DB90u;
label_11db90:
    // 0x11db90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11db94:
    // 0x11db94: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11DB94u;
    SET_GPR_U32(ctx, 31, 0x11DB9Cu);
    ctx->pc = 0x11DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB94u;
    // 0x11db98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11DB94u, 0x11DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB9Cu;
label_11db9c:
    // 0x11db9c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11db9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11dba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11dba4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11dba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11dba8:
    // 0x11dba8: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11dba8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11dbac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11DBACu;
    {
        const bool branch_taken_0x11dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBACu;
        // 0x11dbb0: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbac) {
            ctx->pc = 0x11DBD8u;
            goto label_11dbd8;
        }
    }
    ctx->pc = 0x11DBB4u;
    // 0x11dbb4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DBB4u;
    {
        const bool branch_taken_0x11dbb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBB4u;
        // 0x11dbb8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbb4) {
            ctx->pc = 0x11DBD8u;
            goto label_11dbd8;
        }
    }
    ctx->pc = 0x11DBBCu;
    // 0x11dbbc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11dbc0: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11dbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11dbc4: 0x26030550  addiu       $v1, $s0, 0x550
    ctx->pc = 0x11dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11dbc8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11dbc8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11dbcc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11dbccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11dbd0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11dbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11dbd4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11dbd8:
    // 0x11dbd8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11DBD8u;
    SET_GPR_U32(ctx, 31, 0x11DBE0u);
    ctx->pc = 0x11DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBD8u;
    // 0x11dbdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11DBD8u, 0x11DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBE0u;
label_11dbe0:
    // 0x11dbe0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11DBE0u;
    SET_GPR_U32(ctx, 31, 0x11DBE8u);
    ctx->pc = 0x11DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBE0u;
    // 0x11dbe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11DBE0u, 0x11DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBE8u;
label_11dbe8:
    // 0x11dbe8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11DBE8u;
    {
        const bool branch_taken_0x11dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dbe8) {
            ctx->pc = 0x11DC34u;
            goto label_11dc34;
        }
    }
    ctx->pc = 0x11DBF0u;
    // 0x11dbf0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11dbf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11dbf4: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11DBF4u;
    {
        const bool branch_taken_0x11dbf4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBF4u;
        // 0x11dbf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbf4) {
            ctx->pc = 0x11DC24u;
            goto label_11dc24;
        }
    }
    ctx->pc = 0x11DBFCu;
    // 0x11dbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11dbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc00: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11DC00u;
    SET_GPR_U32(ctx, 31, 0x11DC08u);
    ctx->pc = 0x11DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC00u;
    // 0x11dc04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11DC00u, 0x11DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC08u;
label_11dc08:
    // 0x11dc08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dc0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11dc10: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11dc10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11dc14: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11dc14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11dc18: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11dc18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11dc1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11DC1Cu;
    {
        const bool branch_taken_0x11dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC1Cu;
        // 0x11dc20: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc1c) {
            ctx->pc = 0x11DC34u;
            goto label_11dc34;
        }
    }
    ctx->pc = 0x11DC24u;
label_11dc24:
    // 0x11dc24: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11dc28: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11dc2c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11dc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11dc30: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11dc30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11dc34:
    // 0x11dc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11dc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11dc38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11dc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11dc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc40: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11DC40u;
    SET_GPR_U32(ctx, 31, 0x11DC48u);
    ctx->pc = 0x11DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC40u;
    // 0x11dc44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11DC40u, 0x11DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC48u;
label_11dc48:
    // 0x11dc48: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11dc48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11dc4c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11DC4Cu;
    SET_GPR_U32(ctx, 31, 0x11DC54u);
    ctx->pc = 0x11DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC4Cu;
    // 0x11dc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11DC4Cu, 0x11DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC54u;
label_11dc54:
    // 0x11dc54: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11dc54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11dc58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11dc5c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x11DC5Cu;
    {
        const bool branch_taken_0x11dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC5Cu;
        // 0x11dc60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc5c) {
            ctx->pc = 0x11DD44u;
            goto label_11dd44;
        }
    }
    ctx->pc = 0x11DC64u;
    // 0x11dc64: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11dc68: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x11DC68u;
    {
        const bool branch_taken_0x11dc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC68u;
        // 0x11dc6c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc68) {
            ctx->pc = 0x11DE10u;
            goto label_11de10;
        }
    }
    ctx->pc = 0x11DC70u;
    // 0x11dc70: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11dc74: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11dc74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11dc78: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11dc7c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11DC7Cu;
    SET_GPR_U32(ctx, 31, 0x11DC84u);
    ctx->pc = 0x11DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC7Cu;
    // 0x11dc80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11DC7Cu, 0x11DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC84u;
label_11dc84:
    // 0x11dc84: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11DC84u;
    {
        const bool branch_taken_0x11dc84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc84) {
            ctx->pc = 0x11DC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DC84u;
            // 0x11dc88: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCB0u;
            goto label_11dcb0;
        }
    }
    ctx->pc = 0x11DC8Cu;
    // 0x11dc8c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11dc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11dc90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11dc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11dc94: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11dc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dc98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11dc98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11dc9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11dc9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11dca0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11dca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11dca4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11DCA4u;
    SET_GPR_U32(ctx, 31, 0x11DCACu);
    ctx->pc = 0x11DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCA4u;
    // 0x11dca8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11DCA4u, 0x11DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCACu;
label_11dcac:
    // 0x11dcac: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11dcacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11dcb0:
    // 0x11dcb0: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11DCB0u;
    {
        const bool branch_taken_0x11dcb0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCB0u;
        // 0x11dcb4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcb0) {
            ctx->pc = 0x11DD0Cu;
            goto label_11dd0c;
        }
    }
    ctx->pc = 0x11DCB8u;
    // 0x11dcb8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11dcb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11dcbc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11dcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11dcc0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11dcc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dcc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcc8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11dcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11dccc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11dcccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11dcd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcd4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11dcd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11dcd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcdc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11dcdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dce0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11DCE0u;
    SET_GPR_U32(ctx, 31, 0x11DCE8u);
    ctx->pc = 0x11DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCE0u;
    // 0x11dce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11DCE0u, 0x11DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCE8u;
label_11dce8:
    // 0x11dce8: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11DCE8u;
    SET_GPR_U32(ctx, 31, 0x11DCF0u);
    ctx->pc = 0x11DCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCE8u;
    // 0x11dcec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11DCE8u, 0x11DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCF0u;
label_11dcf0:
    // 0x11dcf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcf4: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11DCF4u;
    SET_GPR_U32(ctx, 31, 0x11DCFCu);
    ctx->pc = 0x11DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCF4u;
    // 0x11dcf8: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11DCF4u, 0x11DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCFCu;
label_11dcfc:
    // 0x11dcfc: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11dcfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11dd00: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11dd04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DD04u;
    {
        const bool branch_taken_0x11dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD04u;
        // 0x11dd08: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd04) {
            ctx->pc = 0x11DD30u;
            goto label_11dd30;
        }
    }
    ctx->pc = 0x11DD0Cu;
label_11dd0c:
    // 0x11dd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd10: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11dd14: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11dd18: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11dd18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11dd20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11dd24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd28: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11DD28u;
    SET_GPR_U32(ctx, 31, 0x11DD30u);
    ctx->pc = 0x11DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD28u;
    // 0x11dd2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11DD28u, 0x11DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD30u;
label_11dd30:
    // 0x11dd30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd34: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11DD34u;
    SET_GPR_U32(ctx, 31, 0x11DD3Cu);
    ctx->pc = 0x11DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD34u;
    // 0x11dd38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11DD34u, 0x11DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD3Cu;
label_11dd3c:
    // 0x11dd3c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x11DD3Cu;
    {
        const bool branch_taken_0x11dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD3Cu;
        // 0x11dd40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd3c) {
            ctx->pc = 0x11DE14u;
            goto label_11de14;
        }
    }
    ctx->pc = 0x11DD44u;
label_11dd44:
    // 0x11dd44: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11DD44u;
    {
        const bool branch_taken_0x11dd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD44u;
        // 0x11dd48: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd44) {
            ctx->pc = 0x11DE10u;
            goto label_11de10;
        }
    }
    ctx->pc = 0x11DD4Cu;
label_11dd4c:
    // 0x11dd4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11dd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11dd50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dd50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x11dd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11dd58: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11DD58u;
    SET_GPR_U32(ctx, 31, 0x11DD60u);
    ctx->pc = 0x11DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD58u;
    // 0x11dd5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11DD58u, 0x11DD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD60u;
label_11dd60:
    // 0x11dd60: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x11dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11dd64: 0xae3215b4  sw          $s2, 0x15B4($s1)
    ctx->pc = 0x11dd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 18));
    // 0x11dd68: 0xae3215b0  sw          $s2, 0x15B0($s1)
    ctx->pc = 0x11dd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 18));
    // 0x11dd6c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11dd70: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11dd70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11dd74: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11dd78: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11DD78u;
    SET_GPR_U32(ctx, 31, 0x11DD80u);
    ctx->pc = 0x11DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD78u;
    // 0x11dd7c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11DD78u, 0x11DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD80u;
label_11dd80:
    // 0x11dd80: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11dd80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11dd84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11dd88: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11dd88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x11dd8c: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11dd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
label_11dd90:
    // 0x11dd90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11DD90u;
    {
        const bool branch_taken_0x11dd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD90u;
        // 0x11dd94: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd90) {
            ctx->pc = 0x11DDBCu;
            goto label_11ddbc;
        }
    }
    ctx->pc = 0x11DD98u;
    // 0x11dd98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DD98u;
    {
        const bool branch_taken_0x11dd98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD98u;
        // 0x11dd9c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd98) {
            ctx->pc = 0x11DDBCu;
            goto label_11ddbc;
        }
    }
    ctx->pc = 0x11DDA0u;
    // 0x11dda0: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x11dda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11dda4: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11dda4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11dda8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11ddac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11ddacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ddb0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x11ddb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11ddb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11ddb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11ddb8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11ddbc:
    // 0x11ddbc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11DDBCu;
    SET_GPR_U32(ctx, 31, 0x11DDC4u);
    ctx->pc = 0x11DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDBCu;
    // 0x11ddc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11DDBCu, 0x11DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDC4u;
label_11ddc4:
    // 0x11ddc4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11DDC4u;
    SET_GPR_U32(ctx, 31, 0x11DDCCu);
    ctx->pc = 0x11DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDC4u;
    // 0x11ddc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11DDC4u, 0x11DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDCCu;
label_11ddcc:
    // 0x11ddcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DDCCu;
    {
        const bool branch_taken_0x11ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDCCu;
        // 0x11ddd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ddcc) {
            ctx->pc = 0x11DDF0u;
            goto label_11ddf0;
        }
    }
    ctx->pc = 0x11DDD4u;
    // 0x11ddd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ddd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddd8: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11DDD8u;
    SET_GPR_U32(ctx, 31, 0x11DDE0u);
    ctx->pc = 0x11DDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDD8u;
    // 0x11dddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11DDD8u, 0x11DDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DDE0u;
label_11dde0:
    // 0x11dde0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11dde4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11dde4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11dde8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ddec: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11ddecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11ddf0:
    // 0x11ddf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ddf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ddf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11ddf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11ddf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ddfc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11DDFCu;
    SET_GPR_U32(ctx, 31, 0x11DE04u);
    ctx->pc = 0x11DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDFCu;
    // 0x11de00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11DDFCu, 0x11DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE04u;
label_11de04:
    // 0x11de04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11de04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11de08: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11DE08u;
    SET_GPR_U32(ctx, 31, 0x11DE10u);
    ctx->pc = 0x11DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE08u;
    // 0x11de0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11DE08u, 0x11DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE10u;
label_11de10:
    // 0x11de10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11de10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11de14:
    // 0x11de14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11de14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11de18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11de18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11de1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11de1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11de20: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11de24: 0x3e00008  jr          $ra
    ctx->pc = 0x11DE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE24u;
        // 0x11de28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DE2Cu;
    // 0x11de2c: 0x0  nop
    ctx->pc = 0x11de2cu;
    // NOP
    ctx->pc = 0x11de30u;
}
