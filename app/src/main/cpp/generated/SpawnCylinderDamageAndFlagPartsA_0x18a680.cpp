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

// Function: SpawnCylinderDamageAndFlagPartsA
// Address: 0x18a680 - 0x18a870
void SpawnCylinderDamageAndFlagPartsA_0x18a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SpawnCylinderDamageAndFlagPartsA_0x18a680");
#endif

    switch (ctx->pc) {
        case 0x18a69cu: goto label_18a69c;
        case 0x18a704u: goto label_18a704;
        case 0x18a744u: goto label_18a744;
        case 0x18a75cu: goto label_18a75c;
        case 0x18a774u: goto label_18a774;
        case 0x18a7a8u: goto label_18a7a8;
        default: break;
    }

    ctx->pc = 0x18a680u;

    // 0x18a680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18a684: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18a688: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18a688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18a68c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18a68cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18a690: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18a694: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18A694u;
    SET_GPR_U32(ctx, 31, 0x18A69Cu);
    ctx->pc = 0x18A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A694u;
    // 0x18a698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18A694u, 0x18A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A69Cu;
label_18a69c:
    // 0x18a69c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18a69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18a6a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18a6a4: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x18a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x18a6a8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x18a6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x18a6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a6b0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18a6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18a6b4: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x18a6b8: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x18a6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x18a6bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18a6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18a6c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18a6c4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18a6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18a6c8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18a6cc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18a6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18a6d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18a6d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a6dc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18a6dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18a6e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18a6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18a6e4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18a6e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18a6e8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18a6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18a6ec: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x18a6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18a6f0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18a6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18a6f4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18a6f8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18a6fc: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18A6FCu;
    SET_GPR_U32(ctx, 31, 0x18A704u);
    ctx->pc = 0x18A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A6FCu;
    // 0x18a700: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18A6FCu, 0x18A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A704u;
label_18a704:
    // 0x18a704: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18A704u;
    {
        const bool branch_taken_0x18a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A704u;
        // 0x18a708: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a704) {
            ctx->pc = 0x18A744u;
            goto label_18a744;
        }
    }
    ctx->pc = 0x18A70Cu;
    // 0x18a70c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18a70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18a710: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18a710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18a714: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18a714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18a718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a71c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18a720: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18a720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a724: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18a724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18a728: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18a72c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18a730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18a734: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x18a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18a738: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x18a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18a73c: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x18A73Cu;
    SET_GPR_U32(ctx, 31, 0x18A744u);
    ctx->pc = 0x18A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A73Cu;
    // 0x18a740: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x18A73Cu, 0x18A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A744u;
label_18a744:
    // 0x18a744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a74c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a750: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18a750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a754: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18A754u;
    SET_GPR_U32(ctx, 31, 0x18A75Cu);
    ctx->pc = 0x18A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A754u;
    // 0x18a758: 0xa6020548  sh          $v0, 0x548($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18A754u, 0x18A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A75Cu;
label_18a75c:
    // 0x18a75c: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18a760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a768: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x18a768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x18a76c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x18A76Cu;
    SET_GPR_U32(ctx, 31, 0x18A774u);
    ctx->pc = 0x18A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A76Cu;
    // 0x18a770: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x18A76Cu, 0x18A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A774u;
label_18a774:
    // 0x18a774: 0x8c440380  lw          $a0, 0x380($v0)
    ctx->pc = 0x18a774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x18a778: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x18a778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x18a77c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x18a77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x18a780: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18a780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a784: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x18a784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a788: 0xac440380  sw          $a0, 0x380($v0)
    ctx->pc = 0x18a788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 4));
    // 0x18a78c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18a78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18a790: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18A790u;
    {
        const bool branch_taken_0x18a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18a790) {
            ctx->pc = 0x18A794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A790u;
            // 0x18a794: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A854u;
            goto label_18a854;
        }
    }
    ctx->pc = 0x18A798u;
    // 0x18a798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18a798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a79c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a7a0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x18a7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18a7a4: 0x0  nop
    ctx->pc = 0x18a7a4u;
    // NOP
label_18a7a8:
    // 0x18a7a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7ac: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18a7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18a7b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A7B0u;
    {
        const bool branch_taken_0x18a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7B0u;
        // 0x18a7b4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7b0) {
            ctx->pc = 0x18A7C0u;
            goto label_18a7c0;
        }
    }
    ctx->pc = 0x18A7B8u;
    // 0x18a7b8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18a7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18a7bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a7c0:
    // 0x18a7c0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18a7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18a7c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A7C4u;
    {
        const bool branch_taken_0x18a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7C4u;
        // 0x18a7c8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7c4) {
            ctx->pc = 0x18A7DCu;
            goto label_18a7dc;
        }
    }
    ctx->pc = 0x18A7CCu;
    // 0x18a7cc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18a7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a7d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A7D4u;
    {
        const bool branch_taken_0x18a7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7D4u;
        // 0x18a7d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7d4) {
            ctx->pc = 0x18A7E0u;
            goto label_18a7e0;
        }
    }
    ctx->pc = 0x18A7DCu;
label_18a7dc:
    // 0x18a7dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a7e0:
    // 0x18a7e0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18a7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7e8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18a7e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18a7ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18a7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18a7f0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18a7f4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18a7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18a7f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A7F8u;
    {
        const bool branch_taken_0x18a7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7F8u;
        // 0x18a7fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7f8) {
            ctx->pc = 0x18A808u;
            goto label_18a808;
        }
    }
    ctx->pc = 0x18A800u;
    // 0x18a800: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18a800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18a804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a808:
    // 0x18a808: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18a80c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A80Cu;
    {
        const bool branch_taken_0x18a80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A80Cu;
        // 0x18a810: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a80c) {
            ctx->pc = 0x18A824u;
            goto label_18a824;
        }
    }
    ctx->pc = 0x18A814u;
    // 0x18a814: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18a818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a81c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18A81Cu;
    {
        const bool branch_taken_0x18a81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A81Cu;
        // 0x18a820: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a81c) {
            ctx->pc = 0x18A828u;
            goto label_18a828;
        }
    }
    ctx->pc = 0x18A824u;
label_18a824:
    // 0x18a824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a828:
    // 0x18a828: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18a82c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18a830: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18a834: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x18a834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x18a838: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18a83c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A83Cu;
    {
        const bool branch_taken_0x18a83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A83Cu;
        // 0x18a840: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a83c) {
            ctx->pc = 0x18A850u;
            goto label_18a850;
        }
    }
    ctx->pc = 0x18A844u;
    // 0x18a844: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18a844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18a848: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18A848u;
    {
        const bool branch_taken_0x18a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18a848) {
            ctx->pc = 0x18A84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A848u;
            // 0x18a84c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a7a8;
        }
    }
    ctx->pc = 0x18A850u;
label_18a850:
    // 0x18a850: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18a850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18a854:
    // 0x18a854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a858: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18a858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a85c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a860: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a864: 0x3e00008  jr          $ra
    ctx->pc = 0x18A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A864u;
        // 0x18a868: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A86Cu;
    // 0x18a86c: 0x0  nop
    ctx->pc = 0x18a86cu;
    // NOP
    ctx->pc = 0x18a870u;
}
