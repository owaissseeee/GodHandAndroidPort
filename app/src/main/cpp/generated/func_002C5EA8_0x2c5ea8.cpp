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

// Function: func_002C5EA8
// Address: 0x2c5ea8 - 0x2c6550
void func_002C5EA8_0x2c5ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C5EA8_0x2c5ea8");
#endif

    switch (ctx->pc) {
        case 0x2c5f38u: goto label_2c5f38;
        case 0x2c5f44u: goto label_2c5f44;
        case 0x2c6310u: goto label_2c6310;
        case 0x2c64f4u: goto label_2c64f4;
        default: break;
    }

    ctx->pc = 0x2c5ea8u;

    // 0x2c5ea8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2c5ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2c5eac: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2c5eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2c5eb0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2c5eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2c5eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c5eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5eb8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2c5eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2c5ebc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c5ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ec0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2c5ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2c5ec4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c5ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ec8: 0xe7bd0138  swc1        $f29, 0x138($sp)
    ctx->pc = 0x2c5ec8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2c5ecc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c5eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ed0: 0xe7bc0130  swc1        $f28, 0x130($sp)
    ctx->pc = 0x2c5ed0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x2c5ed4: 0x46009f46  mov.s       $f29, $f19
    ctx->pc = 0x2c5ed4u;
    ctx->f[29] = FPU_MOV_S(ctx->f[19]);
    // 0x2c5ed8: 0xe7bb0128  swc1        $f27, 0x128($sp)
    ctx->pc = 0x2c5ed8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x2c5edc: 0x46009706  mov.s       $f28, $f18
    ctx->pc = 0x2c5edcu;
    ctx->f[28] = FPU_MOV_S(ctx->f[18]);
    // 0x2c5ee0: 0xe7ba0120  swc1        $f26, 0x120($sp)
    ctx->pc = 0x2c5ee0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2c5ee4: 0x46008ec6  mov.s       $f27, $f17
    ctx->pc = 0x2c5ee4u;
    ctx->f[27] = FPU_MOV_S(ctx->f[17]);
    // 0x2c5ee8: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x2c5ee8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2c5eec: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x2c5eecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2c5ef0: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x2c5ef0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x2c5ef4: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x2c5ef4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2c5ef8: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x2c5ef8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x2c5efc: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x2c5efcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c5f00: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x2c5f00u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x2c5f04: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c5f04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2c5f08: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2c5f08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2c5f0c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c5f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c5f10: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2c5f10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2c5f14: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c5f14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2c5f18: 0x1260017c  beqz        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x2C5F18u;
    {
        const bool branch_taken_0x2c5f18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F18u;
        // 0x2c5f1c: 0xc7ba0148  lwc1        $f26, 0x148($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f18) {
            ctx->pc = 0x2C650Cu;
            goto label_2c650c;
        }
    }
    ctx->pc = 0x2C5F20u;
    // 0x2c5f20: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2c5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x2c5f24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x2c5f28: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2c5f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f2c: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x2c5f2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x2c5f30: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2C5F30u;
    SET_GPR_U32(ctx, 31, 0x2C5F38u);
    ctx->pc = 0x2C5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F30u;
    // 0x2c5f34: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2C5F30u, 0x2C5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F38u;
label_2c5f38:
    // 0x2c5f38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c5f38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5f3c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2C5F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F44u);
    ctx->pc = 0x2C5F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F3Cu;
    // 0x2c5f40: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2C5F3Cu, 0x2C5F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F44u;
label_2c5f44:
    // 0x2c5f44: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2c5f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5f48: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2c5f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c5f4c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2c5f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f50: 0x4602c082  mul.s       $f2, $f24, $f2
    ctx->pc = 0x2c5f50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x2c5f54: 0x4601c842  mul.s       $f1, $f25, $f1
    ctx->pc = 0x2c5f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x2c5f58: 0x460010c7  neg.s       $f3, $f2
    ctx->pc = 0x2c5f58u;
    ctx->f[3] = FPU_NEG_S(ctx->f[2]);
    // 0x2c5f5c: 0x46140a42  mul.s       $f9, $f1, $f20
    ctx->pc = 0x2c5f5cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2c5f60: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2c5f60u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5f64: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c5f64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c5f68: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2C5F68u;
    {
        const bool branch_taken_0x2c5f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F68u;
        // 0x2c5f6c: 0x46141082  mul.s       $f2, $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f68) {
            ctx->pc = 0x2C62CCu;
            goto label_2c62cc;
        }
    }
    ctx->pc = 0x2C5F70u;
    // 0x2c5f70: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2c5f74: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c5f78: 0x2442c300  addiu       $v0, $v0, -0x3D00
    ctx->pc = 0x2c5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951680));
    // 0x2c5f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5f84: 0x800008  jr          $a0
    ctx->pc = 0x2C5F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5F8Cu: goto label_2c5f8c;
            case 0x2C6060u: goto label_2c6060;
            case 0x2C60FCu: goto label_2c60fc;
            case 0x2C6190u: goto label_2c6190;
            case 0x2C622Cu: goto label_2c622c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5F84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5F8Cu;
