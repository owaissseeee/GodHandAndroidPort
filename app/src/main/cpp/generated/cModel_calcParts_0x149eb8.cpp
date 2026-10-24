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

// Function: cModel_calcParts
// Address: 0x149eb8 - 0x14a038
void cModel_calcParts_0x149eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_calcParts_0x149eb8");
#endif

    switch (ctx->pc) {
        case 0x149f04u: goto label_149f04;
        case 0x149f80u: goto label_149f80;
        case 0x149f88u: goto label_149f88;
        case 0x149fa4u: goto label_149fa4;
        case 0x149fe4u: goto label_149fe4;
        case 0x14a004u: goto label_14a004;
        default: break;
    }

    ctx->pc = 0x149eb8u;

    // 0x149eb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x149eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x149ebc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x149ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x149ec0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x149ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x149ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x149ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149ecc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x149eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x149ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149ed4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x149ed4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x149ed8: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x149ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x149edc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x149edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x149ee0: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x149EE0u;
    {
        const bool branch_taken_0x149ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ee0) {
            ctx->pc = 0x149EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149EE0u;
            // 0x149ee4: 0xc621027c  lwc1        $f1, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F2Cu;
            goto label_149f2c;
        }
    }
    ctx->pc = 0x149EE8u;
    // 0x149ee8: 0x26300110  addiu       $s0, $s1, 0x110
    ctx->pc = 0x149ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x149eec: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x149eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x149ef0: 0x92280140  lbu         $t0, 0x140($s1)
    ctx->pc = 0x149ef0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x149ef4: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x149ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x149ef8: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x149ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x149efc: 0xc051e92  jal         func_147A48
    ctx->pc = 0x149EFCu;
    SET_GPR_U32(ctx, 31, 0x149F04u);
    ctx->pc = 0x149F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EFCu;
    // 0x149f00: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x149EFCu, 0x149F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F04u;
label_149f04:
    // 0x149f04: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x149f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x149f08: 0x50500008  beql        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149F08u;
    {
        const bool branch_taken_0x149f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x149f08) {
            ctx->pc = 0x149F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F08u;
            // 0x149f0c: 0xc621027c  lwc1        $f1, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F2Cu;
            goto label_149f2c;
        }
    }
    ctx->pc = 0x149F10u;
    // 0x149f10: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x149f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f14: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x149f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x149f18: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x149f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149f1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x149f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x149f20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x149f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149f24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x149f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x149f28: 0xc621027c  lwc1        $f1, 0x27C($s1)
    ctx->pc = 0x149f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_149f2c:
    // 0x149f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x149f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149f30: 0x0  nop
    ctx->pc = 0x149f30u;
    // NOP
    // 0x149f34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x149f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149f38: 0x0  nop
    ctx->pc = 0x149f38u;
    // NOP
    // 0x149f3c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x149F3Cu;
    {
        const bool branch_taken_0x149f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x149f3c) {
            ctx->pc = 0x149F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F3Cu;
            // 0x149f40: 0x8e230250  lw          $v1, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149F54u;
            goto label_149f54;
        }
    }
    ctx->pc = 0x149F44u;
    // 0x149f44: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x149f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x149f48: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x149f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x149f4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149F4Cu;
    {
        const bool branch_taken_0x149f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F4Cu;
        // 0x149f50: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f4c) {
            ctx->pc = 0x149F64u;
            goto label_149f64;
        }
    }
    ctx->pc = 0x149F54u;
label_149f54:
    // 0x149f54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x149f58: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x149f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x149f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x149f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x149f60: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x149f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
label_149f64:
    // 0x149f64: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x149f64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x149f68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x149f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149f6c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x149F6Cu;
    {
        const bool branch_taken_0x149f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F6Cu;
        // 0x149f70: 0x8e300144  lw          $s0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f6c) {
            ctx->pc = 0x14A018u;
            goto label_14a018;
        }
    }
    ctx->pc = 0x149F74u;
    // 0x149f74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x149f74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x149f78: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x149f78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    // 0x149f7c: 0x0  nop
    ctx->pc = 0x149f7cu;
    // NOP
