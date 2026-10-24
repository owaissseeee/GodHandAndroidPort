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

// Function: func_0020CAC8
// Address: 0x20cac8 - 0x20cd00
void func_0020CAC8_0x20cac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020CAC8_0x20cac8");
#endif

    switch (ctx->pc) {
        case 0x20cae8u: goto label_20cae8;
        case 0x20cb20u: goto label_20cb20;
        case 0x20cb44u: goto label_20cb44;
        case 0x20cb54u: goto label_20cb54;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc64u: goto label_20cc64;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc88u: goto label_20cc88;
        case 0x20cc9cu: goto label_20cc9c;
        default: break;
    }

    ctx->pc = 0x20cac8u;

    // 0x20cac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20cacc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20caccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x20cad0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x20cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20cad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cad8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20cadc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cae0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20CAE0u;
    SET_GPR_U32(ctx, 31, 0x20CAE8u);
    ctx->pc = 0x20CAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAE0u;
    // 0x20cae4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20CAE0u, 0x20CAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAE8u;
label_20cae8:
    // 0x20cae8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20cae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20caec: 0x920317bc  lbu         $v1, 0x17BC($s0)
    ctx->pc = 0x20caecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6076)));
    // 0x20caf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20caf4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CAF4u;
    {
        const bool branch_taken_0x20caf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAF4u;
        // 0x20caf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20caf4) {
            ctx->pc = 0x20CB18u;
            goto label_20cb18;
        }
    }
    ctx->pc = 0x20CAFCu;
    // 0x20cafc: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x20CAFCu;
    {
        const bool branch_taken_0x20cafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAFCu;
        // 0x20cb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cafc) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB04u;
    // 0x20cb04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20cb08: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CB08u;
    {
        const bool branch_taken_0x20cb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB08u;
        // 0x20cb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb08) {
            ctx->pc = 0x20CB2Cu;
            goto label_20cb2c;
        }
    }
    ctx->pc = 0x20CB10u;
    // 0x20cb10: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x20CB10u;
    {
        const bool branch_taken_0x20cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB10u;
        // 0x20cb14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb10) {
            ctx->pc = 0x20CCE8u;
            goto label_20cce8;
        }
    }
    ctx->pc = 0x20CB18u;
