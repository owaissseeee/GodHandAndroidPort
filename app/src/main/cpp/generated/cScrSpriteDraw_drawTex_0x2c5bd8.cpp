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

// Function: cScrSpriteDraw_drawTex
// Address: 0x2c5bd8 - 0x2c5ea8
void cScrSpriteDraw_drawTex_0x2c5bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrSpriteDraw_drawTex_0x2c5bd8");
#endif

    switch (ctx->pc) {
        case 0x2c5cfcu: goto label_2c5cfc;
        case 0x2c5d48u: goto label_2c5d48;
        case 0x2c5d94u: goto label_2c5d94;
        case 0x2c5ddcu: goto label_2c5ddc;
        case 0x2c5e34u: goto label_2c5e34;
        case 0x2c5e6cu: goto label_2c5e6c;
        default: break;
    }

    ctx->pc = 0x2c5bd8u;

    // 0x2c5bd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c5bdc: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2c5bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2c5be0: 0xc440118c  lwc1        $f0, 0x118C($v0)
    ctx->pc = 0x2c5be0u;
    { uint32_t bits = FAST_READ32(0x3C118Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5be8: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2c5be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2c5bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c5becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5bf0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2c5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2c5bf4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2c5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2c5bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5bfc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2c5bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2c5c00: 0x0  nop
    ctx->pc = 0x2c5c00u;
    // NOP
    // 0x2c5c04: 0x0  nop
    ctx->pc = 0x2c5c04u;
    // NOP
    // 0x2c5c08: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2c5c08u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2c5c0c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2c5c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2c5c10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c5c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c14: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2c5c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2c5c18: 0x113602  srl         $a2, $s1, 24
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x2c5c1c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2c5c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2c5c20: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x2c5c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c5c24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c5c28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c5c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c2c: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x2c5c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5c30: 0xc6040014  lwc1        $f4, 0x14($s0)
    ctx->pc = 0x2c5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c5c34: 0x46036b40  add.s       $f13, $f13, $f3
    ctx->pc = 0x2c5c34u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[3]);
    // 0x2c5c38: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2c5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5c3c: 0x46047bc2  mul.s       $f15, $f15, $f4
    ctx->pc = 0x2c5c3cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x2c5c40: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2c5c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5c44: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c5c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c5c48: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2c5c48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2c5c4c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2c5c4cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c5c50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5c54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c5c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c5c58: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2c5c58u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2c5c5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5c60: 0x46027382  mul.s       $f14, $f14, $f2
    ctx->pc = 0x2c5c60u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x2c5c64: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x2c5c64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5c6c: 0x0  nop
    ctx->pc = 0x2c5c6cu;
    // NOP
    // 0x2c5c70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c5c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5c74: 0xe7b00034  swc1        $f16, 0x34($sp)
    ctx->pc = 0x2c5c74u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5c7c: 0x0  nop
    ctx->pc = 0x2c5c7cu;
    // NOP
    // 0x2c5c80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5c88: 0x460e6380  add.s       $f14, $f12, $f14
    ctx->pc = 0x2c5c88u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x2c5c8c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2c5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2c5c90: 0x460f6bc0  add.s       $f15, $f13, $f15
    ctx->pc = 0x2c5c90u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x2c5c94: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c5c98: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2c5c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c5c9c: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x2c5c9cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5ca0: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x2c5ca0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5ca4: 0xe7b10038  swc1        $f17, 0x38($sp)
    ctx->pc = 0x2c5ca4u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c5ca8: 0xe7b2003c  swc1        $f18, 0x3C($sp)
    ctx->pc = 0x2c5ca8u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c5cac: 0xe7b30040  swc1        $f19, 0x40($sp)
    ctx->pc = 0x2c5cacu;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5cb0: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2c5cb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c5cb4: 0xe7ad0014  swc1        $f13, 0x14($sp)
    ctx->pc = 0x2c5cb4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5cb8: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5CB8u;
    {
        const bool branch_taken_0x2c5cb8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2C5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CB8u;
        // 0x2c5cbc: 0xe7a3001c  swc1        $f3, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5cb8) {
            ctx->pc = 0x2C5CD4u;
            goto label_2c5cd4;
        }
    }
    ctx->pc = 0x2C5CC0u;
    // 0x2c5cc0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c5cc0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5cc4: 0x0  nop
    ctx->pc = 0x2c5cc4u;
    // NOP
    // 0x2c5cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5ccc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5CCCu;
    {
        const bool branch_taken_0x2c5ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5CCCu;
        // 0x2c5cd0: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ccc) {
            ctx->pc = 0x2C5CF4u;
            goto label_2c5cf4;
        }
    }
    ctx->pc = 0x2C5CD4u;
