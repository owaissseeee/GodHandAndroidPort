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

// Function: __kernel_tanf
// Address: 0x3a4830 - 0x3a4ac8
void ps2___kernel_tanf_0x3a4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_tanf_0x3a4830");
#endif

    switch (ctx->pc) {
        case 0x3a4888u: goto label_3a4888;
        default: break;
    }

    ctx->pc = 0x3a4830u;

    // 0x3a4830: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a4830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a4834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a4838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a483c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a4840: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a4840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a4844: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x3a4844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x3a4848: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x3a4848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a484c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4850: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3a4850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a4854: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A4854u;
    {
        const bool branch_taken_0x3a4854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4854u;
        // 0x3a4858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4854) {
            ctx->pc = 0x3A48D4u;
            goto label_3a48d4;
        }
    }
    ctx->pc = 0x3A485Cu;
    // 0x3a485c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a485cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a4860: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a4860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a4864: 0x0  nop
    ctx->pc = 0x3a4864u;
    // NOP
    // 0x3a4868: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A4868u;
    {
        const bool branch_taken_0x3a4868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4868u;
        // 0x3a486c: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4868) {
            ctx->pc = 0x3A48D8u;
            goto label_3a48d8;
        }
    }
    ctx->pc = 0x3A4870u;
    // 0x3a4870: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a4870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4874: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3a4874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3a4878: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A4878u;
    {
        const bool branch_taken_0x3a4878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4878u;
        // 0x3a487c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4878) {
            ctx->pc = 0x3A48A8u;
            goto label_3a48a8;
        }
    }
    ctx->pc = 0x3A4880u;
    // 0x3a4880: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A4880u;
    SET_GPR_U32(ctx, 31, 0x3A4888u);
    ctx->pc = 0x3A19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19D8u, 0x3A4880u, 0x3A4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4888u;
label_3a4888:
    // 0x3a4888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a4888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a488c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a488cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4890: 0x0  nop
    ctx->pc = 0x3a4890u;
    // NOP
    // 0x3a4894: 0x0  nop
    ctx->pc = 0x3a4894u;
    // NOP
    // 0x3a4898: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3a4898u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x3a489c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3A489Cu;
    {
        const bool branch_taken_0x3a489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A489Cu;
        // 0x3a48a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a489c) {
            ctx->pc = 0x3A4ABCu;
            goto label_3a4abc;
        }
    }
    ctx->pc = 0x3A48A4u;
    // 0x3a48a4: 0x0  nop
    ctx->pc = 0x3a48a4u;
    // NOP
label_3a48a8:
    // 0x3a48a8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A48A8u;
    {
        const bool branch_taken_0x3a48a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48A8u;
        // 0x3a48ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a48a8) {
            ctx->pc = 0x3A48CCu;
            goto label_3a48cc;
        }
    }
    ctx->pc = 0x3A48B0u;
    // 0x3a48b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a48b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a48b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a48b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a48b8: 0x0  nop
    ctx->pc = 0x3a48b8u;
    // NOP
    // 0x3a48bc: 0x0  nop
    ctx->pc = 0x3a48bcu;
    // NOP
    // 0x3a48c0: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x3a48c0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
    // 0x3a48c4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3A48C4u;
    {
        const bool branch_taken_0x3a48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a48c4) {
            ctx->pc = 0x3A4ABCu;
            goto label_3a4abc;
        }
    }
    ctx->pc = 0x3A48CCu;
label_3a48cc:
    // 0x3a48cc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x3A48CCu;
    {
        const bool branch_taken_0x3a48cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A48CCu;
        // 0x3a48d0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a48cc) {
            ctx->pc = 0x3A4AB8u;
            goto label_3a4ab8;
        }
    }
    ctx->pc = 0x3A48D4u;
