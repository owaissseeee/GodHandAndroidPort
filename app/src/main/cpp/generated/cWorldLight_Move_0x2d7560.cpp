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

// Function: cWorldLight_Move
// Address: 0x2d7560 - 0x2d7e50
void cWorldLight_Move_0x2d7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Move_0x2d7560");
#endif

    switch (ctx->pc) {
        case 0x2d75e8u: goto label_2d75e8;
        case 0x2d7668u: goto label_2d7668;
        case 0x2d7680u: goto label_2d7680;
        case 0x2d76a0u: goto label_2d76a0;
        case 0x2d76c0u: goto label_2d76c0;
        case 0x2d7860u: goto label_2d7860;
        case 0x2d786cu: goto label_2d786c;
        case 0x2d78c0u: goto label_2d78c0;
        case 0x2d7998u: goto label_2d7998;
        case 0x2d79acu: goto label_2d79ac;
        case 0x2d7a10u: goto label_2d7a10;
        case 0x2d7a28u: goto label_2d7a28;
        case 0x2d7b10u: goto label_2d7b10;
        case 0x2d7c10u: goto label_2d7c10;
        case 0x2d7c38u: goto label_2d7c38;
        case 0x2d7c48u: goto label_2d7c48;
        case 0x2d7c68u: goto label_2d7c68;
        case 0x2d7ca0u: goto label_2d7ca0;
        case 0x2d7ca8u: goto label_2d7ca8;
        case 0x2d7cb8u: goto label_2d7cb8;
        case 0x2d7d2cu: goto label_2d7d2c;
        case 0x2d7d34u: goto label_2d7d34;
        case 0x2d7d40u: goto label_2d7d40;
        case 0x2d7d50u: goto label_2d7d50;
        case 0x2d7d94u: goto label_2d7d94;
        default: break;
    }

    ctx->pc = 0x2d7560u;

    // 0x2d7560: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2d7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2d7564: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d7564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d7568: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2d7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2d756c: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x2d756cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x2d7570: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d7570u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7574: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2d7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2d7578: 0x24647a78  addiu       $a0, $v1, 0x7A78
    ctx->pc = 0x2d7578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
    // 0x2d757c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2d757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2d7580: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2d7580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2d7584: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2d7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2d7588: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2d7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2d758c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2d758cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2d7590: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2d7590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2d7594: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2d7594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2d7598: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2d7598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2d759c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d759cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d75a0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x2d75a0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2d75a4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x2d75a4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2d75a8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x2d75a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2d75ac: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2d75acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2d75b0: 0x14400216  bnez        $v0, . + 4 + (0x216 << 2)
    ctx->pc = 0x2D75B0u;
    {
        const bool branch_taken_0x2d75b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75B0u;
        // 0x2d75b4: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75b0) {
            ctx->pc = 0x2D7E0Cu;
            goto label_2d7e0c;
        }
    }
    ctx->pc = 0x2D75B8u;
    // 0x2d75b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2d75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d75bc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2d75bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2d75c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d75c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d75c4: 0x14400212  bnez        $v0, . + 4 + (0x212 << 2)
    ctx->pc = 0x2D75C4u;
    {
        const bool branch_taken_0x2d75c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75C4u;
        // 0x2d75c8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75c4) {
            ctx->pc = 0x2D7E10u;
            goto label_2d7e10;
        }
    }
    ctx->pc = 0x2D75CCu;
    // 0x2d75cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d75ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d75d0: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x2d75d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d75d4: 0x8e226120  lw          $v0, 0x6120($s1)
    ctx->pc = 0x2d75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24864)));
    // 0x2d75d8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D75D8u;
    {
        const bool branch_taken_0x2d75d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D75D8u;
        // 0x2d75dc: 0xae206124  sw          $zero, 0x6124($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d75d8) {
            ctx->pc = 0x2D76A0u;
            goto label_2d76a0;
        }
    }
    ctx->pc = 0x2D75E0u;
    // 0x2d75e0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2D75E0u;
    SET_GPR_U32(ctx, 31, 0x2D75E8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2D75E0u, 0x2D75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D75E8u;
label_2d75e8:
    // 0x2d75e8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2d75e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d75ec: 0xc44300b8  lwc1        $f3, 0xB8($v0)
    ctx->pc = 0x2d75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d75f0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d75f4: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2d75f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d75f8: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2d75f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d75fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d75fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7600: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d7600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7604: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d7604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d7608: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d7608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d760c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2d760cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d7610: 0x13a30007  beq         $sp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7610u;
    {
        const bool branch_taken_0x2d7610 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D7614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7610u;
        // 0x2d7614: 0xe462000c  swc1        $f2, 0xC($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7610) {
            ctx->pc = 0x2D7630u;
            goto label_2d7630;
        }
    }
    ctx->pc = 0x2D7618u;
    // 0x2d7618: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d7618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d761c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7620: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d7620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7624: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d7624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7628: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d7628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d762c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d762cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d7630:
    // 0x2d7630: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d7630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7634: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d7634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7638: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d763c: 0x8e236120  lw          $v1, 0x6120($s1)
    ctx->pc = 0x2d763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24864)));
    // 0x2d7640: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d7640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7644: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d7644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d7648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d764c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D764Cu;
    {
        const bool branch_taken_0x2d764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D764Cu;
        // 0x2d7650: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d764c) {
            ctx->pc = 0x2D76A0u;
            goto label_2d76a0;
        }
    }
    ctx->pc = 0x2D7654u;
    // 0x2d7654: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2d7654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7658: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d7658u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d765c: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d7660: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d7660u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7664: 0x0  nop
    ctx->pc = 0x2d7664u;
    // NOP
