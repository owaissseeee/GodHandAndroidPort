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

// Function: func_0017C708
// Address: 0x17c708 - 0x17c8e0
void func_0017C708_0x17c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017C708_0x17c708");
#endif

    switch (ctx->pc) {
        case 0x17c724u: goto label_17c724;
        case 0x17c78cu: goto label_17c78c;
        case 0x17c7ccu: goto label_17c7cc;
        case 0x17c7e8u: goto label_17c7e8;
        case 0x17c7f8u: goto label_17c7f8;
        case 0x17c818u: goto label_17c818;
        default: break;
    }

    ctx->pc = 0x17c708u;

    // 0x17c708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c70c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17c710: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17c710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x17c714: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x17c714u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17c718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17c71c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x17C71Cu;
    SET_GPR_U32(ctx, 31, 0x17C724u);
    ctx->pc = 0x17C720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C71Cu;
    // 0x17c720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x17C71Cu, 0x17C724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C724u;
label_17c724:
    // 0x17c724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17c724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17c728: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17c728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c72c: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x17c72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x17c730: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x17c730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x17c734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c738: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x17c738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c73c: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x17c73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x17c740: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x17c740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x17c744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17c744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c748: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x17c748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x17c74c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17c74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x17c750: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x17c754: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x17c754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17c758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17c758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c75c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17c75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c760: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17c760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c764: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17c764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17c768: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17c768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17c76c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x17c76cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17c770: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x17c770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x17c774: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x17c774u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x17c778: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x17c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x17c77c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x17c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x17c780: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x17c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x17c784: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x17C784u;
    SET_GPR_U32(ctx, 31, 0x17C78Cu);
    ctx->pc = 0x17C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C784u;
    // 0x17c788: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x17C784u, 0x17C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C78Cu;
label_17c78c:
    // 0x17c78c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17C78Cu;
    {
        const bool branch_taken_0x17c78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C78Cu;
        // 0x17c790: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c78c) {
            ctx->pc = 0x17C7CCu;
            goto label_17c7cc;
        }
    }
    ctx->pc = 0x17C794u;
    // 0x17c794: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x17c794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c798: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x17c798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17c79c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17c7a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7a4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x17c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x17c7a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17c7a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7ac: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x17c7acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x17c7b0: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x17c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x17c7b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17c7b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17c7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c7bc: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x17c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x17c7c0: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x17c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c7c4: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x17C7C4u;
    SET_GPR_U32(ctx, 31, 0x17C7CCu);
    ctx->pc = 0x17C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7C4u;
    // 0x17c7c8: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x17C7C4u, 0x17C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7CCu;
label_17c7cc:
    // 0x17c7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7d4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x17c7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7dc: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x17c7dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c7e0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17C7E0u;
    SET_GPR_U32(ctx, 31, 0x17C7E8u);
    ctx->pc = 0x17C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7E0u;
    // 0x17c7e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17C7E0u, 0x17C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7E8u;
label_17c7e8:
    // 0x17c7e8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17c7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c7f0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x17C7F0u;
    SET_GPR_U32(ctx, 31, 0x17C7F8u);
    ctx->pc = 0x17C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C7F0u;
    // 0x17c7f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x17C7F0u, 0x17C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C7F8u;
label_17c7f8:
    // 0x17c7f8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17c7f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17c7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c800: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x17C800u;
    {
        const bool branch_taken_0x17c800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x17c800) {
            ctx->pc = 0x17C804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C800u;
            // 0x17c804: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8C4u;
            goto label_17c8c4;
        }
    }
    ctx->pc = 0x17C808u;
    // 0x17c808: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17c808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c80c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17c80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c810: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x17c810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17c814: 0x0  nop
    ctx->pc = 0x17c814u;
    // NOP
label_17c818:
    // 0x17c818: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c81c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x17c81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17c820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C820u;
    {
        const bool branch_taken_0x17c820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C820u;
        // 0x17c824: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c820) {
            ctx->pc = 0x17C830u;
            goto label_17c830;
        }
    }
    ctx->pc = 0x17C828u;
    // 0x17c828: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x17c828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c830:
    // 0x17c830: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17c830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17c834: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C834u;
    {
        const bool branch_taken_0x17c834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C834u;
        // 0x17c838: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c834) {
            ctx->pc = 0x17C84Cu;
            goto label_17c84c;
        }
    }
    ctx->pc = 0x17C83Cu;
    // 0x17c83c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17c840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C844u;
    {
        const bool branch_taken_0x17c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C844u;
        // 0x17c848: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c844) {
            ctx->pc = 0x17C850u;
            goto label_17c850;
        }
    }
    ctx->pc = 0x17C84Cu;
label_17c84c:
    // 0x17c84c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c850:
    // 0x17c850: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17c854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17c854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c858: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x17c858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x17c85c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17c85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x17c860: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x17c860u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x17c864: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17c864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17c868: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C868u;
    {
        const bool branch_taken_0x17c868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C868u;
        // 0x17c86c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c868) {
            ctx->pc = 0x17C878u;
            goto label_17c878;
        }
    }
    ctx->pc = 0x17C870u;
    // 0x17c870: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17c870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17c874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17c874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17c878:
    // 0x17c878: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17c878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17c87c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C87Cu;
    {
        const bool branch_taken_0x17c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C87Cu;
        // 0x17c880: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c87c) {
            ctx->pc = 0x17C894u;
            goto label_17c894;
        }
    }
    ctx->pc = 0x17C884u;
    // 0x17c884: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x17c888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c88c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C88Cu;
    {
        const bool branch_taken_0x17c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C88Cu;
        // 0x17c890: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c88c) {
            ctx->pc = 0x17C898u;
            goto label_17c898;
        }
    }
    ctx->pc = 0x17C894u;
label_17c894:
    // 0x17c894: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c898:
    // 0x17c898: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x17c89c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c8a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17c8a4: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x17c8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17c8a8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17c8ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C8ACu;
    {
        const bool branch_taken_0x17c8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8ACu;
        // 0x17c8b0: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8ac) {
            ctx->pc = 0x17C8C0u;
            goto label_17c8c0;
        }
    }
    ctx->pc = 0x17C8B4u;
    // 0x17c8b4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x17c8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x17c8b8: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x17C8B8u;
    {
        const bool branch_taken_0x17c8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x17c8b8) {
            ctx->pc = 0x17C8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8B8u;
            // 0x17c8bc: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c818;
        }
    }
    ctx->pc = 0x17C8C0u;
label_17c8c0:
    // 0x17c8c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17c8c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17c8c4:
    // 0x17c8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c8c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17c8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17c8cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17c8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c8d0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x17c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8D4u;
        // 0x17c8d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C8DCu;
    // 0x17c8dc: 0x0  nop
    ctx->pc = 0x17c8dcu;
    // NOP
    ctx->pc = 0x17c8e0u;
}
