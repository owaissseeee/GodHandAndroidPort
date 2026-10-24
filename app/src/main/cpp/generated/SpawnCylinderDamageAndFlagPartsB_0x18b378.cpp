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

// Function: SpawnCylinderDamageAndFlagPartsB
// Address: 0x18b378 - 0x18b568
void SpawnCylinderDamageAndFlagPartsB_0x18b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnCylinderDamageAndFlagPartsB_0x18b378");
#endif

    switch (ctx->pc) {
        case 0x18b394u: goto label_18b394;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b43cu: goto label_18b43c;
        case 0x18b454u: goto label_18b454;
        case 0x18b46cu: goto label_18b46c;
        case 0x18b4a0u: goto label_18b4a0;
        default: break;
    }

    ctx->pc = 0x18b378u;

    // 0x18b378: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18b37c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18b37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18b380: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18b380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18b384: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18b384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18b388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18b38c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18B38Cu;
    SET_GPR_U32(ctx, 31, 0x18B394u);
    ctx->pc = 0x18B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B38Cu;
    // 0x18b390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18B38Cu, 0x18B394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B394u;
label_18b394:
    // 0x18b394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18b394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18b398: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18b398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18b39c: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x18b3a0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x18b3a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x18b3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b3a8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18b3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18b3ac: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x18b3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x18b3b0: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x18b3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x18b3b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18b3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18b3b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18b3bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18b3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18b3c0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18b3c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18b3c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18b3c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b3cc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18b3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18b3d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b3d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18b3d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18b3d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18b3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18b3dc: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18b3dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18b3e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18b3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18b3e4: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x18b3e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18b3e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18b3ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18b3f0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18b3f4: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18B3F4u;
    SET_GPR_U32(ctx, 31, 0x18B3FCu);
    ctx->pc = 0x18B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B3F4u;
    // 0x18b3f8: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18B3F4u, 0x18B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B3FCu;
label_18b3fc:
    // 0x18b3fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18B3FCu;
    {
        const bool branch_taken_0x18b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3FCu;
        // 0x18b400: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3fc) {
            ctx->pc = 0x18B43Cu;
            goto label_18b43c;
        }
    }
    ctx->pc = 0x18B404u;
    // 0x18b404: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18b408: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18b408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18b40c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18b410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b414: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18b414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18b418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18b418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b41c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18b41cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18b420: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x18b420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18b424: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18b424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18b428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b42c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x18b42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18b430: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x18b430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18b434: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x18B434u;
    SET_GPR_U32(ctx, 31, 0x18B43Cu);
    ctx->pc = 0x18B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B434u;
    // 0x18b438: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x18B434u, 0x18B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B43Cu;
label_18b43c:
    // 0x18b43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b448: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18b448u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18b44c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B44Cu;
    SET_GPR_U32(ctx, 31, 0x18B454u);
    ctx->pc = 0x18B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B44Cu;
    // 0x18b450: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B44Cu, 0x18B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B454u;
label_18b454:
    // 0x18b454: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b45c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b460: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18b460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18b464: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18B464u;
    SET_GPR_U32(ctx, 31, 0x18B46Cu);
    ctx->pc = 0x18B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B464u;
    // 0x18b468: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18B464u, 0x18B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B46Cu;
label_18b46c:
    // 0x18b46c: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x18b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18b470: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18b470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18b474: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18b474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18b478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18b478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b47c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x18b47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18b480: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x18b480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x18b484: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18b484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18b488: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18B488u;
    {
        const bool branch_taken_0x18b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18b488) {
            ctx->pc = 0x18B48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B488u;
            // 0x18b48c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B54Cu;
            goto label_18b54c;
        }
    }
    ctx->pc = 0x18B490u;
    // 0x18b490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b498: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x18b498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18b49c: 0x0  nop
    ctx->pc = 0x18b49cu;
    // NOP
label_18b4a0:
    // 0x18b4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4a4: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18b4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18b4a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B4A8u;
    {
        const bool branch_taken_0x18b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4A8u;
        // 0x18b4ac: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4a8) {
            ctx->pc = 0x18B4B8u;
            goto label_18b4b8;
        }
    }
    ctx->pc = 0x18B4B0u;
    // 0x18b4b0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18b4b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18b4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b4b8:
    // 0x18b4b8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18b4bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B4BCu;
    {
        const bool branch_taken_0x18b4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4BCu;
        // 0x18b4c0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4bc) {
            ctx->pc = 0x18B4D4u;
            goto label_18b4d4;
        }
    }
    ctx->pc = 0x18B4C4u;
    // 0x18b4c4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18b4c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b4cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B4CCu;
    {
        const bool branch_taken_0x18b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4CCu;
        // 0x18b4d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4cc) {
            ctx->pc = 0x18B4D8u;
            goto label_18b4d8;
        }
    }
    ctx->pc = 0x18B4D4u;
label_18b4d4:
    // 0x18b4d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b4d8:
    // 0x18b4d8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18b4dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b4e0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18b4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18b4e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18b4e8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18b4ec: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18b4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18b4f0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B4F0u;
    {
        const bool branch_taken_0x18b4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4F0u;
        // 0x18b4f4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b4f0) {
            ctx->pc = 0x18B500u;
            goto label_18b500;
        }
    }
    ctx->pc = 0x18B4F8u;
    // 0x18b4f8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18b4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18b4fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18b4fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b500:
    // 0x18b500: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18b504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B504u;
    {
        const bool branch_taken_0x18b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B504u;
        // 0x18b508: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b504) {
            ctx->pc = 0x18B51Cu;
            goto label_18b51c;
        }
    }
    ctx->pc = 0x18B50Cu;
    // 0x18b50c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18b510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b514: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18B514u;
    {
        const bool branch_taken_0x18b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B514u;
        // 0x18b518: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b514) {
            ctx->pc = 0x18B520u;
            goto label_18b520;
        }
    }
    ctx->pc = 0x18B51Cu;
label_18b51c:
    // 0x18b51c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b520:
    // 0x18b520: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18b524: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18b528: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18b528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18b52c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x18b52cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x18b530: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18b530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18b534: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B534u;
    {
        const bool branch_taken_0x18b534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B534u;
        // 0x18b538: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b534) {
            ctx->pc = 0x18B548u;
            goto label_18b548;
        }
    }
    ctx->pc = 0x18B53Cu;
    // 0x18b53c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18b53cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18b540: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18B540u;
    {
        const bool branch_taken_0x18b540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b540) {
            ctx->pc = 0x18B544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B540u;
            // 0x18b544: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b4a0;
        }
    }
    ctx->pc = 0x18B548u;
label_18b548:
    // 0x18b548: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18b548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18b54c:
    // 0x18b54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b550: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18b550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18b554: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18b554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18b558: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B55Cu;
        // 0x18b560: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B564u;
    // 0x18b564: 0x0  nop
    ctx->pc = 0x18b564u;
    // NOP
    ctx->pc = 0x18b568u;
}
