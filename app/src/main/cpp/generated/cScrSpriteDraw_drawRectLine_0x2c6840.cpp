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

// Function: cScrSpriteDraw_drawRectLine
// Address: 0x2c6840 - 0x2c6d48
void cScrSpriteDraw_drawRectLine_0x2c6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScrSpriteDraw_drawRectLine_0x2c6840");
#endif

    switch (ctx->pc) {
        case 0x2c68b4u: goto label_2c68b4;
        case 0x2c68c0u: goto label_2c68c0;
        case 0x2c6b58u: goto label_2c6b58;
        case 0x2c6ba0u: goto label_2c6ba0;
        case 0x2c6c00u: goto label_2c6c00;
        case 0x2c6c48u: goto label_2c6c48;
        case 0x2c6c90u: goto label_2c6c90;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6cfcu: goto label_2c6cfc;
        default: break;
    }

    ctx->pc = 0x2c6840u;

    // 0x2c6840: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2c6844: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2c6844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2c6848: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2c6848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2c684c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c684cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6850: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2c6850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2c6854: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c6854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6858: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x2c6858u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2c685c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c685cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6860: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x2c6860u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2c6864: 0x46008e86  mov.s       $f26, $f17
    ctx->pc = 0x2c6864u;
    ctx->f[26] = FPU_MOV_S(ctx->f[17]);
    // 0x2c6868: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2c6868u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2c686c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2c686cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2c6870: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2c6870u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2c6874: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2c6874u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2c6878: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c6878u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2c687c: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x2c687cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x2c6880: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c6880u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2c6884: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x2c6884u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
    // 0x2c6888: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2c6888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2c688c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2c688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2c6890: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2c6890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2c6894: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c6894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c6898: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c689c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2c689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c68a0: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2c68a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c68a4: 0x46006600  add.s       $f24, $f12, $f0
    ctx->pc = 0x2c68a4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2c68a8: 0x46016e40  add.s       $f25, $f13, $f1
    ctx->pc = 0x2c68a8u;
    ctx->f[25] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x2c68ac: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2C68ACu;
    SET_GPR_U32(ctx, 31, 0x2C68B4u);
    ctx->pc = 0x2C68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68ACu;
    // 0x2c68b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2C68ACu, 0x2C68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68B4u;
label_2c68b4:
    // 0x2c68b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c68b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c68b8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2C68B8u;
    SET_GPR_U32(ctx, 31, 0x2C68C0u);
    ctx->pc = 0x2C68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C68B8u;
    // 0x2c68bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2C68B8u, 0x2C68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68C0u;
label_2c68c0:
    // 0x2c68c0: 0x4600b847  neg.s       $f1, $f23
    ctx->pc = 0x2c68c0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
    // 0x2c68c4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x2c68c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c68c8: 0x4614b342  mul.s       $f13, $f22, $f20
    ctx->pc = 0x2c68c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x2c68cc: 0x4600b302  mul.s       $f12, $f22, $f0
    ctx->pc = 0x2c68ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2c68d0: 0x46000982  mul.s       $f6, $f1, $f0
    ctx->pc = 0x2c68d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c68d4: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2C68D4u;
    {
        const bool branch_taken_0x2c68d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C68D4u;
        // 0x2c68d8: 0x4614b8c2  mul.s       $f3, $f23, $f20 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c68d4) {
            ctx->pc = 0x2C6B34u;
            goto label_2c6b34;
        }
    }
    ctx->pc = 0x2C68DCu;
    // 0x2c68dc: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2c68e0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2c68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c68e4: 0x2442c320  addiu       $v0, $v0, -0x3CE0
    ctx->pc = 0x2c68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951712));
    // 0x2c68e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c68ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c68f0: 0x800008  jr          $a0
    ctx->pc = 0x2C68F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C68F8u: goto label_2c68f8;
            case 0x2C6998u: goto label_2c6998;
            case 0x2C69F8u: goto label_2c69f8;
            case 0x2C6A58u: goto label_2c6a58;
            case 0x2C6AC8u: goto label_2c6ac8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C68F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C68F8u;
