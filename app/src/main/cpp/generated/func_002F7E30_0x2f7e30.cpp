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

// Function: func_002F7E30
// Address: 0x2f7e30 - 0x2f8570
void func_002F7E30_0x2f7e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F7E30_0x2f7e30");
#endif

    switch (ctx->pc) {
        case 0x2f803cu: goto label_2f803c;
        case 0x2f8054u: goto label_2f8054;
        case 0x2f8078u: goto label_2f8078;
        case 0x2f8098u: goto label_2f8098;
        case 0x2f84acu: goto label_2f84ac;
        case 0x2f84b4u: goto label_2f84b4;
        case 0x2f84c8u: goto label_2f84c8;
        case 0x2f84e8u: goto label_2f84e8;
        default: break;
    }

    ctx->pc = 0x2f7e30u;

    // 0x2f7e30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f7e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f7e34: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2f7e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2f7e38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f7e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7e3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f7e40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f7e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f7e4c: 0x26030320  addiu       $v1, $s0, 0x320
    ctx->pc = 0x2f7e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x2f7e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f7e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7e54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f7e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f7e58: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x2f7e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x2f7e5c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f7e60: 0x26050340  addiu       $a1, $s0, 0x340
    ctx->pc = 0x2f7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x2f7e64: 0x26060350  addiu       $a2, $s0, 0x350
    ctx->pc = 0x2f7e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x2f7e68: 0xc440016c  lwc1        $f0, 0x16C($v0)
    ctx->pc = 0x2f7e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f7e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f7e70: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f7e70u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f7e74: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f7e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f7e78: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x2f7e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7e7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f7e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7e80: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f7e80u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f7e84: 0xe60102f8  swc1        $f1, 0x2F8($s0)
    ctx->pc = 0x2f7e84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f7e88: 0xc4400174  lwc1        $f0, 0x174($v0)
    ctx->pc = 0x2f7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f7e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f7e90: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2f7e90u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2f7e94: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f7e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f7e98: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x2f7e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7e9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f7e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7ea0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2f7ea0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2f7ea4: 0xe60102fc  swc1        $f1, 0x2FC($s0)
    ctx->pc = 0x2f7ea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f7ea8: 0xc442013c  lwc1        $f2, 0x13C($v0)
    ctx->pc = 0x2f7ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7eac: 0xc4410144  lwc1        $f1, 0x144($v0)
    ctx->pc = 0x2f7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7eb0: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7eb4: 0xe6020320  swc1        $f2, 0x320($s0)
    ctx->pc = 0x2f7eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
    // 0x2f7eb8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2f7eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7ebc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2f7ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f7ec0: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f7ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f7ec4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f7ec8: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x2f7ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7ecc: 0xc4420150  lwc1        $f2, 0x150($v0)
    ctx->pc = 0x2f7eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7ed0: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x2f7ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7ed4: 0xe6010330  swc1        $f1, 0x330($s0)
    ctx->pc = 0x2f7ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x2f7ed8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f7edc: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2f7edcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f7ee0: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x2f7ee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f7ee4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f7ee8: 0xc4410154  lwc1        $f1, 0x154($v0)
    ctx->pc = 0x2f7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7eec: 0xc442015c  lwc1        $f2, 0x15C($v0)
    ctx->pc = 0x2f7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f7ef0: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x2f7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7ef4: 0xe6010340  swc1        $f1, 0x340($s0)
    ctx->pc = 0x2f7ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 832), bits); }
    // 0x2f7ef8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2f7ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2f7efc: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x2f7efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2f7f00: 0x10c40007  beq         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7F00u;
    {
        const bool branch_taken_0x2f7f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F00u;
        // 0x2f7f04: 0xe4a3000c  swc1        $f3, 0xC($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f00) {
            ctx->pc = 0x2F7F20u;
            goto label_2f7f20;
        }
    }
    ctx->pc = 0x2F7F08u;
    // 0x2f7f08: 0xc6000330  lwc1        $f0, 0x330($s0)
    ctx->pc = 0x2f7f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f0c: 0xe6000350  swc1        $f0, 0x350($s0)
    ctx->pc = 0x2f7f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 848), bits); }
    // 0x2f7f10: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2f7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7f14: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2f7f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2f7f18: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2f7f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f1c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2f7f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2f7f20:
    // 0x2f7f20: 0xa200031b  sb          $zero, 0x31B($s0)
    ctx->pc = 0x2f7f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 795), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f7f24: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2f7f28: 0xc6010340  lwc1        $f1, 0x340($s0)
    ctx->pc = 0x2f7f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7f2c: 0xc4407b00  lwc1        $f0, 0x7B00($v0)
    ctx->pc = 0x2f7f2cu;
    { uint32_t bits = FAST_READ32(0x747B00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f7f30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7f34: 0x0  nop
    ctx->pc = 0x2f7f34u;
    // NOP
    // 0x2f7f38: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2F7F38u;
    {
        const bool branch_taken_0x2f7f38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F38u;
        // 0x2f7f3c: 0x24437b00  addiu       $v1, $v0, 0x7B00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f38) {
            ctx->pc = 0x2F7F88u;
            goto label_2f7f88;
        }
    }
    ctx->pc = 0x2F7F40u;
    // 0x2f7f40: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2f7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7f44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2f7f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f48: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f7f48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7f4c: 0x0  nop
    ctx->pc = 0x2f7f4cu;
    // NOP
    // 0x2f7f50: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2F7F50u;
    {
        const bool branch_taken_0x2f7f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F50u;
        // 0x2f7f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f50) {
            ctx->pc = 0x2F7F8Cu;
            goto label_2f7f8c;
        }
    }
    ctx->pc = 0x2F7F58u;
    // 0x2f7f58: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2f7f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7f5c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f60: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f7f60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7f64: 0x0  nop
    ctx->pc = 0x2f7f64u;
    // NOP
    // 0x2f7f68: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7F68u;
    {
        const bool branch_taken_0x2f7f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f7f68) {
            ctx->pc = 0x2F7F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7F68u;
            // 0x2f7f6c: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7F90u;
            goto label_2f7f90;
        }
    }
    ctx->pc = 0x2F7F70u;
    // 0x2f7f70: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2f7f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7f74: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2f7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7f78: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f7f78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f7f7c: 0x0  nop
    ctx->pc = 0x2f7f7cu;
    // NOP
    // 0x2f7f80: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F7F80u;
    {
        const bool branch_taken_0x2f7f80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F80u;
        // 0x2f7f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f80) {
            ctx->pc = 0x2F7F8Cu;
            goto label_2f7f8c;
        }
    }
    ctx->pc = 0x2F7F88u;