label_2c5f8c:
    // 0x2c5f8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c5f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c5f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5f94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5f9c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c5f9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c5fa0: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x2c5fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c5fa4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2c5fa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c5fa8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c5fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c5fac: 0x46017bc2  mul.s       $f15, $f15, $f1
    ctx->pc = 0x2c5facu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2c5fb0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c5fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c5fb4: 0x4602a980  add.s       $f6, $f21, $f2
    ctx->pc = 0x2c5fb4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c5fb8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c5fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5fbc: 0x46014a42  mul.s       $f9, $f9, $f1
    ctx->pc = 0x2c5fbcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2c5fc0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c5fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c5fc4: 0x4603b141  sub.s       $f5, $f22, $f3
    ctx->pc = 0x2c5fc4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x2c5fc8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c5fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fcc: 0x4603b040  add.s       $f1, $f22, $f3
    ctx->pc = 0x2c5fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x2c5fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fd4: 0x460f30c1  sub.s       $f3, $f6, $f15
    ctx->pc = 0x2c5fd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[15]);
    // 0x2c5fd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fdc: 0x46092900  add.s       $f4, $f5, $f9
    ctx->pc = 0x2c5fdcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2c5fe0: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x2c5fe0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c5fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5fe8: 0x0  nop
    ctx->pc = 0x2c5fe8u;
    // NOP
    // 0x2c5fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5ff0: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2c5ff0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5ff4: 0x460908c0  add.s       $f3, $f1, $f9
    ctx->pc = 0x2c5ff4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2c5ff8: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2c5ff8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c5ffc: 0x460f1201  sub.s       $f8, $f2, $f15
    ctx->pc = 0x2c5ffcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x2c6000: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c6000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6004: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x2c6004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c6008: 0x0  nop
    ctx->pc = 0x2c6008u;
    // NOP
    // 0x2c600c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2c600cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2c6010: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2c6010u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c6014: 0x0  nop
    ctx->pc = 0x2c6014u;
    // NOP
    // 0x2c6018: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c6018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c601c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2c601cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6020: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c6020u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6024: 0x0  nop
    ctx->pc = 0x2c6024u;
    // NOP
    // 0x2c6028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c602c: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x2c602cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6030: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x2c6030u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x2c6034: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x2c6034u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6038: 0x46090841  sub.s       $f1, $f1, $f9
    ctx->pc = 0x2c6038u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[9]);
    // 0x2c603c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x2c603cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6040: 0x460f3180  add.s       $f6, $f6, $f15
    ctx->pc = 0x2c6040u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[15]);
    // 0x2c6044: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c6044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c6048: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2c6048u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x2c604c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c604cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6050: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2c6050u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6054: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2c6054u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6058: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2C6058u;
    {
        const bool branch_taken_0x2c6058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6058u;
        // 0x2c605c: 0xe7a50024  swc1        $f5, 0x24($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6058) {
            ctx->pc = 0x2C62CCu;
            goto label_2c62cc;
        }
    }
    ctx->pc = 0x2C6060u;
