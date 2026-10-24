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

// Function: func_002C5548
// Address: 0x2c5548 - 0x2c5bd8
void func_002C5548_0x2c5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C5548_0x2c5548");
#endif

    switch (ctx->pc) {
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c59c8u: goto label_2c59c8;
        case 0x2c5a50u: goto label_2c5a50;
        case 0x2c5a98u: goto label_2c5a98;
        case 0x2c5ae0u: goto label_2c5ae0;
        case 0x2c5b24u: goto label_2c5b24;
        case 0x2c5b7cu: goto label_2c5b7c;
        default: break;
    }

    ctx->pc = 0x2c5548u;

    // 0x2c5548: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2c5548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2c554c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c5550: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x2c5550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x2c5554: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2c5554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2c5558: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x2c5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x2c555c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c555cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5560: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2c5560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x2c5564: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c5564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5568: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x2c5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x2c556c: 0xe7b80160  swc1        $f24, 0x160($sp)
    ctx->pc = 0x2c556cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c5570: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2c5570u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5574: 0xe7b70158  swc1        $f23, 0x158($sp)
    ctx->pc = 0x2c5574u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2c5578: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2c5578u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2c557c: 0xe7b60150  swc1        $f22, 0x150($sp)
    ctx->pc = 0x2c557cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2c5580: 0xe7b50148  swc1        $f21, 0x148($sp)
    ctx->pc = 0x2c5580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2c5584: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x2c5584u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c5588: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x2c5588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x2c558c: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x2c558cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2c5590: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x2c5590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x2c5594: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x2c5594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x2c5598: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x2c5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x2c559c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2c559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2c55a0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c55a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c55a4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c55a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c55a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c55ac: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2c55acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c55b0: 0x46006540  add.s       $f21, $f12, $f0
    ctx->pc = 0x2c55b0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2c55b4: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x2c55b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c55b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c55b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c55bc: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2C55BCu;
    SET_GPR_U32(ctx, 31, 0x2C55C4u);
    ctx->pc = 0x2C55C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C55BCu;
    // 0x2c55c0: 0x46016d80  add.s       $f22, $f13, $f1 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2C55BCu, 0x2C55C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55C4u;
label_2c55c4:
    // 0x2c55c4: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x2c55c4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x2c55c8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2C55C8u;
    SET_GPR_U32(ctx, 31, 0x2C55D0u);
    ctx->pc = 0x2C55CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C55C8u;
    // 0x2c55cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2C55C8u, 0x2C55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C55D0u;
label_2c55d0:
    // 0x2c55d0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c55d4: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x2c55d4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x2c55d8: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x2c55d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c55dc: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x2c55dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c55e0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x2c55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c55e4: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x2c55e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c55e8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2c55e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c55ec: 0x46001182  mul.s       $f6, $f2, $f0
    ctx->pc = 0x2c55ecu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2c55f0: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x2c55f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x2c55f4: 0x46172882  mul.s       $f2, $f5, $f23
    ctx->pc = 0x2c55f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
    // 0x2c55f8: 0x46173282  mul.s       $f10, $f6, $f23
    ctx->pc = 0x2c55f8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x2c55fc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2c55fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2c5600: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2C5600u;
    {
        const bool branch_taken_0x2c5600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5600u;
        // 0x2c5604: 0x46073242  mul.s       $f9, $f6, $f7 (Delay Slot)
        ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5600) {
            ctx->pc = 0x2C5988u;
            goto label_2c5988;
        }
    }
    ctx->pc = 0x2C5608u;
    // 0x2c5608: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2c560c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c5610: 0x2442c2e0  addiu       $v0, $v0, -0x3D20
    ctx->pc = 0x2c5610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951648));
    // 0x2c5614: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c5614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c5618: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c561c: 0x800008  jr          $a0
    ctx->pc = 0x2C561Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5624u: goto label_2c5624;
            case 0x2C571Cu: goto label_2c571c;
            case 0x2C57B8u: goto label_2c57b8;
            case 0x2C584Cu: goto label_2c584c;
            case 0x2C58E8u: goto label_2c58e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C561Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C5624u;