label_2c68f8:
    // 0x2c68f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c68f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c68fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c68fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6900: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c6900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c6904: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c6904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c6908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c690c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2c690cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c6910: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6918: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2c6918u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2c691c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2c691cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6920: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2c6920u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2c6924: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2c6924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6928: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2c6928u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2c692c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2c692cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6930: 0x4603c140  add.s       $f5, $f24, $f3
    ctx->pc = 0x2c6930u;
    ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c6934: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2c6934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c6938: 0x4606c901  sub.s       $f4, $f25, $f6
    ctx->pc = 0x2c6938u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c693c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2c693cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6940: 0x4606c800  add.s       $f0, $f25, $f6
    ctx->pc = 0x2c6940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c6944: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2c6944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c6948: 0x4603c0c1  sub.s       $f3, $f24, $f3
    ctx->pc = 0x2c6948u;
    ctx->f[3] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c694c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2c694cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6950: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2c6950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c6954: 0x460c2981  sub.s       $f6, $f5, $f12
    ctx->pc = 0x2c6954u;
    ctx->f[6] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x2c6958: 0x460d2040  add.s       $f1, $f4, $f13
    ctx->pc = 0x2c6958u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[13]);
    // 0x2c695c: 0x460c1881  sub.s       $f2, $f3, $f12
    ctx->pc = 0x2c695cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x2c6960: 0x460d01c0  add.s       $f7, $f0, $f13
    ctx->pc = 0x2c6960u;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2c6964: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2c6964u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6968: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x2c6968u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x2c696c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2c696cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6970: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2c6970u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2c6974: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2c6974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6978: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x2c6978u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
    // 0x2c697c: 0xe7a70034  swc1        $f7, 0x34($sp)
    ctx->pc = 0x2c697cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6980: 0x460d2101  sub.s       $f4, $f4, $f13
    ctx->pc = 0x2c6980u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[13]);
    // 0x2c6984: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2c6984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6988: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c6988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c698c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2c698cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6990: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2C6990u;
    {
        const bool branch_taken_0x2c6990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6990u;
        // 0x2c6994: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6990) {
            ctx->pc = 0x2C6B34u;
            goto label_2c6b34;
        }
    }
    ctx->pc = 0x2C6998u;
label_2c6998:
    // 0x2c6998: 0x4603c1c0  add.s       $f7, $f24, $f3
    ctx->pc = 0x2c6998u;
    ctx->f[7] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c699c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c69a0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c69a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c69a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c69a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c69a8: 0x4606c981  sub.s       $f6, $f25, $f6
    ctx->pc = 0x2c69a8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c69ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c69acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c69b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c69b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c69b4: 0x460cc141  sub.s       $f5, $f24, $f12
    ctx->pc = 0x2c69b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
    // 0x2c69b8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2c69b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c69bc: 0x460c3901  sub.s       $f4, $f7, $f12
    ctx->pc = 0x2c69bcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[7], ctx->f[12]);
    // 0x2c69c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c69c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c69c4: 0x460d30c0  add.s       $f3, $f6, $f13
    ctx->pc = 0x2c69c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[13]);
    // 0x2c69c8: 0xe7b80000  swc1        $f24, 0x0($sp)
    ctx->pc = 0x2c69c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c69cc: 0x460dc840  add.s       $f1, $f25, $f13
    ctx->pc = 0x2c69ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[13]);
    // 0x2c69d0: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x2c69d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c69d4: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2c69d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c69d8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2c69d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c69dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2c69dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c69e0: 0xe7b90004  swc1        $f25, 0x4($sp)
    ctx->pc = 0x2c69e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c69e4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c69e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c69e8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2c69e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c69ec: 0xe7a70010  swc1        $f7, 0x10($sp)
    ctx->pc = 0x2c69ecu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c69f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C69F0u;
    {
        const bool branch_taken_0x2c69f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69F0u;
        // 0x2c69f4: 0xe7a60014  swc1        $f6, 0x14($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69f0) {
            ctx->pc = 0x2C6AB4u;
            goto label_2c6ab4;
        }
    }
    ctx->pc = 0x2C69F8u;
