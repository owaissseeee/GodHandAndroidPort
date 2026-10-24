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

// Function: func_00186A80
// Address: 0x186a80 - 0x186c58
void func_00186A80_0x186a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186A80_0x186a80");
#endif

    switch (ctx->pc) {
        case 0x186a9cu: goto label_186a9c;
        case 0x186b04u: goto label_186b04;
        case 0x186b44u: goto label_186b44;
        case 0x186b60u: goto label_186b60;
        case 0x186b70u: goto label_186b70;
        case 0x186b90u: goto label_186b90;
        default: break;
    }

    ctx->pc = 0x186a80u;

    // 0x186a80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x186a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x186a84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x186a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x186a88: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x186a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x186a8c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x186a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x186a90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x186a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x186a94: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x186A94u;
    SET_GPR_U32(ctx, 31, 0x186A9Cu);
    ctx->pc = 0x186A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A94u;
    // 0x186a98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x186A94u, 0x186A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A9Cu;
label_186a9c:
    // 0x186a9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x186aa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x186aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x186aa4: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x186aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x186aa8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x186aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x186aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186ab0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x186ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186ab4: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x186ab8: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x186ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x186abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186ac0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x186ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x186ac4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x186ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x186ac8: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x186ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x186acc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x186accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x186ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ad4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x186ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186ad8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x186adc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x186adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x186ae0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x186ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x186ae4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x186ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x186ae8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x186ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x186aec: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x186aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x186af0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x186af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x186af4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x186af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x186af8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x186af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x186afc: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x186AFCu;
    SET_GPR_U32(ctx, 31, 0x186B04u);
    ctx->pc = 0x186B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186AFCu;
    // 0x186b00: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x186AFCu, 0x186B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B04u;
label_186b04:
    // 0x186b04: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x186B04u;
    {
        const bool branch_taken_0x186b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B04u;
        // 0x186b08: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b04) {
            ctx->pc = 0x186B44u;
            goto label_186b44;
        }
    }
    ctx->pc = 0x186B0Cu;
    // 0x186b0c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x186b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x186b10: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x186b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x186b14: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x186b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x186b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b1c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x186b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x186b20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b24: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x186b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x186b28: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x186b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x186b2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x186b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x186b30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x186b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186b34: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x186b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x186b38: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x186b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x186b3c: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x186B3Cu;
    SET_GPR_U32(ctx, 31, 0x186B44u);
    ctx->pc = 0x186B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B3Cu;
    // 0x186b40: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x186B3Cu, 0x186B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B44u;
label_186b44:
    // 0x186b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b4c: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x186b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x186b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x186b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b54: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x186b54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x186b58: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x186B58u;
    SET_GPR_U32(ctx, 31, 0x186B60u);
    ctx->pc = 0x186B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B58u;
    // 0x186b5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x186B58u, 0x186B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B60u;
label_186b60:
    // 0x186b60: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x186b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x186b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b68: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x186B68u;
    SET_GPR_U32(ctx, 31, 0x186B70u);
    ctx->pc = 0x186B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B68u;
    // 0x186b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x186B68u, 0x186B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186B70u;
label_186b70:
    // 0x186b70: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x186b70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x186b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186b78: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x186B78u;
    {
        const bool branch_taken_0x186b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x186b78) {
            ctx->pc = 0x186B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B78u;
            // 0x186b7c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C3Cu;
            goto label_186c3c;
        }
    }
    ctx->pc = 0x186B80u;
    // 0x186b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186b88: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x186b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x186b8c: 0x0  nop
    ctx->pc = 0x186b8cu;
    // NOP
label_186b90:
    // 0x186b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b94: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x186b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x186b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186B98u;
    {
        const bool branch_taken_0x186b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B98u;
        // 0x186b9c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b98) {
            ctx->pc = 0x186BA8u;
            goto label_186ba8;
        }
    }
    ctx->pc = 0x186BA0u;
    // 0x186ba0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x186ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x186ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186ba8:
    // 0x186ba8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x186ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x186bac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186BACu;
    {
        const bool branch_taken_0x186bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BACu;
        // 0x186bb0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bac) {
            ctx->pc = 0x186BC4u;
            goto label_186bc4;
        }
    }
    ctx->pc = 0x186BB4u;
    // 0x186bb4: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x186bb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186BBCu;
    {
        const bool branch_taken_0x186bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BBCu;
        // 0x186bc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bbc) {
            ctx->pc = 0x186BC8u;
            goto label_186bc8;
        }
    }
    ctx->pc = 0x186BC4u;
label_186bc4:
    // 0x186bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186bc8:
    // 0x186bc8: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x186bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd0: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x186bd4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x186bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x186bd8: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x186bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x186bdc: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x186bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x186be0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x186BE0u;
    {
        const bool branch_taken_0x186be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x186BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BE0u;
        // 0x186be4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186be0) {
            ctx->pc = 0x186BF0u;
            goto label_186bf0;
        }
    }
    ctx->pc = 0x186BE8u;
    // 0x186be8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x186be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186bec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x186becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186bf0:
    // 0x186bf0: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x186bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x186bf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186C0Cu;
            goto label_186c0c;
        }
    }
    ctx->pc = 0x186BFCu;
    // 0x186bfc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x186bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x186c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x186c04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186C04u;
    {
        const bool branch_taken_0x186c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C04u;
        // 0x186c08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c04) {
            ctx->pc = 0x186C10u;
            goto label_186c10;
        }
    }
    ctx->pc = 0x186C0Cu;
label_186c0c:
    // 0x186c0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186c10:
    // 0x186c10: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x186c14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x186c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x186c18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x186c1c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x186c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x186c20: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x186c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x186c24: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x186C24u;
    {
        const bool branch_taken_0x186c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C24u;
        // 0x186c28: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c24) {
            ctx->pc = 0x186C38u;
            goto label_186c38;
        }
    }
    ctx->pc = 0x186C2Cu;
    // 0x186c2c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x186c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x186c30: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x186C30u;
    {
        const bool branch_taken_0x186c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x186c30) {
            ctx->pc = 0x186C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C30u;
            // 0x186c34: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b90;
        }
    }
    ctx->pc = 0x186C38u;
label_186c38:
    // 0x186c38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x186c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_186c3c:
    // 0x186c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186c40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x186c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186c44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x186c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186c48: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x186c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x186C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C4Cu;
        // 0x186c50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186C54u;
    // 0x186c54: 0x0  nop
    ctx->pc = 0x186c54u;
    // NOP
    ctx->pc = 0x186c58u;
}