label_2d7668:
    // 0x2d7668: 0x8e446120  lw          $a0, 0x6120($s2)
    ctx->pc = 0x2d7668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24864)));
    // 0x2d766c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2d766cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7670: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d7670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7674: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d7674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2d7678: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2D7678u;
    SET_GPR_U32(ctx, 31, 0x2D7680u);
    ctx->pc = 0x2D767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7678u;
    // 0x2d767c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2D7678u, 0x2D7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7680u;
label_2d7680:
    // 0x2d7680: 0x1056003a  beq         $v0, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D7680u;
    {
        const bool branch_taken_0x2d7680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7680u;
        // 0x2d7684: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7680) {
            ctx->pc = 0x2D776Cu;
            goto label_2d776c;
        }
    }
    ctx->pc = 0x2D7688u;
    // 0x2d7688: 0x8e436120  lw          $v1, 0x6120($s2)
    ctx->pc = 0x2d7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24864)));
    // 0x2d768c: 0x26340050  addiu       $s4, $s1, 0x50
    ctx->pc = 0x2d768cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2d7690: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7694: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d7694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d7698: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D7698u;
    {
        const bool branch_taken_0x2d7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7698u;
        // 0x2d769c: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7698) {
            ctx->pc = 0x2D7668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7668;
        }
    }
    ctx->pc = 0x2D76A0u;
label_2d76a0:
    // 0x2d76a0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d76a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d76a4: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x2d76a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d76a8: 0x8e026284  lw          $v0, 0x6284($s0)
    ctx->pc = 0x2d76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25220)));
    // 0x2d76ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2d76acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2d76b0: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D76B0u;
    {
        const bool branch_taken_0x2d76b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D76B0u;
        // 0x2d76b4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d76b0) {
            ctx->pc = 0x2D7820u;
            goto label_2d7820;
        }
    }
    ctx->pc = 0x2D76B8u;
    // 0x2d76b8: 0xc0b63ac  jal         func_2D8EB0
    ctx->pc = 0x2D76B8u;
    SET_GPR_U32(ctx, 31, 0x2D76C0u);
    ctx->pc = 0x2D76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D76B8u;
    // 0x2d76bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8EB0u, 0x2D76B8u, 0x2D76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D76C0u;
label_2d76c0:
    // 0x2d76c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d76c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76c4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x2d76c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x2d76c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d76c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d76cc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2d76ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2d76d0: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x2d76d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x2d76d4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2d76d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2d76d8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2d76d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d76dc: 0x54600028  bnel        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D76DCu;
    {
        const bool branch_taken_0x2d76dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d76dc) {
            ctx->pc = 0x2D76E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D76DCu;
            // 0x2d76e0: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7780u;
            goto label_2d7780;
        }
    }
    ctx->pc = 0x2D76E4u;
    // 0x2d76e4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2d76e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d76e8: 0xc6016150  lwc1        $f1, 0x6150($s0)
    ctx->pc = 0x2d76e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d76ec: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d76ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d76f0: 0xc6026154  lwc1        $f2, 0x6154($s0)
    ctx->pc = 0x2d76f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d76f4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2d76f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2d76f8: 0xc6036158  lwc1        $f3, 0x6158($s0)
    ctx->pc = 0x2d76f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d76fc: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2d76fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2d7700: 0xc604615c  lwc1        $f4, 0x615C($s0)
    ctx->pc = 0x2d7700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d7704: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d7704u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d7708: 0xc6056160  lwc1        $f5, 0x6160($s0)
    ctx->pc = 0x2d7708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d770c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d770cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7710: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2d7710u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2d7714: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2d7714u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2d7718: 0xe6016150  swc1        $f1, 0x6150($s0)
    ctx->pc = 0x2d7718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24912), bits); }
    // 0x2d771c: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x2d771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7720: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d7720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d7724: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d7724u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d7728: 0xe6026154  swc1        $f2, 0x6154($s0)
    ctx->pc = 0x2d7728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24916), bits); }
    // 0x2d772c: 0x92a20004  lbu         $v0, 0x4($s5)
    ctx->pc = 0x2d772cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d7730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7734: 0x0  nop
    ctx->pc = 0x2d7734u;
    // NOP
    // 0x2d7738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d773c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d773cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d7740: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d7740u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d7744: 0xe6036158  swc1        $f3, 0x6158($s0)
    ctx->pc = 0x2d7744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24920), bits); }
    // 0x2d7748: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x2d7748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x2d774c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d774cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7750: 0x0  nop
    ctx->pc = 0x2d7750u;
    // NOP
    // 0x2d7754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7758: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d7758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d775c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d775cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d7760: 0xe604615c  swc1        $f4, 0x615C($s0)
    ctx->pc = 0x2d7760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24924), bits); }
    // 0x2d7764: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2D7764u;
    {
        const bool branch_taken_0x2d7764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7764u;
        // 0x2d7768: 0x92a20006  lbu         $v0, 0x6($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7764) {
            ctx->pc = 0x2D7800u;
            goto label_2d7800;
        }
    }
    ctx->pc = 0x2D776Cu;
label_2d776c:
    // 0x2d776c: 0x8e426120  lw          $v0, 0x6120($s2)
    ctx->pc = 0x2d776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24864)));
    // 0x2d7770: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2d7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2d7774: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x2d7774u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2d7778: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x2D7778u;
    {
        const bool branch_taken_0x2d7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7778u;
        // 0x2d777c: 0xae436124  sw          $v1, 0x6124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24868), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7778) {
            ctx->pc = 0x2D76A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d76a0;
        }
    }
    ctx->pc = 0x2D7780u;
