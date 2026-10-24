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

// Function: func_00285C58
// Address: 0x285c58 - 0x285eb8
void func_00285C58_0x285c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00285C58_0x285c58");
#endif

    switch (ctx->pc) {
        case 0x285db4u: goto label_285db4;
        case 0x285dfcu: goto label_285dfc;
        default: break;
    }

    ctx->pc = 0x285c58u;

    // 0x285c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x285c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x285c5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x285c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x285c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x285c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x285c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x285c70: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x285c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x285c74: 0x5840008b  blezl       $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x285C74u;
    {
        const bool branch_taken_0x285c74 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x285c74) {
            ctx->pc = 0x285C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285C74u;
            // 0x285c78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285EA4u;
            goto label_285ea4;
        }
    }
    ctx->pc = 0x285C7Cu;
    // 0x285c7c: 0x8e030670  lw          $v1, 0x670($s0)
    ctx->pc = 0x285c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x285c80: 0x50600088  beql        $v1, $zero, . + 4 + (0x88 << 2)
    ctx->pc = 0x285C80u;
    {
        const bool branch_taken_0x285c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c80) {
            ctx->pc = 0x285C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285C80u;
            // 0x285c84: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285EA4u;
            goto label_285ea4;
        }
    }
    ctx->pc = 0x285C88u;
    // 0x285c88: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x285c88u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x285c8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285c90: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x285C90u;
    {
        const bool branch_taken_0x285c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285c90) {
            ctx->pc = 0x285C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285C90u;
            // 0x285c94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285EA4u;
            goto label_285ea4;
        }
    }
    ctx->pc = 0x285C98u;
    // 0x285c98: 0xc601054c  lwc1        $f1, 0x54C($s0)
    ctx->pc = 0x285c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285c9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285c9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ca0: 0x0  nop
    ctx->pc = 0x285ca0u;
    // NOP
    // 0x285ca4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x285ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285ca8: 0x0  nop
    ctx->pc = 0x285ca8u;
    // NOP
    // 0x285cac: 0x4503007d  bc1tl       . + 4 + (0x7D << 2)
    ctx->pc = 0x285CACu;
    {
        const bool branch_taken_0x285cac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285cac) {
            ctx->pc = 0x285CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285CACu;
            // 0x285cb0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285EA4u;
            goto label_285ea4;
        }
    }
    ctx->pc = 0x285CB4u;
    // 0x285cb4: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x285cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x285cb8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x285CB8u;
    {
        const bool branch_taken_0x285cb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB8u;
        // 0x285cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb8) {
            ctx->pc = 0x285CCCu;
            goto label_285ccc;
        }
    }
    ctx->pc = 0x285CC0u;
    // 0x285cc0: 0x964202fe  lhu         $v0, 0x2FE($s2)
    ctx->pc = 0x285cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x285cc4: 0x38420100  xori        $v0, $v0, 0x100
    ctx->pc = 0x285cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)256);
    // 0x285cc8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x285cc8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_285ccc:
    // 0x285ccc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x285cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x285cd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285cd4: 0x0  nop
    ctx->pc = 0x285cd4u;
    // NOP
    // 0x285cd8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x285cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x285cdc: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x285cdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x285ce0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x285ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x285ce4: 0x2c830036  sltiu       $v1, $a0, 0x36
    ctx->pc = 0x285ce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x285ce8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x285CE8u;
    {
        const bool branch_taken_0x285ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CE8u;
        // 0x285cec: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ce8) {
            ctx->pc = 0x285D10u;
            goto label_285d10;
        }
    }
    ctx->pc = 0x285CF0u;
    // 0x285cf0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x285cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x285cf4: 0x24428ad0  addiu       $v0, $v0, -0x7530
    ctx->pc = 0x285cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937296));
    // 0x285cf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285cfc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x285cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x285d00: 0x800008  jr          $a0
    ctx->pc = 0x285D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285D08u: goto label_285d08;
            case 0x285D10u: goto label_285d10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x285D08u;
