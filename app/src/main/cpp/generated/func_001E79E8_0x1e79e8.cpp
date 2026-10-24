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

// Function: func_001E79E8
// Address: 0x1e79e8 - 0x1e7e18
void func_001E79E8_0x1e79e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E79E8_0x1e79e8");
#endif

    switch (ctx->pc) {
        case 0x1e7a7cu: goto label_1e7a7c;
        case 0x1e7ac0u: goto label_1e7ac0;
        case 0x1e7b20u: goto label_1e7b20;
        case 0x1e7b64u: goto label_1e7b64;
        case 0x1e7ba0u: goto label_1e7ba0;
        case 0x1e7c10u: goto label_1e7c10;
        case 0x1e7c54u: goto label_1e7c54;
        case 0x1e7cdcu: goto label_1e7cdc;
        case 0x1e7d20u: goto label_1e7d20;
        case 0x1e7da8u: goto label_1e7da8;
        case 0x1e7decu: goto label_1e7dec;
        default: break;
    }

    ctx->pc = 0x1e79e8u;

    // 0x1e79e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e79ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e79ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e79f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e79f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e79f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e79f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e79f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e79f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e79fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7a00: 0x50400100  beql        $v0, $zero, . + 4 + (0x100 << 2)
    ctx->pc = 0x1E7A00u;
    {
        const bool branch_taken_0x1e7a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a00) {
            ctx->pc = 0x1E7A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7A00u;
            // 0x1e7a04: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7A08u;
    // 0x1e7a08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e7a0c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1e7a0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e7a10: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x1E7A10u;
    {
        const bool branch_taken_0x1e7a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A10u;
        // 0x1e7a14: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a10) {
            ctx->pc = 0x1E7E00u;
            goto label_1e7e00;
        }
    }
    ctx->pc = 0x1E7A18u;
    // 0x1e7a18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7a1c: 0x2442bb30  addiu       $v0, $v0, -0x44D0
    ctx->pc = 0x1e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949680));
    // 0x1e7a20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7a24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e7a28: 0x800008  jr          $a0
    ctx->pc = 0x1E7A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7A30u: goto label_1e7a30;
            case 0x1E7AD0u: goto label_1e7ad0;
            case 0x1E7BA0u: goto label_1e7ba0;
            case 0x1E7C8Cu: goto label_1e7c8c;
            case 0x1E7D38u: goto label_1e7d38;
            case 0x1E7E00u: goto label_1e7e00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7A28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E7A30u;
label_1e7a30:
    // 0x1e7a30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7a34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7a38: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e7a38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7a3c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e7a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7a40: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1e7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1e7a44: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1e7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e7a48: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7a4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7a50: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7A50u;
    {
        const bool branch_taken_0x1e7a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A50u;
        // 0x1e7a54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a50) {
            ctx->pc = 0x1E7A70u;
            goto label_1e7a70;
        }
    }
    ctx->pc = 0x1E7A58u;
    // 0x1e7a58: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7a5c: 0xe6200340  swc1        $f0, 0x340($s1)
    ctx->pc = 0x1e7a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1e7a60: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e7a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7a64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1e7a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7a68: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e7a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7a6c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e7a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e7a70:
    // 0x1e7a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7a74: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E7A74u;
    SET_GPR_U32(ctx, 31, 0x1E7A7Cu);
    ctx->pc = 0x1E7A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7A74u;
    // 0x1e7a78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E7A74u, 0x1E7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7A7Cu;