label_2f7f88:
    // 0x2f7f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7f8c:
    // 0x2f7f8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f7f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2f7f90:
    // 0x2f7f90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F7F90u;
    {
        const bool branch_taken_0x2f7f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7F90u;
        // 0x2f7f94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7f90) {
            ctx->pc = 0x2F7FC4u;
            goto label_2f7fc4;
        }
    }
    ctx->pc = 0x2F7F98u;
    // 0x2f7f98: 0x26030330  addiu       $v1, $s0, 0x330
    ctx->pc = 0x2f7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x2f7f9c: 0xa202031b  sb          $v0, 0x31B($s0)
    ctx->pc = 0x2f7f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 795), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7fa0: 0x26020320  addiu       $v0, $s0, 0x320
    ctx->pc = 0x2f7fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x2f7fa4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7FA4u;
    {
        const bool branch_taken_0x2f7fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f7fa4) {
            ctx->pc = 0x2F7FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7FA4u;
            // 0x2f7fa8: 0x8e070110  lw          $a3, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7FC8u;
            goto label_2f7fc8;
        }
    }
    ctx->pc = 0x2F7FACu;
    // 0x2f7fac: 0xc6000320  lwc1        $f0, 0x320($s0)
    ctx->pc = 0x2f7facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7fb0: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x2f7fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x2f7fb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2f7fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7fb8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f7fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7fbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2f7fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7fc0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2f7fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2f7fc4:
    // 0x2f7fc4: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x2f7fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2f7fc8:
    // 0x2f7fc8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2f7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2f7fcc: 0x24514240  addiu       $s1, $v0, 0x4240
    ctx->pc = 0x2f7fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x2f7fd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2f7fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7fd4: 0x80e2018c  lb          $v0, 0x18C($a3)
    ctx->pc = 0x2f7fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x2f7fd8: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f7fdc: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x2f7fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7fe0: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x2f7fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f7fe4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f7fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f7fe8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f7fec: 0xa2020319  sb          $v0, 0x319($s0)
    ctx->pc = 0x2f7fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 793), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f7ff0: 0x240406f0  addiu       $a0, $zero, 0x6F0
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x2f7ff4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f7ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f7ff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f7ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7ffc: 0x80e2018d  lb          $v0, 0x18D($a3)
    ctx->pc = 0x2f7ffcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 397)));
    // 0x2f8000: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f8000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2f8004: 0xa202031a  sb          $v0, 0x31A($s0)
    ctx->pc = 0x2f8004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 794), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f8008: 0x90e3018e  lbu         $v1, 0x18E($a3)
    ctx->pc = 0x2f8008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 398)));
    // 0x2f800c: 0xa2030314  sb          $v1, 0x314($s0)
    ctx->pc = 0x2f800cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8010: 0x90e2018f  lbu         $v0, 0x18F($a3)
    ctx->pc = 0x2f8010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 399)));
    // 0x2f8014: 0xa2020315  sb          $v0, 0x315($s0)
    ctx->pc = 0x2f8014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 789), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f8018: 0x80e30190  lb          $v1, 0x190($a3)
    ctx->pc = 0x2f8018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x2f801c: 0xae080310  sw          $t0, 0x310($s0)
    ctx->pc = 0x2f801cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 8));
    // 0x2f8020: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2f8020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f8024: 0xae090300  sw          $t1, 0x300($s0)
    ctx->pc = 0x2f8024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 9));
    // 0x2f8028: 0xa2030318  sb          $v1, 0x318($s0)
    ctx->pc = 0x2f8028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 792), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f802c: 0xae0b0308  sw          $t3, 0x308($s0)
    ctx->pc = 0x2f802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 11));
    // 0x2f8030: 0xae0c030c  sw          $t4, 0x30C($s0)
    ctx->pc = 0x2f8030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 12));
    // 0x2f8034: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2F8034u;
    SET_GPR_U32(ctx, 31, 0x2F803Cu);
    ctx->pc = 0x2F8038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8034u;
    // 0x2f8038: 0xae0a0304  sw          $t2, 0x304($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2F8034u, 0x2F803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F803Cu;