label_2c69f8:
    // 0x2c69f8: 0x4603c100  add.s       $f4, $f24, $f3
    ctx->pc = 0x2c69f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[3]);
    // 0x2c69fc: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c69fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c6a00: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c6a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c6a04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6a08: 0x4606c9c1  sub.s       $f7, $f25, $f6
    ctx->pc = 0x2c6a08u;
    ctx->f[7] = FPU_SUB_S(ctx->f[25], ctx->f[6]);
    // 0x2c6a0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a14: 0x460cc180  add.s       $f6, $f24, $f12
    ctx->pc = 0x2c6a14u;
    ctx->f[6] = FPU_ADD_S(ctx->f[24], ctx->f[12]);
    // 0x2c6a18: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x2c6a18u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6a1c: 0x460c2140  add.s       $f5, $f4, $f12
    ctx->pc = 0x2c6a1cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2c6a20: 0xe7b90034  swc1        $f25, 0x34($sp)
    ctx->pc = 0x2c6a20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6a24: 0x460d38c1  sub.s       $f3, $f7, $f13
    ctx->pc = 0x2c6a24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[13]);
    // 0x2c6a28: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2c6a28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6a2c: 0x460dc841  sub.s       $f1, $f25, $f13
    ctx->pc = 0x2c6a2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[13]);
    // 0x2c6a30: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x2c6a30u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6a34: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2c6a34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6a38: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2c6a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6a3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2c6a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6a40: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x2c6a40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6a44: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2c6a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6a48: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c6a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6a4c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6a50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C6A50u;
    {
        const bool branch_taken_0x2c6a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A50u;
        // 0x2c6a54: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a50) {
            ctx->pc = 0x2C6AB4u;
            goto label_2c6ab4;
        }
    }
    ctx->pc = 0x2C6A58u;
label_2c6a58:
    // 0x2c6a58: 0x4606c9c0  add.s       $f7, $f25, $f6
    ctx->pc = 0x2c6a58u;
    ctx->f[7] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c6a5c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c6a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c6a60: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c6a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c6a64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6a68: 0x4603c101  sub.s       $f4, $f24, $f3
    ctx->pc = 0x2c6a68u;
    ctx->f[4] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c6a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c6a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6a74: 0x460cc181  sub.s       $f6, $f24, $f12
    ctx->pc = 0x2c6a74u;
    ctx->f[6] = FPU_SUB_S(ctx->f[24], ctx->f[12]);
    // 0x2c6a78: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2c6a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6a7c: 0x460dc940  add.s       $f5, $f25, $f13
    ctx->pc = 0x2c6a7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[25], ctx->f[13]);
    // 0x2c6a80: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c6a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6a84: 0x460c20c1  sub.s       $f3, $f4, $f12
    ctx->pc = 0x2c6a84u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x2c6a88: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2c6a88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6a8c: 0x460d3840  add.s       $f1, $f7, $f13
    ctx->pc = 0x2c6a8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[13]);
    // 0x2c6a90: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x2c6a90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6a94: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2c6a94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6a98: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x2c6a98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6a9c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2c6a9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6aa0: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2c6aa0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6aa4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6aa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6aa8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2c6aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c6aac: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x2c6aacu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6ab0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x2c6ab0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2c6ab4:
    // 0x2c6ab4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2c6ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6ab8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c6ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c6abc: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2c6abcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6ac0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C6AC0u;
    {
        const bool branch_taken_0x2c6ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AC0u;
        // 0x2c6ac4: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ac0) {
            ctx->pc = 0x2C6B34u;
            goto label_2c6b34;
        }
    }
    ctx->pc = 0x2C6AC8u;
label_2c6ac8:
    // 0x2c6ac8: 0x4603c041  sub.s       $f1, $f24, $f3
    ctx->pc = 0x2c6ac8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[3]);
    // 0x2c6acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6ad0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6ad4: 0x4606c800  add.s       $f0, $f25, $f6
    ctx->pc = 0x2c6ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[6]);
    // 0x2c6ad8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2c6adc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2c6adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2c6ae0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c6ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c6ae4: 0x460cc140  add.s       $f5, $f24, $f12
    ctx->pc = 0x2c6ae4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[24], ctx->f[12]);
    // 0x2c6ae8: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x2c6ae8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6aec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2c6aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c6af0: 0x460dc901  sub.s       $f4, $f25, $f13
    ctx->pc = 0x2c6af0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[25], ctx->f[13]);
    // 0x2c6af4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2c6af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c6af8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x2c6af8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x2c6afc: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x2c6afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2c6b00: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2c6b00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6b04: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2c6b04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6b08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2c6b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6b0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2c6b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6b10: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x2c6b10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6b14: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x2c6b14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c6b18: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2c6b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c6b1c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2c6b1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6b20: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2c6b20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c6b24: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c6b24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6b28: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2c6b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2c6b2c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2c6b2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2c6b30: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2c6b30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2c6b34:
    // 0x2c6b34: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2c6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6b38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6b3c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c6b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b40: 0x153602  srl         $a2, $s5, 24
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 21), 24));
    // 0x2c6b44: 0x158402  srl         $s0, $s5, 16
    ctx->pc = 0x2c6b44u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 21), 16));
    // 0x2c6b48: 0x15a202  srl         $s4, $s5, 8
    ctx->pc = 0x2c6b48u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 21), 8));
    // 0x2c6b4c: 0x32b100ff  andi        $s1, $s5, 0xFF
    ctx->pc = 0x2c6b4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2c6b50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c6b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6b54: 0x0  nop
    ctx->pc = 0x2c6b54u;
    // NOP
