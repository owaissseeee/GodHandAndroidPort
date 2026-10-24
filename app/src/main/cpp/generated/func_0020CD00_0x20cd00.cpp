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

// Function: func_0020CD00
// Address: 0x20cd00 - 0x20d138
void func_0020CD00_0x20cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020CD00_0x20cd00");
#endif

    switch (ctx->pc) {
        case 0x20cd1cu: goto label_20cd1c;
        case 0x20cd48u: goto label_20cd48;
        case 0x20cd58u: goto label_20cd58;
        case 0x20ceb0u: goto label_20ceb0;
        case 0x20ceccu: goto label_20cecc;
        case 0x20cee0u: goto label_20cee0;
        case 0x20cef0u: goto label_20cef0;
        case 0x20cf44u: goto label_20cf44;
        case 0x20cf58u: goto label_20cf58;
        case 0x20cf6cu: goto label_20cf6c;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cf90u: goto label_20cf90;
        case 0x20cfa0u: goto label_20cfa0;
        case 0x20cfb4u: goto label_20cfb4;
        case 0x20cfe0u: goto label_20cfe0;
        case 0x20d028u: goto label_20d028;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d0c0u: goto label_20d0c0;
        default: break;
    }

    ctx->pc = 0x20cd00u;

    // 0x20cd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20cd04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20cd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20cd08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20cd0c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20cd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20cd10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cd14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20CD14u;
    SET_GPR_U32(ctx, 31, 0x20CD1Cu);
    ctx->pc = 0x20CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD14u;
    // 0x20cd18: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20CD14u, 0x20CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD1Cu;