label_2f803c:
    // 0x2f803c: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x2F803Cu;
    {
        const bool branch_taken_0x2f803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F803Cu;
        // 0x2f8040: 0xae020364  sw          $v0, 0x364($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f803c) {
            ctx->pc = 0x2F84ACu;
            goto label_2f84ac;
        }
    }
    ctx->pc = 0x2F8044u;
    // 0x2f8044: 0x240406f0  addiu       $a0, $zero, 0x6F0
    ctx->pc = 0x2f8044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1776));
    // 0x2f8048: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f804c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2F804Cu;
    SET_GPR_U32(ctx, 31, 0x2F8054u);
    ctx->pc = 0x2F8050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F804Cu;
    // 0x2f8050: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2F804Cu, 0x2F8054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8054u;
label_2f8054:
    // 0x2f8054: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2F8054u;
    {
        const bool branch_taken_0x2f8054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8054u;
        // 0x2f8058: 0xae020368  sw          $v0, 0x368($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8054) {
            ctx->pc = 0x2F84ACu;
            goto label_2f84ac;
        }
    }
    ctx->pc = 0x2F805Cu;
    // 0x2f805c: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x2f805cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x2f8060: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f8060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f8064: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x2f8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x2f8068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f8068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f806c: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x2f806cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f8070: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2F8070u;
    SET_GPR_U32(ctx, 31, 0x2F8078u);
    ctx->pc = 0x2F8074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8070u;
    // 0x2f8074: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2F8070u, 0x2F8078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8078u;
