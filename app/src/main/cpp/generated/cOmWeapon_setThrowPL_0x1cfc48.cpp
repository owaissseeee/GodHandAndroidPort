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

// Function: cOmWeapon_setThrowPL
// Address: 0x1cfc48 - 0x1cfd60
void cOmWeapon_setThrowPL_0x1cfc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_setThrowPL_0x1cfc48");
#endif

    switch (ctx->pc) {
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfd10u: goto label_1cfd10;
        default: break;
    }

    ctx->pc = 0x1cfc48u;

    // 0x1cfc48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cfc4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1cfc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1cfc50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cfc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1cfc54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfc58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1cfc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1cfc5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfc60: 0x8e020600  lw          $v0, 0x600($s0)
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1cfc64: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFC64u;
    {
        const bool branch_taken_0x1cfc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFC64u;
        // 0x1cfc68: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc64) {
            ctx->pc = 0x1CFC94u;
            goto label_1cfc94;
        }
    }
    ctx->pc = 0x1CFC6Cu;
    // 0x1cfc6c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1cfc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cfc70: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1cfc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1cfc74: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFC74u;
    {
        const bool branch_taken_0x1cfc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cfc74) {
            ctx->pc = 0x1CFC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFC74u;
            // 0x1cfc78: 0x8e030250  lw          $v1, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFC98u;
            goto label_1cfc98;
        }
    }
    ctx->pc = 0x1CFC7Cu;
    // 0x1cfc7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1cfc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfc80: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1cfc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1cfc84: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfc88: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cfc88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cfc8c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfc90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cfc90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cfc94:
    // 0x1cfc94: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x1cfc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_1cfc98:
    // 0x1cfc98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cfc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1cfc9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cfc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cfca0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cfca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cfca4: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1cfca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x1cfca8: 0x920402b4  lbu         $a0, 0x2B4($s0)
    ctx->pc = 0x1cfca8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cfcac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cfcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cfcb0: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x1cfcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x1cfcb4: 0xae030250  sw          $v1, 0x250($s0)
    ctx->pc = 0x1cfcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1cfcb8: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1cfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x1cfcbc: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x1cfcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x1cfcc0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFCC0u;
    {
        const bool branch_taken_0x1cfcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCC0u;
        // 0x1cfcc4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc0) {
            ctx->pc = 0x1CFCD4u;
            goto label_1cfcd4;
        }
    }
    ctx->pc = 0x1CFCC8u;
    // 0x1cfcc8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cfccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFCCCu;
    {
        const bool branch_taken_0x1cfccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCCCu;
        // 0x1cfcd0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfccc) {
            ctx->pc = 0x1CFCD8u;
            goto label_1cfcd8;
        }
    }
    ctx->pc = 0x1CFCD4u;
label_1cfcd4:
    // 0x1cfcd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfcd8:
    // 0x1cfcd8: 0x5220001c  beql        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CFCD8u;
    {
        const bool branch_taken_0x1cfcd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfcd8) {
            ctx->pc = 0x1CFCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFCD8u;
            // 0x1cfcdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD4Cu;
            goto label_1cfd4c;
        }
    }
    ctx->pc = 0x1CFCE0u;
    // 0x1cfce0: 0xae300148  sw          $s0, 0x148($s1)
    ctx->pc = 0x1cfce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 16));
    // 0x1cfce4: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1cfce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1cfce8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1CFCE8u;
    SET_GPR_U32(ctx, 31, 0x1CFCF0u);
    ctx->pc = 0x1CFCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFCE8u;
    // 0x1cfcec: 0xae200104  sw          $zero, 0x104($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1CFCE8u, 0x1CFCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCF0u;
label_1cfcf0:
    // 0x1cfcf0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1cfcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1cfcf4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1cfcf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1cfcf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cfcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cfcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfd00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cfd00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cfd04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cfd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cfd08: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CFD08u;
    SET_GPR_U32(ctx, 31, 0x1CFD10u);
    ctx->pc = 0x1CFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFD08u;
    // 0x1cfd0c: 0xe6200108  swc1        $f0, 0x108($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CFD08u, 0x1CFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD10u;
label_1cfd10:
    // 0x1cfd10: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1cfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1cfd14: 0x50520008  beql        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFD14u;
    {
        const bool branch_taken_0x1cfd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1cfd14) {
            ctx->pc = 0x1CFD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFD14u;
            // 0x1cfd18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFD38u;
            goto label_1cfd38;
        }
    }
    ctx->pc = 0x1CFD1Cu;
    // 0x1cfd1c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1cfd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfd20: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1cfd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1cfd24: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1cfd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfd28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cfd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cfd2c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1cfd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfd30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cfd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cfd34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cfd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cfd38:
    // 0x1cfd38: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cfd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfd3c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1cfd3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfd40: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cfd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfd44: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cfd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cfd48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1cfd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cfd4c:
    // 0x1cfd4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1cfd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cfd50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cfd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfd54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfd58: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFD58u;
        // 0x1cfd5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFD60u;
}