label_20cd1c:
    // 0x20cd1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20cd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cd20: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x20cd24: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20cd28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20cd2c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CD2Cu;
    {
        const bool branch_taken_0x20cd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD2Cu;
        // 0x20cd30: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd2c) {
            ctx->pc = 0x20CD50u;
            goto label_20cd50;
        }
    }
    ctx->pc = 0x20CD34u;
    // 0x20cd34: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20cd34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20cd38: 0x146000f9  bnez        $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x20CD38u;
    {
        const bool branch_taken_0x20cd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD38u;
        // 0x20cd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd38) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CD40u;
    // 0x20cd40: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20CD40u;
    SET_GPR_U32(ctx, 31, 0x20CD48u);
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20CD40u, 0x20CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD48u;
label_20cd48:
    // 0x20cd48: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x20CD48u;
    {
        const bool branch_taken_0x20cd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD48u;
        // 0x20cd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd48) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CD50u;
label_20cd50:
    // 0x20cd50: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20CD50u;
    SET_GPR_U32(ctx, 31, 0x20CD58u);
    ctx->pc = 0x20CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD50u;
    // 0x20cd54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20CD50u, 0x20CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CD58u;
label_20cd58:
    // 0x20cd58: 0x144000f1  bnez        $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x20CD58u;
    {
        const bool branch_taken_0x20cd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD58u;
        // 0x20cd5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd58) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CD60u;
    // 0x20cd60: 0x962303ac  lhu         $v1, 0x3AC($s1)
    ctx->pc = 0x20cd60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20cd64: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x20cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20cd68: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x20CD68u;
    {
        const bool branch_taken_0x20cd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD68u;
        // 0x20cd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd68) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CD70u;
    // 0x20cd70: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20cd74: 0x184000ea  blez        $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x20CD74u;
    {
        const bool branch_taken_0x20cd74 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD74u;
        // 0x20cd78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cd74) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CD7Cu;
    // 0x20cd7c: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x20cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cd80: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x20cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x20cd84: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x20cd84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x20cd88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cd8c: 0x0  nop
    ctx->pc = 0x20cd8cu;
    // NOP
    // 0x20cd90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20cd90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cd94: 0x0  nop
    ctx->pc = 0x20cd94u;
    // NOP
    // 0x20cd98: 0x450100e1  bc1t        . + 4 + (0xE1 << 2)
    ctx->pc = 0x20CD98u;
    {
        const bool branch_taken_0x20cd98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cd98) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20CDA0u;
    // 0x20cda0: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x20cda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cda4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20cda8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cdac: 0x0  nop
    ctx->pc = 0x20cdacu;
    // NOP
    // 0x20cdb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20cdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cdb4: 0x0  nop
    ctx->pc = 0x20cdb4u;
    // NOP
    // 0x20cdb8: 0x450100da  bc1t        . + 4 + (0xDA << 2)
    ctx->pc = 0x20CDB8u;
    {
        const bool branch_taken_0x20cdb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDB8u;
        // 0x20cdbc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdb8) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20CDC0u;
    // 0x20cdc0: 0xc6211740  lwc1        $f1, 0x1740($s1)
    ctx->pc = 0x20cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cdc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20cdc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cdc8: 0x0  nop
    ctx->pc = 0x20cdc8u;
    // NOP
    // 0x20cdcc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20cdccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cdd0: 0x0  nop
    ctx->pc = 0x20cdd0u;
    // NOP
    // 0x20cdd4: 0x450300d4  bc1tl       . + 4 + (0xD4 << 2)
    ctx->pc = 0x20CDD4u;
    {
        const bool branch_taken_0x20cdd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cdd4) {
            ctx->pc = 0x20CDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CDD4u;
            // 0x20cdd8: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D128u;
            goto label_20d128;
        }
    }
    ctx->pc = 0x20CDDCu;
    // 0x20cddc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20cde0: 0x144000d0  bnez        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x20CDE0u;
    {
        const bool branch_taken_0x20cde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDE0u;
        // 0x20cde4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cde0) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20CDE8u;
    // 0x20cde8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20cde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x20cdec: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x20CDECu;
    {
        const bool branch_taken_0x20cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDECu;
        // 0x20cdf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdec) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20CDF4u;
    // 0x20cdf4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20cdf8: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x20CDF8u;
    {
        const bool branch_taken_0x20cdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CDF8u;
        // 0x20cdfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cdf8) {
            ctx->pc = 0x20D124u;
            goto label_20d124;
        }
    }
    ctx->pc = 0x20CE00u;
    // 0x20ce00: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20ce04: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20ce04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20ce08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ce0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20ce10: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20ce10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20ce14: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x20CE14u;
    {
        const bool branch_taken_0x20ce14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE14u;
        // 0x20ce18: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce14) {
            ctx->pc = 0x20D11Cu;
            goto label_20d11c;
        }
    }
    ctx->pc = 0x20CE1Cu;
    // 0x20ce1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ce20: 0x24421eb0  addiu       $v0, $v0, 0x1EB0
    ctx->pc = 0x20ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7856));
    // 0x20ce24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ce28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ce2c: 0x800008  jr          $a0
    ctx->pc = 0x20CE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CE34u: goto label_20ce34;
            case 0x20D11Cu: goto label_20d11c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20ce38: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x20ce38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x20ce3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CE3Cu;
    {
        const bool branch_taken_0x20ce3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE3Cu;
        // 0x20ce40: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce3c) {
            ctx->pc = 0x20CE4Cu;
            goto label_20ce4c;
        }
    }
    ctx->pc = 0x20CE44u;
    // 0x20ce44: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x20CE44u;
    {
        const bool branch_taken_0x20ce44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce44) {
            ctx->pc = 0x20D0B8u;
            goto label_20d0b8;
        }
    }
    ctx->pc = 0x20CE4Cu;
label_20ce4c:
    // 0x20ce4c: 0x84a20046  lh          $v0, 0x46($a1)
    ctx->pc = 0x20ce4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x20ce50: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x20ce54: 0x2c83004a  sltiu       $v1, $a0, 0x4A
    ctx->pc = 0x20ce54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)74) ? 1 : 0);
    // 0x20ce58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CE58u;
    {
        const bool branch_taken_0x20ce58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE58u;
        // 0x20ce5c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce58) {
            ctx->pc = 0x20CE78u;
            goto label_20ce78;
        }
    }
    ctx->pc = 0x20CE60u;
    // 0x20ce60: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20ce64: 0x24422010  addiu       $v0, $v0, 0x2010
    ctx->pc = 0x20ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x20ce68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ce6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ce70: 0x800008  jr          $a0
    ctx->pc = 0x20CE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CE78u: goto label_20ce78;
            case 0x20CF04u: goto label_20cf04;
            case 0x20CFF0u: goto label_20cff0;
            case 0x20D070u: goto label_20d070;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CE70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20CE78u;
