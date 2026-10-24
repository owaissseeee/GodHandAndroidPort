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

// Function: func_00381940
// Address: 0x381940 - 0x381b38
void func_00381940_0x381940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381940_0x381940");
#endif

    switch (ctx->pc) {
        case 0x3819a0u: goto label_3819a0;
        case 0x3819b8u: goto label_3819b8;
        case 0x3819ecu: goto label_3819ec;
        case 0x381a2cu: goto label_381a2c;
        case 0x381a38u: goto label_381a38;
        case 0x381a5cu: goto label_381a5c;
        case 0x381a78u: goto label_381a78;
        case 0x381a88u: goto label_381a88;
        case 0x381a94u: goto label_381a94;
        case 0x381aa0u: goto label_381aa0;
        case 0x381ab4u: goto label_381ab4;
        case 0x381ad8u: goto label_381ad8;
        case 0x381aecu: goto label_381aec;
        case 0x381af4u: goto label_381af4;
        case 0x381b18u: goto label_381b18;
        default: break;
    }

    ctx->pc = 0x381940u;

    // 0x381940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x381940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x381944: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x381944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x381948: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x381948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x38194c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381950: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x381950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x381954: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x381954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381958: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x381958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x38195c: 0x26120318  addiu       $s2, $s0, 0x318
    ctx->pc = 0x38195cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x381960: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x381960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x381964: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x381964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x381968: 0x8c43fff0  lw          $v1, -0x10($v0)
    ctx->pc = 0x381968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x38196c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x38196Cu;
    {
        const bool branch_taken_0x38196c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x381970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38196Cu;
        // 0x381970: 0x26130348  addiu       $s3, $s0, 0x348 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38196c) {
            ctx->pc = 0x3819C0u;
            goto label_3819c0;
        }
    }
    ctx->pc = 0x381974u;
    // 0x381974: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x381974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x381978: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x381978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x38197c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38197Cu;
    {
        const bool branch_taken_0x38197c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38197Cu;
        // 0x381980: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38197c) {
            ctx->pc = 0x38198Cu;
            goto label_38198c;
        }
    }
    ctx->pc = 0x381984u;
    // 0x381984: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x381984u;
    {
        const bool branch_taken_0x381984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381984u;
        // 0x381988: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381984) {
            ctx->pc = 0x381B18u;
            goto label_381b18;
        }
    }
    ctx->pc = 0x38198Cu;
label_38198c:
    // 0x38198c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x38198cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x381990: 0x24e7c760  addiu       $a3, $a3, -0x38A0
    ctx->pc = 0x381990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952800));
    // 0x381994: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x381994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x381998: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x381998u;
    SET_GPR_U32(ctx, 31, 0x3819A0u);
    ctx->pc = 0x38199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381998u;
    // 0x38199c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x381998u, 0x3819A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3819A0u;
label_3819a0:
    // 0x3819a0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3819a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3819a4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3819a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3819a8: 0x24e7c780  addiu       $a3, $a3, -0x3880
    ctx->pc = 0x3819a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952832));
    // 0x3819ac: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3819acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3819b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3819B0u;
    SET_GPR_U32(ctx, 31, 0x3819B8u);
    ctx->pc = 0x3819B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3819B0u;
    // 0x3819b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3819B0u, 0x3819B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3819B8u;
label_3819b8:
    // 0x3819b8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3819B8u;
    {
        const bool branch_taken_0x3819b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819B8u;
        // 0x3819bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819b8) {
            ctx->pc = 0x381B1Cu;
            goto label_381b1c;
        }
    }
    ctx->pc = 0x3819C0u;
