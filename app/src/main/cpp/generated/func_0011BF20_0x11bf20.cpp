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

// Function: func_0011BF20
// Address: 0x11bf20 - 0x11c348
void func_0011BF20_0x11bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011BF20_0x11bf20");
#endif

    switch (ctx->pc) {
        case 0x11bf70u: goto label_11bf70;
        case 0x11bf7cu: goto label_11bf7c;
        case 0x11bfccu: goto label_11bfcc;
        case 0x11c018u: goto label_11c018;
        case 0x11c02cu: goto label_11c02c;
        case 0x11c034u: goto label_11c034;
        case 0x11c03cu: goto label_11c03c;
        case 0x11c090u: goto label_11c090;
        case 0x11c098u: goto label_11c098;
        case 0x11c0c0u: goto label_11c0c0;
        case 0x11c0ccu: goto label_11c0cc;
        case 0x11c0ecu: goto label_11c0ec;
        case 0x11c108u: goto label_11c108;
        case 0x11c110u: goto label_11c110;
        case 0x11c130u: goto label_11c130;
        case 0x11c170u: goto label_11c170;
        case 0x11c17cu: goto label_11c17c;
        case 0x11c1a4u: goto label_11c1a4;
        case 0x11c1ccu: goto label_11c1cc;
        case 0x11c208u: goto label_11c208;
        case 0x11c210u: goto label_11c210;
        case 0x11c21cu: goto label_11c21c;
        case 0x11c250u: goto label_11c250;
        case 0x11c25cu: goto label_11c25c;
        case 0x11c274u: goto label_11c274;
        case 0x11c28cu: goto label_11c28c;
        case 0x11c2a0u: goto label_11c2a0;
        case 0x11c2a8u: goto label_11c2a8;
        case 0x11c2bcu: goto label_11c2bc;
        case 0x11c2e0u: goto label_11c2e0;
        case 0x11c2ecu: goto label_11c2ec;
        case 0x11c2f8u: goto label_11c2f8;
        case 0x11c31cu: goto label_11c31c;
        default: break;
    }

    ctx->pc = 0x11bf20u;

    // 0x11bf20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11bf24: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11bf28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11bf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11bf2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bf2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11bf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11bf3c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11bf40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11bf44: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11bf48: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11bf48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11bf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11bf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf50: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11bf54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bf54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bf58: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11bf5c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11bf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11bf60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11bf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11bf64: 0x8e300694  lw          $s0, 0x694($s1)
    ctx->pc = 0x11bf64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11bf68: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11BF68u;
    SET_GPR_U32(ctx, 31, 0x11BF70u);
    ctx->pc = 0x11BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF68u;
    // 0x11bf6c: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11BF68u, 0x11BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF70u;
label_11bf70:
    // 0x11bf70: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11bf74: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11BF74u;
    SET_GPR_U32(ctx, 31, 0x11BF7Cu);
    ctx->pc = 0x11BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF74u;
    // 0x11bf78: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11BF74u, 0x11BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF7Cu;