label_1e7a7c:
    // 0x1e7a7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7a7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7a80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7a84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7a84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7a88: 0x0  nop
    ctx->pc = 0x1e7a88u;
    // NOP
    // 0x1e7a8c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7A8Cu;
    {
        const bool branch_taken_0x1e7a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A8Cu;
        // 0x1e7a90: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a8c) {
            ctx->pc = 0x1E7AB4u;
            goto label_1e7ab4;
        }
    }
    ctx->pc = 0x1E7A94u;
    // 0x1e7a94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7a94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7a98: 0x0  nop
    ctx->pc = 0x1e7a98u;
    // NOP
    // 0x1e7a9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7A9Cu;
    {
        const bool branch_taken_0x1e7a9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A9Cu;
        // 0x1e7aa0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a9c) {
            ctx->pc = 0x1E7AB4u;
            goto label_1e7ab4;
        }
    }
    ctx->pc = 0x1E7AA4u;
    // 0x1e7aa4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7aa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7aa8: 0x0  nop
    ctx->pc = 0x1e7aa8u;
    // NOP
    // 0x1e7aac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7AACu;
    {
        const bool branch_taken_0x1e7aac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AACu;
        // 0x1e7ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7aac) {
            ctx->pc = 0x1E7AC4u;
            goto label_1e7ac4;
        }
    }
    ctx->pc = 0x1E7AB4u;
label_1e7ab4:
    // 0x1e7ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ab8: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E7AB8u;
    SET_GPR_U32(ctx, 31, 0x1E7AC0u);
    ctx->pc = 0x1E7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7AB8u;
    // 0x1e7abc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E7AB8u, 0x1E7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7AC0u;
label_1e7ac0:
    // 0x1e7ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7ac4:
    // 0x1e7ac4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7ac8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x1E7AC8u;
    {
        const bool branch_taken_0x1e7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AC8u;
        // 0x1e7acc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ac8) {
            ctx->pc = 0x1E7DFCu;
            goto label_1e7dfc;
        }
    }
    ctx->pc = 0x1E7AD0u;
label_1e7ad0:
    // 0x1e7ad0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e7ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7ad4: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1e7ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1e7ad8: 0x3421b8c1  ori         $at, $at, 0xB8C1
    ctx->pc = 0x1e7ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47297);
    // 0x1e7adc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7ae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7ae8: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1e7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e7aec: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e7aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7af0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7af4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7af8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7AF8u;
    {
        const bool branch_taken_0x1e7af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E7AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7AF8u;
        // 0x1e7afc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7af8) {
            ctx->pc = 0x1E7B14u;
            goto label_1e7b14;
        }
    }
    ctx->pc = 0x1E7B00u;
    // 0x1e7b00: 0xe6210340  swc1        $f1, 0x340($s1)
    ctx->pc = 0x1e7b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1e7b04: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e7b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7b08: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e7b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7b0c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e7b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7b10: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1e7b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e7b14:
    // 0x1e7b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b18: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E7B18u;
    SET_GPR_U32(ctx, 31, 0x1E7B20u);
    ctx->pc = 0x1E7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B18u;
    // 0x1e7b1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E7B18u, 0x1E7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B20u;
label_1e7b20:
    // 0x1e7b20: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7b24: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7b28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7b28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7b2c: 0x0  nop
    ctx->pc = 0x1e7b2cu;
    // NOP
    // 0x1e7b30: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7B30u;
    {
        const bool branch_taken_0x1e7b30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B30u;
        // 0x1e7b34: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b30) {
            ctx->pc = 0x1E7B58u;
            goto label_1e7b58;
        }
    }
    ctx->pc = 0x1E7B38u;
    // 0x1e7b38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7b38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7b3c: 0x0  nop
    ctx->pc = 0x1e7b3cu;
    // NOP
    // 0x1e7b40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7B40u;
    {
        const bool branch_taken_0x1e7b40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B40u;
        // 0x1e7b44: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b40) {
            ctx->pc = 0x1E7B58u;
            goto label_1e7b58;
        }
    }
    ctx->pc = 0x1E7B48u;
    // 0x1e7b48: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7b48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7b4c: 0x0  nop
    ctx->pc = 0x1e7b4cu;
    // NOP
    // 0x1e7b50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7B50u;
    {
        const bool branch_taken_0x1e7b50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7B50u;
        // 0x1e7b54: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b50) {
            ctx->pc = 0x1E7B68u;
            goto label_1e7b68;
        }
    }
    ctx->pc = 0x1E7B58u;
label_1e7b58:
    // 0x1e7b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b5c: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B64u);
    ctx->pc = 0x1E7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B5Cu;
    // 0x1e7b60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E7B5Cu, 0x1E7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7B64u;