label_3819c0:
    // 0x3819c0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3819c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3819c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3819C4u;
    {
        const bool branch_taken_0x3819c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819C4u;
        // 0x3819c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819c4) {
            ctx->pc = 0x3819E4u;
            goto label_3819e4;
        }
    }
    ctx->pc = 0x3819CCu;
    // 0x3819cc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3819ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3819d0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x3819d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x3819d4: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x3819D4u;
    {
        const bool branch_taken_0x3819d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3819d4) {
            ctx->pc = 0x3819D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3819D4u;
            // 0x3819d8: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x3819DCu;
    // 0x3819dc: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3819DCu;
    {
        const bool branch_taken_0x3819dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3819dc) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x3819E4u;
label_3819e4:
    // 0x3819e4: 0xc0e0738  jal         func_381CE0
    ctx->pc = 0x3819E4u;
    SET_GPR_U32(ctx, 31, 0x3819ECu);
    ctx->pc = 0x3819E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3819E4u;
    // 0x3819e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381CE0u, 0x3819E4u, 0x3819ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3819ECu;
label_3819ec:
    // 0x3819ec: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x3819ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3819f0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x3819f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3819f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3819F4u;
    {
        const bool branch_taken_0x3819f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3819F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3819F4u;
        // 0x3819f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3819f4) {
            ctx->pc = 0x381A08u;
            goto label_381a08;
        }
    }
    ctx->pc = 0x3819FCu;
    // 0x3819fc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3819fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x381a00: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x381A00u;
    {
        const bool branch_taken_0x381a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A00u;
        // 0x381a04: 0xae40002c  sw          $zero, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a00) {
            ctx->pc = 0x381B1Cu;
            goto label_381b1c;
        }
    }
    ctx->pc = 0x381A08u;
label_381a08:
    // 0x381a08: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x381a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x381a0c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x381A0Cu;
    {
        const bool branch_taken_0x381a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381a0c) {
            ctx->pc = 0x381A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381A0Cu;
            // 0x381a10: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381A44u;
            goto label_381a44;
        }
    }
    ctx->pc = 0x381A14u;
    // 0x381a14: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x381a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x381a18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x381a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x381a1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381A1Cu;
    {
        const bool branch_taken_0x381a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A1Cu;
        // 0x381a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a1c) {
            ctx->pc = 0x381A30u;
            goto label_381a30;
        }
    }
    ctx->pc = 0x381A24u;
    // 0x381a24: 0xc0e0370  jal         func_380DC0
    ctx->pc = 0x381A24u;
    SET_GPR_U32(ctx, 31, 0x381A2Cu);
    ctx->pc = 0x381A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A24u;
    // 0x381a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380DC0u, 0x381A24u, 0x381A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A2Cu;
label_381a2c:
    // 0x381a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_381a30:
    // 0x381a30: 0xc0e06f2  jal         func_381BC8
    ctx->pc = 0x381A30u;
    SET_GPR_U32(ctx, 31, 0x381A38u);
    ctx->pc = 0x381A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A30u;
    // 0x381a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381BC8u, 0x381A30u, 0x381A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A38u;
label_381a38:
    // 0x381a38: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x381A38u;
    {
        const bool branch_taken_0x381a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x381a38) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381A40u;
    // 0x381a40: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x381a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_381a44:
    // 0x381a44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x381a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x381a48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381A48u;
    {
        const bool branch_taken_0x381a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A48u;
        // 0x381a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a48) {
            ctx->pc = 0x381A5Cu;
            goto label_381a5c;
        }
    }
    ctx->pc = 0x381A50u;
    // 0x381a50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x381a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381a54: 0xc0e0770  jal         func_381DC0
    ctx->pc = 0x381A54u;
    SET_GPR_U32(ctx, 31, 0x381A5Cu);
    ctx->pc = 0x381A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A54u;
    // 0x381a58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381DC0u, 0x381A54u, 0x381A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A5Cu;
label_381a5c:
    // 0x381a5c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x381a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x381a60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x381a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x381a64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381A64u;
    {
        const bool branch_taken_0x381a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381A64u;
        // 0x381a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381a64) {
            ctx->pc = 0x381A78u;
            goto label_381a78;
        }
    }
    ctx->pc = 0x381A6Cu;
    // 0x381a6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x381a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381a70: 0xc0e074e  jal         func_381D38
    ctx->pc = 0x381A70u;
    SET_GPR_U32(ctx, 31, 0x381A78u);
    ctx->pc = 0x381A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A70u;
    // 0x381a74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381D38u, 0x381A70u, 0x381A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A78u;
label_381a78:
    // 0x381a78: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x381a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x381a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381a80: 0xc0e0404  jal         func_381010
    ctx->pc = 0x381A80u;
    SET_GPR_U32(ctx, 31, 0x381A88u);
    ctx->pc = 0x381A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A80u;
    // 0x381a84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381010u, 0x381A80u, 0x381A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A88u;
