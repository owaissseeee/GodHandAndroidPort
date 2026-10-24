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

// Function: func_0019AF80
// Address: 0x19af80 - 0x19b1a8
void func_0019AF80_0x19af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019AF80_0x19af80");
#endif

    switch (ctx->pc) {
        case 0x19afa0u: goto label_19afa0;
        case 0x19b008u: goto label_19b008;
        case 0x19b038u: goto label_19b038;
        case 0x19b054u: goto label_19b054;
        case 0x19b064u: goto label_19b064;
        case 0x19b074u: goto label_19b074;
        case 0x19b084u: goto label_19b084;
        case 0x19b0a0u: goto label_19b0a0;
        case 0x19b0b8u: goto label_19b0b8;
        default: break;
    }

    ctx->pc = 0x19af80u;

    // 0x19af80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19af84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19af88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19af88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19af8c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19af90: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x19af90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x19af94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19af98: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x19AF98u;
    SET_GPR_U32(ctx, 31, 0x19AFA0u);
    ctx->pc = 0x19AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF98u;
    // 0x19af9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x19AF98u, 0x19AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AFA0u;
label_19afa0:
    // 0x19afa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19afa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19afa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19afa8: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19afa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x19afac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x19afb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19afb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19afb4: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x19afb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19afb8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19afb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19afbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19afbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19afc0: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x19afc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19afc4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x19afc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x19afc8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19afcc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x19afccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19afd0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x19afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x19afd4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19afd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19afd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19afdc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19afdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19afe0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19afe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19afe4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19afe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19afe8: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x19afe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19afec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19afecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19aff0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x19aff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x19aff4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x19aff8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x19aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x19affc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x19affcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x19b000: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x19B000u;
    SET_GPR_U32(ctx, 31, 0x19B008u);
    ctx->pc = 0x19B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B000u;
    // 0x19b004: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x19B000u, 0x19B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B008u;
label_19b008:
    // 0x19b008: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19B008u;
    {
        const bool branch_taken_0x19b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B008u;
        // 0x19b00c: 0xae020600  sw          $v0, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b008) {
            ctx->pc = 0x19B038u;
            goto label_19b038;
        }
    }
    ctx->pc = 0x19B010u;
    // 0x19b010: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x19b010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19b014: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x19b014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x19b018: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x19b018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x19b01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b020: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x19b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x19b024: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19b024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b028: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x19b028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x19b02c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19b02cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b030: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x19B030u;
    SET_GPR_U32(ctx, 31, 0x19B038u);
    ctx->pc = 0x19B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B030u;
    // 0x19b034: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x19B030u, 0x19B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B038u;
label_19b038:
    // 0x19b038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b040: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x19b040u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b048: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x19b048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x19b04c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19B04Cu;
    SET_GPR_U32(ctx, 31, 0x19B054u);
    ctx->pc = 0x19B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B04Cu;
    // 0x19b050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19B04Cu, 0x19B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B054u;
label_19b054:
    // 0x19b054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b05c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19B05Cu;
    SET_GPR_U32(ctx, 31, 0x19B064u);
    ctx->pc = 0x19B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B05Cu;
    // 0x19b060: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19B05Cu, 0x19B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B064u;
label_19b064:
    // 0x19b064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b068: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19b06c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19B06Cu;
    SET_GPR_U32(ctx, 31, 0x19B074u);
    ctx->pc = 0x19B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B06Cu;
    // 0x19b070: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19B06Cu, 0x19B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B074u;
label_19b074:
    // 0x19b074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b078: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x19b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19b07c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x19B07Cu;
    SET_GPR_U32(ctx, 31, 0x19B084u);
    ctx->pc = 0x19B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B07Cu;
    // 0x19b080: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x19B07Cu, 0x19B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B084u;
label_19b084:
    // 0x19b084: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19b084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19b088: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19b088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b08c: 0x244958d8  addiu       $t1, $v0, 0x58D8
    ctx->pc = 0x19b08cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 22744));
    // 0x19b090: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b094: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x19b094u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x19b098: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19b098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19b09c: 0x0  nop
    ctx->pc = 0x19b09cu;
    // NOP