label_2d7780:
    // 0x2d7780: 0xc6016150  lwc1        $f1, 0x6150($s0)
    ctx->pc = 0x2d7780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7784: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d7784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d7788: 0xc6026154  lwc1        $f2, 0x6154($s0)
    ctx->pc = 0x2d7788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d778c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2d778cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2d7790: 0xc6036158  lwc1        $f3, 0x6158($s0)
    ctx->pc = 0x2d7790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7794: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2d7794u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2d7798: 0xc604615c  lwc1        $f4, 0x615C($s0)
    ctx->pc = 0x2d7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d779c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2d779cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2d77a0: 0xc6056160  lwc1        $f5, 0x6160($s0)
    ctx->pc = 0x2d77a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d77a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d77a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d77a8: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2d77a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2d77ac: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x2d77acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2d77b0: 0xe6016150  swc1        $f1, 0x6150($s0)
    ctx->pc = 0x2d77b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24912), bits); }
    // 0x2d77b4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d77b8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d77b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d77bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d77bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d77c0: 0xe6026154  swc1        $f2, 0x6154($s0)
    ctx->pc = 0x2d77c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24916), bits); }
    // 0x2d77c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2d77c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d77c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d77c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d77cc: 0x0  nop
    ctx->pc = 0x2d77ccu;
    // NOP
    // 0x2d77d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d77d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d77d4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d77d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d77d8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2d77d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2d77dc: 0xe6036158  swc1        $f3, 0x6158($s0)
    ctx->pc = 0x2d77dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24920), bits); }
    // 0x2d77e0: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2d77e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2d77e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d77e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d77e8: 0x0  nop
    ctx->pc = 0x2d77e8u;
    // NOP
    // 0x2d77ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d77ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d77f0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d77f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d77f4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2d77f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2d77f8: 0xe604615c  swc1        $f4, 0x615C($s0)
    ctx->pc = 0x2d77f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24924), bits); }
    // 0x2d77fc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d77fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2d7800:
    // 0x2d7800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7804: 0x0  nop
    ctx->pc = 0x2d7804u;
    // NOP
    // 0x2d7808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d780c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x2d780cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x2d7810: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2d7810u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2d7814: 0xe6056160  swc1        $f5, 0x6160($s0)
    ctx->pc = 0x2d7814u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24928), bits); }
    // 0x2d7818: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d7818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d781c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2d781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2d7820:
    // 0x2d7820: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x2d7820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2d7824: 0xaca26138  sw          $v0, 0x6138($a1)
    ctx->pc = 0x2d7824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24888), GPR_U32(ctx, 2));
    // 0x2d7828: 0xaca06134  sw          $zero, 0x6134($a1)
    ctx->pc = 0x2d7828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24884), GPR_U32(ctx, 0));
    // 0x2d782c: 0xaca26140  sw          $v0, 0x6140($a1)
    ctx->pc = 0x2d782cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24896), GPR_U32(ctx, 2));
    // 0x2d7830: 0xaca2613c  sw          $v0, 0x613C($a1)
    ctx->pc = 0x2d7830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24892), GPR_U32(ctx, 2));
    // 0x2d7834: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2d7834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d7838: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2d7838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2d783c: 0x8c624c58  lw          $v0, 0x4C58($v1)
    ctx->pc = 0x2d783cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C58u));
    // 0x2d7840: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d7840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d7844: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x2d7844u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d7848: 0x5283006c  beql        $s4, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2D7848u;
    {
        const bool branch_taken_0x2d7848 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d7848) {
            ctx->pc = 0x2D784Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7848u;
            // 0x2d784c: 0x92a50000  lbu         $a1, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D79FCu;
            goto label_2d79fc;
        }
    }
    ctx->pc = 0x2D7850u;
    // 0x2d7850: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2d7850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7854: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2d7854u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7858: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d7858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d785c: 0x0  nop
    ctx->pc = 0x2d785cu;
    // NOP
label_2d7860:
    // 0x2d7860: 0x26970004  addiu       $s7, $s4, 0x4
    ctx->pc = 0x2d7860u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2d7864: 0xc0b5d2e  jal         func_2D74B8
    ctx->pc = 0x2D7864u;
    SET_GPR_U32(ctx, 31, 0x2D786Cu);
    ctx->pc = 0x2D7868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7864u;
    // 0x2d7868: 0x944402fe  lhu         $a0, 0x2FE($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D74B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D74B8u, 0x2D7864u, 0x2D786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D786Cu;
label_2d786c:
    // 0x2d786c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D786Cu;
    {
        const bool branch_taken_0x2d786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D786Cu;
        // 0x2d7870: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d786c) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D7874u;
    // 0x2d7874: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2d7874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d7878: 0x8ca40250  lw          $a0, 0x250($a1)
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x2d787c: 0x4800058  bltz        $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2D787Cu;
    {
        const bool branch_taken_0x2d787c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2D7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D787Cu;
        // 0x2d7880: 0x30828000  andi        $v0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d787c) {
            ctx->pc = 0x2D79E0u;
            goto label_2d79e0;
        }
    }
    ctx->pc = 0x2D7884u;
    // 0x2d7884: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2D7884u;
    {
        const bool branch_taken_0x2d7884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7884u;
        // 0x2d7888: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7884) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D788Cu;
    // 0x2d788c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2d788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2d7890: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2d7890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2d7894: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2d7898: 0xaca20250  sw          $v0, 0x250($a1)
    ctx->pc = 0x2d7898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 592), GPR_U32(ctx, 2));
    // 0x2d789c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d78a0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2d78a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d78a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d78a8: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D78A8u;
    {
        const bool branch_taken_0x2d78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78A8u;
        // 0x2d78ac: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78a8) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D78B0u;
    // 0x2d78b0: 0x908502fd  lbu         $a1, 0x2FD($a0)
    ctx->pc = 0x2d78b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 765)));
    // 0x2d78b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2d78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2d78b8: 0xc0b0c64  jal         func_2C3190
    ctx->pc = 0x2D78B8u;
    SET_GPR_U32(ctx, 31, 0x2D78C0u);
    ctx->pc = 0x2D78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D78B8u;
    // 0x2d78bc: 0x2444ea60  addiu       $a0, $v0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3190u, 0x2D78B8u, 0x2D78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D78C0u;
