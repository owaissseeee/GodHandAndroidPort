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

// Function: func_001C6CB8
// Address: 0x1c6cb8 - 0x1c7138
void func_001C6CB8_0x1c6cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C6CB8_0x1c6cb8");
#endif

    switch (ctx->pc) {
        case 0x1c6d80u: goto label_1c6d80;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6f8cu: goto label_1c6f8c;
        case 0x1c6fdcu: goto label_1c6fdc;
        case 0x1c7004u: goto label_1c7004;
        case 0x1c7054u: goto label_1c7054;
        case 0x1c7064u: goto label_1c7064;
        case 0x1c70b4u: goto label_1c70b4;
        default: break;
    }

    ctx->pc = 0x1c6cb8u;

    // 0x1c6cb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c6cbc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c6cc0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c6cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c6cc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c6cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cc8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c6cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c6ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c6cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c6cd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c6cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6cd8: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x1c6cdc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1c6cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1c6ce0: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x1C6CE0u;
    {
        const bool branch_taken_0x1c6ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CE0u;
        // 0x1c6ce4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ce0) {
            ctx->pc = 0x1C7100u;
            goto label_1c7100;
        }
    }
    ctx->pc = 0x1C6CE8u;
    // 0x1c6ce8: 0x26420090  addiu       $v0, $s2, 0x90
    ctx->pc = 0x1c6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1c6cec: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6CECu;
    {
        const bool branch_taken_0x1c6cec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6cec) {
            ctx->pc = 0x1C6CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6CECu;
            // 0x1c6cf0: 0x264200a0  addiu       $v0, $s2, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6D10u;
            goto label_1c6d10;
        }
    }
    ctx->pc = 0x1C6CF4u;
    // 0x1c6cf4: 0xc6400090  lwc1        $f0, 0x90($s2)
    ctx->pc = 0x1c6cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6cf8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c6cfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6d00: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c6d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c6d04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c6d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c6d0c: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1c6d10:
    // 0x1c6d10: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6D10u;
    {
        const bool branch_taken_0x1c6d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6d10) {
            ctx->pc = 0x1C6D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6D10u;
            // 0x1c6d14: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6D34u;
            goto label_1c6d34;
        }
    }
    ctx->pc = 0x1C6D18u;
    // 0x1c6d18: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x1c6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d1c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c6d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c6d20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6d24: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1c6d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c6d28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1c6d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1c6d30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6d34:
    // 0x1c6d34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6d38: 0x0  nop
    ctx->pc = 0x1c6d38u;
    // NOP
    // 0x1c6d3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6d3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d40: 0x0  nop
    ctx->pc = 0x1c6d40u;
    // NOP
    // 0x1c6d44: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C6D44u;
    {
        const bool branch_taken_0x1c6d44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d44) {
            ctx->pc = 0x1C6D74u;
            goto label_1c6d74;
        }
    }
    ctx->pc = 0x1C6D4Cu;
    // 0x1c6d4c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1c6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d50: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6d50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d54: 0x0  nop
    ctx->pc = 0x1c6d54u;
    // NOP
    // 0x1c6d58: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6D58u;
    {
        const bool branch_taken_0x1c6d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d58) {
            ctx->pc = 0x1C6D74u;
            goto label_1c6d74;
        }
    }
    ctx->pc = 0x1C6D60u;
    // 0x1c6d60: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c6d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6d64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6d64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d68: 0x0  nop
    ctx->pc = 0x1c6d68u;
    // NOP
    // 0x1c6d6c: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6D6Cu;
    {
        const bool branch_taken_0x1c6d6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D6Cu;
        // 0x1c6d70: 0x27b30010  addiu       $s3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d6c) {
            ctx->pc = 0x1C6E04u;
            goto label_1c6e04;
        }
    }
    ctx->pc = 0x1C6D74u;
label_1c6d74:
    // 0x1c6d74: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1c6d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c6d78: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1C6D78u;
    SET_GPR_U32(ctx, 31, 0x1C6D80u);
    ctx->pc = 0x1C6D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D78u;
    // 0x1c6d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1C6D78u, 0x1C6D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D80u;