label_285d08:
    // 0x285d08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x285D08u;
    {
        const bool branch_taken_0x285d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D08u;
        // 0x285d0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d08) {
            ctx->pc = 0x285D20u;
            goto label_285d20;
        }
    }
    ctx->pc = 0x285D10u;
label_285d10:
    // 0x285d10: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x285d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x285d14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d18: 0x0  nop
    ctx->pc = 0x285d18u;
    // NOP
    // 0x285d1c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x285d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_285d20:
    // 0x285d20: 0xc60115c0  lwc1        $f1, 0x15C0($s0)
    ctx->pc = 0x285d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d28: 0x0  nop
    ctx->pc = 0x285d28u;
    // NOP
    // 0x285d2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x285d2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285d30: 0x0  nop
    ctx->pc = 0x285d30u;
    // NOP
    // 0x285d34: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x285D34u;
    {
        const bool branch_taken_0x285d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285d34) {
            ctx->pc = 0x285D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D34u;
            // 0x285d38: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D54u;
            goto label_285d54;
        }
    }
    ctx->pc = 0x285D3Cu;
    // 0x285d3c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x285D3Cu;
    {
        const bool branch_taken_0x285d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d3c) {
            ctx->pc = 0x285D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285D3Cu;
            // 0x285d40: 0x8e020670  lw          $v0, 0x670($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285D54u;
            goto label_285d54;
        }
    }
    ctx->pc = 0x285D44u;
    // 0x285d44: 0x8e0215b0  lw          $v0, 0x15B0($s0)
    ctx->pc = 0x285d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x285d48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x285d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x285d4c: 0xae0215b0  sw          $v0, 0x15B0($s0)
    ctx->pc = 0x285d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5552), GPR_U32(ctx, 2));
    // 0x285d50: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
label_285d54:
    // 0x285d54: 0x8611054a  lh          $s1, 0x54A($s0)
    ctx->pc = 0x285d54u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x285d58: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x285d5c: 0x86040548  lh          $a0, 0x548($s0)
    ctx->pc = 0x285d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x285d60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x285d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285d68: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x285d6c: 0x11182a  slt         $v1, $zero, $s1
    ctx->pc = 0x285d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x285d70: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x285d70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x285d74: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x285d74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x285d78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285D78u;
    {
        const bool branch_taken_0x285d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x285D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D78u;
        // 0x285d7c: 0x96050548  lhu         $a1, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d78) {
            ctx->pc = 0x285D88u;
            goto label_285d88;
        }
    }
    ctx->pc = 0x285D80u;
    // 0x285d80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285D80u;
    {
        const bool branch_taken_0x285d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D80u;
        // 0x285d84: 0xa605054a  sh          $a1, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d80) {
            ctx->pc = 0x285D8Cu;
            goto label_285d8c;
        }
    }
    ctx->pc = 0x285D88u;
label_285d88:
    // 0x285d88: 0xa611054a  sh          $s1, 0x54A($s0)
    ctx->pc = 0x285d88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 17));
label_285d8c:
    // 0x285d8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x285d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x285d90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d94: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x285d98: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x285d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x285d9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x285d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285da0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285da0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285da4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x285da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x285da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285dac: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x285DACu;
    SET_GPR_U32(ctx, 31, 0x285DB4u);
    ctx->pc = 0x285DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DACu;
    // 0x285db0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x285DACu, 0x285DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DB4u;
label_285db4:
    // 0x285db4: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x285db4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x285db8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x285dbc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x285dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285dc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285DC0u;
    {
        const bool branch_taken_0x285dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC0u;
        // 0x285dc4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dc0) {
            ctx->pc = 0x285DD4u;
            goto label_285dd4;
        }
    }
    ctx->pc = 0x285DC8u;
    // 0x285dc8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x285dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x285dcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x285DCCu;
    {
        const bool branch_taken_0x285dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DCCu;
        // 0x285dd0: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dcc) {
            ctx->pc = 0x285DD8u;
            goto label_285dd8;
        }
    }
    ctx->pc = 0x285DD4u;
