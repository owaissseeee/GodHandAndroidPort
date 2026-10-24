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

// Function: func_002C78F0
// Address: 0x2c78f0 - 0x2c7d18
void func_002C78F0_0x2c78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C78F0_0x2c78f0");
#endif

    switch (ctx->pc) {
        case 0x2c7974u: goto label_2c7974;
        case 0x2c7980u: goto label_2c7980;
        case 0x2c7c28u: goto label_2c7c28;
        case 0x2c7c88u: goto label_2c7c88;
        default: break;
    }

    ctx->pc = 0x2c78f0u;

    // 0x2c78f0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2c78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2c78f4: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x2c78f4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2c78f8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2c78f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2c78fc: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2c78fcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2c7900: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x2c7900u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x2c7904: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2c7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2c7908: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2c7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2c790c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c790cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7910: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2c7910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2c7914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c7914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7918: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2c7918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2c791c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7920: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2c7920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2c7924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c7924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7928: 0xe7bd0148  swc1        $f29, 0x148($sp)
    ctx->pc = 0x2c7928u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2c792c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2c792cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7930: 0xe7bc0140  swc1        $f28, 0x140($sp)
    ctx->pc = 0x2c7930u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c7934: 0x46009f46  mov.s       $f29, $f19
    ctx->pc = 0x2c7934u;
    ctx->f[29] = FPU_MOV_S(ctx->f[19]);
    // 0x2c7938: 0xe7bb0138  swc1        $f27, 0x138($sp)
    ctx->pc = 0x2c7938u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2c793c: 0x46009706  mov.s       $f28, $f18
    ctx->pc = 0x2c793cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[18]);
    // 0x2c7940: 0xe7ba0130  swc1        $f26, 0x130($sp)
    ctx->pc = 0x2c7940u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2c7944: 0x46008ec6  mov.s       $f27, $f17
    ctx->pc = 0x2c7944u;
    ctx->f[27] = FPU_MOV_S(ctx->f[17]);
    // 0x2c7948: 0xe7b90128  swc1        $f25, 0x128($sp)
    ctx->pc = 0x2c7948u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2c794c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c794cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c7950: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2c7950u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2c7954: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x2c7954u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x2c7958: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2c7958u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2c795c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2c795cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2c7960: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x2c7960u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x2c7964: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2c7964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c7968: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c7968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c796c: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2C796Cu;
    SET_GPR_U32(ctx, 31, 0x2C7974u);
    ctx->pc = 0x2C7970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C796Cu;
    // 0x2c7970: 0xc7ba0158  lwc1        $f26, 0x158($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2C796Cu, 0x2C7974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7974u;
label_2c7974:
    // 0x2c7974: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c7974u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c7978: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2C7978u;
    SET_GPR_U32(ctx, 31, 0x2C7980u);
    ctx->pc = 0x2C797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7978u;
    // 0x2c797c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2C7978u, 0x2C7980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7980u;
label_2c7980:
    // 0x2c7980: 0x4600b847  neg.s       $f1, $f23
    ctx->pc = 0x2c7980u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
    // 0x2c7984: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2c7984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c7988: 0x4614b342  mul.s       $f13, $f22, $f20
    ctx->pc = 0x2c7988u;
    ctx->f[13] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2c798c: 0x4600b302  mul.s       $f12, $f22, $f0
    ctx->pc = 0x2c798cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2c7990: 0x46000982  mul.s       $f6, $f1, $f0
    ctx->pc = 0x2c7990u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c7994: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2C7994u;
    {
        const bool branch_taken_0x2c7994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7994u;
        // 0x2c7998: 0x4614b8c2  mul.s       $f3, $f23, $f20 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7994) {
            ctx->pc = 0x2C7BF4u;
            goto label_2c7bf4;
        }
    }
    ctx->pc = 0x2C799Cu;
    // 0x2c799c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2c79a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c79a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c79a4: 0x2442c3d0  addiu       $v0, $v0, -0x3C30
    ctx->pc = 0x2c79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
    // 0x2c79a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c79ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c79acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c79b0: 0x800008  jr          $a0
    ctx->pc = 0x2C79B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C79B8u: goto label_2c79b8;
            case 0x2C7A58u: goto label_2c7a58;
            case 0x2C7AB8u: goto label_2c7ab8;
            case 0x2C7B18u: goto label_2c7b18;
            case 0x2C7B88u: goto label_2c7b88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C79B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C79B8u;