label_2d78c0:
    // 0x2d78c0: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D78C0u;
    {
        const bool branch_taken_0x2d78c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78C0u;
        // 0x2d78c4: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78c0) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D78C8u;
    // 0x2d78c8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d78cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d78ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d78d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d78d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d78d4: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x2d78d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d78d8: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2d78d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78dc: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2d78dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d78e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d78e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d78e4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d78e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d78e8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2d78e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d78ec: 0x13b60007  beq         $sp, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D78ECu;
    {
        const bool branch_taken_0x2d78ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 22));
        ctx->pc = 0x2D78F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78ECu;
        // 0x2d78f0: 0xe6c3000c  swc1        $f3, 0xC($s6) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78ec) {
            ctx->pc = 0x2D790Cu;
            goto label_2d790c;
        }
    }
    ctx->pc = 0x2D78F4u;
    // 0x2d78f4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d78f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d78f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d78fc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d78fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7900: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d7900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7904: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d7904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d7908: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d7908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2d790c:
    // 0x2d790c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2d790cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7910: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d7914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7918: 0x0  nop
    ctx->pc = 0x2d7918u;
    // NOP
    // 0x2d791c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d791cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d7920: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2d7920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d7924: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2d7924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d7928: 0xa04002cc  sb          $zero, 0x2CC($v0)
    ctx->pc = 0x2d7928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 716), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d792c: 0x8fc66130  lw          $a2, 0x6130($fp)
    ctx->pc = 0x2d792cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24880)));
    // 0x2d7930: 0x50c0002a  beql        $a2, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7930u;
    {
        const bool branch_taken_0x2d7930 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7930) {
            ctx->pc = 0x2D7934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7930u;
            // 0x2d7934: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D79DCu;
            goto label_2d79dc;
        }
    }
    ctx->pc = 0x2D7938u;
    // 0x2d7938: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d793c: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x2d793cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x2d7940: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x2d7940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x2d7944: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7944u;
    {
        const bool branch_taken_0x2d7944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7944u;
        // 0x2d7948: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7944) {
            ctx->pc = 0x2D7954u;
            goto label_2d7954;
        }
    }
    ctx->pc = 0x2D794Cu;
    // 0x2d794c: 0x28620600  slti        $v0, $v1, 0x600
    ctx->pc = 0x2d794cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1536) ? 1 : 0);
    // 0x2d7950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d7950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7954:
    // 0x2d7954: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2d7954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2d7958: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D7958u;
    {
        const bool branch_taken_0x2d7958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7958u;
        // 0x2d795c: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7958) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D7960u;
    // 0x2d7960: 0x8c8204a8  lw          $v0, 0x4A8($a0)
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1192)));
    // 0x2d7964: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2d7964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2d7968: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d7968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d796c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D796Cu;
    {
        const bool branch_taken_0x2d796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D796Cu;
        // 0x2d7970: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d796c) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D7974u;
    // 0x2d7974: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7978: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d797c: 0x6000018  bltz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D797Cu;
    {
        const bool branch_taken_0x2d797c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2D7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D797Cu;
        // 0x2d7980: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d797c) {
            ctx->pc = 0x2D79E0u;
            goto label_2d79e0;
        }
    }
    ctx->pc = 0x2D7984u;
    // 0x2d7984: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7988: 0x2041818  mult        $v1, $s0, $a0
    ctx->pc = 0x2d7988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d798c: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x2d798cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d7990: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2d7990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7994: 0x24710010  addiu       $s1, $v1, 0x10
    ctx->pc = 0x2d7994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2d7998:
    // 0x2d7998: 0x8e646130  lw          $a0, 0x6130($s3)
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24880)));
    // 0x2d799c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79a0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d79a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d79a4: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2D79A4u;
    SET_GPR_U32(ctx, 31, 0x2D79ACu);
    ctx->pc = 0x2D79A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D79A4u;
    // 0x2d79a8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2D79A4u, 0x2D79ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D79ACu;
label_2d79ac:
    // 0x2d79ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D79ACu;
    {
        const bool branch_taken_0x2d79ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79ACu;
        // 0x2d79b0: 0x2631ffb0  addiu       $s1, $s1, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79ac) {
            ctx->pc = 0x2D79C8u;
            goto label_2d79c8;
        }
    }
    ctx->pc = 0x2D79B4u;
    // 0x2d79b4: 0x8e626130  lw          $v0, 0x6130($s3)
    ctx->pc = 0x2d79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24880)));
    // 0x2d79b8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d79b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d79bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d79c0: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x2d79c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2d79c4: 0xa08302cc  sb          $v1, 0x2CC($a0)
    ctx->pc = 0x2d79c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 716), (uint8_t)GPR_U32(ctx, 3));
label_2d79c8:
    // 0x2d79c8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d79c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2d79cc: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2D79CCu;
    {
        const bool branch_taken_0x2d79cc = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x2D79D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79CCu;
        // 0x2d79d0: 0x2652ffb0  addiu       $s2, $s2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79cc) {
            ctx->pc = 0x2D7998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7998;
        }
    }
    ctx->pc = 0x2D79D4u;
    // 0x2d79d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D79D4u;
    {
        const bool branch_taken_0x2d79d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D79D4u;
        // 0x2d79d8: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d79d4) {
            ctx->pc = 0x2D79E4u;
            goto label_2d79e4;
        }
    }
    ctx->pc = 0x2D79DCu;