label_20ce78:
    // 0x20ce78: 0x922317b9  lbu         $v1, 0x17B9($s1)
    ctx->pc = 0x20ce78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
    // 0x20ce7c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20ce7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce80: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CE80u;
    {
        const bool branch_taken_0x20ce80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x20CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE80u;
        // 0x20ce84: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce80) {
            ctx->pc = 0x20CEA4u;
            goto label_20cea4;
        }
    }
    ctx->pc = 0x20CE88u;
    // 0x20ce88: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x20CE88u;
    {
        const bool branch_taken_0x20ce88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE88u;
        // 0x20ce8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce88) {
            ctx->pc = 0x20D074u;
            goto label_20d074;
        }
    }
    ctx->pc = 0x20CE90u;
    // 0x20ce90: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x20ce90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20ce94: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20CE94u;
    {
        const bool branch_taken_0x20ce94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE94u;
        // 0x20ce98: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce94) {
            ctx->pc = 0x20CEC4u;
            goto label_20cec4;
        }
    }
    ctx->pc = 0x20CE9Cu;
    // 0x20ce9c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20CE9Cu;
    {
        const bool branch_taken_0x20ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ce9c) {
            ctx->pc = 0x20D074u;
            goto label_20d074;
        }
    }
    ctx->pc = 0x20CEA4u;
label_20cea4:
    // 0x20cea4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20cea8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CEA8u;
    SET_GPR_U32(ctx, 31, 0x20CEB0u);
    ctx->pc = 0x20CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEA8u;
    // 0x20ceac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CEA8u, 0x20CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEB0u;
label_20ceb0:
    // 0x20ceb0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20ceb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20ceb4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20CEB4u;
    {
        const bool branch_taken_0x20ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ceb4) {
            ctx->pc = 0x20CEE8u;
            goto label_20cee8;
        }
    }
    ctx->pc = 0x20CEBCu;
    // 0x20cebc: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x20CEBCu;
    {
        const bool branch_taken_0x20cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEBCu;
        // 0x20cec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cebc) {
            ctx->pc = 0x20D074u;
            goto label_20d074;
        }
    }
    ctx->pc = 0x20CEC4u;
label_20cec4:
    // 0x20cec4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CEC4u;
    SET_GPR_U32(ctx, 31, 0x20CECCu);
    ctx->pc = 0x20CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CEC4u;
    // 0x20cec8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CEC4u, 0x20CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CECCu;
label_20cecc:
    // 0x20cecc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20ceccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20ced0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CED0u;
    {
        const bool branch_taken_0x20ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ced0) {
            ctx->pc = 0x20CEE8u;
            goto label_20cee8;
        }
    }
    ctx->pc = 0x20CED8u;
    // 0x20ced8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CED8u;
    SET_GPR_U32(ctx, 31, 0x20CEE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CED8u, 0x20CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEE0u;
label_20cee0:
    // 0x20cee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20CEE0u;
    {
        const bool branch_taken_0x20cee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEE0u;
        // 0x20cee4: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cee0) {
            ctx->pc = 0x20CEF4u;
            goto label_20cef4;
        }
    }
    ctx->pc = 0x20CEE8u;
label_20cee8:
    // 0x20cee8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CEE8u;
    SET_GPR_U32(ctx, 31, 0x20CEF0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CEE8u, 0x20CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CEF0u;
label_20cef0:
    // 0x20cef0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x20cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_20cef4:
    // 0x20cef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20cef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cef8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x20cefc: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x20CEFCu;
    {
        const bool branch_taken_0x20cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEFCu;
        // 0x20cf00: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cefc) {
            ctx->pc = 0x20D074u;
            goto label_20d074;
        }
    }
    ctx->pc = 0x20CF04u;