label_2c79b8:
    // 0x2c79b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c79b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c79bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c79bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c79c0: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c79c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c79c4: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c79c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c79c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c79c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c79cc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c79ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c79d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c79d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c79d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c79d8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2c79d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c79dc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2c79dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c79e0: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2c79e0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c79e4: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2c79e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c79e8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2c79e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c79ec: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c79ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c79f0: 0x4603c140  add.s       $f5, $f24, $f3
    ctx->pc = 0x2c79f0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c79f4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2c79f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c79f8: 0x4606c901  sub.s       $f4, $f25, $f6
    ctx->pc = 0x2c79f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c79fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2c79fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c7a00: 0x4606c800  add.s       $f0, $f25, $f6
    ctx->pc = 0x2c7a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c7a04: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2c7a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7a08: 0x4603c0c1  sub.s       $f3, $f24, $f3
    ctx->pc = 0x2c7a08u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c7a0c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2c7a0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c7a10: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2c7a10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c7a14: 0x460c2981  sub.s       $f6, $f5, $f12
    ctx->pc = 0x2c7a14u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x2c7a18: 0x460d2040  add.s       $f1, $f4, $f13
    ctx->pc = 0x2c7a18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x2c7a1c: 0x460c1881  sub.s       $f2, $f3, $f12
    ctx->pc = 0x2c7a1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x2c7a20: 0x460d01c0  add.s       $f7, $f0, $f13
    ctx->pc = 0x2c7a20u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c7a24: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2c7a24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7a28: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x2c7a28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2c7a2c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2c7a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7a30: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2c7a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2c7a34: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2c7a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7a38: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x2c7a38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    // 0x2c7a3c: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x2c7a3cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c7a40: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x2c7a40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x2c7a44: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2c7a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7a48: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c7a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7a4c: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2c7a4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7a50: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2C7A50u;
    {
        const bool branch_taken_0x2c7a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7A50u;
        // 0x2c7a54: 0xe7a40024  swc1        $f4, 0x24($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7a50) {
            ctx->pc = 0x2C7BF4u;
            goto label_2c7bf4;
        }
    }
    ctx->pc = 0x2C7A58u;
label_2c7a58:
    // 0x2c7a58: 0x4603c1c0  add.s       $f7, $f24, $f3
    ctx->pc = 0x2c7a58u;
    ctx->f[7] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c7a5c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c7a60: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c7a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c7a64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c7a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7a68: 0x4606c981  sub.s       $f6, $f25, $f6
    ctx->pc = 0x2c7a68u;
    ctx->f[6] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c7a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7a74: 0x460cc141  sub.s       $f5, $f24, $f12
    ctx->pc = 0x2c7a74u;
    ctx->f[5] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
    // 0x2c7a78: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2c7a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c7a7c: 0x460c3901  sub.s       $f4, $f7, $f12
    ctx->pc = 0x2c7a7cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x2c7a80: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c7a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c7a84: 0x460d30c0  add.s       $f3, $f6, $f13
    ctx->pc = 0x2c7a84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2c7a88: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2c7a88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7a8c: 0x460dc840  add.s       $f1, $f25, $f13
    ctx->pc = 0x2c7a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[13]);
    // 0x2c7a90: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2c7a90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7a94: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2c7a94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7a98: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2c7a98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7a9c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2c7a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c7aa0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2c7aa0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7aa4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2c7aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c7aa8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c7aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c7aac: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x2c7aacu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7ab0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C7AB0u;
    {
        const bool branch_taken_0x2c7ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7AB0u;
        // 0x2c7ab4: 0xe7a60024  swc1        $f6, 0x24($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ab0) {
            ctx->pc = 0x2C7B74u;
            goto label_2c7b74;
        }
    }
    ctx->pc = 0x2C7AB8u;
