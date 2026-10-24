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

// Function: func_0015ADA0
// Address: 0x15ada0 - 0x15af30
void func_0015ADA0_0x15ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015ADA0_0x15ada0");
#endif

    ctx->pc = 0x15ada0u;

    // 0x15ada0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15ada4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15ada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ada8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x15ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x15adac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15adacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15adb4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x15adb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x15adb8: 0xc4ab000c  lwc1        $f11, 0xC($a1)
    ctx->pc = 0x15adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x15adbc: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x15adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15adc0: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x15adc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x15adc4: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x15adc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15adc8: 0x46025c42  mul.s       $f17, $f11, $f2
    ctx->pc = 0x15adc8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x15adcc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x15adccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15add0: 0x460251c2  mul.s       $f7, $f10, $f2
    ctx->pc = 0x15add0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x15add4: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x15add4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x15add8: 0x460160c2  mul.s       $f3, $f12, $f1
    ctx->pc = 0x15add8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x15addc: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x15addcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15ade0: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x15ade0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x15ade4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x15ade4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15ade8: 0x46004982  mul.s       $f6, $f9, $f0
    ctx->pc = 0x15ade8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x15adec: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x15adecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15adf0: 0x46024b82  mul.s       $f14, $f9, $f2
    ctx->pc = 0x15adf0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x15adf4: 0x46015102  mul.s       $f4, $f10, $f1
    ctx->pc = 0x15adf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x15adf8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x15adf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15adfc: 0x46026402  mul.s       $f16, $f12, $f2
    ctx->pc = 0x15adfcu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x15ae00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15ae00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x15ae04: 0x46054882  mul.s       $f2, $f9, $f5
    ctx->pc = 0x15ae04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
    // 0x15ae08: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x15ae08u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15ae0c: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x15ae0cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x15ae10: 0xe7aa0044  swc1        $f10, 0x44($sp)
    ctx->pc = 0x15ae10u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x15ae14: 0x46055102  mul.s       $f4, $f10, $f5
    ctx->pc = 0x15ae14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x15ae18: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x15ae18u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15ae1c: 0x460d39c1  sub.s       $f7, $f7, $f13
    ctx->pc = 0x15ae1cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[13]);
    // 0x15ae20: 0xe7ab004c  swc1        $f11, 0x4C($sp)
    ctx->pc = 0x15ae20u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x15ae24: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x15ae24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x15ae28: 0xe7ab003c  swc1        $f11, 0x3C($sp)
    ctx->pc = 0x15ae28u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15ae2c: 0x46014bc2  mul.s       $f15, $f9, $f1
    ctx->pc = 0x15ae2cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x15ae30: 0x46055a02  mul.s       $f8, $f11, $f5
    ctx->pc = 0x15ae30u;
    ctx->f[8] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x15ae34: 0x46005342  mul.s       $f13, $f10, $f0
    ctx->pc = 0x15ae34u;
    ctx->f[13] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x15ae38: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x15ae38u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x15ae3c: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x15ae3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x15ae40: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x15ae40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x15ae44: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x15ae44u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x15ae48: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15ae48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x15ae4c: 0x460f4201  sub.s       $f8, $f8, $f15
    ctx->pc = 0x15ae4cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[15]);
    // 0x15ae50: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x15ae50u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x15ae54: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x15ae54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x15ae58: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x15ae58u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x15ae5c: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x15ae5cu;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x15ae60: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x15ae60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15ae64: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x15ae64u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x15ae68: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x15ae68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15ae6c: 0x460d4201  sub.s       $f8, $f8, $f13
    ctx->pc = 0x15ae6cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[13]);
    // 0x15ae70: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x15ae70u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ae74: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x15ae74u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x15ae78: 0xe7aa0034  swc1        $f10, 0x34($sp)
    ctx->pc = 0x15ae78u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ae7c: 0x46113180  add.s       $f6, $f6, $f17
    ctx->pc = 0x15ae7cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[17]);
    // 0x15ae80: 0x46091942  mul.s       $f5, $f3, $f9
    ctx->pc = 0x15ae80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x15ae84: 0x460a3802  mul.s       $f0, $f7, $f10
    ctx->pc = 0x15ae84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x15ae88: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x15ae88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ae8c: 0x46104201  sub.s       $f8, $f8, $f16
    ctx->pc = 0x15ae8cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x15ae90: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x15ae90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15ae94: 0x46093042  mul.s       $f1, $f6, $f9
    ctx->pc = 0x15ae94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x15ae98: 0x460c3b42  mul.s       $f13, $f7, $f12
    ctx->pc = 0x15ae98u;
    ctx->f[13] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x15ae9c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x15ae9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x15aea0: 0xe7a8001c  swc1        $f8, 0x1C($sp)
    ctx->pc = 0x15aea0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x15aea4: 0x46093bc2  mul.s       $f15, $f7, $f9
    ctx->pc = 0x15aea4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[7], ctx->f[9]);
    // 0x15aea8: 0x460a3382  mul.s       $f14, $f6, $f10
    ctx->pc = 0x15aea8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x15aeac: 0x460a1942  mul.s       $f5, $f3, $f10
    ctx->pc = 0x15aeacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x15aeb0: 0x460b4102  mul.s       $f4, $f8, $f11
    ctx->pc = 0x15aeb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x15aeb4: 0x460c1882  mul.s       $f2, $f3, $f12
    ctx->pc = 0x15aeb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x15aeb8: 0x460b39c2  mul.s       $f7, $f7, $f11
    ctx->pc = 0x15aeb8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x15aebc: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x15aebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
    // 0x15aec0: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x15aec0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x15aec4: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x15aec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x15aec8: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x15aec8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x15aecc: 0x460f2101  sub.s       $f4, $f4, $f15
    ctx->pc = 0x15aeccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[15]);
    // 0x15aed0: 0x46094242  mul.s       $f9, $f8, $f9
    ctx->pc = 0x15aed0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x15aed4: 0x460a4282  mul.s       $f10, $f8, $f10
    ctx->pc = 0x15aed4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x15aed8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x15aed8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x15aedc: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x15aedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x15aee0: 0x460c4202  mul.s       $f8, $f8, $f12
    ctx->pc = 0x15aee0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x15aee4: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x15aee4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x15aee8: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x15aee8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x15aeec: 0x460c3182  mul.s       $f6, $f6, $f12
    ctx->pc = 0x15aeecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x15aef0: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x15aef0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x15aef4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x15aef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x15aef8: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x15aef8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
    // 0x15aefc: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x15aefcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x15af00: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x15af00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15af04: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x15af04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15af08: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x15af08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15af0c: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x15af0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x15af10: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x15af10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15af14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15af14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15af18: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15af1c: 0x3e00008  jr          $ra
    ctx->pc = 0x15AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF1Cu;
        // 0x15af20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AF24u;
    // 0x15af24: 0x0  nop
    ctx->pc = 0x15af24u;
    // NOP
    // 0x15af28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15af2c: 0x0  nop
    ctx->pc = 0x15af2cu;
    // NOP
    ctx->pc = 0x15af30u;
}