label_2c5624:
    // 0x2c5624: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2c5624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5628: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2c5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c562c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c5630: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2c5630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c5634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c5634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c5638: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x2c5638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c563c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2c563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5640: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c5640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c5644: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x2c5644u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c5648: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2c5648u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c564c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c564cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5650: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5654: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5658: 0x0  nop
    ctx->pc = 0x2c5658u;
    // NOP
    // 0x2c565c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c565cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c5660: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5664: 0x460028c7  neg.s       $f3, $f5
    ctx->pc = 0x2c5664u;
    ctx->f[3] = FPU_NEG_S(ctx->f[5]);
    // 0x2c5668: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2c5668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c566c: 0x46041182  mul.s       $f6, $f2, $f4
    ctx->pc = 0x2c566cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c5670: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c5670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c5674: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c5674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c5678: 0x46172882  mul.s       $f2, $f5, $f23
    ctx->pc = 0x2c5678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[23]);
    // 0x2c567c: 0x46071842  mul.s       $f1, $f3, $f7
    ctx->pc = 0x2c567cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2c5680: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c5680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5684: 0x46173282  mul.s       $f10, $f6, $f23
    ctx->pc = 0x2c5684u;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[23]);
    // 0x2c5688: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c5688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c568c: 0x46073242  mul.s       $f9, $f6, $f7
    ctx->pc = 0x2c568cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x2c5690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5694: 0x4601b100  add.s       $f4, $f22, $f1
    ctx->pc = 0x2c5694u;
    ctx->f[4] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x2c5698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c569c: 0x4602a940  add.s       $f5, $f21, $f2
    ctx->pc = 0x2c569cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c56a0: 0x4602a801  sub.s       $f0, $f21, $f2
    ctx->pc = 0x2c56a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c56a4: 0x460a20c0  add.s       $f3, $f4, $f10
    ctx->pc = 0x2c56a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2c56a8: 0x46092880  add.s       $f2, $f5, $f9
    ctx->pc = 0x2c56a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2c56ac: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x2c56acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x2c56b0: 0x460901c0  add.s       $f7, $f0, $f9
    ctx->pc = 0x2c56b0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2c56b4: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x2c56b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c56b8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2c56b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c56bc: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x2c56bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c56c0: 0x0  nop
    ctx->pc = 0x2c56c0u;
    // NOP
    // 0x2c56c4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2c56c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2c56c8: 0x460a0a00  add.s       $f8, $f1, $f10
    ctx->pc = 0x2c56c8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2c56cc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c56ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c56d0: 0x0  nop
    ctx->pc = 0x2c56d0u;
    // NOP
    // 0x2c56d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c56d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c56d8: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x2c56d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c56dc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2c56dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c56e0: 0x0  nop
    ctx->pc = 0x2c56e0u;
    // NOP
    // 0x2c56e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2c56e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c56e8: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x2c56e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c56ec: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2c56ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2c56f0: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x2c56f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c56f4: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x2c56f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x2c56f8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c56f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c56fc: 0x46092941  sub.s       $f5, $f5, $f9
    ctx->pc = 0x2c56fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x2c5700: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x2c5700u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c5704: 0x460a2101  sub.s       $f4, $f4, $f10
    ctx->pc = 0x2c5704u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[10]);
    // 0x2c5708: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2c5708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c570c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2c570cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5710: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2c5710u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5714: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2C5714u;
    {
        const bool branch_taken_0x2c5714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5714u;
        // 0x2c5718: 0xe7a40024  swc1        $f4, 0x24($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5714) {
            ctx->pc = 0x2C5988u;
            goto label_2c5988;
        }
    }
    ctx->pc = 0x2C571Cu;
label_2c571c:
    // 0x2c571c: 0x4602aa00  add.s       $f8, $f21, $f2
    ctx->pc = 0x2c571cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c5720: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c5720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c5724: 0x4601b1c1  sub.s       $f7, $f22, $f1
    ctx->pc = 0x2c5724u;
    ctx->f[7] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x2c5728: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x2c5728u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c572c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c572cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5730: 0x0  nop
    ctx->pc = 0x2c5730u;
    // NOP
    // 0x2c5734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5738: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c573c: 0x46094081  sub.s       $f2, $f8, $f9
    ctx->pc = 0x2c573cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x2c5740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5748: 0x460a3900  add.s       $f4, $f7, $f10
    ctx->pc = 0x2c5748u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2c574c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c574cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c5750: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2c5750u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c5754: 0x0  nop
    ctx->pc = 0x2c5754u;
    // NOP
    // 0x2c5758: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c5758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c575c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2c575cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5760: 0x4609a981  sub.s       $f6, $f21, $f9
    ctx->pc = 0x2c5760u;
    ctx->f[6] = FPU_SUB_S(ctx->f[21], ctx->f[9]);
    // 0x2c5764: 0x460ab0c0  add.s       $f3, $f22, $f10
    ctx->pc = 0x2c5764u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[10]);
    // 0x2c5768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c576c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c576cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5770: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c5770u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c5774: 0x0  nop
    ctx->pc = 0x2c5774u;
    // NOP
    // 0x2c5778: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c5778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c577c: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x2c577cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c5780: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c5780u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5784: 0x0  nop
    ctx->pc = 0x2c5784u;
    // NOP
    // 0x2c5788: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c578c: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2c578cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c5790: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2c5790u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5794: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2c5794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5798: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c5798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c579c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c579cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c57a0: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c57a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c57a4: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x2c57a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c57a8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c57a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c57ac: 0xe7a80020  swc1        $f8, 0x20($sp)
    ctx->pc = 0x2c57acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c57b0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2C57B0u;
    {
        const bool branch_taken_0x2c57b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57B0u;
        // 0x2c57b4: 0xe7a70024  swc1        $f7, 0x24($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57b0) {
            ctx->pc = 0x2C5980u;
            goto label_2c5980;
        }
    }
    ctx->pc = 0x2C57B8u;
