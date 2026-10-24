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

// Function: func_0018CF88
// Address: 0x18cf88 - 0x18d160
void func_0018CF88_0x18cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018CF88_0x18cf88");
#endif

    switch (ctx->pc) {
        case 0x18cfa4u: goto label_18cfa4;
        case 0x18d00cu: goto label_18d00c;
        case 0x18d04cu: goto label_18d04c;
        case 0x18d068u: goto label_18d068;
        case 0x18d078u: goto label_18d078;
        case 0x18d098u: goto label_18d098;
        default: break;
    }

    ctx->pc = 0x18cf88u;

    // 0x18cf88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18cf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18cf8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18cf90: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18cf94: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x18cf94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18cf98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cf9c: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x18CF9Cu;
    SET_GPR_U32(ctx, 31, 0x18CFA4u);
    ctx->pc = 0x18CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CF9Cu;
    // 0x18cfa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x18CF9Cu, 0x18CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18cfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18cfa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18cfa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18cfac: 0x3c013f82  lui         $at, 0x3F82
    ctx->pc = 0x18cfacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16258 << 16));
    // 0x18cfb0: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x18cfb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x18cfb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cfb8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x18cfb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18cfbc: 0x3c013fa4  lui         $at, 0x3FA4
    ctx->pc = 0x18cfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16292 << 16));
    // 0x18cfc0: 0x3421dd2f  ori         $at, $at, 0xDD2F
    ctx->pc = 0x18cfc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56623);
    // 0x18cfc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18cfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18cfc8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18cfcc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x18cfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x18cfd0: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x18cfd4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x18cfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x18cfd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18cfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18cfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18cfe0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18cfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cfe4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x18cfe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x18cfe8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18cfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x18cfec: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x18cfecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x18cff0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x18cff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x18cff4: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x18cff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x18cff8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18cffc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18d000: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18d004: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x18D004u;
    SET_GPR_U32(ctx, 31, 0x18D00Cu);
    ctx->pc = 0x18D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D004u;
    // 0x18d008: 0xe634000c  swc1        $f20, 0xC($s1) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x18D004u, 0x18D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D00Cu;
label_18d00c:
    // 0x18d00c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18D00Cu;
    {
        const bool branch_taken_0x18d00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D00Cu;
        // 0x18d010: 0xae020650  sw          $v0, 0x650($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d00c) {
            ctx->pc = 0x18D04Cu;
            goto label_18d04c;
        }
    }
    ctx->pc = 0x18D014u;
    // 0x18d014: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x18d014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18d018: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18d018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18d01c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18d020: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d024: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18d024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18d028: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18d028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d02c: 0xe4f4000c  swc1        $f20, 0xC($a3)
    ctx->pc = 0x18d02cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x18d030: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x18d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x18d034: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18d038: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18d03c: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x18d03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18d040: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x18d040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18d044: 0xc07f700  jal         func_1FDC00
    ctx->pc = 0x18D044u;
    SET_GPR_U32(ctx, 31, 0x18D04Cu);
    ctx->pc = 0x18D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D044u;
    // 0x18d048: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDC00u, 0x18D044u, 0x18D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D04Cu;
label_18d04c:
    // 0x18d04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d054: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x18d054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18d058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d05c: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x18d05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x18d060: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18D060u;
    SET_GPR_U32(ctx, 31, 0x18D068u);
    ctx->pc = 0x18D064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D060u;
    // 0x18d064: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18D060u, 0x18D068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D068u;
label_18d068:
    // 0x18d068: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x18d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18d06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18d06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d070: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x18D070u;
    SET_GPR_U32(ctx, 31, 0x18D078u);
    ctx->pc = 0x18D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D070u;
    // 0x18d074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x18D070u, 0x18D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D078u;
label_18d078:
    // 0x18d078: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18d078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18d07c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d080: 0x50450030  beql        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x18D080u;
    {
        const bool branch_taken_0x18d080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18d080) {
            ctx->pc = 0x18D084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D080u;
            // 0x18d084: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D144u;
            goto label_18d144;
        }
    }
    ctx->pc = 0x18D088u;
    // 0x18d088: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18d088u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d08c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18d08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d090: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x18d090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18d094: 0x0  nop
    ctx->pc = 0x18d094u;
    // NOP
label_18d098:
    // 0x18d098: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d09c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x18d09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18d0a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D0A0u;
    {
        const bool branch_taken_0x18d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A0u;
        // 0x18d0a4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0a0) {
            ctx->pc = 0x18D0B0u;
            goto label_18d0b0;
        }
    }
    ctx->pc = 0x18D0A8u;
    // 0x18d0a8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x18d0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18d0ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d0b0:
    // 0x18d0b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x18d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x18d0b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D0B4u;
    {
        const bool branch_taken_0x18d0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0B4u;
        // 0x18d0b8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0b4) {
            ctx->pc = 0x18D0CCu;
            goto label_18d0cc;
        }
    }
    ctx->pc = 0x18D0BCu;
    // 0x18d0bc: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18d0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18d0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d0c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D0C4u;
    {
        const bool branch_taken_0x18d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C4u;
        // 0x18d0c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0c4) {
            ctx->pc = 0x18D0D0u;
            goto label_18d0d0;
        }
    }
    ctx->pc = 0x18D0CCu;
label_18d0cc:
    // 0x18d0cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d0d0:
    // 0x18d0d0: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18d0d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18d0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d0d8: 0xe8182a  slt         $v1, $a3, $t0
    ctx->pc = 0x18d0d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x18d0dc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18d0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18d0e0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x18d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x18d0e4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18d0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18d0e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D0E8u;
    {
        const bool branch_taken_0x18d0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E8u;
        // 0x18d0ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e8) {
            ctx->pc = 0x18D0F8u;
            goto label_18d0f8;
        }
    }
    ctx->pc = 0x18D0F0u;
    // 0x18d0f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18d0f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18d0f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18d0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d0f8:
    // 0x18d0f8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x18d0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18d0fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D0FCu;
    {
        const bool branch_taken_0x18d0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0FCu;
        // 0x18d100: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0fc) {
            ctx->pc = 0x18D114u;
            goto label_18d114;
        }
    }
    ctx->pc = 0x18D104u;
    // 0x18d104: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x18d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x18d108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18d10c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D10Cu;
    {
        const bool branch_taken_0x18d10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D10Cu;
        // 0x18d110: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d10c) {
            ctx->pc = 0x18D118u;
            goto label_18d118;
        }
    }
    ctx->pc = 0x18D114u;
label_18d114:
    // 0x18d114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18d114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d118:
    // 0x18d118: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x18d11c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18d120: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x18d120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x18d124: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x18d124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x18d128: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18d12c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D12Cu;
    {
        const bool branch_taken_0x18d12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D12Cu;
        // 0x18d130: 0xac820154  sw          $v0, 0x154($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d12c) {
            ctx->pc = 0x18D140u;
            goto label_18d140;
        }
    }
    ctx->pc = 0x18D134u;
    // 0x18d134: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x18d134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x18d138: 0x5445ffd7  bnel        $v0, $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D138u;
            // 0x18d13c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d098;
        }
    }
    ctx->pc = 0x18D140u;
label_18d140:
    // 0x18d140: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18d140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18d144:
    // 0x18d144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d148: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18d148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d14c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18d14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d150: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x18d150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d154: 0x3e00008  jr          $ra
    ctx->pc = 0x18D154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D154u;
        // 0x18d158: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D15Cu;
    // 0x18d15c: 0x0  nop
    ctx->pc = 0x18d15cu;
    // NOP
    ctx->pc = 0x18d160u;
}