label_20cf04:
    // 0x20cf04: 0x923017b9  lbu         $s0, 0x17B9($s1)
    ctx->pc = 0x20cf04u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
    // 0x20cf08: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20cf08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cf0c: 0x1212000a  beq         $s0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x20CF0Cu;
    {
        const bool branch_taken_0x20cf0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x20CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF0Cu;
        // 0x20cf10: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf0c) {
            ctx->pc = 0x20CF38u;
            goto label_20cf38;
        }
    }
    ctx->pc = 0x20CF14u;
    // 0x20cf14: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x20CF14u;
    {
        const bool branch_taken_0x20cf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF14u;
        // 0x20cf18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf14) {
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20CF1Cu;
    // 0x20cf1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20cf20: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20CF20u;
    {
        const bool branch_taken_0x20cf20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF20u;
        // 0x20cf24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf20) {
            ctx->pc = 0x20CF60u;
            goto label_20cf60;
        }
    }
    ctx->pc = 0x20CF28u;
    // 0x20cf28: 0x1202001b  beq         $s0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20CF28u;
    {
        const bool branch_taken_0x20cf28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF28u;
        // 0x20cf2c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf28) {
            ctx->pc = 0x20CF98u;
            goto label_20cf98;
        }
    }
    ctx->pc = 0x20CF30u;
    // 0x20cf30: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x20CF30u;
    {
        const bool branch_taken_0x20cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF30u;
        // 0x20cf34: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf30) {
            ctx->pc = 0x20D05Cu;
            goto label_20d05c;
        }
    }
    ctx->pc = 0x20CF38u;
label_20cf38:
    // 0x20cf38: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20cf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20cf3c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x20CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF3Cu;
    // 0x20cf40: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CF3Cu, 0x20CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20cf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20cf48: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x20CF48u;
    {
        const bool branch_taken_0x20cf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cf48) {
            ctx->pc = 0x20CF4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CF48u;
            // 0x20cf4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20CF50u;
    // 0x20cf50: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CF50u;
    SET_GPR_U32(ctx, 31, 0x20CF58u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CF50u, 0x20CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF58u;
label_20cf58:
    // 0x20cf58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20CF58u;
    {
        const bool branch_taken_0x20cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF58u;
        // 0x20cf5c: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf58) {
            ctx->pc = 0x20CFE4u;
            goto label_20cfe4;
        }
    }
    ctx->pc = 0x20CF60u;
label_20cf60:
    // 0x20cf60: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20cf64: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CF64u;
    SET_GPR_U32(ctx, 31, 0x20CF6Cu);
    ctx->pc = 0x20CF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF64u;
    // 0x20cf68: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CF64u, 0x20CF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF6Cu;
label_20cf6c:
    // 0x20cf6c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20cf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20cf70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CF70u;
    {
        const bool branch_taken_0x20cf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cf70) {
            ctx->pc = 0x20CF88u;
            goto label_20cf88;
        }
    }
    ctx->pc = 0x20CF78u;
    // 0x20cf78: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CF78u;
    SET_GPR_U32(ctx, 31, 0x20CF80u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CF78u, 0x20CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF80u;
label_20cf80:
    // 0x20cf80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20CF80u;
    {
        const bool branch_taken_0x20cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF80u;
        // 0x20cf84: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf80) {
            ctx->pc = 0x20CFE4u;
            goto label_20cfe4;
        }
    }
    ctx->pc = 0x20CF88u;
label_20cf88:
    // 0x20cf88: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CF88u;
    SET_GPR_U32(ctx, 31, 0x20CF90u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CF88u, 0x20CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF90u;
label_20cf90:
    // 0x20cf90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20CF90u;
    {
        const bool branch_taken_0x20cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF90u;
        // 0x20cf94: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf90) {
            ctx->pc = 0x20CFE4u;
            goto label_20cfe4;
        }
    }
    ctx->pc = 0x20CF98u;
