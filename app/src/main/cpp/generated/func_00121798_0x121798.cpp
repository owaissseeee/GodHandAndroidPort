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

// Function: func_00121798
// Address: 0x121798 - 0x121ac0
void func_00121798_0x121798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00121798_0x121798");
#endif

    switch (ctx->pc) {
        case 0x1217ecu: goto label_1217ec;
        case 0x1217f8u: goto label_1217f8;
        case 0x12183cu: goto label_12183c;
        case 0x121844u: goto label_121844;
        case 0x1218ccu: goto label_1218cc;
        case 0x1218e0u: goto label_1218e0;
        case 0x121904u: goto label_121904;
        case 0x12190cu: goto label_12190c;
        case 0x12192cu: goto label_12192c;
        case 0x12196cu: goto label_12196c;
        case 0x121978u: goto label_121978;
        case 0x1219a8u: goto label_1219a8;
        case 0x1219d0u: goto label_1219d0;
        case 0x1219ecu: goto label_1219ec;
        case 0x1219f8u: goto label_1219f8;
        case 0x121a10u: goto label_121a10;
        case 0x121a34u: goto label_121a34;
        case 0x121a54u: goto label_121a54;
        case 0x121a5cu: goto label_121a5c;
        case 0x121a70u: goto label_121a70;
        case 0x121a94u: goto label_121a94;
        case 0x121aa0u: goto label_121aa0;
        default: break;
    }

    ctx->pc = 0x121798u;

    // 0x121798: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x121798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12179c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x12179cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1217a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1217a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1217a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1217a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1217a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1217ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1217acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1217b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1217b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1217b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1217b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1217b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1217bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1217bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x1217c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1217c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1217c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1217c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1217c8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1217c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1217cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1217ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1217d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1217d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1217d4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1217d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1217d8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x1217d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x1217dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1217dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1217e0: 0x8e110694  lw          $s1, 0x694($s0)
    ctx->pc = 0x1217e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1684)));
    // 0x1217e4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x1217E4u;
    SET_GPR_U32(ctx, 31, 0x1217ECu);
    ctx->pc = 0x1217E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217E4u;
    // 0x1217e8: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x1217E4u, 0x1217ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217ECu;
label_1217ec:
    // 0x1217ec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1217ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1217f0: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x1217F0u;
    SET_GPR_U32(ctx, 31, 0x1217F8u);
    ctx->pc = 0x1217F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217F0u;
    // 0x1217f4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x1217F0u, 0x1217F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217F8u;
label_1217f8:
    // 0x1217f8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1217f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1217fc: 0x1072003f  beq         $v1, $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x1217FCu;
    {
        const bool branch_taken_0x1217fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x121800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217FCu;
        // 0x121800: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1217fc) {
            ctx->pc = 0x1218FCu;
            goto label_1218fc;
        }
    }
    ctx->pc = 0x121804u;
    // 0x121804: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x121804u;
    {
        const bool branch_taken_0x121804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121804) {
            ctx->pc = 0x121808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121804u;
            // 0x121808: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12181Cu;
            goto label_12181c;
        }
    }
    ctx->pc = 0x12180Cu;
    // 0x12180c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12180Cu;
    {
        const bool branch_taken_0x12180c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12180c) {
            ctx->pc = 0x121834u;
            goto label_121834;
        }
    }
    ctx->pc = 0x121814u;
    // 0x121814: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x121814u;
    {
        const bool branch_taken_0x121814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121814u;
        // 0x121818: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121814) {
            ctx->pc = 0x121AA4u;
            goto label_121aa4;
        }
    }
    ctx->pc = 0x12181Cu;