label_1e7b64:
    // 0x1e7b64: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e7b68:
    // 0x1e7b68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e7b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7b6c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1e7b70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e7b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e7b74: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e7b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1e7b78: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e7b7c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e7b80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7b84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7b88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7b90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e7b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e7b94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b98: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1E7B98u;
    SET_GPR_U32(ctx, 31, 0x1E7BA0u);
    ctx->pc = 0x1E7B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7B98u;
    // 0x1e7b9c: 0x8c4700f0  lw          $a3, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1E7B98u, 0x1E7BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BA0u;
label_1e7ba0:
    // 0x1e7ba0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e7ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7BA4u;
    {
        const bool branch_taken_0x1e7ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BA4u;
        // 0x1e7ba8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ba4) {
            ctx->pc = 0x1E7BB8u;
            goto label_1e7bb8;
        }
    }
    ctx->pc = 0x1E7BACu;
    // 0x1e7bac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e7bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7bb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7BB0u;
    {
        const bool branch_taken_0x1e7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BB0u;
        // 0x1e7bb4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bb0) {
            ctx->pc = 0x1E7BBCu;
            goto label_1e7bbc;
        }
    }
    ctx->pc = 0x1E7BB8u;
label_1e7bb8:
    // 0x1e7bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7bbc:
    // 0x1e7bbc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e7bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e7bc0: 0x50400090  beql        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x1E7BC0u;
    {
        const bool branch_taken_0x1e7bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7bc0) {
            ctx->pc = 0x1E7BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7BC0u;
            // 0x1e7bc4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7BC8u;
    // 0x1e7bc8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e7bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7bcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7bd4: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e7bd8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7bdc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e7bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7be0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7be4: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7BE4u;
    {
        const bool branch_taken_0x1e7be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BE4u;
        // 0x1e7be8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7be4) {
            ctx->pc = 0x1E7C04u;
            goto label_1e7c04;
        }
    }
    ctx->pc = 0x1E7BECu;
    // 0x1e7bec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7bf0: 0xe6200340  swc1        $f0, 0x340($s1)
    ctx->pc = 0x1e7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1e7bf4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e7bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7bf8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1e7bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7bfc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e7bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7c00: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e7c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e7c04:
    // 0x1e7c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c08: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E7C08u;
    SET_GPR_U32(ctx, 31, 0x1E7C10u);
    ctx->pc = 0x1E7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C08u;
    // 0x1e7c0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E7C08u, 0x1E7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C10u;
label_1e7c10:
    // 0x1e7c10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7c14: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7c18: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7c18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7c1c: 0x0  nop
    ctx->pc = 0x1e7c1cu;
    // NOP
    // 0x1e7c20: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7C20u;
    {
        const bool branch_taken_0x1e7c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C20u;
        // 0x1e7c24: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c20) {
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7C28u;
    // 0x1e7c28: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7c28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7c2c: 0x0  nop
    ctx->pc = 0x1e7c2cu;
    // NOP
    // 0x1e7c30: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7C30u;
    {
        const bool branch_taken_0x1e7c30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C30u;
        // 0x1e7c34: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c30) {
            ctx->pc = 0x1E7C48u;
            goto label_1e7c48;
        }
    }
    ctx->pc = 0x1E7C38u;
    // 0x1e7c38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7c38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7c3c: 0x0  nop
    ctx->pc = 0x1e7c3cu;
    // NOP
    // 0x1e7c40: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7C40u;
    {
        const bool branch_taken_0x1e7c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7c40) {
            ctx->pc = 0x1E7C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7C40u;
            // 0x1e7c44: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7C58u;
            goto label_1e7c58;
        }
    }
    ctx->pc = 0x1E7C48u;
label_1e7c48:
    // 0x1e7c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c4c: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E7C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C54u);
    ctx->pc = 0x1E7C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C4Cu;
    // 0x1e7c50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E7C4Cu, 0x1E7C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C54u;