label_2d79dc:
    // 0x2d79dc: 0xa04002cc  sb          $zero, 0x2CC($v0)
    ctx->pc = 0x2d79dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 716), (uint8_t)GPR_U32(ctx, 0));
label_2d79e0:
    // 0x2d79e0: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2d79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
label_2d79e4:
    // 0x2d79e4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2d79e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d79e8: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x2d79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19544)));
    // 0x2d79ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2d79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d79f0: 0x5682ff9b  bnel        $s4, $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2D79F0u;
    {
        const bool branch_taken_0x2d79f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d79f0) {
            ctx->pc = 0x2D79F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D79F0u;
            // 0x2d79f4: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7860;
        }
    }
    ctx->pc = 0x2D79F8u;
    // 0x2d79f8: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x2d79f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2d79fc:
    // 0x2d79fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7a00: 0x92a60001  lbu         $a2, 0x1($s5)
    ctx->pc = 0x2d7a00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x2d7a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d7a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7a08: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2D7A08u;
    SET_GPR_U32(ctx, 31, 0x2D7A10u);
    ctx->pc = 0x2D7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7A08u;
    // 0x2d7a0c: 0x92a70002  lbu         $a3, 0x2($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2D7A08u, 0x2D7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7A10u;
label_2d7a10:
    // 0x2d7a10: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d7a14: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2d7a14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2d7a18: 0x24694700  addiu       $t1, $v1, 0x4700
    ctx->pc = 0x2d7a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x2d7a1c: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2d7a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d7a20: 0x20b1018  mult        $v0, $s0, $t3
    ctx->pc = 0x2d7a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d7a24: 0x0  nop
    ctx->pc = 0x2d7a24u;
    // NOP
label_2d7a28:
    // 0x2d7a28: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x2d7a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2d7a2c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x2d7a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x2d7a30: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2D7A30u;
    {
        const bool branch_taken_0x2d7a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A30u;
        // 0x2d7a34: 0x260a0001  addiu       $t2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a30) {
            ctx->pc = 0x2D7B80u;
            goto label_2d7b80;
        }
    }
    ctx->pc = 0x2D7A38u;
    // 0x2d7a38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7a3c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D7A3Cu;
    {
        const bool branch_taken_0x2d7a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A3Cu;
        // 0x2d7a40: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a3c) {
            ctx->pc = 0x2D7B80u;
            goto label_2d7b80;
        }
    }
    ctx->pc = 0x2D7A44u;
    // 0x2d7a44: 0x8d220078  lw          $v0, 0x78($t1)
    ctx->pc = 0x2d7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x2d7a48: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x2d7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x2d7a4c: 0x24a70010  addiu       $a3, $a1, 0x10
    ctx->pc = 0x2d7a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2d7a50: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2d7a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d7a54: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x2d7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d7a58: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2d7a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d7a5c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d7a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d7a60: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x2d7a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2d7a64: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x2d7a64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7a68: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x2d7a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2d7a6c: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x2d7a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7a70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d7a74: 0x10e60007  beq         $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D7A74u;
    {
        const bool branch_taken_0x2d7a74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x2D7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7A74u;
        // 0x2d7a78: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7a74) {
            ctx->pc = 0x2D7A94u;
            goto label_2d7a94;
        }
    }
    ctx->pc = 0x2D7A7Cu;
    // 0x2d7a7c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2d7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7a80: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2d7a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2d7a84: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2d7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7a88: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x2d7a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x2d7a8c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2d7a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7a90: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2d7a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2d7a94:
    // 0x2d7a94: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2d7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2d7a98: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2d7a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d7a9c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7A9Cu;
    {
        const bool branch_taken_0x2d7a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7a9c) {
            ctx->pc = 0x2D7AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7A9Cu;
            // 0x2d7aa0: 0x24a30030  addiu       $v1, $a1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7AC0u;
            goto label_2d7ac0;
        }
    }
    ctx->pc = 0x2D7AA4u;
    // 0x2d7aa4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2d7aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7aa8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x2d7aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2d7aac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7ab0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d7ab4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ab8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d7abc: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x2d7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2d7ac0:
    // 0x2d7ac0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x2d7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d7ac4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D7AC4u;
    {
        const bool branch_taken_0x2d7ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d7ac4) {
            ctx->pc = 0x2D7AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7AC4u;
            // 0x2d7ac8: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7AE8u;
            goto label_2d7ae8;
        }
    }
    ctx->pc = 0x2D7ACCu;
    // 0x2d7acc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x2d7accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ad0: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x2d7ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2d7ad4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7ad8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2d7ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d7adc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d7adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ae0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d7ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d7ae4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2d7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d7ae8:
    // 0x2d7ae8: 0x24a6004c  addiu       $a2, $a1, 0x4C
    ctx->pc = 0x2d7ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x2d7aec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d7aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7af0: 0x2483004c  addiu       $v1, $a0, 0x4C
    ctx->pc = 0x2d7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x2d7af4: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x2d7af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x2d7af8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2d7af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7afc: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2d7afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7b00: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2d7b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2d7b04: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x2d7b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7b08: 0xe4a10048  swc1        $f1, 0x48($a1)
    ctx->pc = 0x2d7b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2d7b0c: 0x0  nop
    ctx->pc = 0x2d7b0cu;
    // NOP