label_2c6060:
    // 0x2c6060: 0x4602aa00  add.s       $f8, $f21, $f2
    ctx->pc = 0x2c6060u;
    ctx->f[8] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c6064: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c6064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c6068: 0x4603b1c1  sub.s       $f7, $f22, $f3
    ctx->pc = 0x2c6068u;
    ctx->f[7] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x2c606c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6078: 0x0  nop
    ctx->pc = 0x2c6078u;
    // NOP
    // 0x2c607c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c607cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6084: 0x460f4081  sub.s       $f2, $f8, $f15
    ctx->pc = 0x2c6084u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[15]);
    // 0x2c6088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c608c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c608cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6090: 0x46093900  add.s       $f4, $f7, $f9
    ctx->pc = 0x2c6090u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2c6094: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c6094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6098: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2c6098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c609c: 0x0  nop
    ctx->pc = 0x2c609cu;
    // NOP
    // 0x2c60a0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c60a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c60a4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2c60a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c60a8: 0x460fa981  sub.s       $f6, $f21, $f15
    ctx->pc = 0x2c60a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[15]);
    // 0x2c60ac: 0x4609b0c0  add.s       $f3, $f22, $f9
    ctx->pc = 0x2c60acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[9]);
    // 0x2c60b0: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2c60b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c60b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c60b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c60b8: 0x0  nop
    ctx->pc = 0x2c60b8u;
    // NOP
    // 0x2c60bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c60bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c60c0: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2c60c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c60c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c60c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c60c8: 0x0  nop
    ctx->pc = 0x2c60c8u;
    // NOP
    // 0x2c60cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c60ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c60d0: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2c60d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c60d4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2c60d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c60d8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c60d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c60dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c60e0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c60e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c60e4: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x2c60e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c60e8: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x2c60e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c60ec: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c60ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c60f0: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x2c60f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c60f4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2C60F4u;
    {
        const bool branch_taken_0x2c60f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60F4u;
        // 0x2c60f8: 0xe7a70024  swc1        $f7, 0x24($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60f4) {
            ctx->pc = 0x2C62C4u;
            goto label_2c62c4;
        }
    }
    ctx->pc = 0x2C60FCu;
label_2c60fc:
    // 0x2c60fc: 0x4602aa00  add.s       $f8, $f21, $f2
    ctx->pc = 0x2c60fcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c6100: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c6100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c6104: 0x4603b1c1  sub.s       $f7, $f22, $f3
    ctx->pc = 0x2c6104u;
    ctx->f[7] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
    // 0x2c6108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c610c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c610cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6114: 0x0  nop
    ctx->pc = 0x2c6114u;
    // NOP
    // 0x2c6118: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c611c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c611cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6120: 0x460f4080  add.s       $f2, $f8, $f15
    ctx->pc = 0x2c6120u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
    // 0x2c6124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6128: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c612c: 0x460938c1  sub.s       $f3, $f7, $f9
    ctx->pc = 0x2c612cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[9]);
    // 0x2c6130: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c6130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6134: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2c6134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c6138: 0x0  nop
    ctx->pc = 0x2c6138u;
    // NOP
    // 0x2c613c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c613cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c6140: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2c6140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6144: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2c6144u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c6148: 0x0  nop
    ctx->pc = 0x2c6148u;
    // NOP
    // 0x2c614c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c614cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c6150: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x2c6150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c6154: 0x0  nop
    ctx->pc = 0x2c6154u;
    // NOP
    // 0x2c6158: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2c6158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2c615c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c615cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6160: 0x460fa880  add.s       $f2, $f21, $f15
    ctx->pc = 0x2c6160u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[15]);
    // 0x2c6164: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c6164u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6168: 0x4609b001  sub.s       $f0, $f22, $f9
    ctx->pc = 0x2c6168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[9]);
    // 0x2c616c: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2c616cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6170: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x2c6170u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6174: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c6174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6178: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c6178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c617c: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2c617cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6180: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x2c6180u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c6184: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2c6184u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c6188: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C6188u;
    {
        const bool branch_taken_0x2c6188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6188u;
        // 0x2c618c: 0xe7a60048  swc1        $f6, 0x48($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6188) {
            ctx->pc = 0x2C62BCu;
            goto label_2c62bc;
        }
    }
    ctx->pc = 0x2C6190u;