label_1e7c54:
    // 0x1e7c54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7c58:
    // 0x1e7c58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e7c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e7c5c: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x1e7c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x1e7c60: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1e7c60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1e7c64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7c68: 0x0  nop
    ctx->pc = 0x1e7c68u;
    // NOP
    // 0x1e7c6c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1e7c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1e7c70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1e7c74: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e7c78: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7c7c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e7c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e7c80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e7c84: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1E7C84u;
    {
        const bool branch_taken_0x1e7c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C84u;
        // 0x1e7c88: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c84) {
            ctx->pc = 0x1E7E00u;
            goto label_1e7e00;
        }
    }
    ctx->pc = 0x1E7C8Cu;
label_1e7c8c:
    // 0x1e7c8c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e7c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7c90: 0x3c01bdb2  lui         $at, 0xBDB2
    ctx->pc = 0x1e7c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48562 << 16));
    // 0x1e7c94: 0x3421b8c1  ori         $at, $at, 0xB8C1
    ctx->pc = 0x1e7c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47297);
    // 0x1e7c98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e7c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7c9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7ca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7ca4: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1e7ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e7ca8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1e7ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7cac: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e7cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7cb0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7cb4: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7CB4u;
    {
        const bool branch_taken_0x1e7cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CB4u;
        // 0x1e7cb8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cb4) {
            ctx->pc = 0x1E7CD0u;
            goto label_1e7cd0;
        }
    }
    ctx->pc = 0x1E7CBCu;
    // 0x1e7cbc: 0xe6210340  swc1        $f1, 0x340($s1)
    ctx->pc = 0x1e7cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1e7cc0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1e7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7cc4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e7cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7cc8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7ccc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1e7cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e7cd0:
    // 0x1e7cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cd4: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E7CD4u;
    SET_GPR_U32(ctx, 31, 0x1E7CDCu);
    ctx->pc = 0x1E7CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CD4u;
    // 0x1e7cd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E7CD4u, 0x1E7CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CDCu;
label_1e7cdc:
    // 0x1e7cdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7ce0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ce4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7ce4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7ce8: 0x0  nop
    ctx->pc = 0x1e7ce8u;
    // NOP
    // 0x1e7cec: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7CECu;
    {
        const bool branch_taken_0x1e7cec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CECu;
        // 0x1e7cf0: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cec) {
            ctx->pc = 0x1E7D14u;
            goto label_1e7d14;
        }
    }
    ctx->pc = 0x1E7CF4u;
    // 0x1e7cf4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7cf4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7cf8: 0x0  nop
    ctx->pc = 0x1e7cf8u;
    // NOP
    // 0x1e7cfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7CFCu;
    {
        const bool branch_taken_0x1e7cfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CFCu;
        // 0x1e7d00: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7cfc) {
            ctx->pc = 0x1E7D14u;
            goto label_1e7d14;
        }
    }
    ctx->pc = 0x1E7D04u;
    // 0x1e7d04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7d04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7d08: 0x0  nop
    ctx->pc = 0x1e7d08u;
    // NOP
    // 0x1e7d0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7D0Cu;
    {
        const bool branch_taken_0x1e7d0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D0Cu;
        // 0x1e7d10: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d0c) {
            ctx->pc = 0x1E7D24u;
            goto label_1e7d24;
        }
    }
    ctx->pc = 0x1E7D14u;
label_1e7d14:
    // 0x1e7d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d18: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E7D18u;
    SET_GPR_U32(ctx, 31, 0x1E7D20u);
    ctx->pc = 0x1E7D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D18u;
    // 0x1e7d1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E7D18u, 0x1E7D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D20u;
label_1e7d20:
    // 0x1e7d20: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e7d24:
    // 0x1e7d24: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e7d28: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1e7d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1e7d2c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e7d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1e7d30: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e7d34: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1e7d38:
    // 0x1e7d38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e7d3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7D3Cu;
    {
        const bool branch_taken_0x1e7d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D3Cu;
        // 0x1e7d40: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d3c) {
            ctx->pc = 0x1E7D50u;
            goto label_1e7d50;
        }
    }
    ctx->pc = 0x1E7D44u;
    // 0x1e7d44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e7d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E7D48u;
    {
        const bool branch_taken_0x1e7d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D48u;
        // 0x1e7d4c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d48) {
            ctx->pc = 0x1E7D54u;
            goto label_1e7d54;
        }
    }
    ctx->pc = 0x1E7D50u;