label_2d7b10:
    // 0x2d7b10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d7b14: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2d7b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2d7b18: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2d7b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2d7b1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2d7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d7b20: 0x14e8fffb  bne         $a3, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7B20u;
    {
        const bool branch_taken_0x2d7b20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B20u;
        // 0x2d7b24: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b20) {
            ctx->pc = 0x2D7B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7b10;
        }
    }
    ctx->pc = 0x2D7B28u;
    // 0x2d7b28: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2d7b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2d7b2c: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2d7b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x2d7b30: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2d7b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d7b34: 0xaca30058  sw          $v1, 0x58($a1)
    ctx->pc = 0x2d7b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
    // 0x2d7b38: 0x9482005c  lhu         $v0, 0x5C($a0)
    ctx->pc = 0x2d7b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2d7b3c: 0xa4a2005c  sh          $v0, 0x5C($a1)
    ctx->pc = 0x2d7b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 92), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7b40: 0x9483005e  lhu         $v1, 0x5E($a0)
    ctx->pc = 0x2d7b40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 94)));
    // 0x2d7b44: 0xa4a3005e  sh          $v1, 0x5E($a1)
    ctx->pc = 0x2d7b44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d7b48: 0x90820060  lbu         $v0, 0x60($a0)
    ctx->pc = 0x2d7b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d7b4c: 0xa0a20060  sb          $v0, 0x60($a1)
    ctx->pc = 0x2d7b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d7b50: 0x90830061  lbu         $v1, 0x61($a0)
    ctx->pc = 0x2d7b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
    // 0x2d7b54: 0xa0a30061  sb          $v1, 0x61($a1)
    ctx->pc = 0x2d7b54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7b58: 0x94840062  lhu         $a0, 0x62($a0)
    ctx->pc = 0x2d7b58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x2d7b5c: 0xa4a40062  sh          $a0, 0x62($a1)
    ctx->pc = 0x2d7b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 98), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d7b60: 0x8d220078  lw          $v0, 0x78($t1)
    ctx->pc = 0x2d7b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x2d7b64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7b68: 0x4b1818  mult        $v1, $v0, $t3
    ctx->pc = 0x2d7b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d7b6c: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x2d7b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2d7b70: 0xa44c0080  sh          $t4, 0x80($v0)
    ctx->pc = 0x2d7b70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 12));
    // 0x2d7b74: 0x8d230078  lw          $v1, 0x78($t1)
    ctx->pc = 0x2d7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x2d7b78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d7b7c: 0xad230078  sw          $v1, 0x78($t1)
    ctx->pc = 0x2d7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 3));
label_2d7b80:
    // 0x2d7b80: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2d7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b84: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2d7b88: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2D7B88u;
    {
        const bool branch_taken_0x2d7b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B88u;
        // 0x2d7b8c: 0x20b1018  mult        $v0, $s0, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7b88) {
            ctx->pc = 0x2D7A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7a28;
        }
    }
    ctx->pc = 0x2D7B90u;
    // 0x2d7b90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7b94: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x2d7b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2d7b98: 0x8e036138  lw          $v1, 0x6138($s0)
    ctx->pc = 0x2d7b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24888)));
    // 0x2d7b9c: 0x8e04613c  lw          $a0, 0x613C($s0)
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24892)));
    // 0x2d7ba0: 0x8e056140  lw          $a1, 0x6140($s0)
    ctx->pc = 0x2d7ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24896)));
    // 0x2d7ba4: 0x8e026284  lw          $v0, 0x6284($s0)
    ctx->pc = 0x2d7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25220)));
    // 0x2d7ba8: 0xae036144  sw          $v1, 0x6144($s0)
    ctx->pc = 0x2d7ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24900), GPR_U32(ctx, 3));
    // 0x2d7bac: 0xae046148  sw          $a0, 0x6148($s0)
    ctx->pc = 0x2d7bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24904), GPR_U32(ctx, 4));
    // 0x2d7bb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2d7bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2d7bb4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D7BB4u;
    {
        const bool branch_taken_0x2d7bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BB4u;
        // 0x2d7bb8: 0xae05614c  sw          $a1, 0x614C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7bb4) {
            ctx->pc = 0x2D7C5Cu;
            goto label_2d7c5c;
        }
    }
    ctx->pc = 0x2D7BBCu;
    // 0x2d7bbc: 0x86026282  lh          $v0, 0x6282($s0)
    ctx->pc = 0x2d7bbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 25218)));
    // 0x2d7bc0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D7BC0u;
    {
        const bool branch_taken_0x2d7bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7bc0) {
            ctx->pc = 0x2D7BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7BC0u;
            // 0x2d7bc4: 0x92056168  lbu         $a1, 0x6168($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24936)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7C04u;
            goto label_2d7c04;
        }
    }
    ctx->pc = 0x2D7BC8u;
    // 0x2d7bc8: 0x86036280  lh          $v1, 0x6280($s0)
    ctx->pc = 0x2d7bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 25216)));
    // 0x2d7bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d7bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7bd0: 0x0  nop
    ctx->pc = 0x2d7bd0u;
    // NOP
    // 0x2d7bd4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d7bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7bd8: 0x96026280  lhu         $v0, 0x6280($s0)
    ctx->pc = 0x2d7bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 25216)));
    // 0x2d7bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d7bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7be0: 0x0  nop
    ctx->pc = 0x2d7be0u;
    // NOP
    // 0x2d7be4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d7bec: 0xa6026280  sh          $v0, 0x6280($s0)
    ctx->pc = 0x2d7becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 25216), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7bf0: 0x0  nop
    ctx->pc = 0x2d7bf0u;
    // NOP
    // 0x2d7bf4: 0x0  nop
    ctx->pc = 0x2d7bf4u;
    // NOP
    // 0x2d7bf8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d7bf8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2d7bfc: 0xe600616c  swc1        $f0, 0x616C($s0)
    ctx->pc = 0x2d7bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24940), bits); }
    // 0x2d7c00: 0x92056168  lbu         $a1, 0x6168($s0)
    ctx->pc = 0x2d7c00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24936)));