label_2c7ab8:
    // 0x2c7ab8: 0x4603c100  add.s       $f4, $f24, $f3
    ctx->pc = 0x2c7ab8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c7abc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c7abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c7ac0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c7ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c7ac4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c7ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7ac8: 0x4606c9c1  sub.s       $f7, $f25, $f6
    ctx->pc = 0x2c7ac8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c7acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7ad4: 0x460cc180  add.s       $f6, $f24, $f12
    ctx->pc = 0x2c7ad4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[24], ctx->f[12]);
    // 0x2c7ad8: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x2c7ad8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7adc: 0x460c2140  add.s       $f5, $f4, $f12
    ctx->pc = 0x2c7adcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2c7ae0: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x2c7ae0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c7ae4: 0x460d38c1  sub.s       $f3, $f7, $f13
    ctx->pc = 0x2c7ae4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[13]);
    // 0x2c7ae8: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x2c7ae8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7aec: 0x460dc841  sub.s       $f1, $f25, $f13
    ctx->pc = 0x2c7aecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[13]);
    // 0x2c7af0: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x2c7af0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7af4: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2c7af4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7af8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c7af8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c7afc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2c7afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7b00: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2c7b00u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7b04: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2c7b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c7b08: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c7b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c7b0c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2c7b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c7b10: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C7B10u;
    {
        const bool branch_taken_0x2c7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B10u;
        // 0x2c7b14: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b10) {
            ctx->pc = 0x2C7B74u;
            goto label_2c7b74;
        }
    }
    ctx->pc = 0x2C7B18u;
label_2c7b18:
    // 0x2c7b18: 0x4606c9c0  add.s       $f7, $f25, $f6
    ctx->pc = 0x2c7b18u;
    ctx->f[7] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c7b1c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c7b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c7b20: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c7b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c7b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c7b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7b28: 0x4603c101  sub.s       $f4, $f24, $f3
    ctx->pc = 0x2c7b28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c7b2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7b34: 0x460cc181  sub.s       $f6, $f24, $f12
    ctx->pc = 0x2c7b34u;
    ctx->f[6] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
    // 0x2c7b38: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2c7b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c7b3c: 0x460dc940  add.s       $f5, $f25, $f13
    ctx->pc = 0x2c7b3cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[25], ctx->f[13]);
    // 0x2c7b40: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c7b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c7b44: 0x460c20c1  sub.s       $f3, $f4, $f12
    ctx->pc = 0x2c7b44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2c7b48: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2c7b48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7b4c: 0x460d3840  add.s       $f1, $f7, $f13
    ctx->pc = 0x2c7b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[13]);
    // 0x2c7b50: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x2c7b50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7b54: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x2c7b54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7b58: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2c7b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7b5c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2c7b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c7b60: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x2c7b60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7b64: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2c7b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c7b68: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c7b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c7b6c: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x2c7b6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7b70: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x2c7b70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2c7b74:
    // 0x2c7b74: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2c7b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c7b78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c7b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7b7c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c7b7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c7b80: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C7B80u;
    {
        const bool branch_taken_0x2c7b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7B80u;
        // 0x2c7b84: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7b80) {
            ctx->pc = 0x2C7BF4u;
            goto label_2c7bf4;
        }
    }
    ctx->pc = 0x2C7B88u;
label_2c7b88:
    // 0x2c7b88: 0x4603c041  sub.s       $f1, $f24, $f3
    ctx->pc = 0x2c7b88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c7b8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7b90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c7b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7b94: 0x4606c800  add.s       $f0, $f25, $f6
    ctx->pc = 0x2c7b94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c7b98: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c7b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c7b9c: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c7b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c7ba0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c7ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c7ba4: 0x460cc140  add.s       $f5, $f24, $f12
    ctx->pc = 0x2c7ba4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[12]);
    // 0x2c7ba8: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2c7ba8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c7bac: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2c7bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c7bb0: 0x460dc901  sub.s       $f4, $f25, $f13
    ctx->pc = 0x2c7bb0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[13]);
    // 0x2c7bb4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c7bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c7bb8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2c7bb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2c7bbc: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2c7bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2c7bc0: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2c7bc0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c7bc4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2c7bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c7bc8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c7bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c7bcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c7bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c7bd0: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x2c7bd0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c7bd4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2c7bd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c7bd8: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2c7bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c7bdc: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c7bdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c7be0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2c7be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c7be4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2c7be4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c7be8: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2c7be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c7bec: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2c7becu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c7bf0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2c7bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2c7bf4:
    // 0x2c7bf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c7bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c7bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c7bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7bfc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c7bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c7c00: 0xc4401184  lwc1        $f0, 0x1184($v0)
    ctx->pc = 0x2c7c00u;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c04: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2c7c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c7c08: 0x461a0841  sub.s       $f1, $f1, $f26
    ctx->pc = 0x2c7c08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x2c7c0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7c10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c7c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c7c14: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7c18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c7c1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c7c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c7c20: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c7c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c7c24: 0x0  nop
    ctx->pc = 0x2c7c24u;
    // NOP