label_12181c:
    // 0x12181c: 0x10620080  beq         $v1, $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x12181Cu;
    {
        const bool branch_taken_0x12181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x121820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12181Cu;
        // 0x121820: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12181c) {
            ctx->pc = 0x121A20u;
            goto label_121a20;
        }
    }
    ctx->pc = 0x121824u;
    // 0x121824: 0x10620089  beq         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x121824u;
    {
        const bool branch_taken_0x121824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121824) {
            ctx->pc = 0x121A4Cu;
            goto label_121a4c;
        }
    }
    ctx->pc = 0x12182Cu;
    // 0x12182c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x12182Cu;
    {
        const bool branch_taken_0x12182c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12182Cu;
        // 0x121830: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12182c) {
            ctx->pc = 0x121AA4u;
            goto label_121aa4;
        }
    }
    ctx->pc = 0x121834u;
label_121834:
    // 0x121834: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x121834u;
    SET_GPR_U32(ctx, 31, 0x12183Cu);
    ctx->pc = 0x121838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121834u;
    // 0x121838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x121834u, 0x12183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12183Cu;
label_12183c:
    // 0x12183c: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x12183Cu;
    SET_GPR_U32(ctx, 31, 0x121844u);
    ctx->pc = 0x121840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12183Cu;
    // 0x121840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x12183Cu, 0x121844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121844u;
label_121844:
    // 0x121844: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x121844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x121848: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x121848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12184c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x12184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x121850: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x121850u;
    {
        const bool branch_taken_0x121850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x121854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121850u;
        // 0x121854: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121850) {
            ctx->pc = 0x121880u;
            goto label_121880;
        }
    }
    ctx->pc = 0x121858u;
    // 0x121858: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x121858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x12185c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x12185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x121860: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121860u;
    {
        const bool branch_taken_0x121860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x121860) {
            ctx->pc = 0x121864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121860u;
            // 0x121864: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121884u;
            goto label_121884;
        }
    }
    ctx->pc = 0x121868u;
    // 0x121868: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x121868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12186c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x12186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x121870: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x121870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121874: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x121874u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x121878: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x121878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12187c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12187cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_121880:
    // 0x121880: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x121880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_121884:
    // 0x121884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121888: 0x3c01be03  lui         $at, 0xBE03
    ctx->pc = 0x121888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48643 << 16));
    // 0x12188c: 0x34213563  ori         $at, $at, 0x3563
    ctx->pc = 0x12188cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13667);
    // 0x121890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x121890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x121894: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121898: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x121898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12189c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218a0: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x1218a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x1218a4: 0x3421c9cc  ori         $at, $at, 0xC9CC
    ctx->pc = 0x1218a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51660);
    // 0x1218a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1218a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1218ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1218acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1218b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1218b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1218b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1218b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1218b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1218bc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1218bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1218c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1218c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1218c4: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x1218C4u;
    SET_GPR_U32(ctx, 31, 0x1218CCu);
    ctx->pc = 0x1218C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218C4u;
    // 0x1218c8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x1218C4u, 0x1218CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218CCu;
label_1218cc:
    // 0x1218cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1218ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1218d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1218d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1218d4: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x1218d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1218d8: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x1218D8u;
    SET_GPR_U32(ctx, 31, 0x1218E0u);
    ctx->pc = 0x1218DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218D8u;
    // 0x1218dc: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x1218D8u, 0x1218E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1218E0u;
label_1218e0:
    // 0x1218e0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1218e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1218e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1218e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1218e8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1218e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1218ec: 0xae0315b0  sw          $v1, 0x15B0($s0)
    ctx->pc = 0x1218ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 3));
    // 0x1218f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1218f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1218f4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x1218f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x1218f8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1218f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1218fc:
    // 0x1218fc: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1218FCu;
    SET_GPR_U32(ctx, 31, 0x121904u);
    ctx->pc = 0x121900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1218FCu;
    // 0x121900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1218FCu, 0x121904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121904u;
label_121904:
    // 0x121904: 0xc055f06  jal         func_157C18
    ctx->pc = 0x121904u;
    SET_GPR_U32(ctx, 31, 0x12190Cu);
    ctx->pc = 0x121908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121904u;
    // 0x121908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121904u, 0x12190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12190Cu;