label_2c57b8:
    // 0x2c57b8: 0x4602aa00  add.s       $f8, $f21, $f2
    ctx->pc = 0x2c57b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2c57bc: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c57bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c57c0: 0x4601b1c1  sub.s       $f7, $f22, $f1
    ctx->pc = 0x2c57c0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x2c57c4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2c57c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c57c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c57c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c57cc: 0x0  nop
    ctx->pc = 0x2c57ccu;
    // NOP
    // 0x2c57d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c57d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c57d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c57d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57d8: 0x46094080  add.s       $f2, $f8, $f9
    ctx->pc = 0x2c57d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x2c57dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c57dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c57e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c57e4: 0x460a38c1  sub.s       $f3, $f7, $f10
    ctx->pc = 0x2c57e4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[10]);
    // 0x2c57e8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c57e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c57ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2c57ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c57f0: 0x0  nop
    ctx->pc = 0x2c57f0u;
    // NOP
    // 0x2c57f4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c57f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c57f8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2c57f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c57fc: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2c57fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c5800: 0x0  nop
    ctx->pc = 0x2c5800u;
    // NOP
    // 0x2c5804: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c5804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c5808: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x2c5808u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2c580c: 0x0  nop
    ctx->pc = 0x2c580cu;
    // NOP
    // 0x2c5810: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2c5810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2c5814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5818: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c581c: 0x4609a880  add.s       $f2, $f21, $f9
    ctx->pc = 0x2c581cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[9]);
    // 0x2c5820: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c5820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5824: 0x460ab001  sub.s       $f0, $f22, $f10
    ctx->pc = 0x2c5824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[10]);
    // 0x2c5828: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c5828u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c582c: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x2c582cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5830: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c5830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c5834: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c5834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5838: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2c5838u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c583c: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x2c583cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5840: 0xe7a70044  swc1        $f7, 0x44($sp)
    ctx->pc = 0x2c5840u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c5844: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2C5844u;
    {
        const bool branch_taken_0x2c5844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0xe7a60048  swc1        $f6, 0x48($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5844) {
            ctx->pc = 0x2C5978u;
            goto label_2c5978;
        }
    }
    ctx->pc = 0x2C584Cu;