label_2c6190:
    // 0x2c6190: 0x4602aa01  sub.s       $f8, $f21, $f2
    ctx->pc = 0x2c6190u;
    ctx->f[8] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c6194: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c6194u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c6198: 0x460fa801  sub.s       $f0, $f21, $f15
    ctx->pc = 0x2c6198u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[15]);
    // 0x2c619c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c619cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c61a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c61a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c61a4: 0x4609b080  add.s       $f2, $f22, $f9
    ctx->pc = 0x2c61a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[9]);
    // 0x2c61a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c61a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61ac: 0x4603b1c0  add.s       $f7, $f22, $f3
    ctx->pc = 0x2c61acu;
    ctx->f[7] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x2c61b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c61b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c61b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61b8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c61b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c61bc: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2c61bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c61c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2c61c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c61c4: 0x0  nop
    ctx->pc = 0x2c61c4u;
    // NOP
    // 0x2c61c8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c61c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c61cc: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2c61ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c61d0: 0x0  nop
    ctx->pc = 0x2c61d0u;
    // NOP
    // 0x2c61d4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c61d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c61d8: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c61d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c61dc: 0x460f4181  sub.s       $f6, $f8, $f15
    ctx->pc = 0x2c61dcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[8], ctx->f[15]);
    // 0x2c61e0: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x2c61e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c61e4: 0x460938c0  add.s       $f3, $f7, $f9
    ctx->pc = 0x2c61e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2c61e8: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2c61e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c61ec: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c61ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c61f0: 0x0  nop
    ctx->pc = 0x2c61f0u;
    // NOP
    // 0x2c61f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c61f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c61f8: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2c61f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c61fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c61fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6200: 0x0  nop
    ctx->pc = 0x2c6200u;
    // NOP
    // 0x2c6204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6208: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2c6208u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c620c: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2c620cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6210: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c6210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6214: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c6214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c6218: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x2c6218u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c621c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c621cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c6220: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2c6220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6224: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C6224u;
    {
        const bool branch_taken_0x2c6224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6224u;
        // 0x2c6228: 0xe7b60024  swc1        $f22, 0x24($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6224) {
            ctx->pc = 0x2C62C4u;
            goto label_2c62c4;
        }
    }
    ctx->pc = 0x2C622Cu;
label_2c622c:
    // 0x2c622c: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c622cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c6230: 0x4602aa01  sub.s       $f8, $f21, $f2
    ctx->pc = 0x2c6230u;
    ctx->f[8] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c6234: 0x460fa880  add.s       $f2, $f21, $f15
    ctx->pc = 0x2c6234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[15]);
    // 0x2c6238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c623c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c623cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6244: 0x0  nop
    ctx->pc = 0x2c6244u;
    // NOP
    // 0x2c6248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c624c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c624cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6250: 0x4603b180  add.s       $f6, $f22, $f3
    ctx->pc = 0x2c6250u;
    ctx->f[6] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x2c6254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c625c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2c625cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6260: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c6260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6264: 0x4609b0c1  sub.s       $f3, $f22, $f9
    ctx->pc = 0x2c6264u;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[9]);
    // 0x2c6268: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2c6268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c626c: 0x0  nop
    ctx->pc = 0x2c626cu;
    // NOP
    // 0x2c6270: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c6270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c6274: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x2c6274u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6278: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2c6278u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c627c: 0x0  nop
    ctx->pc = 0x2c627cu;
    // NOP
    // 0x2c6280: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c6280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c6284: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2c6284u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6288: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x2c6288u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c628c: 0x0  nop
    ctx->pc = 0x2c628cu;
    // NOP
    // 0x2c6290: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2c6290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2c6294: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c6294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6298: 0x460f4080  add.s       $f2, $f8, $f15
    ctx->pc = 0x2c6298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
    // 0x2c629c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c629cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c62a0: 0x46093001  sub.s       $f0, $f6, $f9
    ctx->pc = 0x2c62a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x2c62a4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2c62a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c62a8: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2c62a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c62ac: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c62acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c62b0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c62b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c62b4: 0xe7b60044  swc1        $f22, 0x44($sp)
    ctx->pc = 0x2c62b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c62b8: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x2c62b8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2c62bc:
    // 0x2c62bc: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c62bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c62c0: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c62c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2c62c4:
    // 0x2c62c4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c62c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c62c8: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2c62c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2c62cc:
    // 0x2c62cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c62ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c62d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c62d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c62d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c62d8: 0xc4411184  lwc1        $f1, 0x1184($v0)
    ctx->pc = 0x2c62d8u;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62dc: 0x122602  srl         $a0, $s2, 24
    ctx->pc = 0x2c62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
    // 0x2c62e0: 0x461a0001  sub.s       $f0, $f0, $f26
    ctx->pc = 0x2c62e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[26]);
    // 0x2c62e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c62e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c62e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c62e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c62ec: 0x123c02  srl         $a3, $s2, 16
    ctx->pc = 0x2c62ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x2c62f0: 0x124202  srl         $t0, $s2, 8
    ctx->pc = 0x2c62f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x2c62f4: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x2c62f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2c62f8: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2c62f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c62fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c62fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6300: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6304: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6308: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6308u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c630c: 0x0  nop
    ctx->pc = 0x2c630cu;
    // NOP