label_2c6b58:
    // 0x2c6b58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c6b60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c6b64: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c6b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c6b68: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C6B68u;
    {
        const bool branch_taken_0x2c6b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2C6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B68u;
        // 0x2c6b6c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b68) {
            ctx->pc = 0x2C6B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6b58;
        }
    }
    ctx->pc = 0x2C6B70u;
    // 0x2c6b70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6b78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c6b7c: 0xc4401184  lwc1        $f0, 0x1184($v0)
    ctx->pc = 0x2c6b7cu;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6b84: 0x461a0841  sub.s       $f1, $f1, $f26
    ctx->pc = 0x2c6b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[26]);
    // 0x2c6b88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2c6b8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c6b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c6b90: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2c6b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6b98: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c6b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c6b9c: 0x0  nop
    ctx->pc = 0x2c6b9cu;
    // NOP
label_2c6ba0:
    // 0x2c6ba0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ba4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6ba8: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x2c6ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2c6bac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6bb0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c6bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c6bb4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C6BB4u;
    {
        const bool branch_taken_0x2c6bb4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BB4u;
        // 0x2c6bb8: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bb4) {
            ctx->pc = 0x2C6BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6ba0;
        }
    }
    ctx->pc = 0x2C6BBCu;
    // 0x2c6bbc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2c6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c6bc0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6BC0u;
    {
        const bool branch_taken_0x2c6bc0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BC0u;
        // 0x2c6bc4: 0x30c20001  andi        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bc0) {
            ctx->pc = 0x2C6BDCu;
            goto label_2c6bdc;
        }
    }
    ctx->pc = 0x2C6BC8u;
    // 0x2c6bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6bcc: 0x0  nop
    ctx->pc = 0x2c6bccu;
    // NOP
    // 0x2c6bd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6bd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6BD4u;
    {
        const bool branch_taken_0x2c6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BD4u;
        // 0x2c6bd8: 0xc66c0018  lwc1        $f12, 0x18($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bd4) {
            ctx->pc = 0x2C6BF8u;
            goto label_2c6bf8;
        }
    }
    ctx->pc = 0x2C6BDCu;
label_2c6bdc:
    // 0x2c6bdc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c6be0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6be8: 0x0  nop
    ctx->pc = 0x2c6be8u;
    // NOP
    // 0x2c6bec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6bf0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c6bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c6bf4: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x2c6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6bf8:
    // 0x2c6bf8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6BF8u;
    SET_GPR_U32(ctx, 31, 0x2C6C00u);
    ctx->pc = 0x2C6BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BF8u;
    // 0x2c6bfc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6BF8u, 0x2C6C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C00u;
label_2c6c00:
    // 0x2c6c00: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2c6c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2c6c04: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6C04u;
    {
        const bool branch_taken_0x2c6c04 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C04u;
        // 0x2c6c08: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c04) {
            ctx->pc = 0x2C6C20u;
            goto label_2c6c20;
        }
    }
    ctx->pc = 0x2C6C0Cu;
    // 0x2c6c0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6c0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c10: 0x0  nop
    ctx->pc = 0x2c6c10u;
    // NOP
    // 0x2c6c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6c18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6C18u;
    {
        const bool branch_taken_0x2c6c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C18u;
        // 0x2c6c1c: 0xc66c0024  lwc1        $f12, 0x24($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c18) {
            ctx->pc = 0x2C6C40u;
            goto label_2c6c40;
        }
    }
    ctx->pc = 0x2C6C20u;
label_2c6c20:
    // 0x2c6c20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c6c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2c6c24: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c6c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c30: 0x0  nop
    ctx->pc = 0x2c6c30u;
    // NOP
    // 0x2c6c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6c38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c6c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c6c3c: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x2c6c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6c40:
    // 0x2c6c40: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6C40u;
    SET_GPR_U32(ctx, 31, 0x2C6C48u);
    ctx->pc = 0x2C6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C40u;
    // 0x2c6c44: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6C40u, 0x2C6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C48u;