label_2c584c:
    // 0x2c584c: 0x4602aa01  sub.s       $f8, $f21, $f2
    ctx->pc = 0x2c584cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c5850: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c5850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c5854: 0x4609a801  sub.s       $f0, $f21, $f9
    ctx->pc = 0x2c5854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[9]);
    // 0x2c5858: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2c5858u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c585c: 0x460ab080  add.s       $f2, $f22, $f10
    ctx->pc = 0x2c585cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[10]);
    // 0x2c5860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5864: 0x4601b1c0  add.s       $f7, $f22, $f1
    ctx->pc = 0x2c5864u;
    ctx->f[7] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x2c5868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c5868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c586c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c586cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5870: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2c5870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c5874: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x2c5874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c5878: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2c5878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c587c: 0x0  nop
    ctx->pc = 0x2c587cu;
    // NOP
    // 0x2c5880: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c5880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c5884: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2c5884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c5888: 0x0  nop
    ctx->pc = 0x2c5888u;
    // NOP
    // 0x2c588c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c588cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c5890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5898: 0x46094181  sub.s       $f6, $f8, $f9
    ctx->pc = 0x2c5898u;
    ctx->f[6] = FPU_SUB_S(ctx->f[8], ctx->f[9]);
    // 0x2c589c: 0xe7a80010  swc1        $f8, 0x10($sp)
    ctx->pc = 0x2c589cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c58a0: 0x460a38c0  add.s       $f3, $f7, $f10
    ctx->pc = 0x2c58a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2c58a4: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2c58a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c58a8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2c58a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c58ac: 0x0  nop
    ctx->pc = 0x2c58acu;
    // NOP
    // 0x2c58b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c58b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c58b4: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2c58b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c58b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2c58b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c58bc: 0x0  nop
    ctx->pc = 0x2c58bcu;
    // NOP
    // 0x2c58c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c58c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c58c4: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x2c58c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c58c8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2c58c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c58cc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c58ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c58d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2c58d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2c58d4: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c58d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c58d8: 0xe7a70014  swc1        $f7, 0x14($sp)
    ctx->pc = 0x2c58d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c58dc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c58dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c58e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C58E0u;
    {
        const bool branch_taken_0x2c58e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58E0u;
        // 0x2c58e4: 0xe7b60024  swc1        $f22, 0x24($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58e0) {
            ctx->pc = 0x2C5980u;
            goto label_2c5980;
        }
    }
    ctx->pc = 0x2C58E8u;
label_2c58e8:
    // 0x2c58e8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x2c58e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2c58ec: 0x4602aa01  sub.s       $f8, $f21, $f2
    ctx->pc = 0x2c58ecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x2c58f0: 0x4609a880  add.s       $f2, $f21, $f9
    ctx->pc = 0x2c58f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[9]);
    // 0x2c58f4: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2c58f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c58f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c58f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c58fc: 0x0  nop
    ctx->pc = 0x2c58fcu;
    // NOP
    // 0x2c5900: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5904: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5908: 0x4601b180  add.s       $f6, $f22, $f1
    ctx->pc = 0x2c5908u;
    ctx->f[6] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
    // 0x2c590c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5914: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2c5914u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c5918: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c5918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c591c: 0x460ab0c1  sub.s       $f3, $f22, $f10
    ctx->pc = 0x2c591cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[22], ctx->f[10]);
    // 0x2c5920: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2c5920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c5924: 0x0  nop
    ctx->pc = 0x2c5924u;
    // NOP
    // 0x2c5928: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2c5928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c592c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c592cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5930: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c5930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5934: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x2c5934u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2c5938: 0x0  nop
    ctx->pc = 0x2c5938u;
    // NOP
    // 0x2c593c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2c593cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2c5940: 0xe7a80030  swc1        $f8, 0x30($sp)
    ctx->pc = 0x2c5940u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c5944: 0x44853800  mtc1        $a1, $f7
    ctx->pc = 0x2c5944u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2c5948: 0x0  nop
    ctx->pc = 0x2c5948u;
    // NOP
    // 0x2c594c: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2c594cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2c5950: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c5950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c5954: 0x46094080  add.s       $f2, $f8, $f9
    ctx->pc = 0x2c5954u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
    // 0x2c5958: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2c5958u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c595c: 0x460a3001  sub.s       $f0, $f6, $f10
    ctx->pc = 0x2c595cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[10]);
    // 0x2c5960: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x2c5960u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c5964: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x2c5964u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c5968: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c5968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c596c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2c596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c5970: 0xe7b60044  swc1        $f22, 0x44($sp)
    ctx->pc = 0x2c5970u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2c5974: 0xe7a70048  swc1        $f7, 0x48($sp)
    ctx->pc = 0x2c5974u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2c5978:
    // 0x2c5978: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x2c5978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2c597c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2c597cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2c5980:
    // 0x2c5980: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c5980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c5984: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x2c5984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2c5988:
    // 0x2c5988: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c598c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c598cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5990: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c5994: 0xc4411184  lwc1        $f1, 0x1184($v0)
    ctx->pc = 0x2c5994u;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5998: 0x172602  srl         $a0, $s7, 24
    ctx->pc = 0x2c5998u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 23), 24));
    // 0x2c599c: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x2c599cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2c59a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c59a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c59a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c59a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c59a8: 0x179c02  srl         $s3, $s7, 16
    ctx->pc = 0x2c59a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 23), 16));
    // 0x2c59ac: 0x17aa02  srl         $s5, $s7, 8
    ctx->pc = 0x2c59acu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 23), 8));
    // 0x2c59b0: 0x32f100ff  andi        $s1, $s7, 0xFF
    ctx->pc = 0x2c59b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2c59b4: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c59b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c59b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c59bc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c59c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c59c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c59c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2c59c8:
    // 0x2c59c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c59cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c59d0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2c59d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2c59d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c59d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c59d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c59d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c59dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C59DCu;
    {
        const bool branch_taken_0x2c59dc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59DCu;
        // 0x2c59e0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59dc) {
            ctx->pc = 0x2C59C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c59c8;
        }
    }
    ctx->pc = 0x2C59E4u;
    // 0x2c59e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c59e8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2c59e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c59ec: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c59ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2c59f0: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2c59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c59f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2c59f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2c59f8: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2c59f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c59fc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2c59fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2c5a00: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2c5a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5a04: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c5a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c5a08: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2c5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5a0c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5A0Cu;
    {
        const bool branch_taken_0x2c5a0c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A0Cu;
        // 0x2c5a10: 0xe7a10060  swc1        $f1, 0x60($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a0c) {
            ctx->pc = 0x2C5A28u;
            goto label_2c5a28;
        }
    }
    ctx->pc = 0x2C5A14u;
    // 0x2c5a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a18: 0x0  nop
    ctx->pc = 0x2c5a18u;
    // NOP
    // 0x2c5a1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5a20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5A20u;
    {
        const bool branch_taken_0x2c5a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A20u;
        // 0x2c5a24: 0xc60c0018  lwc1        $f12, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a20) {
            ctx->pc = 0x2C5A48u;
            goto label_2c5a48;
        }
    }
    ctx->pc = 0x2C5A28u;