label_2d7c04:
    // 0x2d7c04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d7c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c08: 0xc0b6318  jal         func_2D8C60
    ctx->pc = 0x2D7C08u;
    SET_GPR_U32(ctx, 31, 0x2D7C10u);
    ctx->pc = 0x2D7C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C08u;
    // 0x2d7c0c: 0xc60c616c  lwc1        $f12, 0x616C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8C60u, 0x2D7C08u, 0x2D7C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C10u;
label_2d7c10:
    // 0x2d7c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7c14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7c18: 0xc600616c  lwc1        $f0, 0x616C($s0)
    ctx->pc = 0x2d7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7c1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d7c1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d7c20: 0x0  nop
    ctx->pc = 0x2d7c20u;
    // NOP
    // 0x2d7c24: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2D7C24u;
    {
        const bool branch_taken_0x2d7c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D7C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C24u;
        // 0x2d7c28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c24) {
            ctx->pc = 0x2D7C5Cu;
            goto label_2d7c5c;
        }
    }
    ctx->pc = 0x2D7C2Cu;
    // 0x2d7c2c: 0x92056168  lbu         $a1, 0x6168($s0)
    ctx->pc = 0x2d7c2cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24936)));
    // 0x2d7c30: 0xc0b6102  jal         func_2D8408
    ctx->pc = 0x2D7C30u;
    SET_GPR_U32(ctx, 31, 0x2D7C38u);
    ctx->pc = 0x2D7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C30u;
    // 0x2d7c34: 0xe601616c  swc1        $f1, 0x616C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24940), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8408u, 0x2D7C30u, 0x2D7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C38u;
label_2d7c38:
    // 0x2d7c38: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2d7c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2d7c3c: 0x92056168  lbu         $a1, 0x6168($s0)
    ctx->pc = 0x2d7c3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24936)));
    // 0x2d7c40: 0xc0a8a06  jal         func_2A2818
    ctx->pc = 0x2D7C40u;
    SET_GPR_U32(ctx, 31, 0x2D7C48u);
    ctx->pc = 0x2D7C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C40u;
    // 0x2d7c44: 0x24846c00  addiu       $a0, $a0, 0x6C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2818u, 0x2D7C40u, 0x2D7C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C48u;
label_2d7c48:
    // 0x2d7c48: 0x8e036284  lw          $v1, 0x6284($s0)
    ctx->pc = 0x2d7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 25220)));
    // 0x2d7c4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d7c50: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2d7c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x2d7c54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d7c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d7c58: 0xae036284  sw          $v1, 0x6284($s0)
    ctx->pc = 0x2d7c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 25220), GPR_U32(ctx, 3));
label_2d7c5c:
    // 0x2d7c5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d7c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c60: 0xc0b63fe  jal         func_2D8FF8
    ctx->pc = 0x2D7C60u;
    SET_GPR_U32(ctx, 31, 0x2D7C68u);
    ctx->pc = 0x2D7C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7C60u;
    // 0x2d7c64: 0x24130030  addiu       $s3, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FF8u, 0x2D7C60u, 0x2D7C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7C68u;
label_2d7c68:
    // 0x2d7c68: 0x28430030  slti        $v1, $v0, 0x30
    ctx->pc = 0x2d7c68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2d7c6c: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x2d7c6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2d7c70: 0x1a600066  blez        $s3, . + 4 + (0x66 << 2)
    ctx->pc = 0x2D7C70u;
    {
        const bool branch_taken_0x2d7c70 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2D7C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7C70u;
        // 0x2d7c74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7c70) {
            ctx->pc = 0x2D7E0Cu;
            goto label_2d7e0c;
        }
    }
    ctx->pc = 0x2D7C78u;
    // 0x2d7c78: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2d7c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2d7c7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d7c7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d7c80: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2d7c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2d7c84: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x2d7c84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
    // 0x2d7c88: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d7c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d7c8c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2d7c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2d7c90: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2d7c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2d7c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d7c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d7c98: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2d7c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2d7c9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d7c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ca0:
    // 0x2d7ca0: 0xc0b6400  jal         func_2D9000
    ctx->pc = 0x2D7CA0u;
    SET_GPR_U32(ctx, 31, 0x2D7CA8u);
    ctx->pc = 0x2D7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CA0u;
    // 0x2d7ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9000u, 0x2D7CA0u, 0x2D7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CA8u;
label_2d7ca8:
    // 0x2d7ca8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d7ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d7cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cb0: 0xc0b6406  jal         func_2D9018
    ctx->pc = 0x2D7CB0u;
    SET_GPR_U32(ctx, 31, 0x2D7CB8u);
    ctx->pc = 0x2D7CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7CB0u;
    // 0x2d7cb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9018u, 0x2D7CB0u, 0x2D7CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7CB8u;
