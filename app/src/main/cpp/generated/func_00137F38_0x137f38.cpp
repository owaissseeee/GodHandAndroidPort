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

// Function: func_00137F38
// Address: 0x137f38 - 0x1380a8
void func_00137F38_0x137f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00137F38_0x137f38");
#endif

    switch (ctx->pc) {
        case 0x137f64u: goto label_137f64;
        case 0x137f74u: goto label_137f74;
        case 0x138014u: goto label_138014;
        default: break;
    }

    ctx->pc = 0x137f38u;

    // 0x137f38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137f3c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x137f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x137f40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x137f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x137f44: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x137f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f48: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x137f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x137f4c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x137f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x137f50: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x137f50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x137f54: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x137f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x137f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x137f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x137f5c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x137F5Cu;
    SET_GPR_U32(ctx, 31, 0x137F64u);
    ctx->pc = 0x137F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F5Cu;
    // 0x137f60: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x137F5Cu, 0x137F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F64u;
label_137f64:
    // 0x137f64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x137f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137f6c: 0xc04deee  jal         func_137BB8
    ctx->pc = 0x137F6Cu;
    SET_GPR_U32(ctx, 31, 0x137F74u);
    ctx->pc = 0x137F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F6Cu;
    // 0x137f70: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137BB8u, 0x137F6Cu, 0x137F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F74u;
label_137f74:
    // 0x137f74: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x137f74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x137f78: 0xc6340450  lwc1        $f20, 0x450($s1)
    ctx->pc = 0x137f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137f7c: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x137F7Cu;
    {
        const bool branch_taken_0x137f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F7Cu;
        // 0x137f80: 0xc6350460  lwc1        $f21, 0x460($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f7c) {
            ctx->pc = 0x138050u;
            goto label_138050;
        }
    }
    ctx->pc = 0x137F84u;
    // 0x137f84: 0x9203003f  lbu         $v1, 0x3F($s0)
    ctx->pc = 0x137f84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 63)));
    // 0x137f88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137f8c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x137F8Cu;
    {
        const bool branch_taken_0x137f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x137F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F8Cu;
        // 0x137f90: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f8c) {
            ctx->pc = 0x137FE4u;
            goto label_137fe4;
        }
    }
    ctx->pc = 0x137F94u;
    // 0x137f94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x137F94u;
    {
        const bool branch_taken_0x137f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f94) {
            ctx->pc = 0x137F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137F94u;
            // 0x137f98: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137FACu;
            goto label_137fac;
        }
    }
    ctx->pc = 0x137F9Cu;
    // 0x137f9c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x137F9Cu;
    {
        const bool branch_taken_0x137f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137f9c) {
            ctx->pc = 0x137FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137F9Cu;
            // 0x137fa0: 0xc6000060  lwc1        $f0, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137FBCu;
            goto label_137fbc;
        }
    }
    ctx->pc = 0x137FA4u;
    // 0x137fa4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x137FA4u;
    {
        const bool branch_taken_0x137fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FA4u;
        // 0x137fa8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fa4) {
            ctx->pc = 0x138088u;
            goto label_138088;
        }
    }
    ctx->pc = 0x137FACu;
label_137fac:
    // 0x137fac: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x137FACu;
    {
        const bool branch_taken_0x137fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x137fac) {
            ctx->pc = 0x137FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137FACu;
            // 0x137fb0: 0xc6000060  lwc1        $f0, 0x60($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138028u;
            goto label_138028;
        }
    }
    ctx->pc = 0x137FB4u;
    // 0x137fb4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x137FB4u;
    {
        const bool branch_taken_0x137fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FB4u;
        // 0x137fb8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fb4) {
            ctx->pc = 0x138088u;
            goto label_138088;
        }
    }
    ctx->pc = 0x137FBCu;
label_137fbc:
    // 0x137fbc: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x137fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137fc0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x137fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x137fc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x137fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x137fc8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x137fc8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x137fcc: 0xe6340450  swc1        $f20, 0x450($s1)
    ctx->pc = 0x137fccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1104), bits); }
    // 0x137fd0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x137fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137fd4: 0xe6200460  swc1        $f0, 0x460($s1)
    ctx->pc = 0x137fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1120), bits); }
    // 0x137fd8: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x137fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137fdc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x137FDCu;
    {
        const bool branch_taken_0x137fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FDCu;
        // 0x137fe0: 0xe6210444  swc1        $f1, 0x444($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137fdc) {
            ctx->pc = 0x138084u;
            goto label_138084;
        }
    }
    ctx->pc = 0x137FE4u;
label_137fe4:
    // 0x137fe4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x137fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x137fe8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x137fe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137fec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x137fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137ff0: 0x26430100  addiu       $v1, $s2, 0x100
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x137ff4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x137ff4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137ff8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x137ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x137ffc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x137ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138000: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x138004: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x138004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x138008: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x138008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13800c: 0xc04df2e  jal         func_137CB8
    ctx->pc = 0x13800Cu;
    SET_GPR_U32(ctx, 31, 0x138014u);
    ctx->pc = 0x138010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13800Cu;
    // 0x138010: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137CB8u, 0x13800Cu, 0x138014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138014u;
label_138014:
    // 0x138014: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x138014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138018: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x138018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13801c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13801cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x138020: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138020u;
    {
        const bool branch_taken_0x138020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138020u;
        // 0x138024: 0xc6020034  lwc1        $f2, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138020) {
            ctx->pc = 0x138060u;
            goto label_138060;
        }
    }
    ctx->pc = 0x138028u;
label_138028:
    // 0x138028: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x138028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13802c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x13802cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x138030: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x138030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x138034: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x138034u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x138038: 0xe6340450  swc1        $f20, 0x450($s1)
    ctx->pc = 0x138038u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1104), bits); }
    // 0x13803c: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x13803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138040: 0xe6200460  swc1        $f0, 0x460($s1)
    ctx->pc = 0x138040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1120), bits); }
    // 0x138044: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x138044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138048: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x138048u;
    {
        const bool branch_taken_0x138048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138048u;
        // 0x13804c: 0xe6210444  swc1        $f1, 0x444($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138048) {
            ctx->pc = 0x138084u;
            goto label_138084;
        }
    }
    ctx->pc = 0x138050u;
label_138050:
    // 0x138050: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x138050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138054: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x138054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138058: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x138058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x13805c: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x13805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138060:
    // 0x138060: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x138060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x138064: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x138064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138068: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x138068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x13806c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x13806cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x138070: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x138070u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x138074: 0xe6340450  swc1        $f20, 0x450($s1)
    ctx->pc = 0x138074u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1104), bits); }
    // 0x138078: 0xe6350460  swc1        $f21, 0x460($s1)
    ctx->pc = 0x138078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1120), bits); }
    // 0x13807c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x13807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138080: 0xe6200444  swc1        $f0, 0x444($s1)
    ctx->pc = 0x138080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1092), bits); }
label_138084:
    // 0x138084: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x138084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138088:
    // 0x138088: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x138088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13808c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13808cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138090: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x138090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138094: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x138094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138098: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x138098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13809c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x13809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1380a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1380A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380A0u;
        // 0x1380a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1380A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1380A8u;
}
