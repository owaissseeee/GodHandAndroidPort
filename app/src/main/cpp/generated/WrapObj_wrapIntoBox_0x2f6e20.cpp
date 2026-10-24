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

// Function: WrapObj_wrapIntoBox
// Address: 0x2f6e20 - 0x2f6f48
void WrapObj_wrapIntoBox_0x2f6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WrapObj_wrapIntoBox_0x2f6e20");
#endif

    switch (ctx->pc) {
        case 0x2f6e70u: goto label_2f6e70;
        case 0x2f6f2cu: goto label_2f6f2c;
        case 0x2f6f34u: goto label_2f6f34;
        default: break;
    }

    ctx->pc = 0x2f6e20u;

    // 0x2f6e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6e24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f6e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2f6e28: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f6e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2f6e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6e34: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f6e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f6e38: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2f6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2f6e3c: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f6e40: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x2f6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2f6e44: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6E44u;
    {
        const bool branch_taken_0x2f6e44 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E44u;
        // 0x2f6e48: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e44) {
            ctx->pc = 0x2F6E64u;
            goto label_2f6e64;
        }
    }
    ctx->pc = 0x2F6E4Cu;
    // 0x2f6e4c: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x2f6e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6e50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f6e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f6e54: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6e58: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6e5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6e60: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f6e64:
    // 0x2f6e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f6e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6e68: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F6E68u;
    SET_GPR_U32(ctx, 31, 0x2F6E70u);
    ctx->pc = 0x2F6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6E68u;
    // 0x2f6e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F6E68u, 0x2F6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E70u;
label_2f6e70:
    // 0x2f6e70: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2f6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6e74: 0xc62002b8  lwc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2f6e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6e78: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2f6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6e7c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2f6e7cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f6e80: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2f6e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6e84: 0x0  nop
    ctx->pc = 0x2f6e84u;
    // NOP
    // 0x2f6e88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6E88u;
    {
        const bool branch_taken_0x2f6e88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E88u;
        // 0x2f6e8c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e88) {
            ctx->pc = 0x2F6E98u;
            goto label_2f6e98;
        }
    }
    ctx->pc = 0x2F6E90u;
    // 0x2f6e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6E90u;
    {
        const bool branch_taken_0x2f6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6E90u;
        // 0x2f6e94: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6e90) {
            ctx->pc = 0x2F6EA8u;
            goto label_2f6ea8;
        }
    }
    ctx->pc = 0x2F6E98u;
label_2f6e98:
    // 0x2f6e98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f6e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6e9c: 0x0  nop
    ctx->pc = 0x2f6e9cu;
    // NOP
    // 0x2f6ea0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6EA0u;
    {
        const bool branch_taken_0x2f6ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ea0) {
            ctx->pc = 0x2F6EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6EA0u;
            // 0x2f6ea4: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6EA8u;
            goto label_2f6ea8;
        }
    }
    ctx->pc = 0x2F6EA8u;
label_2f6ea8:
    // 0x2f6ea8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6eac: 0xc62002b8  lwc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2f6eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6eb0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2f6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6eb4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2f6eb4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f6eb8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2f6eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6ebc: 0x0  nop
    ctx->pc = 0x2f6ebcu;
    // NOP
    // 0x2f6ec0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6EC0u;
    {
        const bool branch_taken_0x2f6ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EC0u;
        // 0x2f6ec4: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec0) {
            ctx->pc = 0x2F6ED0u;
            goto label_2f6ed0;
        }
    }
    ctx->pc = 0x2F6EC8u;
    // 0x2f6ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6EC8u;
    {
        const bool branch_taken_0x2f6ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EC8u;
        // 0x2f6ecc: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ec8) {
            ctx->pc = 0x2F6EE0u;
            goto label_2f6ee0;
        }
    }
    ctx->pc = 0x2F6ED0u;
label_2f6ed0:
    // 0x2f6ed0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f6ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6ed4: 0x0  nop
    ctx->pc = 0x2f6ed4u;
    // NOP
    // 0x2f6ed8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6ED8u;
    {
        const bool branch_taken_0x2f6ed8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6ed8) {
            ctx->pc = 0x2F6EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6ED8u;
            // 0x2f6edc: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6EE0u;
            goto label_2f6ee0;
        }
    }
    ctx->pc = 0x2F6EE0u;
label_2f6ee0:
    // 0x2f6ee0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2f6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6ee4: 0xc62002b8  lwc1        $f0, 0x2B8($s1)
    ctx->pc = 0x2f6ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6ee8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2f6ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f6eec: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x2f6eecu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f6ef0: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2f6ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6ef4: 0x0  nop
    ctx->pc = 0x2f6ef4u;
    // NOP
    // 0x2f6ef8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6EF8u;
    {
        const bool branch_taken_0x2f6ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6EF8u;
        // 0x2f6efc: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ef8) {
            ctx->pc = 0x2F6F08u;
            goto label_2f6f08;
        }
    }
    ctx->pc = 0x2F6F00u;
    // 0x2f6f00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F00u;
    {
        const bool branch_taken_0x2f6f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F00u;
        // 0x2f6f04: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f00) {
            ctx->pc = 0x2F6F18u;
            goto label_2f6f18;
        }
    }
    ctx->pc = 0x2F6F08u;
label_2f6f08:
    // 0x2f6f08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f6f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6f0c: 0x0  nop
    ctx->pc = 0x2f6f0cu;
    // NOP
    // 0x2f6f10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F6F10u;
    {
        const bool branch_taken_0x2f6f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6f10) {
            ctx->pc = 0x2F6F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6F10u;
            // 0x2f6f14: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6F18u;
            goto label_2f6f18;
        }
    }
    ctx->pc = 0x2F6F18u;
label_2f6f18:
    // 0x2f6f18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2f6f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f6f1c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2f6f1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6f20: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2f6f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f6f24: 0xc0ad7f2  jal         func_2B5FC8
    ctx->pc = 0x2F6F24u;
    SET_GPR_U32(ctx, 31, 0x2F6F2Cu);
    ctx->pc = 0x2F6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F24u;
    // 0x2f6f28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5FC8u, 0x2F6F24u, 0x2F6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F2Cu;
label_2f6f2c:
    // 0x2f6f2c: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F6F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F6F34u);
    ctx->pc = 0x2F6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6F2Cu;
    // 0x2f6f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F6F2Cu, 0x2F6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6F34u;
label_2f6f34:
    // 0x2f6f34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f6f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f6f38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f6f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f6f3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f6f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F40u;
        // 0x2f6f44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6F48u;
}