label_2d7cb8:
    // 0x2d7cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7cbc: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2d7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2d7cc0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2d7cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2d7cc4: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D7CC4u;
    {
        const bool branch_taken_0x2d7cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7cc4) {
            ctx->pc = 0x2D7CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7CC4u;
            // 0x2d7cc8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7E00u;
            goto label_2d7e00;
        }
    }
    ctx->pc = 0x2D7CCCu;
    // 0x2d7ccc: 0x92230060  lbu         $v1, 0x60($s1)
    ctx->pc = 0x2d7cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d7cd0: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D7CD0u;
    {
        const bool branch_taken_0x2d7cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7CD0u;
        // 0x2d7cd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7cd0) {
            ctx->pc = 0x2D7D8Cu;
            goto label_2d7d8c;
        }
    }
    ctx->pc = 0x2D7CD8u;
    // 0x2d7cd8: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D7CD8u;
    {
        const bool branch_taken_0x2d7cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d7cd8) {
            ctx->pc = 0x2D7D8Cu;
            goto label_2d7d8c;
        }
    }
    ctx->pc = 0x2D7CE0u;
    // 0x2d7ce0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2d7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7ce4: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x2d7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7ce8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d7ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7cec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d7cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d7cf0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2d7cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2d7cf4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x2d7cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x2d7cf8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2d7cf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d7cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7d00: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2d7d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2d7d04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d7d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7d08: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2d7d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2d7d0c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x2d7d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d7d10: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2d7d10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2d7d14: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2d7d14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x2d7d18: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2d7d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d7d1c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D7D1Cu;
    {
        const bool branch_taken_0x2d7d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D1Cu;
        // 0x2d7d20: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d1c) {
            ctx->pc = 0x2D7DB0u;
            goto label_2d7db0;
        }
    }
    ctx->pc = 0x2D7D24u;
    // 0x2d7d24: 0xc055922  jal         func_156488
    ctx->pc = 0x2D7D24u;
    SET_GPR_U32(ctx, 31, 0x2D7D2Cu);
    ctx->pc = 0x2D7D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D24u;
    // 0x2d7d28: 0x9624005c  lhu         $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x2D7D24u, 0x2D7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D2Cu;
label_2d7d2c:
    // 0x2d7d2c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2D7D2Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D34u);
    ctx->pc = 0x2D7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D2Cu;
    // 0x2d7d30: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2D7D2Cu, 0x2D7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D34u;
label_2d7d34:
    // 0x2d7d34: 0x96240062  lhu         $a0, 0x62($s1)
    ctx->pc = 0x2d7d34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
    // 0x2d7d38: 0xc055922  jal         func_156488
    ctx->pc = 0x2D7D38u;
    SET_GPR_U32(ctx, 31, 0x2D7D40u);
    ctx->pc = 0x2D7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D38u;
    // 0x2d7d3c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x2D7D38u, 0x2D7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D40u;
label_2d7d40:
    // 0x2d7d40: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2d7d40u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2d7d44: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x2d7d44u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2d7d48: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2D7D48u;
    SET_GPR_U32(ctx, 31, 0x2D7D50u);
    ctx->pc = 0x2D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D48u;
    // 0x2d7d4c: 0xe6150000  swc1        $f21, 0x0($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2D7D48u, 0x2D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D50u;
label_2d7d50:
    // 0x2d7d50: 0x92220061  lbu         $v0, 0x61($s1)
    ctx->pc = 0x2d7d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 97)));
    // 0x2d7d54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2d7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d7d58: 0x9624005e  lhu         $a0, 0x5E($s1)
    ctx->pc = 0x2d7d58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d7d5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d7d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7d60: 0x0  nop
    ctx->pc = 0x2d7d60u;
    // NOP
    // 0x2d7d64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d7d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d7d68: 0xa2030012  sb          $v1, 0x12($s0)
    ctx->pc = 0x2d7d68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7d6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d7d6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7d70: 0x0  nop
    ctx->pc = 0x2d7d70u;
    // NOP
    // 0x2d7d74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d7d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d7d78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d7d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d7d7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2d7d7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d7d80: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x2d7d80u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[23]);
    // 0x2d7d84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D7D84u;
    {
        const bool branch_taken_0x2d7d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7D84u;
        // 0x2d7d88: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7d84) {
            ctx->pc = 0x2D7DB0u;
            goto label_2d7db0;
        }
    }
    ctx->pc = 0x2D7D8Cu;
label_2d7d8c:
    // 0x2d7d8c: 0xc055922  jal         func_156488
    ctx->pc = 0x2D7D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D7D94u);
    ctx->pc = 0x2D7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7D8Cu;
    // 0x2d7d90: 0x9624005c  lhu         $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156488u, 0x2D7D8Cu, 0x2D7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7D94u;
label_2d7d94:
    // 0x2d7d94: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2d7d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d7d98: 0x9622005e  lhu         $v0, 0x5E($s1)
    ctx->pc = 0x2d7d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2d7d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7da0: 0x0  nop
    ctx->pc = 0x2d7da0u;
    // NOP
    // 0x2d7da4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7da8: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x2d7da8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[23]);
    // 0x2d7dac: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d7dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2d7db0:
    // 0x2d7db0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d7db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2d7db4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2d7db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2d7db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7dbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2d7dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7dc0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2d7dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2d7dc4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2d7dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2d7dc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d7dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d7dcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d7dccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d7dd0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2d7dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2d7dd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d7dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d7dd8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x2d7dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d7ddc: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x2d7ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x2d7de0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x2d7de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x2d7de4: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x2d7de4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2d7de8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2d7de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2d7dec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d7decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d7df0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2d7df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2d7df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d7df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7df8: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x2d7df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7dfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d7dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d7e00:
    // 0x2d7e00: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2d7e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d7e04: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2D7E04u;
    {
        const bool branch_taken_0x2d7e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E04u;
        // 0x2d7e08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e04) {
            ctx->pc = 0x2D7CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ca0;
        }
    }
    ctx->pc = 0x2D7E0Cu;
label_2d7e0c:
    // 0x2d7e0c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2d7e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d7e10:
    // 0x2d7e10: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2d7e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d7e14: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2d7e14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d7e18: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2d7e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d7e1c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2d7e1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d7e20: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2d7e20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7e24: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2d7e24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7e28: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2d7e28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7e2c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2d7e2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7e34: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x2d7e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d7e38: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x2d7e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d7e3c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x2d7e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d7e40: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2d7e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7e44: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2d7e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E48u;
        // 0x2d7e4c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7E50u;
}