label_1c6d80:
    // 0x1c6d80: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1c6d80u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1c6d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d88: 0x0  nop
    ctx->pc = 0x1c6d88u;
    // NOP
    // 0x1c6d8c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c6d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d90: 0x0  nop
    ctx->pc = 0x1c6d90u;
    // NOP
    // 0x1c6d94: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6D94u;
    {
        const bool branch_taken_0x1c6d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D94u;
        // 0x1c6d98: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d94) {
            ctx->pc = 0x1C6DDCu;
            goto label_1c6ddc;
        }
    }
    ctx->pc = 0x1C6D9Cu;
    // 0x1c6d9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c6d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6da0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6da4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x1c6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6da8: 0x0  nop
    ctx->pc = 0x1c6da8u;
    // NOP
    // 0x1c6dac: 0x0  nop
    ctx->pc = 0x1c6dacu;
    // NOP
    // 0x1c6db0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c6db0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1c6db4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1c6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6db8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1c6db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6dbc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6dc0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c6dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c6dc4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c6dc4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c6dc8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1c6dc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c6dcc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1c6dccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c6dd0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c6dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c6dd4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1c6dd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c6dd8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1c6dd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c6ddc:
    // 0x1c6ddc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c6ddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6de0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c6de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6de4: 0x121d0007  beq         $s0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6DE4u;
    {
        const bool branch_taken_0x1c6de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DE4u;
        // 0x1c6de8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6de4) {
            ctx->pc = 0x1C6E04u;
            goto label_1c6e04;
        }
    }
    ctx->pc = 0x1C6DECu;
    // 0x1c6dec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1c6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6df0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c6df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6df4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6df8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c6df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c6dfc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c6dfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c6e00: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1c6e00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c6e04:
    // 0x1c6e04: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1c6e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e0c: 0x0  nop
    ctx->pc = 0x1c6e0cu;
    // NOP
    // 0x1c6e10: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6e10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e14: 0x0  nop
    ctx->pc = 0x1c6e14u;
    // NOP
    // 0x1c6e18: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1C6E18u;
    {
        const bool branch_taken_0x1c6e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e18) {
            ctx->pc = 0x1C6E48u;
            goto label_1c6e48;
        }
    }
    ctx->pc = 0x1C6E20u;
    // 0x1c6e20: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1c6e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6e24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e28: 0x0  nop
    ctx->pc = 0x1c6e28u;
    // NOP
    // 0x1c6e2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6E2Cu;
    {
        const bool branch_taken_0x1c6e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e2c) {
            ctx->pc = 0x1C6E48u;
            goto label_1c6e48;
        }
    }
    ctx->pc = 0x1C6E34u;
    // 0x1c6e34: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c6e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e3c: 0x0  nop
    ctx->pc = 0x1c6e3cu;
    // NOP
    // 0x1c6e40: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x1C6E40u;
    {
        const bool branch_taken_0x1c6e40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e40) {
            ctx->pc = 0x1C6ED4u;
            goto label_1c6ed4;
        }
    }
    ctx->pc = 0x1C6E48u;
label_1c6e48:
    // 0x1c6e48: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1c6e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c6e4c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1C6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E54u);
    ctx->pc = 0x1C6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6E4Cu;
    // 0x1c6e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1C6E4Cu, 0x1C6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6E54u;