label_2f8078:
    // 0x2f8078: 0x1040010c  beqz        $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x2F8078u;
    {
        const bool branch_taken_0x2f8078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8078u;
        // 0x2f807c: 0xae0202bc  sw          $v0, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8078) {
            ctx->pc = 0x2F84ACu;
            goto label_2f84ac;
        }
    }
    ctx->pc = 0x2F8080u;
    // 0x2f8080: 0x8e040300  lw          $a0, 0x300($s0)
    ctx->pc = 0x2f8080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x2f8084: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f8084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8088: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2f8088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f808c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2f808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2f8090: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2F8090u;
    SET_GPR_U32(ctx, 31, 0x2F8098u);
    ctx->pc = 0x2F8094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8090u;
    // 0x2f8094: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2F8090u, 0x2F8098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8098u;
label_2f8098:
    // 0x2f8098: 0x10400104  beqz        $v0, . + 4 + (0x104 << 2)
    ctx->pc = 0x2F8098u;
    {
        const bool branch_taken_0x2f8098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8098u;
        // 0x2f809c: 0xae020360  sw          $v0, 0x360($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8098) {
            ctx->pc = 0x2F84ACu;
            goto label_2f84ac;
        }
    }
    ctx->pc = 0x2F80A0u;
    // 0x2f80a0: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f80a4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2f80a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f80a8: 0x0  nop
    ctx->pc = 0x2f80a8u;
    // NOP
    // 0x2f80ac: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2f80acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f80b0: 0x0  nop
    ctx->pc = 0x2f80b0u;
    // NOP
    // 0x2f80b4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2F80B4u;
    {
        const bool branch_taken_0x2f80b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f80b4) {
            ctx->pc = 0x2F80B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F80B4u;
            // 0x2f80b8: 0xc60002f0  lwc1        $f0, 0x2F0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F80D4u;
            goto label_2f80d4;
        }
    }
    ctx->pc = 0x2F80BCu;
    // 0x2f80bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f80bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f80c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f80c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f80c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f80c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f80c8: 0x0  nop
    ctx->pc = 0x2f80c8u;
    // NOP
    // 0x2f80cc: 0xe60002f8  swc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f80ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
    // 0x2f80d0: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f80d4:
    // 0x2f80d4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2f80d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f80d8: 0x0  nop
    ctx->pc = 0x2f80d8u;
    // NOP
    // 0x2f80dc: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2F80DCu;
    {
        const bool branch_taken_0x2f80dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f80dc) {
            ctx->pc = 0x2F80E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F80DCu;
            // 0x2f80e0: 0xc60002f0  lwc1        $f0, 0x2F0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F80FCu;
            goto label_2f80fc;
        }
    }
    ctx->pc = 0x2F80E4u;
    // 0x2f80e4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f80e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f80e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f80e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f80ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f80ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f80f0: 0x0  nop
    ctx->pc = 0x2f80f0u;
    // NOP
    // 0x2f80f4: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f80f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x2f80f8: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f80fc:
    // 0x2f80fc: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8100: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8100u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8104: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8108: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f8108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f810c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f810cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8110: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8114: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f8114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f8118: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8118u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f811c: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x2f811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x2f8120: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2f8120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2f8124: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f8124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2f8128: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f8128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f812c: 0xc60102f8  lwc1        $f1, 0x2F8($s0)
    ctx->pc = 0x2f812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8130: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8130u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8134: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8138: 0x0  nop
    ctx->pc = 0x2f8138u;
    // NOP
    // 0x2f813c: 0x0  nop
    ctx->pc = 0x2f813cu;
    // NOP
    // 0x2f8140: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f8140u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f8144: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2f8144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2f8148: 0x0  nop
    ctx->pc = 0x2f8148u;
    // NOP
    // 0x2f814c: 0x0  nop
    ctx->pc = 0x2f814cu;
    // NOP
    // 0x2f8150: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8150u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f8154: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2f8154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2f8158: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f8158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f815c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f815cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f8160: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2f8160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f8164: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8168: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f816c: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x2f816cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2f8170: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2f8170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2f8174: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8178: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8178u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f817c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f817cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8180: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8184: 0xc60102f8  lwc1        $f1, 0x2F8($s0)
    ctx->pc = 0x2f8184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8188: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8188u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f818c: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8190: 0x0  nop
    ctx->pc = 0x2f8190u;
    // NOP
    // 0x2f8194: 0x0  nop
    ctx->pc = 0x2f8194u;
    // NOP
    // 0x2f8198: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f8198u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f819c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2f81a0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2f81a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2f81a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f81a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f81a8: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f81a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f81ac: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f81acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f81b0: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f81b4: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f81b8: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2f81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2f81bc: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x2f81bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2f81c0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f81c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f81c4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f81c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f81c8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f81c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f81cc: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f81d0: 0xc60102f0  lwc1        $f1, 0x2F0($s0)
    ctx->pc = 0x2f81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f81d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f81d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f81d8: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f81dc: 0x0  nop
    ctx->pc = 0x2f81dcu;
    // NOP
    // 0x2f81e0: 0x0  nop
    ctx->pc = 0x2f81e0u;
    // NOP
    // 0x2f81e4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f81e4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f81e8: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x2f81ec: 0x0  nop
    ctx->pc = 0x2f81ecu;
    // NOP
    // 0x2f81f0: 0x0  nop
    ctx->pc = 0x2f81f0u;
    // NOP
    // 0x2f81f4: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f81f4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f81f8: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x2f81f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2f81fc: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f81fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8200: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8204: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8208: 0xc60002f8  lwc1        $f0, 0x2F8($s0)
    ctx->pc = 0x2f8208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f820c: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8210: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8210u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8214: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x2f8214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2f8218: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2f8218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2f821c: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f821cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8220: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f8220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8224: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8224u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8228: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f822c: 0xc60102f8  lwc1        $f1, 0x2F8($s0)
    ctx->pc = 0x2f822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8230: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8230u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8234: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8238: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f8238u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2f823c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x2f823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2f8240: 0x0  nop
    ctx->pc = 0x2f8240u;
    // NOP
    // 0x2f8244: 0x0  nop
    ctx->pc = 0x2f8244u;
    // NOP
    // 0x2f8248: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8248u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f824c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f824cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f8250: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2f8250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2f8254: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f8254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8258: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8258u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f825c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f825cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8260: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x2f8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8264: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f8264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8268: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8268u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f826c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2f8270: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x2f8270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x2f8274: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8278: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f8278u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f827c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f827cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8280: 0xc60002fc  lwc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8284: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2f8284u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f8288: 0x0  nop
    ctx->pc = 0x2f8288u;
    // NOP
    // 0x2f828c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2F828Cu;
    {
        const bool branch_taken_0x2f828c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f828c) {
            ctx->pc = 0x2F8290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F828Cu;
            // 0x2f8290: 0xc60002f4  lwc1        $f0, 0x2F4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F82ACu;
            goto label_2f82ac;
        }
    }
    ctx->pc = 0x2F8294u;
    // 0x2f8294: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f8298: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f8298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f829c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f82a0: 0x0  nop
    ctx->pc = 0x2f82a0u;
    // NOP
    // 0x2f82a4: 0xe60002fc  swc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f82a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 764), bits); }
    // 0x2f82a8: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f82a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f82ac:
    // 0x2f82ac: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2f82acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f82b0: 0x0  nop
    ctx->pc = 0x2f82b0u;
    // NOP
    // 0x2f82b4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2F82B4u;
    {
        const bool branch_taken_0x2f82b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f82b4) {
            ctx->pc = 0x2F82B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F82B4u;
            // 0x2f82b8: 0xc60002f4  lwc1        $f0, 0x2F4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F82D4u;
            goto label_2f82d4;
        }
    }
    ctx->pc = 0x2F82BCu;
    // 0x2f82bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f82bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f82c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f82c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f82c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f82c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f82c8: 0x0  nop
    ctx->pc = 0x2f82c8u;
    // NOP
    // 0x2f82cc: 0xe60002f4  swc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f82ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x2f82d0: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f82d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f82d4:
    // 0x2f82d4: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f82d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f82d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f82d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f82dc: 0x24620090  addiu       $v0, $v1, 0x90
    ctx->pc = 0x2f82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2f82e0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2f82e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2f82e4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f82e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f82e8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f82e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f82ec: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f82ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f82f0: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f82f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f82f4: 0xc60102fc  lwc1        $f1, 0x2FC($s0)
    ctx->pc = 0x2f82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f82f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f82f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f82fc: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8300: 0x0  nop
    ctx->pc = 0x2f8300u;
    // NOP
    // 0x2f8304: 0x0  nop
    ctx->pc = 0x2f8304u;
    // NOP
    // 0x2f8308: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f8308u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f830c: 0x244300a0  addiu       $v1, $v0, 0xA0
    ctx->pc = 0x2f830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2f8310: 0x0  nop
    ctx->pc = 0x2f8310u;
    // NOP
    // 0x2f8314: 0x0  nop
    ctx->pc = 0x2f8314u;
    // NOP
    // 0x2f8318: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8318u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f831c: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2f831cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2f8320: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2f8320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f8324: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f8324u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f8328: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2f8328u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f832c: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8330: 0xc60002fc  lwc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8334: 0xe44200b0  swc1        $f2, 0xB0($v0)
    ctx->pc = 0x2f8334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2f8338: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2f8338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2f833c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f833cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8340: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8340u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8344: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8348: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f834c: 0xc60102fc  lwc1        $f1, 0x2FC($s0)
    ctx->pc = 0x2f834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f8350: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8350u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f8354: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f8354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8358: 0x0  nop
    ctx->pc = 0x2f8358u;
    // NOP
    // 0x2f835c: 0x0  nop
    ctx->pc = 0x2f835cu;
    // NOP
    // 0x2f8360: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f8360u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f8364: 0x246200c0  addiu       $v0, $v1, 0xC0
    ctx->pc = 0x2f8364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x2f8368: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x2f8368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2f836c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f836cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8370: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8374: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8378: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f8378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f837c: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8380: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x2f8380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2f8384: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2f8384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2f8388: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8388u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f838c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f838cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8390: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8394: 0xc60002fc  lwc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f8398: 0xc60102f4  lwc1        $f1, 0x2F4($s0)
    ctx->pc = 0x2f8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f839c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f839cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f83a0: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f83a4: 0x0  nop
    ctx->pc = 0x2f83a4u;
    // NOP
    // 0x2f83a8: 0x0  nop
    ctx->pc = 0x2f83a8u;
    // NOP
    // 0x2f83ac: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f83acu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f83b0: 0x246200e0  addiu       $v0, $v1, 0xE0
    ctx->pc = 0x2f83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x2f83b4: 0x0  nop
    ctx->pc = 0x2f83b4u;
    // NOP
    // 0x2f83b8: 0x0  nop
    ctx->pc = 0x2f83b8u;
    // NOP
    // 0x2f83bc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f83bcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f83c0: 0xe46100e0  swc1        $f1, 0xE0($v1)
    ctx->pc = 0x2f83c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2f83c4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f83c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f83c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f83c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f83cc: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f83ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f83d0: 0xc60002fc  lwc1        $f0, 0x2FC($s0)
    ctx->pc = 0x2f83d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f83d4: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f83d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f83d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f83dc: 0xe44200f0  swc1        $f2, 0xF0($v0)
    ctx->pc = 0x2f83dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x2f83e0: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x2f83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x2f83e4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f83e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f83e8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f83e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f83ec: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f83ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f83f0: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f83f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f83f4: 0xc60102fc  lwc1        $f1, 0x2FC($s0)
    ctx->pc = 0x2f83f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f83f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f83f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f83fc: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8400: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2f8400u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2f8404: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f8404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2f8408: 0x0  nop
    ctx->pc = 0x2f8408u;
    // NOP
    // 0x2f840c: 0x0  nop
    ctx->pc = 0x2f840cu;
    // NOP
    // 0x2f8410: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x2f8410u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2f8414: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2f8414u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2f8418: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f8418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2f841c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f841cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f8420: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8420u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8424: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f8424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8428: 0xc60002f4  lwc1        $f0, 0x2F4($s0)
    ctx->pc = 0x2f8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f842c: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8430: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2f8430u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2f8434: 0x24430110  addiu       $v1, $v0, 0x110
    ctx->pc = 0x2f8434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x2f8438: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2f8438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x2f843c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f843cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f8440: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2f8440u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f8444: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2f8444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f8448: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x2f8448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f844c: 0xe4420120  swc1        $f2, 0x120($v0)
    ctx->pc = 0x2f844cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2f8450: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2f8450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2f8454: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x2f8454u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2f8458: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2f8458u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f845c: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x2f845cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f8460: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x2f8464: 0xe4620130  swc1        $f2, 0x130($v1)
    ctx->pc = 0x2f8464u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 304), bits); }
    // 0x2f8468: 0x24630130  addiu       $v1, $v1, 0x130
    ctx->pc = 0x2f8468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x2f846c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x2f846cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f8470: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2f8470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f8474: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2f8474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f8478: 0x92020319  lbu         $v0, 0x319($s0)
    ctx->pc = 0x2f8478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 793)));
    // 0x2f847c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F847Cu;
    {
        const bool branch_taken_0x2f847c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f847c) {
            ctx->pc = 0x2F8480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F847Cu;
            // 0x2f8480: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8494u;
            goto label_2f8494;
        }
    }
    ctx->pc = 0x2F8484u;
    // 0x2f8484: 0x9202031a  lbu         $v0, 0x31A($s0)
    ctx->pc = 0x2f8484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 794)));
    // 0x2f8488: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F8488u;
    {
        const bool branch_taken_0x2f8488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8488u;
        // 0x2f848c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8488) {
            ctx->pc = 0x2F855Cu;
            goto label_2f855c;
        }
    }
    ctx->pc = 0x2F8490u;
    // 0x2f8490: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2f8490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2f8494:
    // 0x2f8494: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F8494u;
    {
        const bool branch_taken_0x2f8494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8494u;
        // 0x2f8498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8494) {
            ctx->pc = 0x2F84D0u;
            goto label_2f84d0;
        }
    }
    ctx->pc = 0x2F849Cu;
    // 0x2f849c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f849cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f84a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84a4: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F84A4u;
    SET_GPR_U32(ctx, 31, 0x2F84ACu);
    ctx->pc = 0x2F84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84A4u;
    // 0x2f84a8: 0x24a5f788  addiu       $a1, $a1, -0x878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F84A4u, 0x2F84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84ACu;
