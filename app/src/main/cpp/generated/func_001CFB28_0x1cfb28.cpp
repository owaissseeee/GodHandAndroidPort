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

// Function: func_001CFB28
// Address: 0x1cfb28 - 0x1cfc48
void func_001CFB28_0x1cfb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CFB28_0x1cfb28");
#endif

    switch (ctx->pc) {
        case 0x1cfbf0u: goto label_1cfbf0;
        default: break;
    }

    ctx->pc = 0x1cfb28u;

    // 0x1cfb28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cfb2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cfb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cfb30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cfb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cfb34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cfb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfb3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfb40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfb44: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cfb48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFB48u;
    {
        const bool branch_taken_0x1cfb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFB48u;
        // 0x1cfb4c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb48) {
            ctx->pc = 0x1CFB78u;
            goto label_1cfb78;
        }
    }
    ctx->pc = 0x1CFB50u;
    // 0x1cfb50: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cfb54: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cfb58: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFB58u;
    {
        const bool branch_taken_0x1cfb58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfb58) {
            ctx->pc = 0x1CFB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFB58u;
            // 0x1cfb5c: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFB7Cu;
            goto label_1cfb7c;
        }
    }
    ctx->pc = 0x1CFB60u;
    // 0x1cfb60: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfb64: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cfb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cfb68: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfb6c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cfb6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cfb70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfb74: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cfb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cfb78:
    // 0x1cfb78: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cfb7c:
    // 0x1cfb7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfb80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfb88: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cfb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cfb8c: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cfb8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cfb90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cfb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cfb94: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cfb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cfb98: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cfb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cfb9c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cfb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cfba0: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1cfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1cfba4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFBA4u;
    {
        const bool branch_taken_0x1cfba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBA4u;
        // 0x1cfba8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfba4) {
            ctx->pc = 0x1CFBB8u;
            goto label_1cfbb8;
        }
    }
    ctx->pc = 0x1CFBACu;
    // 0x1cfbac: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cfbb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFBB0u;
    {
        const bool branch_taken_0x1cfbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBB0u;
        // 0x1cfbb4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbb0) {
            ctx->pc = 0x1CFBBCu;
            goto label_1cfbbc;
        }
    }
    ctx->pc = 0x1CFBB8u;
label_1cfbb8:
    // 0x1cfbb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbbc:
    // 0x1cfbbc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CFBBCu;
    {
        const bool branch_taken_0x1cfbbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBBCu;
        // 0x1cfbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbbc) {
            ctx->pc = 0x1CFC2Cu;
            goto label_1cfc2c;
        }
    }
    ctx->pc = 0x1CFBC4u;
    // 0x1cfbc4: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1cfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1cfbc8: 0xacb00148  sw          $s0, 0x148($a1)
    ctx->pc = 0x1cfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 16));
    // 0x1cfbcc: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x1cfbccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x1cfbd0: 0xaca00104  sw          $zero, 0x104($a1)
    ctx->pc = 0x1cfbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
    // 0x1cfbd4: 0xaca00108  sw          $zero, 0x108($a1)
    ctx->pc = 0x1cfbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 0));
    // 0x1cfbd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1cfbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1cfbdc: 0x8ca300d0  lw          $v1, 0xD0($a1)
    ctx->pc = 0x1cfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1cfbe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cfbe4: 0x8ca200d0  lw          $v0, 0xD0($a1)
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x1cfbe8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CFBE8u;
    SET_GPR_U32(ctx, 31, 0x1CFBF0u);
    ctx->pc = 0x1CFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBE8u;
    // 0x1cfbec: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CFBE8u, 0x1CFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBF0u;
label_1cfbf0:
    // 0x1cfbf0: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1cfbf4: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFBF4u;
    {
        const bool branch_taken_0x1cfbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1cfbf4) {
            ctx->pc = 0x1CFBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFBF4u;
            // 0x1cfbf8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFC18u;
            goto label_1cfc18;
        }
    }
    ctx->pc = 0x1CFBFCu;
    // 0x1cfbfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1cfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfc00: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1cfc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1cfc04: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1cfc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfc08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cfc0c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1cfc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfc10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cfc14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfc18:
    // 0x1cfc18: 0xae120670  sw          $s2, 0x670($s0)
    ctx->pc = 0x1cfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 18));
    // 0x1cfc1c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1cfc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfc20: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cfc20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfc24: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cfc24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfc28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cfc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cfc2c:
    // 0x1cfc2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cfc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cfc30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cfc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfc34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cfc34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfc38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC3Cu;
        // 0x1cfc40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFC44u;
    // 0x1cfc44: 0x0  nop
    ctx->pc = 0x1cfc44u;
    // NOP
    ctx->pc = 0x1cfc48u;
}