label_149f80:
    // 0x149f80: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x149F80u;
    SET_GPR_U32(ctx, 31, 0x149F88u);
    ctx->pc = 0x149F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F80u;
    // 0x149f84: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x149F80u, 0x149F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F88u;
label_149f88:
    // 0x149f88: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x149f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x149f8c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x149f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x149f90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149f94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149F94u;
    {
        const bool branch_taken_0x149f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149f94) {
            ctx->pc = 0x149F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149F94u;
            // 0x149f98: 0xc62c027c  lwc1        $f12, 0x27C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FA8u;
            goto label_149fa8;
        }
    }
    ctx->pc = 0x149F9Cu;
    // 0x149f9c: 0xc05404e  jal         func_150138
    ctx->pc = 0x149F9Cu;
    SET_GPR_U32(ctx, 31, 0x149FA4u);
    ctx->pc = 0x149FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149F9Cu;
    // 0x149fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x149F9Cu, 0x149FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FA4u;
label_149fa4:
    // 0x149fa4: 0xc62c027c  lwc1        $f12, 0x27C($s1)
    ctx->pc = 0x149fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_149fa8:
    // 0x149fa8: 0x460ca034  c.lt.s      $f20, $f12
    ctx->pc = 0x149fa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149fac: 0x0  nop
    ctx->pc = 0x149facu;
    // NOP
    // 0x149fb0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x149FB0u;
    {
        const bool branch_taken_0x149fb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x149FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FB0u;
        // 0x149fb4: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fb0) {
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FB8u;
    // 0x149fb8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x149fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x149fbc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x149FBCu;
    {
        const bool branch_taken_0x149fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149fbc) {
            ctx->pc = 0x149FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FBCu;
            // 0x149fc0: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FC4u;
    // 0x149fc4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x149fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x149fc8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x149fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x149fcc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x149FCCu;
    {
        const bool branch_taken_0x149fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149fcc) {
            ctx->pc = 0x149FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FCCu;
            // 0x149fd0: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149FE8u;
            goto label_149fe8;
        }
    }
    ctx->pc = 0x149FD4u;
    // 0x149fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fdc: 0xc055b5c  jal         func_156D70
    ctx->pc = 0x149FDCu;
    SET_GPR_U32(ctx, 31, 0x149FE4u);
    ctx->pc = 0x149FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FDCu;
    // 0x149fe0: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156D70u, 0x149FDCu, 0x149FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149FE4u;
label_149fe4:
    // 0x149fe4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x149fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_149fe8:
    // 0x149fe8: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x149fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x149fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149ff0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149FF0u;
    {
        const bool branch_taken_0x149ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149ff0) {
            ctx->pc = 0x149FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149FF0u;
            // 0x149ff4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A008u;
            goto label_14a008;
        }
    }
    ctx->pc = 0x149FF8u;
    // 0x149ff8: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x149ffc: 0xc054074  jal         func_1501D0
    ctx->pc = 0x149FFCu;
    SET_GPR_U32(ctx, 31, 0x14A004u);
    ctx->pc = 0x14A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149FFCu;
    // 0x14a000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x149FFCu, 0x14A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A004u;
label_14a004:
    // 0x14a004: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x14a004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_14a008:
    // 0x14a008: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14a008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14a00c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14a00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a010: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x14A010u;
    {
        const bool branch_taken_0x14a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A010u;
        // 0x14a014: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a010) {
            ctx->pc = 0x149F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149f80;
        }
    }
    ctx->pc = 0x14A018u;
label_14a018:
    // 0x14a018: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14a018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a01c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14a01cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a020: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a024: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14a024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a02c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x14a02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a030: 0x3e00008  jr          $ra
    ctx->pc = 0x14A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A030u;
        // 0x14a034: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A038u;
}