label_2c5cd4:
    // 0x2c5cd4: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x2c5cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2c5cd8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2c5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2c5cdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5ce4: 0x0  nop
    ctx->pc = 0x2c5ce4u;
    // NOP
    // 0x2c5ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5cec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5cf0: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2c5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5cf4:
    // 0x2c5cf4: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5CF4u;
    SET_GPR_U32(ctx, 31, 0x2C5CFCu);
    ctx->pc = 0x2C5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5CF4u;
    // 0x2c5cf8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5CF4u, 0x2C5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5CFCu;
label_2c5cfc:
    // 0x2c5cfc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c5cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d00: 0x111402  srl         $v0, $s1, 16
    ctx->pc = 0x2c5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x2c5d04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c5d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5d08: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5D08u;
    {
        const bool branch_taken_0x2c5d08 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D08u;
        // 0x2c5d0c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d08) {
            ctx->pc = 0x2C5D24u;
            goto label_2c5d24;
        }
    }
    ctx->pc = 0x2C5D10u;
    // 0x2c5d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5d14: 0x0  nop
    ctx->pc = 0x2c5d14u;
    // NOP
    // 0x2c5d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5D1Cu;
    {
        const bool branch_taken_0x2c5d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D1Cu;
        // 0x2c5d20: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d1c) {
            ctx->pc = 0x2C5D40u;
            goto label_2c5d40;
        }
    }
    ctx->pc = 0x2C5D24u;
label_2c5d24:
    // 0x2c5d24: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5d28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5d30: 0x0  nop
    ctx->pc = 0x2c5d30u;
    // NOP
    // 0x2c5d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5d38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5d3c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2c5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5d40:
    // 0x2c5d40: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5D40u;
    SET_GPR_U32(ctx, 31, 0x2C5D48u);
    ctx->pc = 0x2C5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D40u;
    // 0x2c5d44: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5D40u, 0x2C5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D48u;
label_2c5d48:
    // 0x2c5d48: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c5d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5d4c: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x2c5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x2c5d50: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c5d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5d54: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5D54u;
    {
        const bool branch_taken_0x2c5d54 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D54u;
        // 0x2c5d58: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d54) {
            ctx->pc = 0x2C5D70u;
            goto label_2c5d70;
        }
    }
    ctx->pc = 0x2C5D5Cu;
    // 0x2c5d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5d60: 0x0  nop
    ctx->pc = 0x2c5d60u;
    // NOP
    // 0x2c5d64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5d68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5D68u;
    {
        const bool branch_taken_0x2c5d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D68u;
        // 0x2c5d6c: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d68) {
            ctx->pc = 0x2C5D8Cu;
            goto label_2c5d8c;
        }
    }
    ctx->pc = 0x2C5D70u;
label_2c5d70:
    // 0x2c5d70: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5d74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5d7c: 0x0  nop
    ctx->pc = 0x2c5d7cu;
    // NOP
    // 0x2c5d80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5d80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5d84: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5d84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5d88: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2c5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5d8c:
    // 0x2c5d8c: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C5D94u);
    ctx->pc = 0x2C5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5D8Cu;
    // 0x2c5d90: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5D8Cu, 0x2C5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5D94u;
label_2c5d94:
    // 0x2c5d94: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c5d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c5d98: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5D98u;
    {
        const bool branch_taken_0x2c5d98 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5D98u;
        // 0x2c5d9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5d98) {
            ctx->pc = 0x2C5DB4u;
            goto label_2c5db4;
        }
    }
    ctx->pc = 0x2C5DA0u;
    // 0x2c5da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5da4: 0x0  nop
    ctx->pc = 0x2c5da4u;
    // NOP
    // 0x2c5da8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5dac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5DACu;
    {
        const bool branch_taken_0x2c5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DACu;
        // 0x2c5db0: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dac) {
            ctx->pc = 0x2C5DD4u;
            goto label_2c5dd4;
        }
    }
    ctx->pc = 0x2C5DB4u;