label_2c6310:
    // 0x2c6310: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6314: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6318: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x2c6318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2c631c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c631cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6320: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c6324: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C6324u;
    {
        const bool branch_taken_0x2c6324 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6324u;
        // 0x2c6328: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6324) {
            ctx->pc = 0x2C6310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6310;
        }
    }
    ctx->pc = 0x2C632Cu;
    // 0x2c632c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2c632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6334: 0xe7bb0054  swc1        $f27, 0x54($sp)
    ctx->pc = 0x2c6334u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c6338: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c6338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c633c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c633cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2c6340: 0xe7bc0058  swc1        $f28, 0x58($sp)
    ctx->pc = 0x2c6340u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c6344: 0xe7bd005c  swc1        $f29, 0x5C($sp)
    ctx->pc = 0x2c6344u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c6348: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6348u;
    {
        const bool branch_taken_0x2c6348 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6348u;
        // 0x2c634c: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6348) {
            ctx->pc = 0x2C6364u;
            goto label_2c6364;
        }
    }
    ctx->pc = 0x2C6350u;
    // 0x2c6350: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c6350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6354: 0x0  nop
    ctx->pc = 0x2c6354u;
    // NOP
    // 0x2c6358: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c6358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c635c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C635Cu;
    {
        const bool branch_taken_0x2c635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C635Cu;
        // 0x2c6360: 0xc6000018  lwc1        $f0, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c635c) {
            ctx->pc = 0x2C6384u;
            goto label_2c6384;
        }
    }
    ctx->pc = 0x2C6364u;
label_2c6364:
    // 0x2c6364: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c6364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c6368: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6368u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c636c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c636cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c6370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6374: 0x0  nop
    ctx->pc = 0x2c6374u;
    // NOP
    // 0x2c6378: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c6378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c637c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c637cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c6380: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2c6380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6384:
    // 0x2c6384: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c6384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6388: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c6388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c638c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c638cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6390: 0x0  nop
    ctx->pc = 0x2c6390u;
    // NOP
    // 0x2c6394: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6394u;
    {
        const bool branch_taken_0x2c6394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6394u;
        // 0x2c6398: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6394) {
            ctx->pc = 0x2C63A4u;
            goto label_2c63a4;
        }
    }
    ctx->pc = 0x2C639Cu;
    // 0x2c639c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c639cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c63a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2c63a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2c63a4:
    // 0x2c63a4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2c63a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c63a8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C63A8u;
    {
        const bool branch_taken_0x2c63a8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63A8u;
        // 0x2c63ac: 0x30e20001  andi        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63a8) {
            ctx->pc = 0x2C63C4u;
            goto label_2c63c4;
        }
    }
    ctx->pc = 0x2C63B0u;
    // 0x2c63b0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c63b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c63b4: 0x0  nop
    ctx->pc = 0x2c63b4u;
    // NOP
    // 0x2c63b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c63b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c63bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C63BCu;
    {
        const bool branch_taken_0x2c63bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63BCu;
        // 0x2c63c0: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63bc) {
            ctx->pc = 0x2C63E0u;
            goto label_2c63e0;
        }
    }
    ctx->pc = 0x2C63C4u;
label_2c63c4:
    // 0x2c63c4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c63c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c63cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c63ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c63d0: 0x0  nop
    ctx->pc = 0x2c63d0u;
    // NOP
    // 0x2c63d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c63d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c63d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c63d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c63dc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2c63dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c63e0:
    // 0x2c63e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c63e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c63e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c63e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c63e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c63e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c63ec: 0x0  nop
    ctx->pc = 0x2c63ecu;
    // NOP
    // 0x2c63f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C63F0u;
    {
        const bool branch_taken_0x2c63f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C63F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63F0u;
        // 0x2c63f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63f0) {
            ctx->pc = 0x2C6400u;
            goto label_2c6400;
        }
    }
    ctx->pc = 0x2C63F8u;
    // 0x2c63f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c63f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c63fc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2c63fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_2c6400:
    // 0x2c6400: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x2c6400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2c6404: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6404u;
    {
        const bool branch_taken_0x2c6404 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6404u;
        // 0x2c6408: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6404) {
            ctx->pc = 0x2C6420u;
            goto label_2c6420;
        }
    }
    ctx->pc = 0x2C640Cu;
    // 0x2c640c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c640cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6410: 0x0  nop
    ctx->pc = 0x2c6410u;
    // NOP
    // 0x2c6414: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c6414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c6418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6418u;
    {
        const bool branch_taken_0x2c6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6418u;
        // 0x2c641c: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6418) {
            ctx->pc = 0x2C643Cu;
            goto label_2c643c;
        }
    }
    ctx->pc = 0x2C6420u;
