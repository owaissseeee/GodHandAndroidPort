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

// Function: cScrSpriteDraw_drawPolyF
// Address: 0x2c6590 - 0x2c6840
void cScrSpriteDraw_drawPolyF_0x2c6590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrSpriteDraw_drawPolyF_0x2c6590");
#endif

    switch (ctx->pc) {
        case 0x2c66e0u: goto label_2c66e0;
        case 0x2c672cu: goto label_2c672c;
        case 0x2c6778u: goto label_2c6778;
        case 0x2c67c0u: goto label_2c67c0;
        case 0x2c6800u: goto label_2c6800;
        default: break;
    }

    ctx->pc = 0x2c6590u;

    // 0x2c6590: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c6590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c6594: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c6598: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2c6598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2c659c: 0xc441118c  lwc1        $f1, 0x118C($v0)
    ctx->pc = 0x2c659cu;
    { uint32_t bits = FAST_READ32(0x3C118Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c65a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c65a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c65a4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2c65a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2c65a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c65a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2c65acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2c65b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c65b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65b4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2c65b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2c65b8: 0x113e02  srl         $a3, $s1, 24
    ctx->pc = 0x2c65b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 24));
    // 0x2c65bc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2c65bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2c65c0: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x2c65c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c65c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c65c8: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2c65c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2c65cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c65ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c65d0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2c65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c65d4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2c65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c65d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c65d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c65dc: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2c65dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c65e0: 0x0  nop
    ctx->pc = 0x2c65e0u;
    // NOP
    // 0x2c65e4: 0x0  nop
    ctx->pc = 0x2c65e4u;
    // NOP
    // 0x2c65e8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2c65e8u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2c65ec: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x2c65ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c65f0: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2c65f0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2c65f4: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c65f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c65f8: 0x0  nop
    ctx->pc = 0x2c65f8u;
    // NOP
    // 0x2c65fc: 0x0  nop
    ctx->pc = 0x2c65fcu;
    // NOP
    // 0x2c6600: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2c6600u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2c6604: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6608: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c660c: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x2c660cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2c6610: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6610u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6614: 0x46057382  mul.s       $f14, $f14, $f5
    ctx->pc = 0x2c6614u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[5]);
    // 0x2c6618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c661c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6620: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2c6620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c6624: 0x0  nop
    ctx->pc = 0x2c6624u;
    // NOP
    // 0x2c6628: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c6628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c662c: 0x46016b42  mul.s       $f13, $f13, $f1
    ctx->pc = 0x2c662cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2c6630: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2c6630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c6634: 0x460e6380  add.s       $f14, $f12, $f14
    ctx->pc = 0x2c6634u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[14]);
    // 0x2c6638: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2c6638u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c663c: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2c663cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2c6640: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c6640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6644: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2c6644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c6648: 0x0  nop
    ctx->pc = 0x2c6648u;
    // NOP
    // 0x2c664c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c664cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c6650: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x2c6650u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6654: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c6654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6658: 0x0  nop
    ctx->pc = 0x2c6658u;
    // NOP
    // 0x2c665c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c665cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c6660: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x2c6660u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6664: 0x460f6bc0  add.s       $f15, $f13, $f15
    ctx->pc = 0x2c6664u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[15]);
    // 0x2c6668: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2c6668u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c666c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c666cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6670: 0x0  nop
    ctx->pc = 0x2c6670u;
    // NOP
    // 0x2c6674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6678: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2c6678u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c667c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2c667cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6680: 0xe7af0034  swc1        $f15, 0x34($sp)
    ctx->pc = 0x2c6680u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6684: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2c6684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6688: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2c6688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c668c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2c668cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6690: 0xe7af0014  swc1        $f15, 0x14($sp)
    ctx->pc = 0x2c6690u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6694: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2c6694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c6698: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x2c6698u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c669c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C669Cu;
    {
        const bool branch_taken_0x2c669c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2C66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C669Cu;
        // 0x2c66a0: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c669c) {
            ctx->pc = 0x2C66B8u;
            goto label_2c66b8;
        }
    }
    ctx->pc = 0x2C66A4u;
    // 0x2c66a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2c66a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c66a8: 0x0  nop
    ctx->pc = 0x2c66a8u;
    // NOP
    // 0x2c66ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c66acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c66b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C66B0u;
    {
        const bool branch_taken_0x2c66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C66B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66B0u;
        // 0x2c66b4: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66b0) {
            ctx->pc = 0x2C66D8u;
            goto label_2c66d8;
        }
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x2c66b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2c66bc: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2c66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2c66c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c66c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c66c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c66c8: 0x0  nop
    ctx->pc = 0x2c66c8u;
    // NOP
    // 0x2c66cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c66ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c66d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c66d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c66d4: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2c66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c66d8:
    // 0x2c66d8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C66D8u;
    SET_GPR_U32(ctx, 31, 0x2C66E0u);
    ctx->pc = 0x2C66DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C66D8u;
    // 0x2c66dc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C66D8u, 0x2C66E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66E0u;
label_2c66e0:
    // 0x2c66e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c66e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66e4: 0x111402  srl         $v0, $s1, 16
    ctx->pc = 0x2c66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x2c66e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c66ec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C66ECu;
    {
        const bool branch_taken_0x2c66ec = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C66ECu;
        // 0x2c66f0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c66ec) {
            ctx->pc = 0x2C6708u;
            goto label_2c6708;
        }
    }
    ctx->pc = 0x2C66F4u;
    // 0x2c66f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c66f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c66f8: 0x0  nop
    ctx->pc = 0x2c66f8u;
    // NOP
    // 0x2c66fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c66fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6700u;
    {
        const bool branch_taken_0x2c6700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6700u;
        // 0x2c6704: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6700) {
            ctx->pc = 0x2C6724u;
            goto label_2c6724;
        }
    }
    ctx->pc = 0x2C6708u;
