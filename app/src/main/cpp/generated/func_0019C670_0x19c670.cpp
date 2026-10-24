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

// Function: func_0019C670
// Address: 0x19c670 - 0x19c848
void func_0019C670_0x19c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C670_0x19c670");
#endif

    switch (ctx->pc) {
        case 0x19c68cu: goto label_19c68c;
        case 0x19c6f4u: goto label_19c6f4;
        case 0x19c734u: goto label_19c734;
        case 0x19c750u: goto label_19c750;
        case 0x19c760u: goto label_19c760;
        case 0x19c780u: goto label_19c780;
        default: break;
    }

    ctx->pc = 0x19c670u;

    // 0x19c670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19c674: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19c674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19c678: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19c67c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x19c67cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x19c680: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c684: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19C684u;
    SET_GPR_U32(ctx, 31, 0x19C68Cu);
    ctx->pc = 0x19C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C684u;
    // 0x19c688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19C684u, 0x19C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C68Cu;
label_19c68c:
    // 0x19c68c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19c68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19c690: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19c690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19c694: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x19c694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x19c698: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x19c698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x19c69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c6a0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19c6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c6a4: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x19c6a8: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x19c6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x19c6ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c6b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19c6b4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19c6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19c6b8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19c6bc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19c6bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19c6c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6c4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19c6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19c6c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c6cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19c6ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19c6d0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19c6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19c6d4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19c6d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19c6d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19c6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19c6dc: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x19c6dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19c6e0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19c6e4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19c6e8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19c6ec: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19C6ECu;
    SET_GPR_U32(ctx, 31, 0x19C6F4u);
    ctx->pc = 0x19C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C6ECu;
    // 0x19c6f0: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19C6ECu, 0x19C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C6F4u;
label_19c6f4:
    // 0x19c6f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19C6F4u;
    {
        const bool branch_taken_0x19c6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6F4u;
        // 0x19c6f8: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6f4) {
            ctx->pc = 0x19C734u;
            goto label_19c734;
        }
    }
    ctx->pc = 0x19C6FCu;
    // 0x19c6fc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19c700: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19c700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19c704: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19c704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19c708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c70c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19c710: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19c710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c714: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19c714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19c718: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19c71c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19c720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c724: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x19c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19c728: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x19c728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c72c: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x19C72Cu;
    SET_GPR_U32(ctx, 31, 0x19C734u);
    ctx->pc = 0x19C730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C72Cu;
    // 0x19c730: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x19C72Cu, 0x19C734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C734u;
label_19c734:
    // 0x19c734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c73c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19c73cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c744: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x19c744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c748: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19C748u;
    SET_GPR_U32(ctx, 31, 0x19C750u);
    ctx->pc = 0x19C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C748u;
    // 0x19c74c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19C748u, 0x19C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C750u;
label_19c750:
    // 0x19c750: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c758: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19C758u;
    SET_GPR_U32(ctx, 31, 0x19C760u);
    ctx->pc = 0x19C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C758u;
    // 0x19c75c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19C758u, 0x19C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C760u;
label_19c760:
    // 0x19c760: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19c760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19c764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19c764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c768: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x19C768u;
    {
        const bool branch_taken_0x19c768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19c768) {
            ctx->pc = 0x19C76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C768u;
            // 0x19c76c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C82Cu;
            goto label_19c82c;
        }
    }
    ctx->pc = 0x19C770u;
    // 0x19c770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19c770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c774: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c778: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x19c778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19c77c: 0x0  nop
    ctx->pc = 0x19c77cu;
    // NOP
label_19c780:
    // 0x19c780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c784: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x19c784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19c788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C788u;
    {
        const bool branch_taken_0x19c788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C788u;
        // 0x19c78c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c788) {
            ctx->pc = 0x19C798u;
            goto label_19c798;
        }
    }
    ctx->pc = 0x19C790u;
    // 0x19c790: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x19c790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19c794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c798:
    // 0x19c798: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19c798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19c79c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C79Cu;
    {
        const bool branch_taken_0x19c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C79Cu;
        // 0x19c7a0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c79c) {
            ctx->pc = 0x19C7B4u;
            goto label_19c7b4;
        }
    }
    ctx->pc = 0x19C7A4u;
    // 0x19c7a4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19c7a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c7ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C7ACu;
    {
        const bool branch_taken_0x19c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7ACu;
        // 0x19c7b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7ac) {
            ctx->pc = 0x19C7B8u;
            goto label_19c7b8;
        }
    }
    ctx->pc = 0x19C7B4u;
label_19c7b4:
    // 0x19c7b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c7b8:
    // 0x19c7b8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19c7bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7c0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x19c7c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19c7c4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19c7c8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19c7cc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19c7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19c7d0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C7D0u;
    {
        const bool branch_taken_0x19c7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7D0u;
        // 0x19c7d4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7d0) {
            ctx->pc = 0x19C7E0u;
            goto label_19c7e0;
        }
    }
    ctx->pc = 0x19C7D8u;
    // 0x19c7d8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x19c7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19c7dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19c7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c7e0:
    // 0x19c7e0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x19c7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19c7e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C7E4u;
    {
        const bool branch_taken_0x19c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E4u;
        // 0x19c7e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7e4) {
            ctx->pc = 0x19C7FCu;
            goto label_19c7fc;
        }
    }
    ctx->pc = 0x19C7ECu;
    // 0x19c7ec: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19c7f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c7f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19C7F4u;
    {
        const bool branch_taken_0x19c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7F4u;
        // 0x19c7f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c7f4) {
            ctx->pc = 0x19C800u;
            goto label_19c800;
        }
    }
    ctx->pc = 0x19C7FCu;
label_19c7fc:
    // 0x19c7fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c800:
    // 0x19c800: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19c804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c808: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19c808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19c80c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x19c80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19c810: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19c814: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C814u;
    {
        const bool branch_taken_0x19c814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C814u;
        // 0x19c818: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c814) {
            ctx->pc = 0x19C828u;
            goto label_19c828;
        }
    }
    ctx->pc = 0x19C81Cu;
    // 0x19c81c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19c81cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19c820: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x19C820u;
    {
        const bool branch_taken_0x19c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19c820) {
            ctx->pc = 0x19C824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C820u;
            // 0x19c824: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c780;
        }
    }
    ctx->pc = 0x19C828u;
label_19c828:
    // 0x19c828: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19c828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19c82c:
    // 0x19c82c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c830: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19c830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c834: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c838: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x19c838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c83c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C83Cu;
        // 0x19c840: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C844u;
    // 0x19c844: 0x0  nop
    ctx->pc = 0x19c844u;
    // NOP
    ctx->pc = 0x19c848u;
}