label_1c6e54:
    // 0x1c6e54: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1c6e54u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1c6e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6e5c: 0x0  nop
    ctx->pc = 0x1c6e5cu;
    // NOP
    // 0x1c6e60: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c6e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e64: 0x0  nop
    ctx->pc = 0x1c6e64u;
    // NOP
    // 0x1c6e68: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6E68u;
    {
        const bool branch_taken_0x1c6e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e68) {
            ctx->pc = 0x1C6EB0u;
            goto label_1c6eb0;
        }
    }
    ctx->pc = 0x1C6E70u;
    // 0x1c6e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c6e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c6e74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c6e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6e78: 0xc6240000  lwc1        $f4, 0x0($s1)
    ctx->pc = 0x1c6e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6e7c: 0x0  nop
    ctx->pc = 0x1c6e7cu;
    // NOP
    // 0x1c6e80: 0x0  nop
    ctx->pc = 0x1c6e80u;
    // NOP
    // 0x1c6e84: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c6e84u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1c6e88: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1c6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6e8c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1c6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6e90: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c6e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e94: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1c6e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c6e98: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1c6e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c6e9c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1c6e9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1c6ea0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1c6ea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c6ea4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1c6ea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c6ea8: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x1c6ea8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c6eac: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1c6eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1c6eb0:
    // 0x1c6eb0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c6eb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6eb4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6eb8: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6EB8u;
    {
        const bool branch_taken_0x1c6eb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EB8u;
        // 0x1c6ebc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6eb8) {
            ctx->pc = 0x1C6ED4u;
            goto label_1c6ed4;
        }
    }
    ctx->pc = 0x1C6EC0u;
    // 0x1c6ec0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6ec4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6ec8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c6ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c6ecc: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1c6eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c6ed0: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1c6ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1c6ed4:
    // 0x1c6ed4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1c6ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1c6ed8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c6ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c6edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6ee0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c6ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6ee4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6ee8: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6eec: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c6eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c6ef0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c6ef0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c6ef4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c6ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c6ef8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6efc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c6efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6f00: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6f04: 0x121d0006  beq         $s0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6F04u;
    {
        const bool branch_taken_0x1c6f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F04u;
        // 0x1c6f08: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f04) {
            ctx->pc = 0x1C6F20u;
            goto label_1c6f20;
        }
    }
    ctx->pc = 0x1C6F0Cu;
    // 0x1c6f0c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f10: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6f14: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c6f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c6f18: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1c6f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1c6f1c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x1c6f1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1c6f20:
    // 0x1c6f20: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1c6f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1c6f24: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1c6f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1c6f28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6f2c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1c6f2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6f30: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6f34: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f38: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c6f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c6f3c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c6f3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c6f40: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c6f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c6f44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6f48: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c6f48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6f4c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6f50: 0x123d0006  beq         $s1, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6F50u;
    {
        const bool branch_taken_0x1c6f50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F50u;
        // 0x1c6f54: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f50) {
            ctx->pc = 0x1C6F6Cu;
            goto label_1c6f6c;
        }
    }
    ctx->pc = 0x1C6F58u;
    // 0x1c6f58: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1c6f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f5c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c6f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6f60: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c6f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c6f64: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1c6f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c6f68: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x1c6f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1c6f6c:
    // 0x1c6f6c: 0xc642002c  lwc1        $f2, 0x2C($s2)
    ctx->pc = 0x1c6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6f70: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x1c6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f74: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1c6f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6f78: 0x0  nop
    ctx->pc = 0x1c6f78u;
    // NOP
    // 0x1c6f7c: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6F7Cu;
    {
        const bool branch_taken_0x1c6f7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6f7c) {
            ctx->pc = 0x1C6F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6F7Cu;
            // 0x1c6f80: 0xc6400030  lwc1        $f0, 0x30($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6FE4u;
            goto label_1c6fe4;
        }
    }
    ctx->pc = 0x1C6F84u;
    // 0x1c6f84: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C6F84u;
    SET_GPR_U32(ctx, 31, 0x1C6F8Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C6F84u, 0x1C6F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F8Cu;
label_1c6f8c:
    // 0x1c6f8c: 0xc6410148  lwc1        $f1, 0x148($s2)
    ctx->pc = 0x1c6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6f94: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c6f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6f98: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6f9c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6fa0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c6fa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c6fa4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c6fa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c6fa8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c6fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c6fac: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c6facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6fb0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c6fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6fb4: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c6fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c6fb8: 0x121d0006  beq         $s0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6FB8u;
    {
        const bool branch_taken_0x1c6fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FB8u;
        // 0x1c6fbc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fb8) {
            ctx->pc = 0x1C6FD4u;
            goto label_1c6fd4;
        }
    }
    ctx->pc = 0x1C6FC0u;
    // 0x1c6fc0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6fc4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6fc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c6fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c6fcc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1c6fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c6fd0: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1c6fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c6fd4:
    // 0x1c6fd4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C6FD4u;
    SET_GPR_U32(ctx, 31, 0x1C6FDCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C6FD4u, 0x1C6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6FDCu;
label_1c6fdc:
    // 0x1c6fdc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1C6FDCu;
    {
        const bool branch_taken_0x1c6fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6FDCu;
        // 0x1c6fe0: 0xc6410148  lwc1        $f1, 0x148($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fdc) {
            ctx->pc = 0x1C70B8u;
            goto label_1c70b8;
        }
    }
    ctx->pc = 0x1C6FE4u;