label_11bf7c:
    // 0x11bf7c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11bf7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11bf80: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x11bf80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11bf84: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x11BF84u;
    {
        const bool branch_taken_0x11bf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF84u;
        // 0x11bf88: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf84) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11BF8Cu;
    // 0x11bf8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11bf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11bf90: 0x2442c610  addiu       $v0, $v0, -0x39F0
    ctx->pc = 0x11bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x11bf94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11bf98: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bf9c: 0x800008  jr          $a0
    ctx->pc = 0x11BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BFA4u: goto label_11bfa4;
            case 0x11C058u: goto label_11c058;
            case 0x11C0D4u: goto label_11c0d4;
            case 0x11C100u: goto label_11c100;
            case 0x11C264u: goto label_11c264;
            case 0x11C298u: goto label_11c298;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF9Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11BFA4u;
label_11bfa4:
    // 0x11bfa4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11bfa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11bfa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11bfacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11bfb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfb8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11bfbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfc0: 0x240600cf  addiu       $a2, $zero, 0xCF
    ctx->pc = 0x11bfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x11bfc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11BFC4u;
    SET_GPR_U32(ctx, 31, 0x11BFCCu);
    ctx->pc = 0x11BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFC4u;
    // 0x11bfc8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11BFC4u, 0x11BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFCCu;
label_11bfcc:
    // 0x11bfcc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11bfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11bfd0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11bfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfd4: 0x3c01bd32  lui         $at, 0xBD32
    ctx->pc = 0x11bfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48434 << 16));
    // 0x11bfd8: 0x3421fec5  ori         $at, $at, 0xFEC5
    ctx->pc = 0x11bfd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65221);
    // 0x11bfdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11bfdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11bfe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11bfe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfe4: 0xc7b40004  lwc1        $f20, 0x4($sp)
    ctx->pc = 0x11bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11bfe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfec: 0x3c013f9d  lui         $at, 0x3F9D
    ctx->pc = 0x11bfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16285 << 16));
    // 0x11bff0: 0x34210e56  ori         $at, $at, 0xE56
    ctx->pc = 0x11bff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3670);
    // 0x11bff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11bff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11bff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11c000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11c004: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c004u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c008: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11c008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11c00c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x11c00cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11c010: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11C010u;
    SET_GPR_U32(ctx, 31, 0x11C018u);
    ctx->pc = 0x11C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C010u;
    // 0x11c014: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11C010u, 0x11C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C018u;
label_11c018:
    // 0x11c018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c01c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11c020: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x11c020u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11c024: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C024u;
    SET_GPR_U32(ctx, 31, 0x11C02Cu);
    ctx->pc = 0x11C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C024u;
    // 0x11c028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C024u, 0x11C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C02Cu;
label_11c02c:
    // 0x11c02c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11C02Cu;
    SET_GPR_U32(ctx, 31, 0x11C034u);
    ctx->pc = 0x11C030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C02Cu;
    // 0x11c030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11C02Cu, 0x11C034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C034u;
label_11c034:
    // 0x11c034: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11C034u;
    SET_GPR_U32(ctx, 31, 0x11C03Cu);
    ctx->pc = 0x11C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C034u;
    // 0x11c038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11C034u, 0x11C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C03Cu;
label_11c03c:
    // 0x11c03c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11c03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c040: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x11c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11c044: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11c048: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11c048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11c04c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c050: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11c050u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11c054: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11c054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c058:
    // 0x11c058: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11c058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11c05c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11C05Cu;
    {
        const bool branch_taken_0x11c05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C05Cu;
        // 0x11c060: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c05c) {
            ctx->pc = 0x11C088u;
            goto label_11c088;
        }
    }
    ctx->pc = 0x11C064u;
    // 0x11c064: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C064u;
        // 0x11c068: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C088u;
            goto label_11c088;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x11c06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x11c070: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11c070u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c074: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11c074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11c078: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11c078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c07c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x11c07cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11c080: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11c080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11c084: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x11c084u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11c088:
    // 0x11c088: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C088u;
    SET_GPR_U32(ctx, 31, 0x11C090u);
    ctx->pc = 0x11C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C088u;
    // 0x11c08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C088u, 0x11C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C090u;
label_11c090:
    // 0x11c090: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C090u;
    SET_GPR_U32(ctx, 31, 0x11C098u);
    ctx->pc = 0x11C094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C090u;
    // 0x11c094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C090u, 0x11C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C098u;
label_11c098:
    // 0x11c098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C098u;
    {
        const bool branch_taken_0x11c098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c098) {
            ctx->pc = 0x11C0ACu;
            goto label_11c0ac;
        }
    }
    ctx->pc = 0x11C0A0u;
    // 0x11c0a0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11c0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c0a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c0a8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11c0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c0ac:
    // 0x11c0ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c0b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C0B8u;
    SET_GPR_U32(ctx, 31, 0x11C0C0u);
    ctx->pc = 0x11C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0B8u;
    // 0x11c0bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C0B8u, 0x11C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0C0u;