label_19b0a0:
    // 0x19b0a0: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x19b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19b0a4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x19b0a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b0a8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19B0ACu;
    {
        const bool branch_taken_0x19b0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0ACu;
        // 0x19b0b0: 0x24880001  addiu       $t0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0ac) {
            ctx->pc = 0x19B144u;
            goto label_19b144;
        }
    }
    ctx->pc = 0x19B0B4u;
    // 0x19b0b4: 0x0  nop
    ctx->pc = 0x19b0b4u;
    // NOP
label_19b0b8:
    // 0x19b0b8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x19b0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x19b0bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B0BCu;
    {
        const bool branch_taken_0x19b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0BCu;
        // 0x19b0c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0bc) {
            ctx->pc = 0x19B0CCu;
            goto label_19b0cc;
        }
    }
    ctx->pc = 0x19B0C4u;
    // 0x19b0c4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x19b0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19b0c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b0cc:
    // 0x19b0cc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19b0d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B0D0u;
    {
        const bool branch_taken_0x19b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0D0u;
        // 0x19b0d4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0d0) {
            ctx->pc = 0x19B0E8u;
            goto label_19b0e8;
        }
    }
    ctx->pc = 0x19B0D8u;
    // 0x19b0d8: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19b0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b0e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B0E0u;
    {
        const bool branch_taken_0x19b0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B0E0u;
        // 0x19b0e4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b0e0) {
            ctx->pc = 0x19B0ECu;
            goto label_19b0ec;
        }
    }
    ctx->pc = 0x19B0E8u;
label_19b0e8:
    // 0x19b0e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b0ec:
    // 0x19b0ec: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x19b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x19b0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0f4: 0xca182a  slt         $v1, $a2, $t2
    ctx->pc = 0x19b0f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x19b0f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19b0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19b0fc: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x19b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x19b100: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x19b100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19b104: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B104u;
    {
        const bool branch_taken_0x19b104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B104u;
        // 0x19b108: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b104) {
            ctx->pc = 0x19B114u;
            goto label_19b114;
        }
    }
    ctx->pc = 0x19B10Cu;
    // 0x19b10c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x19b10cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19b110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b114:
    // 0x19b114: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19b118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B118u;
    {
        const bool branch_taken_0x19b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B118u;
        // 0x19b11c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b118) {
            ctx->pc = 0x19B130u;
            goto label_19b130;
        }
    }
    ctx->pc = 0x19B120u;
    // 0x19b120: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x19b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x19b124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19B128u;
    {
        const bool branch_taken_0x19b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B128u;
        // 0x19b12c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b128) {
            ctx->pc = 0x19B134u;
            goto label_19b134;
        }
    }
    ctx->pc = 0x19B130u;
label_19b130:
    // 0x19b130: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19b130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b134:
    // 0x19b134: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19b138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19b138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19b13c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19b13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19b140: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19b140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
label_19b144:
    // 0x19b144: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x19b144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x19b148: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x19b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x19b14c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x19b14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19b150: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x19b150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19b154: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19b158: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x19b158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19b15c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19B15Cu;
    {
        const bool branch_taken_0x19b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b15c) {
            ctx->pc = 0x19B160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B15Cu;
            // 0x19b160: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B178u;
            goto label_19b178;
        }
    }
    ctx->pc = 0x19B164u;
    // 0x19b164: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x19b164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x19b168: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x19b168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19b16c: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x19B16Cu;
    {
        const bool branch_taken_0x19b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b16c) {
            ctx->pc = 0x19B170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B16Cu;
            // 0x19b170: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b0b8;
        }
    }
    ctx->pc = 0x19B174u;
    // 0x19b174: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x19b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19b178:
    // 0x19b178: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x19b178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19b17c: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x19B17Cu;
    {
        const bool branch_taken_0x19b17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b17c) {
            ctx->pc = 0x19B180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B17Cu;
            // 0x19b180: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19b0a0;
        }
    }
    ctx->pc = 0x19B184u;
    // 0x19b184: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19b184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19b188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b18c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19b18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19b190: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19b190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19b194: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19b194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19b198: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x19b198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19b19c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B19Cu;
        // 0x19b1a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B1A4u;
    // 0x19b1a4: 0x0  nop
    ctx->pc = 0x19b1a4u;
    // NOP
    ctx->pc = 0x19b1a8u;
}