label_2c5db4:
    // 0x2c5db4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2c5db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2c5db8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5dbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5dc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5dc4: 0x0  nop
    ctx->pc = 0x2c5dc4u;
    // NOP
    // 0x2c5dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5dcc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5dd0: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x2c5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5dd4:
    // 0x2c5dd4: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5DD4u;
    SET_GPR_U32(ctx, 31, 0x2C5DDCu);
    ctx->pc = 0x2C5DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5DD4u;
    // 0x2c5dd8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5DD4u, 0x2C5DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5DDCu;
label_2c5ddc:
    // 0x2c5ddc: 0x141c00  sll         $v1, $s4, 16
    ctx->pc = 0x2c5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2c5de0: 0x152e00  sll         $a1, $s5, 24
    ctx->pc = 0x2c5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x2c5de4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2c5de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2c5de8: 0x122200  sll         $a0, $s2, 8
    ctx->pc = 0x2c5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x2c5dec: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2c5decu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2c5df0: 0x3c03324d  lui         $v1, 0x324D
    ctx->pc = 0x2c5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12877 << 16));
    // 0x2c5df4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c5df8: 0x34634954  ori         $v1, $v1, 0x4954
    ctx->pc = 0x2c5df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18772);
    // 0x2c5dfc: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C5DFCu;
    {
        const bool branch_taken_0x2c5dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5DFCu;
        // 0x2c5e00: 0xa28825  or          $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5dfc) {
            ctx->pc = 0x2C5E3Cu;
            goto label_2c5e3c;
        }
    }
    ctx->pc = 0x2C5E04u;
    // 0x2c5e04: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2c5e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c5e08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c5e0c: 0x8e0b0028  lw          $t3, 0x28($s0)
    ctx->pc = 0x2c5e0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c5e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e14: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2c5e14u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2c5e18: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c5e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2c5e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2c5e20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e28: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2c5e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2c5e2c: 0xc0575ba  jal         func_15D6E8
    ctx->pc = 0x2C5E2Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E34u);
    ctx->pc = 0x2C5E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E2Cu;
    // 0x2c5e30: 0x27aa0030  addiu       $t2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D6E8u, 0x2C5E2Cu, 0x2C5E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E34u;
label_2c5e34:
    // 0x2c5e34: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C5E34u;
    {
        const bool branch_taken_0x2c5e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E34u;
        // 0x2c5e38: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e34) {
            ctx->pc = 0x2C5E70u;
            goto label_2c5e70;
        }
    }
    ctx->pc = 0x2C5E3Cu;
label_2c5e3c:
    // 0x2c5e3c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2c5e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c5e40: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c5e44: 0x8e0b0028  lw          $t3, 0x28($s0)
    ctx->pc = 0x2c5e44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c5e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c5e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e4c: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2c5e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2c5e50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c5e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e54: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2c5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2c5e58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e60: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x2c5e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x2c5e64: 0xc05745a  jal         func_15D168
    ctx->pc = 0x2C5E64u;
    SET_GPR_U32(ctx, 31, 0x2C5E6Cu);
    ctx->pc = 0x2C5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5E64u;
    // 0x2c5e68: 0x27aa0030  addiu       $t2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D168u, 0x2C5E64u, 0x2C5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E6Cu;
label_2c5e6c:
    // 0x2c5e6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5e70:
    // 0x2c5e70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5E70u;
    {
        const bool branch_taken_0x2c5e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E70u;
        // 0x2c5e74: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5e70) {
            ctx->pc = 0x2C5E84u;
            goto label_2c5e84;
        }
    }
    ctx->pc = 0x2C5E78u;
    // 0x2c5e78: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2c5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2c5e7c: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x2c5e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2c5e80: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x2c5e80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_2c5e84:
    // 0x2c5e84: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2c5e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c5e88: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2c5e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c5e8c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2c5e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c5e90: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2c5e90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c5e94: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2c5e94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c5e98: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c5e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5E9Cu;
        // 0x2c5ea0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5EA4u;
    // 0x2c5ea4: 0x0  nop
    ctx->pc = 0x2c5ea4u;
    // NOP
    ctx->pc = 0x2c5ea8u;
}