label_11c0c0:
    // 0x11c0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C0C4u;
    SET_GPR_U32(ctx, 31, 0x11C0CCu);
    ctx->pc = 0x11C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0C4u;
    // 0x11c0c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C0C4u, 0x11C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0CCu;
label_11c0cc:
    // 0x11c0cc: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x11C0CCu;
    {
        const bool branch_taken_0x11c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0CCu;
        // 0x11c0d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0cc) {
            ctx->pc = 0x11C330u;
            goto label_11c330;
        }
    }
    ctx->pc = 0x11C0D4u;
label_11c0d4:
    // 0x11c0d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11c0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11c0d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11c0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11c0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c0e4: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C0E4u;
    SET_GPR_U32(ctx, 31, 0x11C0ECu);
    ctx->pc = 0x11C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0E4u;
    // 0x11c0e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C0E4u, 0x11C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0ECu;
label_11c0ec:
    // 0x11c0ec: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c0f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11c0f4: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11c0f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c0fc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11c0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c100:
    // 0x11c100: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C100u;
    SET_GPR_U32(ctx, 31, 0x11C108u);
    ctx->pc = 0x11C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C100u;
    // 0x11c104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C100u, 0x11C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C108u;
label_11c108:
    // 0x11c108: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C108u;
    SET_GPR_U32(ctx, 31, 0x11C110u);
    ctx->pc = 0x11C10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C108u;
    // 0x11c10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C108u, 0x11C110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C110u;
label_11c110:
    // 0x11c110: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11C110u;
    {
        const bool branch_taken_0x11c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c110) {
            ctx->pc = 0x11C15Cu;
            goto label_11c15c;
        }
    }
    ctx->pc = 0x11C118u;
    // 0x11c118: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11c118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11c11c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11C11Cu;
    {
        const bool branch_taken_0x11c11c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C11Cu;
        // 0x11c120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c11c) {
            ctx->pc = 0x11C14Cu;
            goto label_11c14c;
        }
    }
    ctx->pc = 0x11C124u;
    // 0x11c124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c128: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11C128u;
    SET_GPR_U32(ctx, 31, 0x11C130u);
    ctx->pc = 0x11C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C128u;
    // 0x11c12c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11C128u, 0x11C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C130u;
label_11c130:
    // 0x11c130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c134: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c138: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11c138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c13c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11c13cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11c140: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11c140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c144: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C144u;
    {
        const bool branch_taken_0x11c144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C144u;
        // 0x11c148: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c144) {
            ctx->pc = 0x11C15Cu;
            goto label_11c15c;
        }
    }
    ctx->pc = 0x11C14Cu;
label_11c14c:
    // 0x11c14c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11c150: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11c154: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c158: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11c158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11c15c:
    // 0x11c15c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c160: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c168: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C168u;
    SET_GPR_U32(ctx, 31, 0x11C170u);
    ctx->pc = 0x11C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C168u;
    // 0x11c16c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C168u, 0x11C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C170u;
label_11c170:
    // 0x11c170: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11c170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11c174: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C174u;
    SET_GPR_U32(ctx, 31, 0x11C17Cu);
    ctx->pc = 0x11C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C174u;
    // 0x11c178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C174u, 0x11C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C17Cu;
label_11c17c:
    // 0x11c17c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11c180: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x11C180u;
    {
        const bool branch_taken_0x11c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C180u;
        // 0x11c184: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c180) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11C188u;
    // 0x11c188: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x11C188u;
    {
        const bool branch_taken_0x11c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C188u;
        // 0x11c18c: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c188) {
            ctx->pc = 0x11C32Cu;
            goto label_11c32c;
        }
    }
    ctx->pc = 0x11C190u;
    // 0x11c190: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x11c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x11c194: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11c198: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11c198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11c19c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C19Cu;
    SET_GPR_U32(ctx, 31, 0x11C1A4u);
    ctx->pc = 0x11C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C19Cu;
    // 0x11c1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C19Cu, 0x11C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1A4u;