label_2f84ac:
    // 0x2f84ac: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F84ACu;
    {
        const bool branch_taken_0x2f84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ACu;
        // 0x2f84b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84ac) {
            ctx->pc = 0x2F855Cu;
            goto label_2f855c;
        }
    }
    ctx->pc = 0x2F84B4u;
label_2f84b4:
    // 0x2f84b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f84b8: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2f84b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f84bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f84bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84c0: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F84C0u;
    SET_GPR_U32(ctx, 31, 0x2F84C8u);
    ctx->pc = 0x2F84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84C0u;
    // 0x2f84c4: 0x24a5f7a8  addiu       $a1, $a1, -0x858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F84C0u, 0x2F84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84C8u;
label_2f84c8:
    // 0x2f84c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2F84C8u;
    {
        const bool branch_taken_0x2f84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84C8u;
        // 0x2f84cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84c8) {
            ctx->pc = 0x2F855Cu;
            goto label_2f855c;
        }
    }
    ctx->pc = 0x2F84D0u;
label_2f84d0:
    // 0x2f84d0: 0x260a0319  addiu       $t2, $s0, 0x319
    ctx->pc = 0x2f84d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 793));
    // 0x2f84d4: 0x26090314  addiu       $t1, $s0, 0x314
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x2f84d8: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2f84d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f84dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f84dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84e0: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x2f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f84e4: 0x0  nop
    ctx->pc = 0x2f84e4u;
    // NOP