label_2c5a28:
    // 0x2c5a28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c5a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c5a2c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5a30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a38: 0x0  nop
    ctx->pc = 0x2c5a38u;
    // NOP
    // 0x2c5a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5a40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5a44: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x2c5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5a48:
    // 0x2c5a48: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5A48u;
    SET_GPR_U32(ctx, 31, 0x2C5A50u);
    ctx->pc = 0x2C5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A48u;
    // 0x2c5a4c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5A48u, 0x2C5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A50u;
label_2c5a50:
    // 0x2c5a50: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2c5a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2c5a54: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5A54u;
    {
        const bool branch_taken_0x2c5a54 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A54u;
        // 0x2c5a58: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a54) {
            ctx->pc = 0x2C5A70u;
            goto label_2c5a70;
        }
    }
    ctx->pc = 0x2C5A5Cu;
    // 0x2c5a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a60: 0x0  nop
    ctx->pc = 0x2c5a60u;
    // NOP
    // 0x2c5a64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5a64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5a68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5A68u;
    {
        const bool branch_taken_0x2c5a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A68u;
        // 0x2c5a6c: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a68) {
            ctx->pc = 0x2C5A90u;
            goto label_2c5a90;
        }
    }
    ctx->pc = 0x2C5A70u;
label_2c5a70:
    // 0x2c5a70: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2c5a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2c5a74: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a80: 0x0  nop
    ctx->pc = 0x2c5a80u;
    // NOP
    // 0x2c5a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5a88: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5a8c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2c5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5a90:
    // 0x2c5a90: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5A90u;
    SET_GPR_U32(ctx, 31, 0x2C5A98u);
    ctx->pc = 0x2C5A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A90u;
    // 0x2c5a94: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5A90u, 0x2C5A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A98u;
label_2c5a98:
    // 0x2c5a98: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x2c5a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2c5a9c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5A9Cu;
    {
        const bool branch_taken_0x2c5a9c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A9Cu;
        // 0x2c5aa0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a9c) {
            ctx->pc = 0x2C5AB8u;
            goto label_2c5ab8;
        }
    }
    ctx->pc = 0x2C5AA4u;
    // 0x2c5aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c5aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5aa8: 0x0  nop
    ctx->pc = 0x2c5aa8u;
    // NOP
    // 0x2c5aac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5ab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5AB0u;
    {
        const bool branch_taken_0x2c5ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AB0u;
        // 0x2c5ab4: 0xc60c0020  lwc1        $f12, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ab0) {
            ctx->pc = 0x2C5AD8u;
            goto label_2c5ad8;
        }
    }
    ctx->pc = 0x2C5AB8u;
