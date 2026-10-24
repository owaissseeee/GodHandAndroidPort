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

// Function: func_001CFD60
// Address: 0x1cfd60 - 0x1cfe88
void func_001CFD60_0x1cfd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CFD60_0x1cfd60");
#endif

    switch (ctx->pc) {
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe4cu: goto label_1cfe4c;
        default: break;
    }

    ctx->pc = 0x1cfd60u;

    // 0x1cfd60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cfd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cfd64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cfd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cfd68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cfd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cfd6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfd6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfd74: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cfd78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFD78u;
    {
        const bool branch_taken_0x1cfd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD78u;
        // 0x1cfd7c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfd78) {
            ctx->pc = 0x1CFDA8u;
            goto label_1cfda8;
        }
    }
    ctx->pc = 0x1CFD80u;
    // 0x1cfd80: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cfd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cfd84: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1cfd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cfd88: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFD88u;
    {
        const bool branch_taken_0x1cfd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfd88) {
            ctx->pc = 0x1CFD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD88u;
            // 0x1cfd8c: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFDACu;
            goto label_1cfdac;
        }
    }
    ctx->pc = 0x1CFD90u;
    // 0x1cfd90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfd94: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cfd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cfd98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfd9c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cfd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cfda0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfda4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cfda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cfda8:
    // 0x1cfda8: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cfda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cfdac:
    // 0x1cfdac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfdb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfdb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfdb8: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cfdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cfdbc: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cfdbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cfdc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cfdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cfdc4: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cfdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cfdc8: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cfdcc: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cfdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cfdd0: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1cfdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1cfdd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFDD4u;
    {
        const bool branch_taken_0x1cfdd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDD4u;
        // 0x1cfdd8: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdd4) {
            ctx->pc = 0x1CFDE8u;
            goto label_1cfde8;
        }
    }
    ctx->pc = 0x1CFDDCu;
    // 0x1cfddc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cfde0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFDE0u;
    {
        const bool branch_taken_0x1cfde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDE0u;
        // 0x1cfde4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfde0) {
            ctx->pc = 0x1CFDECu;
            goto label_1cfdec;
        }
    }
    ctx->pc = 0x1CFDE8u;
label_1cfde8:
    // 0x1cfde8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdec:
    // 0x1cfdec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CFDECu;
    {
        const bool branch_taken_0x1cfdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDECu;
        // 0x1cfdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdec) {
            ctx->pc = 0x1CFE74u;
            goto label_1cfe74;
        }
    }
    ctx->pc = 0x1CFDF4u;
    // 0x1cfdf4: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x1cfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
    // 0x1cfdf8: 0xac500148  sw          $s0, 0x148($v0)
    ctx->pc = 0x1cfdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 16));
    // 0x1cfdfc: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cfdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cfe00: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CFE00u;
    SET_GPR_U32(ctx, 31, 0x1CFE08u);
    ctx->pc = 0x1CFE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE00u;
    // 0x1cfe04: 0xac400104  sw          $zero, 0x104($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CFE00u, 0x1CFE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE08u;
label_1cfe08:
    // 0x1cfe08: 0xae110690  sw          $s1, 0x690($s0)
    ctx->pc = 0x1cfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1680), GPR_U32(ctx, 17));
    // 0x1cfe0c: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1CFE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE14u);
    ctx->pc = 0x1CFE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE0Cu;
    // 0x1cfe10: 0xae0006a0  sw          $zero, 0x6A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1696), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1CFE0Cu, 0x1CFE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE14u;
label_1cfe14:
    // 0x1cfe14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfe14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1cfe18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1cfe1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfe1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfe20: 0x0  nop
    ctx->pc = 0x1cfe20u;
    // NOP
    // 0x1cfe24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cfe24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfe28: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1CFE28u;
    SET_GPR_U32(ctx, 31, 0x1CFE30u);
    ctx->pc = 0x1CFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE28u;
    // 0x1cfe2c: 0xe60006a4  swc1        $f0, 0x6A4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1CFE28u, 0x1CFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE30u;
label_1cfe30:
    // 0x1cfe30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1cfe30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1cfe34: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1cfe34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1cfe38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfe38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfe3c: 0x0  nop
    ctx->pc = 0x1cfe3cu;
    // NOP
    // 0x1cfe40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cfe40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfe44: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1CFE44u;
    SET_GPR_U32(ctx, 31, 0x1CFE4Cu);
    ctx->pc = 0x1CFE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE44u;
    // 0x1cfe48: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1CFE44u, 0x1CFE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE4Cu;
label_1cfe4c:
    // 0x1cfe4c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1cfe4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1cfe50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1cfe50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1cfe54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfe54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfe58: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1cfe58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cfe5c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1cfe5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfe60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cfe60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cfe64: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cfe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfe68: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cfe68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfe6c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cfe6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfe70: 0xe6000694  swc1        $f0, 0x694($s0)
    ctx->pc = 0x1cfe70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1684), bits); }
label_1cfe74:
    // 0x1cfe74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cfe74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfe78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cfe78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfe7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfe7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe80: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE80u;
        // 0x1cfe84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE88u;
}