label_285dd4:
    // 0x285dd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285dd8:
    // 0x285dd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x285DD8u;
    {
        const bool branch_taken_0x285dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DD8u;
        // 0x285ddc: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dd8) {
            ctx->pc = 0x285DFCu;
            goto label_285dfc;
        }
    }
    ctx->pc = 0x285DE0u;
    // 0x285de0: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x285de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x285de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x285de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x285de8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x285de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x285dec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x285df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285df4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x285DF4u;
    SET_GPR_U32(ctx, 31, 0x285DFCu);
    ctx->pc = 0x285DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DF4u;
    // 0x285df8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x285DF4u, 0x285DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DFCu;
label_285dfc:
    // 0x285dfc: 0x964302fe  lhu         $v1, 0x2FE($s2)
    ctx->pc = 0x285dfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
    // 0x285e00: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x285e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285E04u;
    {
        const bool branch_taken_0x285e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E04u;
        // 0x285e08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e04) {
            ctx->pc = 0x285E14u;
            goto label_285e14;
        }
    }
    ctx->pc = 0x285E0Cu;
    // 0x285e0c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x285e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285e14:
    // 0x285e14: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x285e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285E18u;
    {
        const bool branch_taken_0x285e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285e18) {
            ctx->pc = 0x285E30u;
            goto label_285e30;
        }
    }
    ctx->pc = 0x285E20u;
    // 0x285e20: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x285e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x285e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x285e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285e28: 0x0  nop
    ctx->pc = 0x285e28u;
    // NOP
    // 0x285e2c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x285e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_285e30:
    // 0x285e30: 0x5e20000c  bgtzl       $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x285E30u;
    {
        const bool branch_taken_0x285e30 = (GPR_S64(ctx, 17) > 0);
        if (branch_taken_0x285e30) {
            ctx->pc = 0x285E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285E30u;
            // 0x285e34: 0x8e0215b0  lw          $v0, 0x15B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285E64u;
            goto label_285e64;
        }
    }
    ctx->pc = 0x285E38u;
    // 0x285e38: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x285e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x285e3c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x285e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285e40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x285E40u;
    {
        const bool branch_taken_0x285e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E40u;
        // 0x285e44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e40) {
            ctx->pc = 0x285E5Cu;
            goto label_285e5c;
        }
    }
    ctx->pc = 0x285E48u;
    // 0x285e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285e4c: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x285e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e50: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x285e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x285e54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x285E54u;
    {
        const bool branch_taken_0x285e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E54u;
        // 0x285e58: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e54) {
            ctx->pc = 0x285E9Cu;
            goto label_285e9c;
        }
    }
    ctx->pc = 0x285E5Cu;
label_285e5c:
    // 0x285e5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x285E5Cu;
    {
        const bool branch_taken_0x285e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E5Cu;
        // 0x285e60: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e5c) {
            ctx->pc = 0x285E94u;
            goto label_285e94;
        }
    }
    ctx->pc = 0x285E64u;
label_285e64:
    // 0x285e64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x285e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285e68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285E68u;
    {
        const bool branch_taken_0x285e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E68u;
        // 0x285e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e68) {
            ctx->pc = 0x285E80u;
            goto label_285e80;
        }
    }
    ctx->pc = 0x285E70u;
    // 0x285e70: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x285e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x285e74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x285e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x285e78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285E78u;
    {
        const bool branch_taken_0x285e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E78u;
        // 0x285e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e78) {
            ctx->pc = 0x285E90u;
            goto label_285e90;
        }
    }
    ctx->pc = 0x285E80u;
label_285e80:
    // 0x285e80: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x285e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x285e84: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x285e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x285E88u;
    {
        const bool branch_taken_0x285e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E88u;
        // 0x285e8c: 0xa20202f4  sb          $v0, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e88) {
            ctx->pc = 0x285E9Cu;
            goto label_285e9c;
        }
    }
    ctx->pc = 0x285E90u;
label_285e90:
    // 0x285e90: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x285e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_285e94:
    // 0x285e94: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x285e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e98: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x285e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_285e9c:
    // 0x285e9c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x285e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x285ea0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x285ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_285ea4:
    // 0x285ea4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x285ea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285ea8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x285EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EB0u;
        // 0x285eb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285EB8u;
}