label_2c6c48:
    // 0x2c6c48: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x2c6c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2c6c4c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6C4Cu;
    {
        const bool branch_taken_0x2c6c4c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C4Cu;
        // 0x2c6c50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c4c) {
            ctx->pc = 0x2C6C68u;
            goto label_2c6c68;
        }
    }
    ctx->pc = 0x2C6C54u;
    // 0x2c6c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c6c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c58: 0x0  nop
    ctx->pc = 0x2c6c58u;
    // NOP
    // 0x2c6c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6c60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6C60u;
    {
        const bool branch_taken_0x2c6c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C60u;
        // 0x2c6c64: 0xc66c0020  lwc1        $f12, 0x20($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c60) {
            ctx->pc = 0x2C6C88u;
            goto label_2c6c88;
        }
    }
    ctx->pc = 0x2C6C68u;
label_2c6c68:
    // 0x2c6c68: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x2c6c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2c6c6c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c6c70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c78: 0x0  nop
    ctx->pc = 0x2c6c78u;
    // NOP
    // 0x2c6c7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6c80: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c6c80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c6c84: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x2c6c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6c88:
    // 0x2c6c88: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6C88u;
    SET_GPR_U32(ctx, 31, 0x2C6C90u);
    ctx->pc = 0x2C6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C88u;
    // 0x2c6c8c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6C88u, 0x2C6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C90u;
label_2c6c90:
    // 0x2c6c90: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6C90u;
    {
        const bool branch_taken_0x2c6c90 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2C6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C90u;
        // 0x2c6c94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c90) {
            ctx->pc = 0x2C6CACu;
            goto label_2c6cac;
        }
    }
    ctx->pc = 0x2C6C98u;
    // 0x2c6c98: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2c6c98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6c9c: 0x0  nop
    ctx->pc = 0x2c6c9cu;
    // NOP
    // 0x2c6ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6ca4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6CA4u;
    {
        const bool branch_taken_0x2c6ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CA4u;
        // 0x2c6ca8: 0xc66c001c  lwc1        $f12, 0x1C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ca4) {
            ctx->pc = 0x2C6CCCu;
            goto label_2c6ccc;
        }
    }
    ctx->pc = 0x2C6CACu;
label_2c6cac:
    // 0x2c6cac: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x2c6cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x2c6cb0: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2c6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x2c6cb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c6cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c6cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6cbc: 0x0  nop
    ctx->pc = 0x2c6cbcu;
    // NOP
    // 0x2c6cc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6cc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c6cc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c6cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2c6cc8: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x2c6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2c6ccc:
    // 0x2c6ccc: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2C6CCCu;
    SET_GPR_U32(ctx, 31, 0x2C6CD4u);
    ctx->pc = 0x2C6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6CCCu;
    // 0x2c6cd0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2C6CCCu, 0x2C6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CD4u;
label_2c6cd4:
    // 0x2c6cd4: 0x121c00  sll         $v1, $s2, 16
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x2c6cd8: 0x163600  sll         $a2, $s6, 24
    ctx->pc = 0x2c6cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 24));
    // 0x2c6cdc: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x2c6cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x2c6ce0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2c6ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2c6ce4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2c6ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2c6ce8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c6cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cf0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2c6cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2c6cf4: 0xc057c2e  jal         func_15F0B8
    ctx->pc = 0x2C6CF4u;
    SET_GPR_U32(ctx, 31, 0x2C6CFCu);
    ctx->pc = 0x2C6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6CF4u;
    // 0x2c6cf8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F0B8u, 0x2C6CF4u, 0x2C6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CFCu;
label_2c6cfc:
    // 0x2c6cfc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2c6cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c6d00: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2c6d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c6d04: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2c6d04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c6d08: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2c6d08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c6d0c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2c6d0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6d10: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2c6d10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6d14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c6d14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6d18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c6d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6d1c: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x2c6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2c6d20: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x2c6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2c6d24: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2c6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2c6d28: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2c6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2c6d2c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2c6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2c6d30: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c6d34: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D38u;
        // 0x2c6d3c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6D40u;
    // 0x2c6d40: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x2c6d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2c6d44: 0x0  nop
    ctx->pc = 0x2c6d44u;
    // NOP
    ctx->pc = 0x2c6d48u;
}