label_1e7d50:
    // 0x1e7d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7d54:
    // 0x1e7d54: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e7d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e7d58: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1E7D58u;
    {
        const bool branch_taken_0x1e7d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7d58) {
            ctx->pc = 0x1E7D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7D58u;
            // 0x1e7d5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7E04u;
            goto label_1e7e04;
        }
    }
    ctx->pc = 0x1E7D60u;
    // 0x1e7d60: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e7d60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7d68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e7d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e7d6c: 0x26220340  addiu       $v0, $s1, 0x340
    ctx->pc = 0x1e7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
    // 0x1e7d70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e7d74: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1e7d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7d78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7d7c: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7D7Cu;
    {
        const bool branch_taken_0x1e7d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1E7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D7Cu;
        // 0x1e7d80: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7d7c) {
            ctx->pc = 0x1E7D9Cu;
            goto label_1e7d9c;
        }
    }
    ctx->pc = 0x1E7D84u;
    // 0x1e7d84: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d88: 0xe6200340  swc1        $f0, 0x340($s1)
    ctx->pc = 0x1e7d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 832), bits); }
    // 0x1e7d8c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1e7d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d90: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1e7d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e7d94: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1e7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d98: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e7d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1e7d9c:
    // 0x1e7d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7da0: 0xc0c682e  jal         func_31A0B8
    ctx->pc = 0x1E7DA0u;
    SET_GPR_U32(ctx, 31, 0x1E7DA8u);
    ctx->pc = 0x1E7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DA0u;
    // 0x1e7da4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0B8u, 0x1E7DA0u, 0x1E7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DA8u;
label_1e7da8:
    // 0x1e7da8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e7da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e7dac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7db0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7db0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7db4: 0x0  nop
    ctx->pc = 0x1e7db4u;
    // NOP
    // 0x1e7db8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7DB8u;
    {
        const bool branch_taken_0x1e7db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DB8u;
        // 0x1e7dbc: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7db8) {
            ctx->pc = 0x1E7DE0u;
            goto label_1e7de0;
        }
    }
    ctx->pc = 0x1E7DC0u;
    // 0x1e7dc0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7dc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7dc4: 0x0  nop
    ctx->pc = 0x1e7dc4u;
    // NOP
    // 0x1e7dc8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7DC8u;
    {
        const bool branch_taken_0x1e7dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7DC8u;
        // 0x1e7dcc: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dc8) {
            ctx->pc = 0x1E7DE0u;
            goto label_1e7de0;
        }
    }
    ctx->pc = 0x1E7DD0u;
    // 0x1e7dd0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1e7dd0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7dd4: 0x0  nop
    ctx->pc = 0x1e7dd4u;
    // NOP
    // 0x1e7dd8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7DD8u;
    {
        const bool branch_taken_0x1e7dd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7dd8) {
            ctx->pc = 0x1E7DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7DD8u;
            // 0x1e7ddc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7DF0u;
            goto label_1e7df0;
        }
    }
    ctx->pc = 0x1E7DE0u;
label_1e7de0:
    // 0x1e7de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7de4: 0xc0c6822  jal         func_31A088
    ctx->pc = 0x1E7DE4u;
    SET_GPR_U32(ctx, 31, 0x1E7DECu);
    ctx->pc = 0x1E7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7DE4u;
    // 0x1e7de8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A088u, 0x1E7DE4u, 0x1E7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7DECu;
label_1e7dec:
    // 0x1e7dec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e7decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7df0:
    // 0x1e7df0: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1e7df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1e7df4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7df8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1e7dfc:
    // 0x1e7dfc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e7e00:
    // 0x1e7e00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e7e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e7e04:
    // 0x1e7e04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e7e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E0Cu;
        // 0x1e7e10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E14u;
    // 0x1e7e14: 0x0  nop
    ctx->pc = 0x1e7e14u;
    // NOP
    ctx->pc = 0x1e7e18u;
}