label_381a88:
    // 0x381a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381a8c: 0xc0e078c  jal         func_381E30
    ctx->pc = 0x381A8Cu;
    SET_GPR_U32(ctx, 31, 0x381A94u);
    ctx->pc = 0x381A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A8Cu;
    // 0x381a90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381E30u, 0x381A8Cu, 0x381A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381A94u;
label_381a94:
    // 0x381a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381a98: 0xc0e07a8  jal         func_381EA0
    ctx->pc = 0x381A98u;
    SET_GPR_U32(ctx, 31, 0x381AA0u);
    ctx->pc = 0x381A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381A98u;
    // 0x381a9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381EA0u, 0x381A98u, 0x381AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AA0u;
label_381aa0:
    // 0x381aa0: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x381aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x381aa4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x381AA4u;
    {
        const bool branch_taken_0x381aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x381AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AA4u;
        // 0x381aa8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381aa4) {
            ctx->pc = 0x381ABCu;
            goto label_381abc;
        }
    }
    ctx->pc = 0x381AACu;
    // 0x381aac: 0xc0cb716  jal         func_32DC58
    ctx->pc = 0x381AACu;
    SET_GPR_U32(ctx, 31, 0x381AB4u);
    ctx->pc = 0x32DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC58u, 0x381AACu, 0x381AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AB4u;
label_381ab4:
    // 0x381ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x381AB4u;
    {
        const bool branch_taken_0x381ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AB4u;
        // 0x381ab8: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ab4) {
            ctx->pc = 0x381AC0u;
            goto label_381ac0;
        }
    }
    ctx->pc = 0x381ABCu;
label_381abc:
    // 0x381abc: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x381abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_381ac0:
    // 0x381ac0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x381ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x381ac4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x381AC4u;
    {
        const bool branch_taken_0x381ac4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x381ac4) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381ACCu;
    // 0x381acc: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x381accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x381ad0: 0xc0cb734  jal         func_32DCD0
    ctx->pc = 0x381AD0u;
    SET_GPR_U32(ctx, 31, 0x381AD8u);
    ctx->pc = 0x381AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381AD0u;
    // 0x381ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DCD0u, 0x381AD0u, 0x381AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AD8u;
label_381ad8:
    // 0x381ad8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381AD8u;
    {
        const bool branch_taken_0x381ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381AD8u;
        // 0x381adc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ad8) {
            ctx->pc = 0x381AECu;
            goto label_381aec;
        }
    }
    ctx->pc = 0x381AE0u;
    // 0x381ae0: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x381ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x381ae4: 0xc0ca858  jal         func_32A160
    ctx->pc = 0x381AE4u;
    SET_GPR_U32(ctx, 31, 0x381AECu);
    ctx->pc = 0x381AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381AE4u;
    // 0x381ae8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A160u, 0x381AE4u, 0x381AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AECu;
label_381aec:
    // 0x381aec: 0xc0e0a26  jal         func_382898
    ctx->pc = 0x381AECu;
    SET_GPR_U32(ctx, 31, 0x381AF4u);
    ctx->pc = 0x381AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381AECu;
    // 0x381af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382898u, 0x381AECu, 0x381AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381AF4u;
label_381af4:
    // 0x381af4: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x381af4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381af8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x381af8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x381afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b00: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x381b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x381b04: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x381b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x381b08: 0x34e76060  ori         $a3, $a3, 0x6060
    ctx->pc = 0x381b08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)24672);
    // 0x381b0c: 0x24c60078  addiu       $a2, $a2, 0x78
    ctx->pc = 0x381b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 120));
    // 0x381b10: 0xc0e019e  jal         func_380678
    ctx->pc = 0x381B10u;
    SET_GPR_U32(ctx, 31, 0x381B18u);
    ctx->pc = 0x381B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B10u;
    // 0x381b14: 0x3408fff8  ori         $t0, $zero, 0xFFF8 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    ctx->in_delay_slot = false;
    ctx->pc = 0x380678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380678u, 0x381B10u, 0x381B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381B18u;
label_381b18:
    // 0x381b18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x381b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_381b1c:
    // 0x381b1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x381b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x381b20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x381b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381b24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x381b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381b28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x381b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x381b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381b30: 0x3e00008  jr          $ra
    ctx->pc = 0x381B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381B30u;
        // 0x381b34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381B38u;
}