label_12190c:
    // 0x12190c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12190Cu;
    {
        const bool branch_taken_0x12190c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12190c) {
            ctx->pc = 0x121958u;
            goto label_121958;
        }
    }
    ctx->pc = 0x121914u;
    // 0x121914: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x121914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x121918: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121918u;
    {
        const bool branch_taken_0x121918 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121918u;
        // 0x12191c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121918) {
            ctx->pc = 0x121948u;
            goto label_121948;
        }
    }
    ctx->pc = 0x121920u;
    // 0x121920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121924: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121924u;
    SET_GPR_U32(ctx, 31, 0x12192Cu);
    ctx->pc = 0x121928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121924u;
    // 0x121928: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121924u, 0x12192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12192Cu;
label_12192c:
    // 0x12192c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121930: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x121930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x121934: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x121934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x121938: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x121938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x12193c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x12193cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x121940u;
    {
        const bool branch_taken_0x121940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121940u;
        // 0x121944: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121940) {
            ctx->pc = 0x121958u;
            goto label_121958;
        }
    }
    ctx->pc = 0x121948u;
label_121948:
    // 0x121948: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x121948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x12194c: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x12194cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x121950: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x121950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121954: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x121954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_121958:
    // 0x121958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12195c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12195cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121964: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121964u;
    SET_GPR_U32(ctx, 31, 0x12196Cu);
    ctx->pc = 0x121968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121964u;
    // 0x121968: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121964u, 0x12196Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12196Cu;
label_12196c:
    // 0x12196c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12196cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x121970: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121970u;
    SET_GPR_U32(ctx, 31, 0x121978u);
    ctx->pc = 0x121974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121970u;
    // 0x121974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121970u, 0x121978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121978u;
label_121978:
    // 0x121978: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x121978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x12197c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x121980: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x121980u;
    {
        const bool branch_taken_0x121980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121980u;
        // 0x121984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121980) {
            ctx->pc = 0x121A18u;
            goto label_121a18;
        }
    }
    ctx->pc = 0x121988u;
    // 0x121988: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x121988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x12198c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x12198Cu;
    {
        const bool branch_taken_0x12198c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12198Cu;
        // 0x121990: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12198c) {
            ctx->pc = 0x121AA0u;
            goto label_121aa0;
        }
    }
    ctx->pc = 0x121994u;
    // 0x121994: 0xae0015b0  sw          $zero, 0x15B0($s0)
    ctx->pc = 0x121994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 0));
    // 0x121998: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x12199c: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x12199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x1219a0: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1219A0u;
    SET_GPR_U32(ctx, 31, 0x1219A8u);
    ctx->pc = 0x1219A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219A0u;
    // 0x1219a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1219A0u, 0x1219A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A8u;
label_1219a8:
    // 0x1219a8: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1219A8u;
    {
        const bool branch_taken_0x1219a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1219a8) {
            ctx->pc = 0x1219ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1219A8u;
            // 0x1219ac: 0x8602054a  lh          $v0, 0x54A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1219D4u;
            goto label_1219d4;
        }
    }
    ctx->pc = 0x1219B0u;
    // 0x1219b0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1219b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1219b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1219b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1219b8: 0xc620076c  lwc1        $f0, 0x76C($s1)
    ctx->pc = 0x1219b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1219bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1219bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1219c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1219c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1219c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1219c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1219c8: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x1219C8u;
    SET_GPR_U32(ctx, 31, 0x1219D0u);
    ctx->pc = 0x1219CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219C8u;
    // 0x1219cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x1219C8u, 0x1219D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219D0u;
label_1219d0:
    // 0x1219d0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1219d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_1219d4:
    // 0x1219d4: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1219D4u;
    {
        const bool branch_taken_0x1219d4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1219D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219D4u;
        // 0x1219d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219d4) {
            ctx->pc = 0x121A08u;
            goto label_121a08;
        }
    }
    ctx->pc = 0x1219DCu;
    // 0x1219dc: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x1219dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x1219e0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1219e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1219e4: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x1219E4u;
    SET_GPR_U32(ctx, 31, 0x1219ECu);
    ctx->pc = 0x1219E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219E4u;
    // 0x1219e8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x1219E4u, 0x1219ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219ECu;
