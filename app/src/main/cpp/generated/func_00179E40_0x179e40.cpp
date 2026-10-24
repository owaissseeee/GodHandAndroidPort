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

// Function: func_00179E40
// Address: 0x179e40 - 0x179fd0
void func_00179E40_0x179e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179E40_0x179e40");
#endif

    switch (ctx->pc) {
        case 0x179e58u: goto label_179e58;
        case 0x179e84u: goto label_179e84;
        case 0x179ec4u: goto label_179ec4;
        case 0x179ee0u: goto label_179ee0;
        case 0x179ef0u: goto label_179ef0;
        case 0x179f10u: goto label_179f10;
        default: break;
    }

    ctx->pc = 0x179e40u;

    // 0x179e40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179e44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x179e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x179e48: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x179e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x179e4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179e50: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x179E50u;
    SET_GPR_U32(ctx, 31, 0x179E58u);
    ctx->pc = 0x179E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E50u;
    // 0x179e54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x179E50u, 0x179E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E58u;
label_179e58:
    // 0x179e58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x179e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x179e5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x179e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x179e60: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x179e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x179e64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x179e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x179e68: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x179e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x179e6c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x179e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x179e70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x179e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x179e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e78: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x179e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x179e7c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x179E7Cu;
    SET_GPR_U32(ctx, 31, 0x179E84u);
    ctx->pc = 0x179E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E7Cu;
    // 0x179e80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x179E7Cu, 0x179E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E84u;
label_179e84:
    // 0x179e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e88: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x179E88u;
    {
        const bool branch_taken_0x179e88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E88u;
        // 0x179e8c: 0xae040650  sw          $a0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e88) {
            ctx->pc = 0x179EC4u;
            goto label_179ec4;
        }
    }
    ctx->pc = 0x179E90u;
    // 0x179e90: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x179e94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x179e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x179e98: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x179e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x179e9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x179e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ea0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x179ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x179ea4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x179ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x179ea8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x179ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x179eac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x179eb0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x179eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179eb4: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x179eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x179eb8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x179eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x179ebc: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x179EBCu;
    SET_GPR_U32(ctx, 31, 0x179EC4u);
    ctx->pc = 0x179EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EBCu;
    // 0x179ec0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x179EBCu, 0x179EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EC4u;
label_179ec4:
    // 0x179ec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ecc: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x179eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x179ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ed4: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x179ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x179ed8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x179ED8u;
    SET_GPR_U32(ctx, 31, 0x179EE0u);
    ctx->pc = 0x179EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ED8u;
    // 0x179edc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x179ED8u, 0x179EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EE0u;
label_179ee0:
    // 0x179ee0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x179ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x179ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ee8: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x179EE8u;
    SET_GPR_U32(ctx, 31, 0x179EF0u);
    ctx->pc = 0x179EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EE8u;
    // 0x179eec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x179EE8u, 0x179EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179EF0u;
label_179ef0:
    // 0x179ef0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x179ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x179ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179ef8: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x179EF8u;
    {
        const bool branch_taken_0x179ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x179ef8) {
            ctx->pc = 0x179EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179EF8u;
            // 0x179efc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179FBCu;
            goto label_179fbc;
        }
    }
    ctx->pc = 0x179F00u;
    // 0x179f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179f08: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x179f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179f0c: 0x0  nop
    ctx->pc = 0x179f0cu;
    // NOP
label_179f10:
    // 0x179f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f14: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x179f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x179f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x179F18u;
    {
        const bool branch_taken_0x179f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F18u;
        // 0x179f1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f18) {
            ctx->pc = 0x179F28u;
            goto label_179f28;
        }
    }
    ctx->pc = 0x179F20u;
    // 0x179f20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x179f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x179f24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179f28:
    // 0x179f28: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x179f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x179f2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179F2Cu;
    {
        const bool branch_taken_0x179f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F2Cu;
        // 0x179f30: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f2c) {
            ctx->pc = 0x179F44u;
            goto label_179f44;
        }
    }
    ctx->pc = 0x179F34u;
    // 0x179f34: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x179f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x179f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179F3Cu;
    {
        const bool branch_taken_0x179f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F3Cu;
        // 0x179f40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f3c) {
            ctx->pc = 0x179F48u;
            goto label_179f48;
        }
    }
    ctx->pc = 0x179F44u;
label_179f44:
    // 0x179f44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179f48:
    // 0x179f48: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x179f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x179f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f50: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x179f50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x179f54: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x179f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x179f58: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x179f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x179f5c: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x179f5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179f60: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179F60u;
    {
        const bool branch_taken_0x179f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F60u;
        // 0x179f64: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f60) {
            ctx->pc = 0x179F70u;
            goto label_179f70;
        }
    }
    ctx->pc = 0x179F68u;
    // 0x179f68: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x179f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179f6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179f70:
    // 0x179f70: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x179f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x179f74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179F74u;
    {
        const bool branch_taken_0x179f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F74u;
        // 0x179f78: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f74) {
            ctx->pc = 0x179F8Cu;
            goto label_179f8c;
        }
    }
    ctx->pc = 0x179F7Cu;
    // 0x179f7c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x179f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x179f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x179f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179f84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179F84u;
    {
        const bool branch_taken_0x179f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F84u;
        // 0x179f88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f84) {
            ctx->pc = 0x179F90u;
            goto label_179f90;
        }
    }
    ctx->pc = 0x179F8Cu;
label_179f8c:
    // 0x179f8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179f90:
    // 0x179f90: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x179f94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x179f98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179f9c: 0x28a30009  slti        $v1, $a1, 0x9
    ctx->pc = 0x179f9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x179fa0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x179fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x179fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x179FA4u;
    {
        const bool branch_taken_0x179fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FA4u;
        // 0x179fa8: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fa4) {
            ctx->pc = 0x179FB8u;
            goto label_179fb8;
        }
    }
    ctx->pc = 0x179FACu;
    // 0x179fac: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x179facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x179fb0: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x179FB0u;
    {
        const bool branch_taken_0x179fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x179fb0) {
            ctx->pc = 0x179FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179FB0u;
            // 0x179fb4: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f10;
        }
    }
    ctx->pc = 0x179FB8u;
label_179fb8:
    // 0x179fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179fbc:
    // 0x179fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179fc4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x179fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x179fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x179FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FC8u;
        // 0x179fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FD0u;
}
