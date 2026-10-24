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

// Function: cOmWeapon_setThrow
// Address: 0x1cfa20 - 0x1cfb28
void cOmWeapon_setThrow_0x1cfa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_setThrow_0x1cfa20");
#endif

    switch (ctx->pc) {
        case 0x1cfad0u: goto label_1cfad0;
        default: break;
    }

    ctx->pc = 0x1cfa20u;

    // 0x1cfa20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cfa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cfa24: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cfa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cfa28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cfa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cfa2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cfa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfa34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfa34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfa3c: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cfa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cfa40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFA40u;
    {
        const bool branch_taken_0x1cfa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA40u;
        // 0x1cfa44: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa40) {
            ctx->pc = 0x1CFA70u;
            goto label_1cfa70;
        }
    }
    ctx->pc = 0x1CFA48u;
    // 0x1cfa48: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cfa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cfa4c: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1cfa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cfa50: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFA50u;
    {
        const bool branch_taken_0x1cfa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfa50) {
            ctx->pc = 0x1CFA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFA50u;
            // 0x1cfa54: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFA74u;
            goto label_1cfa74;
        }
    }
    ctx->pc = 0x1CFA58u;
    // 0x1cfa58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa5c: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cfa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cfa60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfa64: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cfa64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cfa68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfa6c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cfa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cfa70:
    // 0x1cfa70: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cfa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cfa74:
    // 0x1cfa74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfa78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfa7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfa80: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cfa80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cfa84: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cfa84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cfa88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cfa88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cfa8c: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cfa8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cfa90: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cfa90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cfa94: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cfa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cfa98: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1cfa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1cfa9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFA9Cu;
    {
        const bool branch_taken_0x1cfa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA9Cu;
        // 0x1cfaa0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa9c) {
            ctx->pc = 0x1CFAB0u;
            goto label_1cfab0;
        }
    }
    ctx->pc = 0x1CFAA4u;
    // 0x1cfaa4: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cfaa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFAA8u;
    {
        const bool branch_taken_0x1cfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAA8u;
        // 0x1cfaac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfaa8) {
            ctx->pc = 0x1CFAB4u;
            goto label_1cfab4;
        }
    }
    ctx->pc = 0x1CFAB0u;
label_1cfab0:
    // 0x1cfab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfab4:
    // 0x1cfab4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CFAB4u;
    {
        const bool branch_taken_0x1cfab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFAB4u;
        // 0x1cfab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfab4) {
            ctx->pc = 0x1CFB0Cu;
            goto label_1cfb0c;
        }
    }
    ctx->pc = 0x1CFABCu;
    // 0x1cfabc: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cfac0: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1cfac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1cfac4: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cfac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cfac8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CFAC8u;
    SET_GPR_U32(ctx, 31, 0x1CFAD0u);
    ctx->pc = 0x1CFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFAC8u;
    // 0x1cfacc: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CFAC8u, 0x1CFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFAD0u;
label_1cfad0:
    // 0x1cfad0: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1cfad4: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFAD4u;
    {
        const bool branch_taken_0x1cfad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1cfad4) {
            ctx->pc = 0x1CFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFAD4u;
            // 0x1cfad8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFAF8u;
            goto label_1cfaf8;
        }
    }
    ctx->pc = 0x1CFADCu;
    // 0x1cfadc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1cfadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfae0: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1cfae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1cfae4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1cfae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfae8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cfaec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1cfaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfaf0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cfaf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cfaf8:
    // 0x1cfaf8: 0xae120670  sw          $s2, 0x670($s0)
    ctx->pc = 0x1cfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 18));
    // 0x1cfafc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1cfafcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfb00: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cfb00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb04: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cfb04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfb08: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cfb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cfb0c:
    // 0x1cfb0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cfb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cfb10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cfb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfb14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cfb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfb18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB1Cu;
        // 0x1cfb20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFB24u;
    // 0x1cfb24: 0x0  nop
    ctx->pc = 0x1cfb24u;
    // NOP
    ctx->pc = 0x1cfb28u;
}