label_2c5ab8:
    // 0x2c5ab8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2c5ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2c5abc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c5abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c5ac0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5ac8: 0x0  nop
    ctx->pc = 0x2c5ac8u;
    // NOP
    // 0x2c5acc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5accu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5ad0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5ad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5ad4: 0xc60c0020  lwc1        $f12, 0x20($s0)
    ctx->pc = 0x2c5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5ad8:
    // 0x2c5ad8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5AD8u;
    SET_GPR_U32(ctx, 31, 0x2C5AE0u);
    ctx->pc = 0x2C5ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5AD8u;
    // 0x2c5adc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5AD8u, 0x2C5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AE0u;
label_2c5ae0:
    // 0x2c5ae0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5AE0u;
    {
        const bool branch_taken_0x2c5ae0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2C5AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AE0u;
        // 0x2c5ae4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ae0) {
            ctx->pc = 0x2C5AFCu;
            goto label_2c5afc;
        }
    }
    ctx->pc = 0x2C5AE8u;
    // 0x2c5ae8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2c5ae8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5aec: 0x0  nop
    ctx->pc = 0x2c5aecu;
    // NOP
    // 0x2c5af0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5af4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5AF4u;
    {
        const bool branch_taken_0x2c5af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AF4u;
        // 0x2c5af8: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5af4) {
            ctx->pc = 0x2C5B1Cu;
            goto label_2c5b1c;
        }
    }
    ctx->pc = 0x2C5AFCu;
label_2c5afc:
    // 0x2c5afc: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x2c5afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x2c5b00: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2c5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2c5b04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c5b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c5b08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5b0c: 0x0  nop
    ctx->pc = 0x2c5b0cu;
    // NOP
    // 0x2c5b10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c5b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c5b14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c5b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c5b18: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x2c5b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c5b1c:
    // 0x2c5b1c: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C5B1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5B24u);
    ctx->pc = 0x2C5B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B1Cu;
    // 0x2c5b20: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C5B1Cu, 0x2C5B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B24u;
label_2c5b24:
    // 0x2c5b24: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2c5b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c5b28: 0x142400  sll         $a0, $s4, 16
    ctx->pc = 0x2c5b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2c5b2c: 0x162e00  sll         $a1, $s6, 24
    ctx->pc = 0x2c5b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
    // 0x2c5b30: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2c5b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c5b34: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2c5b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2c5b38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c5b3c: 0x132200  sll         $a0, $s3, 8
    ctx->pc = 0x2c5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x2c5b40: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2c5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c5b44: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2c5b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2c5b48: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2c5b48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5b4c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2c5b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2c5b50: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2c5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2c5b54: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c5b58: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2c5b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2c5b5c: 0x8e0b0028  lw          $t3, 0x28($s0)
    ctx->pc = 0x2c5b5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2c5b60: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2c5b60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b64: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x2c5b64u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x2c5b68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c5b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c5b6c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2c5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2c5b70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c5b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5b74: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x2C5B74u;
    SET_GPR_U32(ctx, 31, 0x2C5B7Cu);
    ctx->pc = 0x2C5B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B74u;
    // 0x2c5b78: 0x24091cf0  addiu       $t1, $zero, 0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x2C5B74u, 0x2C5B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5B7Cu;
label_2c5b7c:
    // 0x2c5b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5B80u;
    {
        const bool branch_taken_0x2c5b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B80u;
        // 0x2c5b84: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b80) {
            ctx->pc = 0x2C5B94u;
            goto label_2c5b94;
        }
    }
    ctx->pc = 0x2C5B88u;
    // 0x2c5b88: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2c5b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2c5b8c: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x2c5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2c5b90: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x2c5b90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_2c5b94:
    // 0x2c5b94: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x2c5b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2c5b98: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x2c5b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c5b9c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x2c5b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c5ba0: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x2c5ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c5ba4: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x2c5ba4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c5ba8: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x2c5ba8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c5bac: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x2c5bacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c5bb0: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2c5bb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c5bb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c5bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c5bb8: 0xc7b80160  lwc1        $f24, 0x160($sp)
    ctx->pc = 0x2c5bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2c5bbc: 0xc7b70158  lwc1        $f23, 0x158($sp)
    ctx->pc = 0x2c5bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c5bc0: 0xc7b60150  lwc1        $f22, 0x150($sp)
    ctx->pc = 0x2c5bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c5bc4: 0xc7b50148  lwc1        $f21, 0x148($sp)
    ctx->pc = 0x2c5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c5bc8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x2c5bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BCCu;
        // 0x2c5bd0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5BD4u;
    // 0x2c5bd4: 0x0  nop
    ctx->pc = 0x2c5bd4u;
    // NOP
    ctx->pc = 0x2c5bd8u;
}
