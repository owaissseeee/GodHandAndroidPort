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

// Function: func_00173AD8
// Address: 0x173ad8 - 0x173cb0
void func_00173AD8_0x173ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173AD8_0x173ad8");
#endif

    switch (ctx->pc) {
        case 0x173af4u: goto label_173af4;
        case 0x173b5cu: goto label_173b5c;
        case 0x173b9cu: goto label_173b9c;
        case 0x173bb8u: goto label_173bb8;
        case 0x173bc8u: goto label_173bc8;
        case 0x173be8u: goto label_173be8;
        default: break;
    }

    ctx->pc = 0x173ad8u;

    // 0x173ad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x173adc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x173adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x173ae0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x173ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x173ae4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x173ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x173ae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x173ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x173aec: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x173AECu;
    SET_GPR_U32(ctx, 31, 0x173AF4u);
    ctx->pc = 0x173AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173AECu;
    // 0x173af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x173AECu, 0x173AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173AF4u;
label_173af4:
    // 0x173af4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x173af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x173af8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x173af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x173afc: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x173afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x173b00: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x173b00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x173b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x173b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b08: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x173b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173b0c: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x173b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x173b10: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x173b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x173b14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x173b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x173b18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x173b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x173b1c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x173b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x173b20: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x173b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x173b24: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x173b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x173b28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x173b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x173b30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x173b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173b34: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x173b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x173b38: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x173b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x173b3c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x173b3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x173b40: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x173b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x173b44: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x173b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x173b48: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x173b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x173b4c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x173b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x173b50: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x173b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x173b54: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x173B54u;
    SET_GPR_U32(ctx, 31, 0x173B5Cu);
    ctx->pc = 0x173B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B54u;
    // 0x173b58: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x173B54u, 0x173B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B5Cu;
label_173b5c:
    // 0x173b5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x173B5Cu;
    {
        const bool branch_taken_0x173b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173B5Cu;
        // 0x173b60: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b5c) {
            ctx->pc = 0x173B9Cu;
            goto label_173b9c;
        }
    }
    ctx->pc = 0x173B64u;
    // 0x173b64: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x173b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173b68: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x173b6c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b74: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x173b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x173b78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x173b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173b7c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x173b7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x173b80: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x173b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x173b84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x173b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x173b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173b8c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x173b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173b90: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x173b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173b94: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x173B94u;
    SET_GPR_U32(ctx, 31, 0x173B9Cu);
    ctx->pc = 0x173B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173B94u;
    // 0x173b98: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x173B94u, 0x173B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173B9Cu;
label_173b9c:
    // 0x173b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ba4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x173ba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x173ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bac: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x173bacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x173bb0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x173BB0u;
    SET_GPR_U32(ctx, 31, 0x173BB8u);
    ctx->pc = 0x173BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173BB0u;
    // 0x173bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x173BB0u, 0x173BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BB8u;
label_173bb8:
    // 0x173bb8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x173bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x173bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bc0: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x173BC0u;
    SET_GPR_U32(ctx, 31, 0x173BC8u);
    ctx->pc = 0x173BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173BC0u;
    // 0x173bc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x173BC0u, 0x173BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173BC8u;
label_173bc8:
    // 0x173bc8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x173bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x173bcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x173bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173bd0: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x173BD0u;
    {
        const bool branch_taken_0x173bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x173bd0) {
            ctx->pc = 0x173BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173BD0u;
            // 0x173bd4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173C94u;
            goto label_173c94;
        }
    }
    ctx->pc = 0x173BD8u;
    // 0x173bd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173be0: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x173be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x173be4: 0x0  nop
    ctx->pc = 0x173be4u;
    // NOP
label_173be8:
    // 0x173be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bec: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x173becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x173bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173BF0u;
    {
        const bool branch_taken_0x173bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF0u;
        // 0x173bf4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bf0) {
            ctx->pc = 0x173C00u;
            goto label_173c00;
        }
    }
    ctx->pc = 0x173BF8u;
    // 0x173bf8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x173bf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173c00:
    // 0x173c00: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x173c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x173c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173C04u;
    {
        const bool branch_taken_0x173c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C04u;
        // 0x173c08: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c04) {
            ctx->pc = 0x173C1Cu;
            goto label_173c1c;
        }
    }
    ctx->pc = 0x173C0Cu;
    // 0x173c0c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x173c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173C14u;
    {
        const bool branch_taken_0x173c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C14u;
        // 0x173c18: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c14) {
            ctx->pc = 0x173C20u;
            goto label_173c20;
        }
    }
    ctx->pc = 0x173C1Cu;
label_173c1c:
    // 0x173c1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173c20:
    // 0x173c20: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x173c24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c28: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x173c28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x173c2c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x173c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x173c30: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x173c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x173c34: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x173c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x173c38: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173C38u;
    {
        const bool branch_taken_0x173c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C38u;
        // 0x173c3c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c38) {
            ctx->pc = 0x173C48u;
            goto label_173c48;
        }
    }
    ctx->pc = 0x173C40u;
    // 0x173c40: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x173c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x173c44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x173c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_173c48:
    // 0x173c48: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x173c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x173c4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173C4Cu;
    {
        const bool branch_taken_0x173c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C4Cu;
        // 0x173c50: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c4c) {
            ctx->pc = 0x173C64u;
            goto label_173c64;
        }
    }
    ctx->pc = 0x173C54u;
    // 0x173c54: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x173c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x173c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173C5Cu;
    {
        const bool branch_taken_0x173c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C5Cu;
        // 0x173c60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c5c) {
            ctx->pc = 0x173C68u;
            goto label_173c68;
        }
    }
    ctx->pc = 0x173C64u;
label_173c64:
    // 0x173c64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173c68:
    // 0x173c68: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x173c6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x173c70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x173c74: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x173c74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x173c78: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x173c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x173c7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x173C7Cu;
    {
        const bool branch_taken_0x173c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C7Cu;
        // 0x173c80: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c7c) {
            ctx->pc = 0x173C90u;
            goto label_173c90;
        }
    }
    ctx->pc = 0x173C84u;
    // 0x173c84: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x173c84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x173c88: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x173C88u;
    {
        const bool branch_taken_0x173c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x173c88) {
            ctx->pc = 0x173C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173C88u;
            // 0x173c8c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173be8;
        }
    }
    ctx->pc = 0x173C90u;
label_173c90:
    // 0x173c90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x173c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_173c94:
    // 0x173c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173c98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x173c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173c9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x173c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173ca0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x173ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x173ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x173CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CA4u;
        // 0x173ca8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173CACu;
    // 0x173cac: 0x0  nop
    ctx->pc = 0x173cacu;
    // NOP
    ctx->pc = 0x173cb0u;
}