label_1c6fe4:
    // 0x1c6fe4: 0xc6410144  lwc1        $f1, 0x144($s2)
    ctx->pc = 0x1c6fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6fe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c6fe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c6fec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c6fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6ff0: 0x0  nop
    ctx->pc = 0x1c6ff0u;
    // NOP
    // 0x1c6ff4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1C6FF4u;
    {
        const bool branch_taken_0x1c6ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6ff4) {
            ctx->pc = 0x1C705Cu;
            goto label_1c705c;
        }
    }
    ctx->pc = 0x1C6FFCu;
    // 0x1c6ffc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C6FFCu;
    SET_GPR_U32(ctx, 31, 0x1C7004u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C6FFCu, 0x1C7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7004u;
label_1c7004:
    // 0x1c7004: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x1c7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c700c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c700cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7010: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7014: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7018: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c7018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c701c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c701cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c7020: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c7020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7024: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7028: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c7028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c702c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c702cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7030: 0x121d0006  beq         $s0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7030u;
        // 0x1c7034: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C704Cu;
            goto label_1c704c;
        }
    }
    ctx->pc = 0x1C7038u;
    // 0x1c7038: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c7038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c703c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7040: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c7040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c7044: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1c7044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c7048: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1c7048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c704c:
    // 0x1c704c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C704Cu;
    SET_GPR_U32(ctx, 31, 0x1C7054u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C704Cu, 0x1C7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7054u;
label_1c7054:
    // 0x1c7054: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C7054u;
    {
        const bool branch_taken_0x1c7054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7054u;
        // 0x1c7058: 0xc6410150  lwc1        $f1, 0x150($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7054) {
            ctx->pc = 0x1C70B8u;
            goto label_1c70b8;
        }
    }
    ctx->pc = 0x1C705Cu;
label_1c705c:
    // 0x1c705c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C705Cu;
    SET_GPR_U32(ctx, 31, 0x1C7064u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C705Cu, 0x1C7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7064u;
label_1c7064:
    // 0x1c7064: 0xc641014c  lwc1        $f1, 0x14C($s2)
    ctx->pc = 0x1c7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c7068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c706c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1c706cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7070: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7074: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7074u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7078: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c7078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c707c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c707cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c7080: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c7080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c7084: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c7084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7088: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c7088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c708c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c7090: 0x121d0006  beq         $s0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7090u;
    {
        const bool branch_taken_0x1c7090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7090u;
        // 0x1c7094: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7090) {
            ctx->pc = 0x1C70ACu;
            goto label_1c70ac;
        }
    }
    ctx->pc = 0x1C7098u;
    // 0x1c7098: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c709c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c70a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c70a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c70a4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1c70a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c70a8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1c70a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1c70ac:
    // 0x1c70ac: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1C70ACu;
    SET_GPR_U32(ctx, 31, 0x1C70B4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1C70ACu, 0x1C70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C70B4u;
label_1c70b4:
    // 0x1c70b4: 0xc641014c  lwc1        $f1, 0x14C($s2)
    ctx->pc = 0x1c70b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c70b8:
    // 0x1c70b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c70b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c70bc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1c70bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c70c0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c70c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c70c4: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c70c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c70c8: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1c70c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1c70cc: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c70ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1c70d0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c70d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c70d4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c70d8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1c70d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c70dc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1c70e0: 0x123d000d  beq         $s1, $sp, . + 4 + (0xD << 2)
    ctx->pc = 0x1C70E0u;
    {
        const bool branch_taken_0x1c70e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 29));
        ctx->pc = 0x1C70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70E0u;
        // 0x1c70e4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70e0) {
            ctx->pc = 0x1C7118u;
            goto label_1c7118;
        }
    }
    ctx->pc = 0x1C70E8u;
    // 0x1c70e8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c70ec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1c70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c70f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c70f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c70f4: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1c70f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1c70f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C70F8u;
    {
        const bool branch_taken_0x1c70f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C70F8u;
        // 0x1c70fc: 0xe6220004  swc1        $f2, 0x4($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70f8) {
            ctx->pc = 0x1C7118u;
            goto label_1c7118;
        }
    }
    ctx->pc = 0x1C7100u;
label_1c7100:
    // 0x1c7100: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c7100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c7104: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c7104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c7108: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c7108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c710c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c710cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c7110: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c7110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c7114: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c7114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c7118:
    // 0x1c7118: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c7118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c711c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c711cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7120: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c7120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c7124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c712c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C712Cu;
        // 0x1c7130: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7134u;
    // 0x1c7134: 0x0  nop
    ctx->pc = 0x1c7134u;
    // NOP
    ctx->pc = 0x1c7138u;
}