label_1219ec:
    // 0x1219ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1219ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1219f0: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x1219F0u;
    SET_GPR_U32(ctx, 31, 0x1219F8u);
    ctx->pc = 0x1219F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1219F0u;
    // 0x1219f4: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x1219F0u, 0x1219F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219F8u;
label_1219f8:
    // 0x1219f8: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x1219f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    // 0x1219fc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1219fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x121a00: 0xa6020434  sh          $v0, 0x434($s0)
    ctx->pc = 0x121a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x121a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121a08:
    // 0x121a08: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x121A08u;
    SET_GPR_U32(ctx, 31, 0x121A10u);
    ctx->pc = 0x121A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A08u;
    // 0x121a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x121A08u, 0x121A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A10u;
label_121a10:
    // 0x121a10: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x121A10u;
    {
        const bool branch_taken_0x121a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A10u;
        // 0x121a14: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a10) {
            ctx->pc = 0x121AA4u;
            goto label_121aa4;
        }
    }
    ctx->pc = 0x121A18u;
label_121a18:
    // 0x121a18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x121A18u;
    {
        const bool branch_taken_0x121a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A18u;
        // 0x121a1c: 0xae0215b0  sw          $v0, 0x15B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a18) {
            ctx->pc = 0x121AA0u;
            goto label_121aa0;
        }
    }
    ctx->pc = 0x121A20u;
label_121a20:
    // 0x121a20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x121a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121a24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x121a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a28: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x121a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x121a2c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x121A2Cu;
    SET_GPR_U32(ctx, 31, 0x121A34u);
    ctx->pc = 0x121A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A2Cu;
    // 0x121a30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x121A2Cu, 0x121A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A34u;
label_121a34:
    // 0x121a34: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x121a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x121a38: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x121a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x121a3c: 0xae1215b0  sw          $s2, 0x15B0($s0)
    ctx->pc = 0x121a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 18));
    // 0x121a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x121a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x121a44: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x121a44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x121a48: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x121a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_121a4c:
    // 0x121a4c: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x121A4Cu;
    SET_GPR_U32(ctx, 31, 0x121A54u);
    ctx->pc = 0x121A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A4Cu;
    // 0x121a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x121A4Cu, 0x121A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A54u;
label_121a54:
    // 0x121a54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x121A54u;
    SET_GPR_U32(ctx, 31, 0x121A5Cu);
    ctx->pc = 0x121A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A54u;
    // 0x121a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x121A54u, 0x121A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A5Cu;
label_121a5c:
    // 0x121a5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121A5Cu;
    {
        const bool branch_taken_0x121a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121A5Cu;
        // 0x121a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121a5c) {
            ctx->pc = 0x121A80u;
            goto label_121a80;
        }
    }
    ctx->pc = 0x121A64u;
    // 0x121a64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a68: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x121A68u;
    SET_GPR_U32(ctx, 31, 0x121A70u);
    ctx->pc = 0x121A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A68u;
    // 0x121a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x121A68u, 0x121A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A70u;
label_121a70:
    // 0x121a70: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x121a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x121a74: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x121a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x121a78: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x121a78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x121a7c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x121a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_121a80:
    // 0x121a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121a84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x121a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x121a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a8c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x121A8Cu;
    SET_GPR_U32(ctx, 31, 0x121A94u);
    ctx->pc = 0x121A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A8Cu;
    // 0x121a90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x121A8Cu, 0x121A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121A94u;
label_121a94:
    // 0x121a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121a98: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x121A98u;
    SET_GPR_U32(ctx, 31, 0x121AA0u);
    ctx->pc = 0x121A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121A98u;
    // 0x121a9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x121A98u, 0x121AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AA0u;
label_121aa0:
    // 0x121aa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x121aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121aa4:
    // 0x121aa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x121aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x121aa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121ab0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x121ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x121ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x121AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AB4u;
        // 0x121ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121ABCu;
    // 0x121abc: 0x0  nop
    ctx->pc = 0x121abcu;
    // NOP
    ctx->pc = 0x121ac0u;
}