label_20cf98:
    // 0x20cf98: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CF98u;
    SET_GPR_U32(ctx, 31, 0x20CFA0u);
    ctx->pc = 0x20CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF98u;
    // 0x20cf9c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CF98u, 0x20CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFA0u;
label_20cfa0:
    // 0x20cfa0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20cfa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20cfa4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20CFA4u;
    {
        const bool branch_taken_0x20cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cfa4) {
            ctx->pc = 0x20CFD8u;
            goto label_20cfd8;
        }
    }
    ctx->pc = 0x20CFACu;
    // 0x20cfac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CFACu;
    SET_GPR_U32(ctx, 31, 0x20CFB4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CFACu, 0x20CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFB4u;
label_20cfb4:
    // 0x20cfb4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x20cfb4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20cfb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20cfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20cfc0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20CFC0u;
    {
        const bool branch_taken_0x20cfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cfc0) {
            ctx->pc = 0x20CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CFC0u;
            // 0x20cfc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CFC8u;
            goto label_20cfc8;
        }
    }
    ctx->pc = 0x20CFC8u;
label_20cfc8:
    // 0x20cfc8: 0x1810  mfhi        $v1
    ctx->pc = 0x20cfc8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20cfcc: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x20cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x20cfd0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x20CFD0u;
    {
        const bool branch_taken_0x20cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFD0u;
        // 0x20cfd4: 0x3280b  movn        $a1, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfd0) {
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20CFD8u;
label_20cfd8:
    // 0x20cfd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CFD8u;
    SET_GPR_U32(ctx, 31, 0x20CFE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CFD8u, 0x20CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFE0u;
label_20cfe0:
    // 0x20cfe0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_20cfe4:
    // 0x20cfe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20cfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfe8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20CFE8u;
    {
        const bool branch_taken_0x20cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFE8u;
        // 0x20cfec: 0x38420003  xori        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfe8) {
            ctx->pc = 0x20D054u;
            goto label_20d054;
        }
    }
    ctx->pc = 0x20CFF0u;
label_20cff0:
    // 0x20cff0: 0x922317b9  lbu         $v1, 0x17B9($s1)
    ctx->pc = 0x20cff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
    // 0x20cff4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20cff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20cff8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CFF8u;
    {
        const bool branch_taken_0x20cff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x20CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF8u;
        // 0x20cffc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cff8) {
            ctx->pc = 0x20D01Cu;
            goto label_20d01c;
        }
    }
    ctx->pc = 0x20D000u;
    // 0x20d000: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D000u;
    {
        const bool branch_taken_0x20d000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D000u;
        // 0x20d004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d000) {
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20D008u;
    // 0x20d008: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x20d008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20d00c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D00Cu;
    {
        const bool branch_taken_0x20d00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d00c) {
            ctx->pc = 0x20D044u;
            goto label_20d044;
        }
    }
    ctx->pc = 0x20D014u;
    // 0x20d014: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20D014u;
    {
        const bool branch_taken_0x20d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d014) {
            ctx->pc = 0x20D05Cu;
            goto label_20d05c;
        }
    }
    ctx->pc = 0x20D01Cu;
label_20d01c:
    // 0x20d01c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20d020: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20D020u;
    SET_GPR_U32(ctx, 31, 0x20D028u);
    ctx->pc = 0x20D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D020u;
    // 0x20d024: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20D020u, 0x20D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D028u;
label_20d028:
    // 0x20d028: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20d028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20d02c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20D02Cu;
    {
        const bool branch_taken_0x20d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d02c) {
            ctx->pc = 0x20D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D02Cu;
            // 0x20d030: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D058u;
            goto label_20d058;
        }
    }
    ctx->pc = 0x20D034u;
    // 0x20d034: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D034u;
    SET_GPR_U32(ctx, 31, 0x20D03Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D034u, 0x20D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D03Cu;
label_20d03c:
    // 0x20d03c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20D03Cu;
    {
        const bool branch_taken_0x20d03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D03Cu;
        // 0x20d040: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d03c) {
            ctx->pc = 0x20D050u;
            goto label_20d050;
        }
    }
    ctx->pc = 0x20D044u;
