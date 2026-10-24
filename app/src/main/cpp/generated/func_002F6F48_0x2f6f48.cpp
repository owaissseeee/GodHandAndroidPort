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

// Function: func_002F6F48
// Address: 0x2f6f48 - 0x2f7090
void func_002F6F48_0x2f6f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F6F48_0x2f6f48");
#endif

    switch (ctx->pc) {
        case 0x2f6facu: goto label_2f6fac;
        case 0x2f7064u: goto label_2f7064;
        default: break;
    }

    ctx->pc = 0x2f6f48u;

    // 0x2f6f48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f6f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f6f4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f6f50: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2f6f50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f6f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6f5c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2f6f5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f6f60: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2f6f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2f6f64: 0xc61502b8  lwc1        $f21, 0x2B8($s0)
    ctx->pc = 0x2f6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f6f68: 0xc60002bc  lwc1        $f0, 0x2BC($s0)
    ctx->pc = 0x2f6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6f6c: 0xc6160194  lwc1        $f22, 0x194($s0)
    ctx->pc = 0x2f6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f6f70: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x2f6f70u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2f6f74: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2f6f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f6f78: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2f6f7c: 0x8c43aff0  lw          $v1, -0x5010($v0)
    ctx->pc = 0x2f6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f6f80: 0x24620210  addiu       $v0, $v1, 0x210
    ctx->pc = 0x2f6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    // 0x2f6f84: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6F84u;
    {
        const bool branch_taken_0x2f6f84 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6F84u;
        // 0x2f6f88: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f84) {
            ctx->pc = 0x2F6FA4u;
            goto label_2f6fa4;
        }
    }
    ctx->pc = 0x2F6F8Cu;
    // 0x2f6f8c: 0xc4600210  lwc1        $f0, 0x210($v1)
    ctx->pc = 0x2f6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6f90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f6f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f6f94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f6f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6f98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f6f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f6f9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f6f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6fa0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2f6fa4:
    // 0x2f6fa4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F6FA4u;
    SET_GPR_U32(ctx, 31, 0x2F6FACu);
    ctx->pc = 0x2F6FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FA4u;
    // 0x2f6fa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F6FA4u, 0x2F6FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FACu;
label_2f6fac:
    // 0x2f6fac: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f6fb0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2f6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6fb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6fb8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f6fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f6fbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f6fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f6fc0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f6fc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f6fc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f6fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6fc8: 0x0  nop
    ctx->pc = 0x2f6fc8u;
    // NOP
    // 0x2f6fcc: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x2F6FCCu;
    {
        const bool branch_taken_0x2f6fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6fcc) {
            ctx->pc = 0x2F6FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6FCCu;
            // 0x2f6fd0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7000u;
            goto label_2f7000;
        }
    }
    ctx->pc = 0x2F6FD4u;
    // 0x2f6fd4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2f6fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6fd8: 0x0  nop
    ctx->pc = 0x2f6fd8u;
    // NOP
    // 0x2f6fdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6FDCu;
    {
        const bool branch_taken_0x2f6fdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f6fdc) {
            ctx->pc = 0x2F6FF8u;
            goto label_2f6ff8;
        }
    }
    ctx->pc = 0x2F6FE4u;
    // 0x2f6fe4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f6fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2f6fe8: 0xc60102bc  lwc1        $f1, 0x2BC($s0)
    ctx->pc = 0x2f6fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6fec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f6fecu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f6ff0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6FF0u;
    {
        const bool branch_taken_0x2f6ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FF0u;
        // 0x2f6ff4: 0x460018c1  sub.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ff0) {
            ctx->pc = 0x2F6FFCu;
            goto label_2f6ffc;
        }
    }
    ctx->pc = 0x2F6FF8u;
label_2f6ff8:
    // 0x2f6ff8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2f6ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f6ffc:
    // 0x2f6ffc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7000:
    // 0x2f7000: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2f7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f7004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f7008: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2f7008u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2f700c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2f700cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7010: 0x0  nop
    ctx->pc = 0x2f7010u;
    // NOP
    // 0x2f7014: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2F7014u;
    {
        const bool branch_taken_0x2f7014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7014) {
            ctx->pc = 0x2F7018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7014u;
            // 0x2f7018: 0xc6000194  lwc1        $f0, 0x194($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7054u;
            goto label_2f7054;
        }
    }
    ctx->pc = 0x2F701Cu;
    // 0x2f701c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2f701cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7020: 0x0  nop
    ctx->pc = 0x2f7020u;
    // NOP
    // 0x2f7024: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7024u;
    {
        const bool branch_taken_0x2f7024 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7024) {
            ctx->pc = 0x2F704Cu;
            goto label_2f704c;
        }
    }
    ctx->pc = 0x2F702Cu;
    // 0x2f702c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2f702cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2f7030: 0xc60202bc  lwc1        $f2, 0x2BC($s0)
    ctx->pc = 0x2f7030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f7038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f703c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f703cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f7040: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f7040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f7044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7044u;
    {
        const bool branch_taken_0x2f7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7044u;
        // 0x2f7048: 0x460118c2  mul.s       $f3, $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7044) {
            ctx->pc = 0x2F7050u;
            goto label_2f7050;
        }
    }
    ctx->pc = 0x2F704Cu;
label_2f704c:
    // 0x2f704c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2f704cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f7050:
    // 0x2f7050: 0xc6000194  lwc1        $f0, 0x194($s0)
    ctx->pc = 0x2f7050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f7054:
    // 0x2f7054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7058: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f7058u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2f705c: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F705Cu;
    SET_GPR_U32(ctx, 31, 0x2F7064u);
    ctx->pc = 0x2F7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F705Cu;
    // 0x2f7060: 0xe6000194  swc1        $f0, 0x194($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F705Cu, 0x2F7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7064u;
label_2f7064:
    // 0x2f7064: 0xe6160194  swc1        $f22, 0x194($s0)
    ctx->pc = 0x2f7064u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    // 0x2f7068: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f7068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f706c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7070: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2f7070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2f7074: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2f7074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f7078: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2f7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f707c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F707Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F707Cu;
        // 0x2f7080: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F707Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7084u;
    // 0x2f7084: 0x0  nop
    ctx->pc = 0x2f7084u;
    // NOP
    // 0x2f7088: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2f7088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f708c: 0x0  nop
    ctx->pc = 0x2f708cu;
    // NOP
    ctx->pc = 0x2f7090u;
}