label_2f84e8:
    // 0x2f84e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f84e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f84ec: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F84ECu;
    {
        const bool branch_taken_0x2f84ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84ECu;
        // 0x2f84f0: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84ec) {
            ctx->pc = 0x2F8548u;
            goto label_2f8548;
        }
    }
    ctx->pc = 0x2F84F4u;
    // 0x2f84f4: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2f84f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f84f8: 0x108c0013  beq         $a0, $t4, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F84F8u;
    {
        const bool branch_taken_0x2f84f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 12));
        ctx->pc = 0x2F84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84F8u;
        // 0x2f84fc: 0x26080314  addiu       $t0, $s0, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84f8) {
            ctx->pc = 0x2F8548u;
            goto label_2f8548;
        }
    }
    ctx->pc = 0x2F8500u;
    // 0x2f8500: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x2f8500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2f8504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8508: 0x8b102a  slt         $v0, $a0, $t3
    ctx->pc = 0x2f8508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2f850c: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f850cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f8510: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8510u;
    {
        const bool branch_taken_0x2f8510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8510u;
        // 0x2f8514: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8510) {
            ctx->pc = 0x2F8520u;
            goto label_2f8520;
        }
    }
    ctx->pc = 0x2F8518u;
    // 0x2f8518: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f8518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f851c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f851cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f8520:
    // 0x2f8520: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2f8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2f8524: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8524u;
    {
        const bool branch_taken_0x2f8524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8524u;
        // 0x2f8528: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8524) {
            ctx->pc = 0x2F853Cu;
            goto label_2f853c;
        }
    }
    ctx->pc = 0x2F852Cu;
    // 0x2f852c: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f8530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f8530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f8534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8534u;
    {
        const bool branch_taken_0x2f8534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8534u;
        // 0x2f8538: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8534) {
            ctx->pc = 0x2F8540u;
            goto label_2f8540;
        }
    }
    ctx->pc = 0x2F853Cu;
label_2f853c:
    // 0x2f853c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f853cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8540:
    // 0x2f8540: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F8540u;
    {
        const bool branch_taken_0x2f8540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8540u;
        // 0x2f8544: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8540) {
            ctx->pc = 0x2F84B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f84b4;
        }
    }
    ctx->pc = 0x2F8548u;
label_2f8548:
    // 0x2f8548: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2f8548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f854c: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x2f854cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f8550: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2F8550u;
    {
        const bool branch_taken_0x2f8550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8550u;
        // 0x2f8554: 0x1471021  addu        $v0, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8550) {
            ctx->pc = 0x2F84E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f84e8;
        }
    }
    ctx->pc = 0x2F8558u;
    // 0x2f8558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f8558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f855c:
    // 0x2f855c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2f855cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8560: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f8560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8568: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8568u;
        // 0x2f856c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8570u;
}