label_20d044:
    // 0x20d044: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D044u;
    SET_GPR_U32(ctx, 31, 0x20D04Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D044u, 0x20D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D04Cu;
label_20d04c:
    // 0x20d04c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_20d050:
    // 0x20d050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d054:
    // 0x20d054: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x20d054u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_20d058:
    // 0x20d058: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_20d05c:
    // 0x20d05c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x20d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x20d060: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d064: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20d064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20d068: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D068u;
    {
        const bool branch_taken_0x20d068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D068u;
        // 0x20d06c: 0x82280b  movn        $a1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d068) {
            ctx->pc = 0x20D074u;
            goto label_20d074;
        }
    }
    ctx->pc = 0x20D070u;
label_20d070:
    // 0x20d070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d074:
    // 0x20d074: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x20D074u;
    {
        const bool branch_taken_0x20d074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D074u;
        // 0x20d078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d074) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20D07Cu;
    // 0x20d07c: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20d080: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20d084: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D088u;
    {
        const bool branch_taken_0x20d088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D088u;
        // 0x20d08c: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d088) {
            ctx->pc = 0x20D098u;
            goto label_20d098;
        }
    }
    ctx->pc = 0x20D090u;
    // 0x20d090: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D090u;
    {
        const bool branch_taken_0x20d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D090u;
        // 0x20d094: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d090) {
            ctx->pc = 0x20D09Cu;
            goto label_20d09c;
        }
    }
    ctx->pc = 0x20D098u;
label_20d098:
    // 0x20d098: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20d098u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d09c:
    // 0x20d09c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d0a0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20d0a4: 0xae2217c4  sw          $v0, 0x17C4($s1)
    ctx->pc = 0x20d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    // 0x20d0a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d0ac: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20d0acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d0b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20D0B0u;
    {
        const bool branch_taken_0x20d0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0B0u;
        // 0x20d0b4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0b0) {
            ctx->pc = 0x20D10Cu;
            goto label_20d10c;
        }
    }
    ctx->pc = 0x20D0B8u;
label_20d0b8:
    // 0x20d0b8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D0B8u, 0x20D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20d0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20d0c4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d0c8: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D0C8u;
    {
        const bool branch_taken_0x20d0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0C8u;
        // 0x20d0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0c8) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20D0D0u;
    // 0x20d0d0: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20d0d4: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20d0d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d0dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D0DCu;
    {
        const bool branch_taken_0x20d0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0DCu;
        // 0x20d0e0: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0dc) {
            ctx->pc = 0x20D0ECu;
            goto label_20d0ec;
        }
    }
    ctx->pc = 0x20D0E4u;
    // 0x20d0e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D0E4u;
    {
        const bool branch_taken_0x20d0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0E4u;
        // 0x20d0e8: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0e4) {
            ctx->pc = 0x20D0F0u;
            goto label_20d0f0;
        }
    }
    ctx->pc = 0x20D0ECu;
label_20d0ec:
    // 0x20d0ec: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20d0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d0f0:
    // 0x20d0f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d0f4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x20d0f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d0fc: 0xae2217c4  sw          $v0, 0x17C4($s1)
    ctx->pc = 0x20d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    // 0x20d100: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20d100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d108: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x20d108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
label_20d10c:
    // 0x20d10c: 0xa62017c8  sh          $zero, 0x17C8($s1)
    ctx->pc = 0x20d10cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d110: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x20d110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d114: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D114u;
    {
        const bool branch_taken_0x20d114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D114u;
        // 0x20d118: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d114) {
            ctx->pc = 0x20D120u;
            goto label_20d120;
        }
    }
    ctx->pc = 0x20D11Cu;
label_20d11c:
    // 0x20d11c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d120:
    // 0x20d120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20d120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20d124:
    // 0x20d124: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20d124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d128:
    // 0x20d128: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20d128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d130: 0x3e00008  jr          $ra
    ctx->pc = 0x20D130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D130u;
        // 0x20d134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D138u;
}