label_2c6420:
    // 0x2c6420: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c6424: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6428: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c6428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c642c: 0x0  nop
    ctx->pc = 0x2c642cu;
    // NOP
    // 0x2c6430: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c6430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c6434: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c6434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c6438: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2c6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c643c:
    // 0x2c643c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c643cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6440: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c6440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c6444: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c6444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6448: 0x0  nop
    ctx->pc = 0x2c6448u;
    // NOP
    // 0x2c644c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C644Cu;
    {
        const bool branch_taken_0x2c644c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C644Cu;
        // 0x2c6450: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c644c) {
            ctx->pc = 0x2C645Cu;
            goto label_2c645c;
        }
    }
    ctx->pc = 0x2C6454u;
    // 0x2c6454: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c6458: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2c6458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2c645c:
    // 0x2c645c: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C645Cu;
    {
        const bool branch_taken_0x2c645c = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2C6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C645Cu;
        // 0x2c6460: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c645c) {
            ctx->pc = 0x2C6478u;
            goto label_2c6478;
        }
    }
    ctx->pc = 0x2C6464u;
    // 0x2c6464: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2c6464u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6468: 0x0  nop
    ctx->pc = 0x2c6468u;
    // NOP
    // 0x2c646c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c646cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c6470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6470u;
    {
        const bool branch_taken_0x2c6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6470u;
        // 0x2c6474: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6470) {
            ctx->pc = 0x2C6494u;
            goto label_2c6494;
        }
    }
    ctx->pc = 0x2C6478u;
label_2c6478:
    // 0x2c6478: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x2c6478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x2c647c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6480: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c6480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6484: 0x0  nop
    ctx->pc = 0x2c6484u;
    // NOP
    // 0x2c6488: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c6488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c648c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c648cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2c6490: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2c6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c6494:
    // 0x2c6494: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c6494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6498: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2c6498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c649c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c649cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c64a0: 0x0  nop
    ctx->pc = 0x2c64a0u;
    // NOP
    // 0x2c64a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C64A4u;
    {
        const bool branch_taken_0x2c64a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64A4u;
        // 0x2c64a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64a4) {
            ctx->pc = 0x2C64B4u;
            goto label_2c64b4;
        }
    }
    ctx->pc = 0x2C64ACu;
    // 0x2c64ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c64acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c64b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2c64b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_2c64b4:
    // 0x2c64b4: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x2c64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2c64b8: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x2c64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2c64bc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c64bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2c64c0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2c64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c64c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2c64c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2c64c8: 0x8e0b0028  lw          $t3, 0x28($s0)
    ctx->pc = 0x2c64c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c64cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2c64ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2c64d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c64d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c64d4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2c64d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2c64d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c64dc: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2c64dcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2c64e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c64e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c64e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c64e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c64e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c64ec: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2C64ECu;
    SET_GPR_U32(ctx, 31, 0x2C64F4u);
    ctx->pc = 0x2C64F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C64ECu;
    // 0x2c64f0: 0x24091cf0  addiu       $t1, $zero, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2C64ECu, 0x2C64F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F4u;
label_2c64f4:
    // 0x2c64f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c64f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C64F8u;
    {
        const bool branch_taken_0x2c64f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C64FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C64F8u;
        // 0x2c64fc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c64f8) {
            ctx->pc = 0x2C6510u;
            goto label_2c6510;
        }
    }
    ctx->pc = 0x2C6500u;
    // 0x2c6500: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2c6500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2c6504: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x2c6504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2c6508: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x2c6508u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_2c650c:
    // 0x2c650c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2c650cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c6510:
    // 0x2c6510: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2c6510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c6514: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2c6514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c6518: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2c6518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c651c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c651cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c6520: 0xc7bd0138  lwc1        $f29, 0x138($sp)
    ctx->pc = 0x2c6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2c6524: 0xc7bc0130  lwc1        $f28, 0x130($sp)
    ctx->pc = 0x2c6524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2c6528: 0xc7bb0128  lwc1        $f27, 0x128($sp)
    ctx->pc = 0x2c6528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2c652c: 0xc7ba0120  lwc1        $f26, 0x120($sp)
    ctx->pc = 0x2c652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2c6530: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x2c6530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2c6534: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x2c6534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2c6538: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x2c6538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c653c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x2c653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c6540: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x2c6540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c6544: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x2c6544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6548: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6548u;
        // 0x2c654c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6550u;
}
