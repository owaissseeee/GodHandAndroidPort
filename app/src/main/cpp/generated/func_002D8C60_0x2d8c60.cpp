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

// Function: func_002D8C60
// Address: 0x2d8c60 - 0x2d8de0
void func_002D8C60_0x2d8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D8C60_0x2d8c60");
#endif

    ctx->pc = 0x2d8c60u;

    // 0x2d8c60: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2d8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2d8c64: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x2d8c64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
    // 0x2d8c68: 0x2442a400  addiu       $v0, $v0, -0x5C00
    ctx->pc = 0x2d8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943744));
    // 0x2d8c6c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x2d8c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d8c70: 0x25034700  addiu       $v1, $t0, 0x4700
    ctx->pc = 0x2d8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
    // 0x2d8c74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d8c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d8c78: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8c7c: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x2d8c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8c80: 0x91044700  lbu         $a0, 0x4700($t0)
    ctx->pc = 0x2d8c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 18176)));
    // 0x2d8c84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d8c84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d8c88: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x2d8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8c8c: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x2d8c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8c90: 0xc4640040  lwc1        $f4, 0x40($v1)
    ctx->pc = 0x2d8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d8c94: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8c98: 0xc4650044  lwc1        $f5, 0x44($v1)
    ctx->pc = 0x2d8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d8c9c: 0xc4660048  lwc1        $f6, 0x48($v1)
    ctx->pc = 0x2d8c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d8ca0: 0xc4670050  lwc1        $f7, 0x50($v1)
    ctx->pc = 0x2d8ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d8ca4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d8ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d8ca8: 0xc4680054  lwc1        $f8, 0x54($v1)
    ctx->pc = 0x2d8ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d8cac: 0xc4690058  lwc1        $f9, 0x58($v1)
    ctx->pc = 0x2d8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2d8cb0: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x2d8cb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d8cb4: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x2d8cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2d8cb8: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x2d8cb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d8cbc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d8cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8cc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2d8cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2d8cc4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8cc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d8cc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d8ccc: 0xe4620034  swc1        $f2, 0x34($v1)
    ctx->pc = 0x2d8cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2d8cd0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2d8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8cd4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d8cd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d8cd8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8cdc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d8cdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d8ce0: 0xe4630038  swc1        $f3, 0x38($v1)
    ctx->pc = 0x2d8ce0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2d8ce4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2d8ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8ce8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2d8ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2d8cec: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8cecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8cf0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d8cf0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d8cf4: 0xe4640040  swc1        $f4, 0x40($v1)
    ctx->pc = 0x2d8cf4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x2d8cf8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2d8cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8cfc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2d8cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2d8d00: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d04: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d8d04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d8d08: 0xe4650044  swc1        $f5, 0x44($v1)
    ctx->pc = 0x2d8d08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2d8d0c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2d8d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8d10: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2d8d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2d8d14: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d18: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2d8d18u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2d8d1c: 0xe4660048  swc1        $f6, 0x48($v1)
    ctx->pc = 0x2d8d1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x2d8d20: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2d8d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8d24: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2d8d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2d8d28: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d2c: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x2d8d2cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x2d8d30: 0xe4670050  swc1        $f7, 0x50($v1)
    ctx->pc = 0x2d8d30u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2d8d34: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2d8d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8d38: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2d8d38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2d8d3c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d40: 0x46004200  add.s       $f8, $f8, $f0
    ctx->pc = 0x2d8d40u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
    // 0x2d8d44: 0xe4680054  swc1        $f8, 0x54($v1)
    ctx->pc = 0x2d8d44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2d8d48: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2d8d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8d4c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2d8d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2d8d50: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d54: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x2d8d54u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x2d8d58: 0xe4690058  swc1        $f9, 0x58($v1)
    ctx->pc = 0x2d8d58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2d8d5c: 0x90a20030  lbu         $v0, 0x30($a1)
    ctx->pc = 0x2d8d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2d8d60: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d8d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8d68: 0x0  nop
    ctx->pc = 0x2d8d68u;
    // NOP
    // 0x2d8d6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d8d6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d8d70: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8d74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8d78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d8d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d8d7c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d8d80: 0xa1044700  sb          $a0, 0x4700($t0)
    ctx->pc = 0x2d8d80u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 18176), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d8d84: 0x90a20031  lbu         $v0, 0x31($a1)
    ctx->pc = 0x2d8d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
    // 0x2d8d88: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d8d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8d90: 0x0  nop
    ctx->pc = 0x2d8d90u;
    // NOP
    // 0x2d8d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d8d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d8d98: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8d9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8da0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d8da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d8da4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d8da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d8da8: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x2d8da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d8dac: 0x90a20032  lbu         $v0, 0x32($a1)
    ctx->pc = 0x2d8dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 50)));
    // 0x2d8db0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d8db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8db8: 0x0  nop
    ctx->pc = 0x2d8db8u;
    // NOP
    // 0x2d8dbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d8dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d8dc0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2d8dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2d8dc4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d8dc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d8dc8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d8dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d8dcc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2d8dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2d8dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8DD0u;
        // 0x2d8dd4: 0xa0670002  sb          $a3, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8DD8u;
    // 0x2d8dd8: 0xac826284  sw          $v0, 0x6284($a0)
    ctx->pc = 0x2d8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25220), GPR_U32(ctx, 2));
    // 0x2d8ddc: 0x0  nop
    ctx->pc = 0x2d8ddcu;
    // NOP
    ctx->pc = 0x2d8de0u;
}
