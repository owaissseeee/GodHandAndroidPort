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

// Function: func_0028EBF0
// Address: 0x28ebf0 - 0x28ed28
void func_0028EBF0_0x28ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028EBF0_0x28ebf0");
#endif

    switch (ctx->pc) {
        case 0x28ecd8u: goto label_28ecd8;
        default: break;
    }

    ctx->pc = 0x28ebf0u;

    // 0x28ebf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ebf4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x28ebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28ebf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28ebf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28ebfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ec00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ec00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec04: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28ec08: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28EC08u;
    {
        const bool branch_taken_0x28ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28ec08) {
            ctx->pc = 0x28EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC08u;
            // 0x28ec0c: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EC30u;
            goto label_28ec30;
        }
    }
    ctx->pc = 0x28EC10u;
    // 0x28ec10: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x28ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ec14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28ec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28ec18: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x28ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ec1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x28ec1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28ec20: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x28ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ec24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28ec24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28ec28: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x28ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x28ec2c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x28ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_28ec30:
    // 0x28ec30: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28EC30u;
    {
        const bool branch_taken_0x28ec30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ec30) {
            ctx->pc = 0x28EC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EC30u;
            // 0x28ec34: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EC54u;
            goto label_28ec54;
        }
    }
    ctx->pc = 0x28EC38u;
    // 0x28ec38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ec3c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x28ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x28ec40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ec44: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28ec44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28ec48: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ec4c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28ec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28ec50: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x28ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28ec54:
    // 0x28ec54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ec58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ec5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28ec5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ec60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec64: 0x960402fe  lhu         $a0, 0x2FE($s0)
    ctx->pc = 0x28ec64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x28ec68: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x28ec68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x28ec6c: 0xae060628  sw          $a2, 0x628($s0)
    ctx->pc = 0x28ec6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1576), GPR_U32(ctx, 6));
    // 0x28ec70: 0x288302a0  slti        $v1, $a0, 0x2A0
    ctx->pc = 0x28ec70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x28ec74: 0xa2020531  sb          $v0, 0x531($s0)
    ctx->pc = 0x28ec74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ec78: 0xe6010644  swc1        $f1, 0x644($s0)
    ctx->pc = 0x28ec78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1604), bits); }
    // 0x28ec7c: 0xae000610  sw          $zero, 0x610($s0)
    ctx->pc = 0x28ec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 0));
    // 0x28ec80: 0xa2000614  sb          $zero, 0x614($s0)
    ctx->pc = 0x28ec80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1556), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec84: 0xa2000615  sb          $zero, 0x615($s0)
    ctx->pc = 0x28ec84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1557), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec88: 0xa2000616  sb          $zero, 0x616($s0)
    ctx->pc = 0x28ec88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1558), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec8c: 0xa2000623  sb          $zero, 0x623($s0)
    ctx->pc = 0x28ec8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1571), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec90: 0xa600062c  sh          $zero, 0x62C($s0)
    ctx->pc = 0x28ec90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1580), (uint16_t)GPR_U32(ctx, 0));
    // 0x28ec94: 0xa2000617  sb          $zero, 0x617($s0)
    ctx->pc = 0x28ec94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec98: 0xa2000622  sb          $zero, 0x622($s0)
    ctx->pc = 0x28ec98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1570), (uint8_t)GPR_U32(ctx, 0));
    // 0x28ec9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EC9Cu;
    {
        const bool branch_taken_0x28ec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC9Cu;
        // 0x28eca0: 0xe6010630  swc1        $f1, 0x630($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec9c) {
            ctx->pc = 0x28ECACu;
            goto label_28ecac;
        }
    }
    ctx->pc = 0x28ECA4u;
    // 0x28eca4: 0x28820300  slti        $v0, $a0, 0x300
    ctx->pc = 0x28eca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x28eca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ecac:
    // 0x28ecac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x28ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x28ecb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28ECB0u;
    {
        const bool branch_taken_0x28ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECB0u;
        // 0x28ecb4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecb0) {
            ctx->pc = 0x28ECC4u;
            goto label_28ecc4;
        }
    }
    ctx->pc = 0x28ECB8u;
    // 0x28ecb8: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x28ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x28ecbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28ECBCu;
    {
        const bool branch_taken_0x28ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECBCu;
        // 0x28ecc0: 0x24420e50  addiu       $v0, $v0, 0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecbc) {
            ctx->pc = 0x28ECCCu;
            goto label_28eccc;
        }
    }
    ctx->pc = 0x28ECC4u;
label_28ecc4:
    // 0x28ecc4: 0x8c62d6e8  lw          $v0, -0x2918($v1)
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x28ecc8: 0x24420e00  addiu       $v0, $v0, 0xE00
    ctx->pc = 0x28ecc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3584));
label_28eccc:
    // 0x28eccc: 0xae020660  sw          $v0, 0x660($s0)
    ctx->pc = 0x28ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 2));
    // 0x28ecd0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x28ECD0u;
    SET_GPR_U32(ctx, 31, 0x28ECD8u);
    ctx->pc = 0x28ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ECD0u;
    // 0x28ecd4: 0x8e040660  lw          $a0, 0x660($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x28ECD0u, 0x28ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ECD8u;
label_28ecd8:
    // 0x28ecd8: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x28ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x28ecdc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x28ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x28ece0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ece0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ece4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28ece4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ece8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ecec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28ecf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ecf4: 0xe60003a8  swc1        $f0, 0x3A8($s0)
    ctx->pc = 0x28ecf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
    // 0x28ecf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ecfc: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x28ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x28ed00: 0xa6050570  sh          $a1, 0x570($s0)
    ctx->pc = 0x28ed00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1392), (uint16_t)GPR_U32(ctx, 5));
    // 0x28ed04: 0xae040574  sw          $a0, 0x574($s0)
    ctx->pc = 0x28ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 4));
    // 0x28ed08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28ed08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ed0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ed0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ed10: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED10u;
        // 0x28ed14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED18u;
    // 0x28ed18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ed1c: 0x0  nop
    ctx->pc = 0x28ed1cu;
    // NOP
    // 0x28ed20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ed24: 0x0  nop
    ctx->pc = 0x28ed24u;
    // NOP
    ctx->pc = 0x28ed28u;
}