label_3a48d4:
    // 0x3a48d4: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x3a48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_3a48d8:
    // 0x3a48d8: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x3a48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x3a48dc: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x3a48dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a48e0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A48E0u;
    {
        const bool branch_taken_0x3a48e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a48e0) {
            ctx->pc = 0x3A48E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A48E0u;
            // 0x3a48e4: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4924u;
            goto label_3a4924;
        }
    }
    ctx->pc = 0x3A48E8u;
    // 0x3a48e8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A48E8u;
    {
        const bool branch_taken_0x3a48e8 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x3a48e8) {
            ctx->pc = 0x3A48F8u;
            goto label_3a48f8;
        }
    }
    ctx->pc = 0x3A48F0u;
    // 0x3a48f0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x3a48f0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x3a48f4: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x3a48f4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_3a48f8:
    // 0x3a48f8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x3a48f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x3a48fc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x3a48fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x3a4900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4904: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x3a4904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x3a4908: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x3a4908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x3a490c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a490cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4910: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x3a4910u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a4914: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x3a4914u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x3a4918: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3a4918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a491c: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x3a491cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x3a4920: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x3a4920u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_3a4924:
    // 0x3a4924: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a4924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a4928: 0x2462eff0  addiu       $v0, $v1, -0x1010
    ctx->pc = 0x3a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963184));
    // 0x3a492c: 0xc469eff0  lwc1        $f9, -0x1010($v1)
    ctx->pc = 0x3a492cu;
    { uint32_t bits = FAST_READ32(0x45EFF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3a4930: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x3a4930u;
    { uint32_t bits = FAST_READ32(0x45F020u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a4934: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x3a4934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x3a4938: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x3a4938u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x3a493c: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x3a493cu;
    { uint32_t bits = FAST_READ32(0x45F01Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a4940: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x3a4940u;
    { uint32_t bits = FAST_READ32(0x45F018u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3a4944: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x3a4944u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x3a4948: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x3a4948u;
    { uint32_t bits = FAST_READ32(0x45F014u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a494c: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x3a494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x3a4950: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x3a4950u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x3a4954: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x3a4954u;
    { uint32_t bits = FAST_READ32(0x45F010u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a4958: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x3a4958u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x3a495c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3a495cu;
    { uint32_t bits = FAST_READ32(0x45F00Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4960: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x3a4960u;
    { uint32_t bits = FAST_READ32(0x45F008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3a4964: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x3a4964u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x3a4968: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x3a4968u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x3a496c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3a496cu;
    { uint32_t bits = FAST_READ32(0x45F004u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4970: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3a4970u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3a4974: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x3a4974u;
    { uint32_t bits = FAST_READ32(0x45F000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a4978: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x3a4978u;
    { uint32_t bits = FAST_READ32(0x45EFFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a497c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3a497cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3a4980: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x3a4980u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x3a4984: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x3a4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3a4988: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x3a4988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x3a498c: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x3a498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3a4990: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a4990u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3a4994: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a4994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a4998: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x3a4998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3a499c: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3a499cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3a49a0: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x3a49a0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x3a49a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a49a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a49a8: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x3a49a8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x3a49ac: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3a49acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3a49b0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3a49b0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x3a49b4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a49b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3a49b8: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x3a49b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x3a49bc: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x3a49bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x3a49c0: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x3a49c0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x3a49c4: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x3a49c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x3a49c8: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x3a49c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x3a49cc: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x3a49ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3a49d0: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x3a49d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x3a49d4: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x3a49d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x3a49d8: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x3a49d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x3a49dc: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x3a49dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x3a49e0: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x3a49e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x3a49e4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A49E4u;
    {
        const bool branch_taken_0x3a49e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49E4u;
        // 0x3a49e8: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49e4) {
            ctx->pc = 0x3A4A38u;
            goto label_3a4a38;
        }
    }
    ctx->pc = 0x3A49ECu;
    // 0x3a49ec: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x3a49ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a49f0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3a49f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3a49f4: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x3a49f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x3a49f8: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x3a49f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x3a49fc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3a49fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3a4a00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4a04: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x3a4a04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x3a4a08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4a0c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a4a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4a10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3a4a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3a4a14: 0x0  nop
    ctx->pc = 0x3a4a14u;
    // NOP
    // 0x3a4a18: 0x0  nop
    ctx->pc = 0x3a4a18u;
    // NOP
    // 0x3a4a1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3a4a1cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a4a20: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3a4a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a4a24: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3a4a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a4a28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a4a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3a4a2c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x3a4a2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3a4a30: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A4A30u;
    {
        const bool branch_taken_0x3a4a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A30u;
        // 0x3a4a34: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a30) {
            ctx->pc = 0x3A4AB8u;
            goto label_3a4ab8;
        }
    }
    ctx->pc = 0x3A4A38u;
label_3a4a38:
    // 0x3a4a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4a3c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A4A3Cu;
    {
        const bool branch_taken_0x3a4a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A3Cu;
        // 0x3a4a40: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a3c) {
            ctx->pc = 0x3A4AB8u;
            goto label_3a4ab8;
        }
    }
    ctx->pc = 0x3A4A44u;
    // 0x3a4a44: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x3a4a44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a4a48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a4a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4a4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a4a50: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3a4a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x3a4a54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a4a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a4a58: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x3a4a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3a4a5c: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x3a4a5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x3a4a60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a4a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a4a64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4a68: 0x0  nop
    ctx->pc = 0x3a4a68u;
    // NOP
    // 0x3a4a6c: 0x0  nop
    ctx->pc = 0x3a4a6cu;
    // NOP
    // 0x3a4a70: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x3a4a70u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[11]);
    // 0x3a4a74: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x3a4a74u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3a4a78: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a4a78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a4a7c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3a4a7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4a80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a4a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a4a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a4a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4a88: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x3a4a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x3a4a8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a4a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a4a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4a94: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x3a4a94u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a4a98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a4a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4a9c: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x3a4a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3a4aa0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a4aa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4aa4: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x3a4aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x3a4aa8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3a4aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a4aac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3a4aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3a4ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a4ab4: 0x0  nop
    ctx->pc = 0x3a4ab4u;
    // NOP
label_3a4ab8:
    // 0x3a4ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4abc:
    // 0x3a4abc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4ABCu;
        // 0x3a4ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4AC4u;
    // 0x3a4ac4: 0x0  nop
    ctx->pc = 0x3a4ac4u;
    // NOP
    ctx->pc = 0x3a4ac8u;
}