label_20cb18:
    // 0x20cb18: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CB18u;
    SET_GPR_U32(ctx, 31, 0x20CB20u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CB18u, 0x20CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB20u;
label_20cb20:
    // 0x20cb20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20cb24: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x20CB24u;
    {
        const bool branch_taken_0x20cb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB24u;
        // 0x20cb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb24) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB2Cu;
label_20cb2c:
    // 0x20cb2c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20cb30: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20cb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20cb34: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x20CB34u;
    {
        const bool branch_taken_0x20cb34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB34u;
        // 0x20cb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb34) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB3Cu;
    // 0x20cb3c: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20CB3Cu;
    SET_GPR_U32(ctx, 31, 0x20CB44u);
    ctx->pc = 0x20CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB3Cu;
    // 0x20cb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20CB3Cu, 0x20CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB44u;
label_20cb44:
    // 0x20cb44: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x20CB44u;
    {
        const bool branch_taken_0x20cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB44u;
        // 0x20cb48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb44) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB4Cu;
    // 0x20cb4c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20CB4Cu;
    SET_GPR_U32(ctx, 31, 0x20CB54u);
    ctx->pc = 0x20CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CB4Cu;
    // 0x20cb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20CB4Cu, 0x20CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CB54u;
label_20cb54:
    // 0x20cb54: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x20CB54u;
    {
        const bool branch_taken_0x20cb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB54u;
        // 0x20cb58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb54) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB5Cu;
    // 0x20cb5c: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x20cb5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20cb60: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x20cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x20cb64: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x20CB64u;
    {
        const bool branch_taken_0x20cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB64u;
        // 0x20cb68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb64) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB6Cu;
    // 0x20cb6c: 0x8e0217ac  lw          $v0, 0x17AC($s0)
    ctx->pc = 0x20cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20cb70: 0x1840005c  blez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x20CB70u;
    {
        const bool branch_taken_0x20cb70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB70u;
        // 0x20cb74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cb70) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB78u;
    // 0x20cb78: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x20cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cb7c: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x20cb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x20cb80: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x20cb80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x20cb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cb88: 0x0  nop
    ctx->pc = 0x20cb88u;
    // NOP
    // 0x20cb8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20cb8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cb90: 0x0  nop
    ctx->pc = 0x20cb90u;
    // NOP
    // 0x20cb94: 0x45010053  bc1t        . + 4 + (0x53 << 2)
    ctx->pc = 0x20CB94u;
    {
        const bool branch_taken_0x20cb94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cb94) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CB9Cu;
    // 0x20cb9c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x20cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cba0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20cba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cba8: 0x0  nop
    ctx->pc = 0x20cba8u;
    // NOP
    // 0x20cbac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20cbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cbb0: 0x0  nop
    ctx->pc = 0x20cbb0u;
    // NOP
    // 0x20cbb4: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
    ctx->pc = 0x20CBB4u;
    {
        const bool branch_taken_0x20cbb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cbb4) {
            ctx->pc = 0x20CBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CBB4u;
            // 0x20cbb8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CCE8u;
            goto label_20cce8;
        }
    }
    ctx->pc = 0x20CBBCu;
    // 0x20cbbc: 0xc6011740  lwc1        $f1, 0x1740($s0)
    ctx->pc = 0x20cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cbc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20cbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cbc4: 0x0  nop
    ctx->pc = 0x20cbc4u;
    // NOP
    // 0x20cbc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20cbc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cbcc: 0x0  nop
    ctx->pc = 0x20cbccu;
    // NOP
    // 0x20cbd0: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
    ctx->pc = 0x20CBD0u;
    {
        const bool branch_taken_0x20cbd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cbd0) {
            ctx->pc = 0x20CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CBD0u;
            // 0x20cbd4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CCE8u;
            goto label_20cce8;
        }
    }
    ctx->pc = 0x20CBD8u;
    // 0x20cbd8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20cbdc: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x20CBDCu;
    {
        const bool branch_taken_0x20cbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBDCu;
        // 0x20cbe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbdc) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CBE4u;
    // 0x20cbe4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x20cbe8: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x20CBE8u;
    {
        const bool branch_taken_0x20cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBE8u;
        // 0x20cbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbe8) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CBF0u;
    // 0x20cbf0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20cbf4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20CBF4u;
    {
        const bool branch_taken_0x20cbf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBF4u;
        // 0x20cbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbf4) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CBFCu;
    // 0x20cbfc: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x20cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20cc00: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20cc04: 0x28830017  slti        $v1, $a0, 0x17
    ctx->pc = 0x20cc04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x20cc08: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x20CC08u;
    {
        const bool branch_taken_0x20cc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC08u;
        // 0x20cc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc08) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CC10u;
    // 0x20cc10: 0x28820019  slti        $v0, $a0, 0x19
    ctx->pc = 0x20cc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x20cc14: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CC14u;
    {
        const bool branch_taken_0x20cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cc14) {
            ctx->pc = 0x20CC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC14u;
            // 0x20cc18: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC2Cu;
            goto label_20cc2c;
        }
    }
    ctx->pc = 0x20CC1Cu;
    // 0x20cc1c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20cc20: 0x14820030  bne         $a0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x20CC20u;
    {
        const bool branch_taken_0x20cc20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC20u;
        // 0x20cc24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc20) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CC28u;
    // 0x20cc28: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20cc2c:
    // 0x20cc2c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20CC2Cu;
    SET_GPR_U32(ctx, 31, 0x20CC34u);
    ctx->pc = 0x20CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC2Cu;
    // 0x20cc30: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20CC2Cu, 0x20CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC34u;
label_20cc34:
    // 0x20cc34: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x20cc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20cc38: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20cc38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20cc3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CC3Cu;
    {
        const bool branch_taken_0x20cc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC3Cu;
        // 0x20cc40: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc3c) {
            ctx->pc = 0x20CC5Cu;
            goto label_20cc5c;
        }
    }
    ctx->pc = 0x20CC44u;
    // 0x20cc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20cc48: 0x24421e90  addiu       $v0, $v0, 0x1E90
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7824));
    // 0x20cc4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20cc50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20cc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20cc54: 0x800008  jr          $a0
    ctx->pc = 0x20CC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CC5Cu: goto label_20cc5c;
            case 0x20CC70u: goto label_20cc70;
            case 0x20CC80u: goto label_20cc80;
            case 0x20CC94u: goto label_20cc94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20CC5Cu;
label_20cc5c:
    // 0x20cc5c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CC5Cu;
    SET_GPR_U32(ctx, 31, 0x20CC64u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CC5Cu, 0x20CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC64u;
label_20cc64:
    // 0x20cc64: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20cc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20cc68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20CC68u;
    {
        const bool branch_taken_0x20cc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC68u;
        // 0x20cc6c: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc68) {
            ctx->pc = 0x20CCB4u;
            goto label_20ccb4;
        }
    }
    ctx->pc = 0x20CC70u;
label_20cc70:
    // 0x20cc70: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CC70u;
    SET_GPR_U32(ctx, 31, 0x20CC78u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CC70u, 0x20CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC78u;
label_20cc78:
    // 0x20cc78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20CC78u;
    {
        const bool branch_taken_0x20cc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC78u;
        // 0x20cc7c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc78) {
            ctx->pc = 0x20CCA0u;
            goto label_20cca0;
        }
    }
    ctx->pc = 0x20CC80u;
label_20cc80:
    // 0x20cc80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CC80u;
    SET_GPR_U32(ctx, 31, 0x20CC88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CC80u, 0x20CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC88u;
label_20cc88:
    // 0x20cc88: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20cc8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20CC8Cu;
    {
        const bool branch_taken_0x20cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC8Cu;
        // 0x20cc90: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc8c) {
            ctx->pc = 0x20CCB4u;
            goto label_20ccb4;
        }
    }
    ctx->pc = 0x20CC94u;
label_20cc94:
    // 0x20cc94: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20CC94u, 0x20CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20cca0:
    // 0x20cca0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20cca0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20cca4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20CCA4u;
    {
        const bool branch_taken_0x20cca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cca4) {
            ctx->pc = 0x20CCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CCA4u;
            // 0x20cca8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CCACu;
            goto label_20ccac;
        }
    }
    ctx->pc = 0x20CCACu;
label_20ccac:
    // 0x20ccac: 0x2010  mfhi        $a0
    ctx->pc = 0x20ccacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20ccb0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x20ccb0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20ccb4:
    // 0x20ccb4: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x20ccb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x20ccb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ccbc: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x20ccbcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x20ccc0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CCC0u;
    {
        const bool branch_taken_0x20ccc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCC0u;
        // 0x20ccc4: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccc0) {
            ctx->pc = 0x20CCE0u;
            goto label_20cce0;
        }
    }
    ctx->pc = 0x20CCC8u;
    // 0x20ccc8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x20ccc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20cccc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x20ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ccd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ccd4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x20ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ccd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20CCD8u;
    {
        const bool branch_taken_0x20ccd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD8u;
        // 0x20ccdc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccd8) {
            ctx->pc = 0x20CCE4u;
            goto label_20cce4;
        }
    }
    ctx->pc = 0x20CCE0u;
label_20cce0:
    // 0x20cce0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20cce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20cce4:
    // 0x20cce4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20cce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20cce8:
    // 0x20cce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20cce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ccec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x20ccecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ccf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x20CCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCF4u;
        // 0x20ccf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CCFCu;
    // 0x20ccfc: 0x0  nop
    ctx->pc = 0x20ccfcu;
    // NOP
    ctx->pc = 0x20cd00u;
}