label_11c1a4:
    // 0x11c1a4: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11C1A4u;
    {
        const bool branch_taken_0x11c1a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c1a4) {
            ctx->pc = 0x11C1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C1A4u;
            // 0x11c1a8: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C1D0u;
            goto label_11c1d0;
        }
    }
    ctx->pc = 0x11C1ACu;
    // 0x11c1ac: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x11c1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x11c1b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11c1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11c1b4: 0xc600076c  lwc1        $f0, 0x76C($s0)
    ctx->pc = 0x11c1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11c1b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11c1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11c1bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11c1bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11c1c0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11c1c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11c1c4: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11C1C4u;
    SET_GPR_U32(ctx, 31, 0x11C1CCu);
    ctx->pc = 0x11C1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1C4u;
    // 0x11c1c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11C1C4u, 0x11C1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1CCu;
label_11c1cc:
    // 0x11c1cc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11c1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11c1d0:
    // 0x11c1d0: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11C1D0u;
    {
        const bool branch_taken_0x11c1d0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D0u;
        // 0x11c1d4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1d0) {
            ctx->pc = 0x11C22Cu;
            goto label_11c22c;
        }
    }
    ctx->pc = 0x11C1D8u;
    // 0x11c1d8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11c1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11c1dc: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11c1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c1e0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11c1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11c1e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1e8: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11c1ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c1f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c1f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c1f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11c1fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c200: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11C200u;
    SET_GPR_U32(ctx, 31, 0x11C208u);
    ctx->pc = 0x11C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C200u;
    // 0x11c204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11C200u, 0x11C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C208u;
label_11c208:
    // 0x11c208: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11C208u;
    SET_GPR_U32(ctx, 31, 0x11C210u);
    ctx->pc = 0x11C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C208u;
    // 0x11c20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11C208u, 0x11C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C210u;
label_11c210:
    // 0x11c210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c214: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C214u;
    SET_GPR_U32(ctx, 31, 0x11C21Cu);
    ctx->pc = 0x11C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C214u;
    // 0x11c218: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C214u, 0x11C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C21Cu;
label_11c21c:
    // 0x11c21c: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11c21cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11c220: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11c224: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11C224u;
    {
        const bool branch_taken_0x11c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C224u;
        // 0x11c228: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c224) {
            ctx->pc = 0x11C250u;
            goto label_11c250;
        }
    }
    ctx->pc = 0x11C22Cu;
label_11c22c:
    // 0x11c22c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c230: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11c234: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11c234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11c238: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11c238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c23c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11c23cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c240: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c244: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11c244u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c248: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11C248u;
    SET_GPR_U32(ctx, 31, 0x11C250u);
    ctx->pc = 0x11C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C248u;
    // 0x11c24c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11C248u, 0x11C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C250u;
label_11c250:
    // 0x11c250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c254: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11C254u;
    SET_GPR_U32(ctx, 31, 0x11C25Cu);
    ctx->pc = 0x11C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C254u;
    // 0x11c258: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11C254u, 0x11C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C25Cu;
label_11c25c:
    // 0x11c25c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11C25Cu;
    {
        const bool branch_taken_0x11c25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C25Cu;
        // 0x11c260: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c25c) {
            ctx->pc = 0x11C330u;
            goto label_11c330;
        }
    }
    ctx->pc = 0x11C264u;
label_11c264:
    // 0x11c264: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11c264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11c268: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x11c268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x11c26c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11C26Cu;
    SET_GPR_U32(ctx, 31, 0x11C274u);
    ctx->pc = 0x11C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C26Cu;
    // 0x11c270: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11C26Cu, 0x11C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C274u;