label_2c6708:
    // 0x2c6708: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6708u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c670c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6714: 0x0  nop
    ctx->pc = 0x2c6714u;
    // NOP
    // 0x2c6718: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c671c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c671cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c6720: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6724:
    // 0x2c6724: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6724u;
    SET_GPR_U32(ctx, 31, 0x2C672Cu);
    ctx->pc = 0x2C6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6724u;
    // 0x2c6728: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6724u, 0x2C672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C672Cu;
label_2c672c:
    // 0x2c672c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c672cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6730: 0x111202  srl         $v0, $s1, 8
    ctx->pc = 0x2c6730u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x2c6734: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6738: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6738u;
    {
        const bool branch_taken_0x2c6738 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6738u;
        // 0x2c673c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6738) {
            ctx->pc = 0x2C6754u;
            goto label_2c6754;
        }
    }
    ctx->pc = 0x2C6740u;
    // 0x2c6740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6744: 0x0  nop
    ctx->pc = 0x2c6744u;
    // NOP
    // 0x2c6748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c674c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C674Cu;
    {
        const bool branch_taken_0x2c674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C674Cu;
        // 0x2c6750: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c674c) {
            ctx->pc = 0x2C6770u;
            goto label_2c6770;
        }
    }
    ctx->pc = 0x2C6754u;
label_2c6754:
    // 0x2c6754: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c6758: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c675c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c675cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6760: 0x0  nop
    ctx->pc = 0x2c6760u;
    // NOP
    // 0x2c6764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6768: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c6768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c676c: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2c676cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6770:
    // 0x2c6770: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6770u;
    SET_GPR_U32(ctx, 31, 0x2C6778u);
    ctx->pc = 0x2C6774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6770u;
    // 0x2c6774: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6770u, 0x2C6778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6778u;
label_2c6778:
    // 0x2c6778: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c6778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c677c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C677Cu;
    {
        const bool branch_taken_0x2c677c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C677Cu;
        // 0x2c6780: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c677c) {
            ctx->pc = 0x2C6798u;
            goto label_2c6798;
        }
    }
    ctx->pc = 0x2C6784u;
    // 0x2c6784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6788: 0x0  nop
    ctx->pc = 0x2c6788u;
    // NOP
    // 0x2c678c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c678cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6790: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6790u;
    {
        const bool branch_taken_0x2c6790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6790u;
        // 0x2c6794: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6790) {
            ctx->pc = 0x2C67B8u;
            goto label_2c67b8;
        }
    }
    ctx->pc = 0x2C6798u;
label_2c6798:
    // 0x2c6798: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2c6798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2c679c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c679cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c67a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c67a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c67a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c67a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c67a8: 0x0  nop
    ctx->pc = 0x2c67a8u;
    // NOP
    // 0x2c67ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c67acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c67b0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c67b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c67b4: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x2c67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c67b8:
    // 0x2c67b8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C67B8u;
    SET_GPR_U32(ctx, 31, 0x2C67C0u);
    ctx->pc = 0x2C67BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C67B8u;
    // 0x2c67bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C67B8u, 0x2C67C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67C0u;
label_2c67c0:
    // 0x2c67c0: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x2c67c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x2c67c4: 0x141e00  sll         $v1, $s4, 24
    ctx->pc = 0x2c67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 24));
    // 0x2c67c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2c67c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2c67cc: 0x122a00  sll         $a1, $s2, 8
    ctx->pc = 0x2c67ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x2c67d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2c67d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2c67d4: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x2c67d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c67d8: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x2c67d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c67dc: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x2c67dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c67e0: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x2c67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
    // 0x2c67e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c67e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67e8: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x2c67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
    // 0x2c67ec: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2c67ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c67f0: 0xafb10048  sw          $s1, 0x48($sp)
    ctx->pc = 0x2c67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 17));
    // 0x2c67f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c67f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c67f8: 0xc057348  jal         func_15CD20
    ctx->pc = 0x2C67F8u;
    SET_GPR_U32(ctx, 31, 0x2C6800u);
    ctx->pc = 0x2C67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C67F8u;
    // 0x2c67fc: 0xafb10044  sw          $s1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD20u, 0x2C67F8u, 0x2C6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6800u;
label_2c6800:
    // 0x2c6800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6804: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6804u;
    {
        const bool branch_taken_0x2c6804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6804u;
        // 0x2c6808: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6804) {
            ctx->pc = 0x2C6818u;
            goto label_2c6818;
        }
    }
    ctx->pc = 0x2C680Cu;
    // 0x2c680c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2c680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2c6810: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x2c6810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2c6814: 0xfc620040  sd          $v0, 0x40($v1)
    ctx->pc = 0x2c6814u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 2));
label_2c6818:
    // 0x2c6818: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2c6818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c681c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2c681cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6820: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2c6820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6824: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2c6824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6828: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c6828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c682c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C682Cu;
        // 0x2c6830: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C682Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6834u;
    // 0x2c6834: 0x0  nop
    ctx->pc = 0x2c6834u;
    // NOP
    // 0x2c6838: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2c6838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c683c: 0x0  nop
    ctx->pc = 0x2c683cu;
    // NOP
    ctx->pc = 0x2c6840u;
}