label_2c7c28:
    // 0x2c7c28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c7c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c7c30: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x2c7c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2c7c34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c7c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c7c38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c7c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c7c3c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C7C3Cu;
    {
        const bool branch_taken_0x2c7c3c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C3Cu;
        // 0x2c7c40: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c3c) {
            ctx->pc = 0x2C7C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7c28;
        }
    }
    ctx->pc = 0x2C7C44u;
    // 0x2c7c44: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c7c48: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2c7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7c50: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2c7c50u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2c7c54: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x2c7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x2c7c58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c7c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c5c: 0xe7bb0054  swc1        $f27, 0x54($sp)
    ctx->pc = 0x2c7c5cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c7c60: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c7c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c64: 0xe7bc0058  swc1        $f28, 0x58($sp)
    ctx->pc = 0x2c7c64u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c7c68: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2c7c68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c6c: 0xe7bd005c  swc1        $f29, 0x5C($sp)
    ctx->pc = 0x2c7c6cu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c7c70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7c74: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2c7c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c7c78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c7c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7c7c: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x2c7c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x2c7c80: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2C7C80u;
    SET_GPR_U32(ctx, 31, 0x2C7C88u);
    ctx->pc = 0x2C7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7C80u;
    // 0x2c7c84: 0x24091cf0  addiu       $t1, $zero, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2C7C80u, 0x2C7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7C88u;
label_2c7c88:
    // 0x2c7c88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c7c88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7c8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7C8Cu;
    {
        const bool branch_taken_0x2c7c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7C8Cu;
        // 0x2c7c90: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7c8c) {
            ctx->pc = 0x2C7CA0u;
            goto label_2c7ca0;
        }
    }
    ctx->pc = 0x2C7C94u;
    // 0x2c7c94: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2c7c98: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x2c7c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2c7c9c: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x2c7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_2c7ca0:
    // 0x2c7ca0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2c7ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c7ca4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2c7ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c7ca8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2c7ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c7cac: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2c7cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c7cb0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c7cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c7cb4: 0xc7bd0148  lwc1        $f29, 0x148($sp)
    ctx->pc = 0x2c7cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2c7cb8: 0xc7bc0140  lwc1        $f28, 0x140($sp)
    ctx->pc = 0x2c7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2c7cbc: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x2c7cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2c7cc0: 0xc7ba0130  lwc1        $f26, 0x130($sp)
    ctx->pc = 0x2c7cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2c7cc4: 0xc7b90128  lwc1        $f25, 0x128($sp)
    ctx->pc = 0x2c7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2c7cc8: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2c7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2c7ccc: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2c7cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c7cd0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2c7cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c7cd4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2c7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c7cd8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2c7cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c7cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7CDCu;
        // 0x2c7ce0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7CE4u;
    // 0x2c7ce4: 0x0  nop
    ctx->pc = 0x2c7ce4u;
    // NOP
    // 0x2c7ce8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2c7ce8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2c7cec: 0x0  nop
    ctx->pc = 0x2c7cecu;
    // NOP
    // 0x2c7cf0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2c7cf0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2c7cf4: 0x0  nop
    ctx->pc = 0x2c7cf4u;
    // NOP
    // 0x2c7cf8: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2c7cf8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2c7cfc: 0x0  nop
    ctx->pc = 0x2c7cfcu;
    // NOP
    // 0x2c7d00: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2c7d00u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2c7d04: 0x0  nop
    ctx->pc = 0x2c7d04u;
    // NOP
    // 0x2c7d08: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2c7d08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2c7d0c: 0x0  nop
    ctx->pc = 0x2c7d0cu;
    // NOP
    // 0x2c7d10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c7d14: 0x0  nop
    ctx->pc = 0x2c7d14u;
    // NOP
    ctx->pc = 0x2c7d18u;
}