label_11c274:
    // 0x11c274: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x11c274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x11c278: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11c278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11c27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c280: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11c280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11c284: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11C284u;
    SET_GPR_U32(ctx, 31, 0x11C28Cu);
    ctx->pc = 0x11C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C284u;
    // 0x11c288: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11C284u, 0x11C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C28Cu;
label_11c28c:
    // 0x11c28c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11c28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11c290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11c294: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11c294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11c298:
    // 0x11c298: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11C298u;
    SET_GPR_U32(ctx, 31, 0x11C2A0u);
    ctx->pc = 0x11C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C298u;
    // 0x11c29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11C298u, 0x11C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2A0u;
label_11c2a0:
    // 0x11c2a0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11C2A0u;
    SET_GPR_U32(ctx, 31, 0x11C2A8u);
    ctx->pc = 0x11C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2A0u;
    // 0x11c2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11C2A0u, 0x11C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2A8u;
label_11c2a8:
    // 0x11c2a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C2A8u;
    {
        const bool branch_taken_0x11c2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2A8u;
        // 0x11c2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a8) {
            ctx->pc = 0x11C2CCu;
            goto label_11c2cc;
        }
    }
    ctx->pc = 0x11C2B0u;
    // 0x11c2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2b4: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11C2B4u;
    SET_GPR_U32(ctx, 31, 0x11C2BCu);
    ctx->pc = 0x11C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2B4u;
    // 0x11c2b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11C2B4u, 0x11C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2BCu;
label_11c2bc:
    // 0x11c2bc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11c2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c2c0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11c2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c2c4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11c2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c2c8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11c2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_11c2cc:
    // 0x11c2cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11c2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11c2d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11c2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11c2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11C2D8u;
    SET_GPR_U32(ctx, 31, 0x11C2E0u);
    ctx->pc = 0x11C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2D8u;
    // 0x11c2dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11C2D8u, 0x11C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2E0u;
label_11c2e0:
    // 0x11c2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2e4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11C2E4u;
    SET_GPR_U32(ctx, 31, 0x11C2ECu);
    ctx->pc = 0x11C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2E4u;
    // 0x11c2e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11C2E4u, 0x11C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2ECu;
label_11c2ec:
    // 0x11c2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f0: 0xc048e4e  jal         func_123938
    ctx->pc = 0x11C2F0u;
    SET_GPR_U32(ctx, 31, 0x11C2F8u);
    ctx->pc = 0x11C2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2F0u;
    // 0x11c2f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x11C2F0u, 0x11C2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2F8u;
label_11c2f8:
    // 0x11c2f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C2F8u;
    {
        const bool branch_taken_0x11c2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F8u;
        // 0x11c2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f8) {
            ctx->pc = 0x11C310u;
            goto label_11c310;
        }
    }
    ctx->pc = 0x11C300u;
    // 0x11c300: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11c300u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11c304: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11c304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11c308: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C308u;
    {
        const bool branch_taken_0x11c308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C308u;
        // 0x11c30c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c308) {
            ctx->pc = 0x11C330u;
            goto label_11c330;
        }
    }
    ctx->pc = 0x11C310u;
label_11c310:
    // 0x11c310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c314: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11C314u;
    SET_GPR_U32(ctx, 31, 0x11C31Cu);
    ctx->pc = 0x11C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C314u;
    // 0x11c318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11C314u, 0x11C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C31Cu;
label_11c31c:
    // 0x11c31c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x11c31cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c320: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x11c320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c324: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x11c324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x11c328: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11c328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_11c32c:
    // 0x11c32c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11c32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11c330:
    // 0x11c330: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11c330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11c334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c33c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11c340: 0x3e00008  jr          $ra
    ctx->pc = 0x11C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C340u;
        // 0x11c344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C348u;
}
