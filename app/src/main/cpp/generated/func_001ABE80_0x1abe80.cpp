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

// Function: func_001ABE80
// Address: 0x1abe80 - 0x1ac370
void func_001ABE80_0x1abe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ABE80_0x1abe80");
#endif

    switch (ctx->pc) {
        case 0x1abeacu: goto label_1abeac;
        case 0x1abf14u: goto label_1abf14;
        case 0x1abf54u: goto label_1abf54;
        case 0x1abf70u: goto label_1abf70;
        case 0x1ac040u: goto label_1ac040;
        case 0x1ac0ccu: goto label_1ac0cc;
        case 0x1ac124u: goto label_1ac124;
        case 0x1ac148u: goto label_1ac148;
        case 0x1ac1fcu: goto label_1ac1fc;
        case 0x1ac270u: goto label_1ac270;
        case 0x1ac2c0u: goto label_1ac2c0;
        case 0x1ac2e0u: goto label_1ac2e0;
        case 0x1ac2e8u: goto label_1ac2e8;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac324u: goto label_1ac324;
        case 0x1ac334u: goto label_1ac334;
        default: break;
    }

    ctx->pc = 0x1abe80u;

    // 0x1abe80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1abe80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1abe84: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1abe84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1abe88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1abe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abe8c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1abe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1abe90: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x1abe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x1abe94: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1abe94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1abe98: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1abe98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1abe9c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1abe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1abea0: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x1abea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x1abea4: 0xc06dbee  jal         func_1B6FB8
    ctx->pc = 0x1ABEA4u;
    SET_GPR_U32(ctx, 31, 0x1ABEACu);
    ctx->pc = 0x1ABEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEA4u;
    // 0x1abea8: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6FB8u, 0x1ABEA4u, 0x1ABEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEACu;
label_1abeac:
    // 0x1abeac: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1abeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1abeb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1abeb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1abeb4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1abeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1abeb8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1abeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1abebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abec0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abec4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1abec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1abec8: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1abec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abecc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abeccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abed0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1abed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1abed4: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1abed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
    // 0x1abed8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1abed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1abedc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1abedcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1abee0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1abee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1abee4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1abee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abee8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1abee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1abeec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abef0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1abef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1abef4: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1abef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1abef8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1abef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1abefc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abf00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1abf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1abf04: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1abf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1abf08: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1abf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1abf0c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x1ABF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF14u);
    ctx->pc = 0x1ABF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF0Cu;
    // 0x1abf10: 0xe463000c  swc1        $f3, 0xC($v1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x1ABF0Cu, 0x1ABF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF14u;
label_1abf14:
    // 0x1abf14: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ABF14u;
    {
        const bool branch_taken_0x1abf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF14u;
        // 0x1abf18: 0xae220624  sw          $v0, 0x624($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf14) {
            ctx->pc = 0x1ABF70u;
            goto label_1abf70;
        }
    }
    ctx->pc = 0x1ABF1Cu;
    // 0x1abf1c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1abf1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1abf20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF20u;
    {
        const bool branch_taken_0x1abf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF20u;
        // 0x1abf24: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf20) {
            ctx->pc = 0x1ABF34u;
            goto label_1abf34;
        }
    }
    ctx->pc = 0x1ABF28u;
    // 0x1abf28: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1abf2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABF2Cu;
    {
        const bool branch_taken_0x1abf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF2Cu;
        // 0x1abf30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf2c) {
            ctx->pc = 0x1ABF38u;
            goto label_1abf38;
        }
    }
    ctx->pc = 0x1ABF34u;
label_1abf34:
    // 0x1abf34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1abf34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1abf38:
    // 0x1abf38: 0x8e240624  lw          $a0, 0x624($s1)
    ctx->pc = 0x1abf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1abf3c: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x1abf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1abf40: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1abf40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1abf44: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1abf44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1abf48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1abf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1abf4c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1ABF4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF54u);
    ctx->pc = 0x1ABF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF4Cu;
    // 0x1abf50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1ABF4Cu, 0x1ABF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF54u;
label_1abf54:
    // 0x1abf54: 0x8e230624  lw          $v1, 0x624($s1)
    ctx->pc = 0x1abf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
    // 0x1abf58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abf60: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1abf60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1abf64: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1abf64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1abf68: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1ABF68u;
    SET_GPR_U32(ctx, 31, 0x1ABF70u);
    ctx->pc = 0x1ABF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF68u;
    // 0x1abf6c: 0x8e240624  lw          $a0, 0x624($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1572)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1ABF68u, 0x1ABF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF70u;
label_1abf70:
    // 0x1abf70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1abf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1abf74: 0x90437a51  lbu         $v1, 0x7A51($v0)
    ctx->pc = 0x1abf74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1abf78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1abf7c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x1abf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1abf80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ABF80u;
    {
        const bool branch_taken_0x1abf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF80u;
        // 0x1abf84: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf80) {
            ctx->pc = 0x1ABFA0u;
            goto label_1abfa0;
        }
    }
    ctx->pc = 0x1ABF88u;
    // 0x1abf88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1abf88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1abf8c: 0x24427e20  addiu       $v0, $v0, 0x7E20
    ctx->pc = 0x1abf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32288));
    // 0x1abf90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1abf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1abf94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1abf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1abf98: 0x800008  jr          $a0
    ctx->pc = 0x1ABF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABFA0u: goto label_1abfa0;
            case 0x1ABFB0u: goto label_1abfb0;
            case 0x1ABFC4u: goto label_1abfc4;
            case 0x1ABFD8u: goto label_1abfd8;
            case 0x1ABFECu: goto label_1abfec;
            case 0x1AC000u: goto label_1ac000;
            case 0x1AC014u: goto label_1ac014;
            case 0x1AC028u: goto label_1ac028;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1ABFA0u;
label_1abfa0:
    // 0x1abfa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abfa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abfa8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1ABFA8u;
    {
        const bool branch_taken_0x1abfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfa8) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1ABFB0u;
label_1abfb0:
    // 0x1abfb0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1abfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x1abfb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1abfb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1abfb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abfb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abfbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1ABFBCu;
    {
        const bool branch_taken_0x1abfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfbc) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1ABFC4u;
label_1abfc4:
    // 0x1abfc4: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1abfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1abfc8: 0x34216667  ori         $at, $at, 0x6667
    ctx->pc = 0x1abfc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26215);
    // 0x1abfcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abfccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abfd0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ABFD0u;
    {
        const bool branch_taken_0x1abfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfd0) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1ABFD8u;
label_1abfd8:
    // 0x1abfd8: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1abfd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x1abfdc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1abfdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1abfe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abfe4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1ABFE4u;
    {
        const bool branch_taken_0x1abfe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abfe4) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1ABFECu;
label_1abfec:
    // 0x1abfec: 0x3c01402c  lui         $at, 0x402C
    ctx->pc = 0x1abfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16428 << 16));
    // 0x1abff0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1abff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1abff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abff8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ABFF8u;
    {
        const bool branch_taken_0x1abff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1abff8) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1AC000u;
label_1ac000:
    // 0x1ac000: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x1ac000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x1ac004: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ac004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ac008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac00c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC00Cu;
    {
        const bool branch_taken_0x1ac00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac00c) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1AC014u;
label_1ac014:
    // 0x1ac014: 0x3c014066  lui         $at, 0x4066
    ctx->pc = 0x1ac014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16486 << 16));
    // 0x1ac018: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ac018u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ac01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC020u;
    {
        const bool branch_taken_0x1ac020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac020) {
            ctx->pc = 0x1AC030u;
            goto label_1ac030;
        }
    }
    ctx->pc = 0x1AC028u;
label_1ac028:
    // 0x1ac028: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1ac028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1ac02c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac02cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac030:
    // 0x1ac030: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1ac030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1ac034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ac034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac038: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x1AC038u;
    SET_GPR_U32(ctx, 31, 0x1AC040u);
    ctx->pc = 0x1AC03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC038u;
    // 0x1ac03c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x1AC038u, 0x1AC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC040u;
label_1ac040:
    // 0x1ac040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac044: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x1ac044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ac048: 0xa6230548  sh          $v1, 0x548($s1)
    ctx->pc = 0x1ac048u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ac04c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1ac04cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1ac050: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1ac050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ac054: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x1ac054u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ac058: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1ac058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x1ac05c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ac05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ac060: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ac060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ac064: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1ac064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ac068: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1ac068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x1ac06c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ac06cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ac070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac074: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1ac074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ac078: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1ac078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ac07c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ac07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac080: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1ac080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1ac084: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac088: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ac08c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac090: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac094: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ac094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ac098: 0x26844380  addiu       $a0, $s4, 0x4380
    ctx->pc = 0x1ac098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17280));
    // 0x1ac09c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ac09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1ac0a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ac0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ac0a4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1ac0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ac0a8: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1ac0a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ac0ac: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ac0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1ac0b0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ac0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1ac0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac0b8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1ac0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1ac0bc: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1ac0bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1ac0c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1ac0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1ac0c4: 0xc07f83a  jal         func_1FE0E8
    ctx->pc = 0x1AC0C4u;
    SET_GPR_U32(ctx, 31, 0x1AC0CCu);
    ctx->pc = 0x1AC0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC0C4u;
    // 0x1ac0c8: 0xe603000c  swc1        $f3, 0xC($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE0E8u, 0x1AC0C4u, 0x1AC0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC0CCu;
label_1ac0cc:
    // 0x1ac0cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ac0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0d0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AC0D0u;
    {
        const bool branch_taken_0x1ac0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0D0u;
        // 0x1ac0d4: 0xae220628  sw          $v0, 0x628($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0d0) {
            ctx->pc = 0x1AC148u;
            goto label_1ac148;
        }
    }
    ctx->pc = 0x1AC0D8u;
    // 0x1ac0d8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1ac0d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ac0dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC0DCu;
    {
        const bool branch_taken_0x1ac0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0DCu;
        // 0x1ac0e0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0dc) {
            ctx->pc = 0x1AC0F0u;
            goto label_1ac0f0;
        }
    }
    ctx->pc = 0x1AC0E4u;
    // 0x1ac0e4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ac0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ac0e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC0E8u;
    {
        const bool branch_taken_0x1ac0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC0E8u;
        // 0x1ac0ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac0e8) {
            ctx->pc = 0x1AC0F4u;
            goto label_1ac0f4;
        }
    }
    ctx->pc = 0x1AC0F0u;
label_1ac0f0:
    // 0x1ac0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ac0f4:
    // 0x1ac0f4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1ac0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1ac0f8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ac0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ac0fc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1ac0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1ac100: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1ac100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1ac104: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1ac104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1ac108: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ac108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac10c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac114: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ac114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac118: 0x8e240628  lw          $a0, 0x628($s1)
    ctx->pc = 0x1ac118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1ac11c: 0xc07f676  jal         func_1FD9D8
    ctx->pc = 0x1AC11Cu;
    SET_GPR_U32(ctx, 31, 0x1AC124u);
    ctx->pc = 0x1AC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC11Cu;
    // 0x1ac120: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD9D8u, 0x1AC11Cu, 0x1AC124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC124u;
label_1ac124:
    // 0x1ac124: 0x8e240628  lw          $a0, 0x628($s1)
    ctx->pc = 0x1ac124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1ac128: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x1ac128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1ac12c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1ac12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ac130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac134: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1ac134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ac138: 0x8e220628  lw          $v0, 0x628($s1)
    ctx->pc = 0x1ac138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1576)));
    // 0x1ac13c: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1ac13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1ac140: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1AC140u;
    SET_GPR_U32(ctx, 31, 0x1AC148u);
    ctx->pc = 0x1AC144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC140u;
    // 0x1ac144: 0x8e240628  lw          $a0, 0x628($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1AC140u, 0x1AC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC148u;
label_1ac148:
    // 0x1ac148: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1ac148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac14c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ac14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac150: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1ac150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ac158: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ac158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ac15c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ac15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ac160: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ac160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ac164: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ac164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ac168: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x1ac168u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1ac16c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ac16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ac170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ac170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ac174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac178: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1ac178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac17c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1ac17cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ac180: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ac180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ac184: 0x4bc52100  vaddx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ac184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ac188: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1ac188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ac18c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ac18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac190: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ac194: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ac194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ac198: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ac198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac19c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1ac19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1ac1a0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1ac1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1ac1a4: 0x24487dc0  addiu       $t0, $v0, 0x7DC0
    ctx->pc = 0x1ac1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32192));
    // 0x1ac1a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ac1a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ac1ac: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1ac1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x1ac1b0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1ac1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ac1b4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1ac1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1b8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1ac1b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1bc: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x1ac1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x1ac1c0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1ac1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ac1c4: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x1ac1c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1ac1c8: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x1ac1c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ac1cc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1ac1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1ac1d0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1ac1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x1ac1d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AC1D4u;
    {
        const bool branch_taken_0x1ac1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC1D4u;
        // 0x1ac1d8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1d4) {
            ctx->pc = 0x1AC250u;
            goto label_1ac250;
        }
    }
    ctx->pc = 0x1AC1DCu;
    // 0x1ac1dc: 0x250d0060  addiu       $t5, $t0, 0x60
    ctx->pc = 0x1ac1dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x1ac1e0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1ac1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1ac1e4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1ac1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1ac1e8: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x1ac1e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ac1ec: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ac1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ac1f0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ac1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ac1f4: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x1ac1f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ac1f8: 0x27ac00d0  addiu       $t4, $sp, 0xD0
    ctx->pc = 0x1ac1f8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ac1fc:
    // 0x1ac1fc: 0x690e0007  ldl         $t6, 0x7($t0)
    ctx->pc = 0x1ac1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x1ac200: 0x6d0e0000  ldr         $t6, 0x0($t0)
    ctx->pc = 0x1ac200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x1ac204: 0x690f000f  ldl         $t7, 0xF($t0)
    ctx->pc = 0x1ac204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
    // 0x1ac208: 0x6d0f0008  ldr         $t7, 0x8($t0)
    ctx->pc = 0x1ac208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x1ac20c: 0x69100017  ldl         $s0, 0x17($t0)
    ctx->pc = 0x1ac20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1ac210: 0x6d100010  ldr         $s0, 0x10($t0)
    ctx->pc = 0x1ac210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1ac214: 0x6914001f  ldl         $s4, 0x1F($t0)
    ctx->pc = 0x1ac214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x1ac218: 0x6d140018  ldr         $s4, 0x18($t0)
    ctx->pc = 0x1ac218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x1ac21c: 0xb0ae0007  sdl         $t6, 0x7($a1)
    ctx->pc = 0x1ac21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac220: 0xb4ae0000  sdr         $t6, 0x0($a1)
    ctx->pc = 0x1ac220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac224: 0xb0af000f  sdl         $t7, 0xF($a1)
    ctx->pc = 0x1ac224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac228: 0xb4af0008  sdr         $t7, 0x8($a1)
    ctx->pc = 0x1ac228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 15); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac22c: 0xb0b00017  sdl         $s0, 0x17($a1)
    ctx->pc = 0x1ac22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac230: 0xb4b00010  sdr         $s0, 0x10($a1)
    ctx->pc = 0x1ac230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac234: 0xb0b4001f  sdl         $s4, 0x1F($a1)
    ctx->pc = 0x1ac234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac238: 0xb4b40018  sdr         $s4, 0x18($a1)
    ctx->pc = 0x1ac238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 20); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac23c: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1ac23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1ac240: 0x150dffee  bne         $t0, $t5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1AC240u;
    {
        const bool branch_taken_0x1ac240 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 13));
        ctx->pc = 0x1AC244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC240u;
        // 0x1ac244: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac240) {
            ctx->pc = 0x1AC1FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1fc;
        }
    }
    ctx->pc = 0x1AC248u;
    // 0x1ac248: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AC248u;
    {
        const bool branch_taken_0x1ac248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC248u;
        // 0x1ac24c: 0xafa90010  sw          $t1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac248) {
            ctx->pc = 0x1AC2A0u;
            goto label_1ac2a0;
        }
    }
    ctx->pc = 0x1AC250u;
label_1ac250:
    // 0x1ac250: 0x250d0060  addiu       $t5, $t0, 0x60
    ctx->pc = 0x1ac250u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 96));
    // 0x1ac254: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x1ac254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1ac258: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1ac258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1ac25c: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x1ac25cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ac260: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1ac260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ac264: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x1ac264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ac268: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x1ac268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ac26c: 0x27ac00d0  addiu       $t4, $sp, 0xD0
    ctx->pc = 0x1ac26cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ac270:
    // 0x1ac270: 0xdd0e0000  ld          $t6, 0x0($t0)
    ctx->pc = 0x1ac270u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ac274: 0xdd0f0008  ld          $t7, 0x8($t0)
    ctx->pc = 0x1ac274u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ac278: 0xdd100010  ld          $s0, 0x10($t0)
    ctx->pc = 0x1ac278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1ac27c: 0xdd140018  ld          $s4, 0x18($t0)
    ctx->pc = 0x1ac27cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1ac280: 0xfcae0000  sd          $t6, 0x0($a1)
    ctx->pc = 0x1ac280u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 14));
    // 0x1ac284: 0xfcaf0008  sd          $t7, 0x8($a1)
    ctx->pc = 0x1ac284u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 15));
    // 0x1ac288: 0xfcb00010  sd          $s0, 0x10($a1)
    ctx->pc = 0x1ac288u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 16));
    // 0x1ac28c: 0xfcb40018  sd          $s4, 0x18($a1)
    ctx->pc = 0x1ac28cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 20));
    // 0x1ac290: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x1ac290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1ac294: 0x150dfff6  bne         $t0, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AC294u;
    {
        const bool branch_taken_0x1ac294 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 13));
        ctx->pc = 0x1AC298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC294u;
        // 0x1ac298: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac294) {
            ctx->pc = 0x1AC270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac270;
        }
    }
    ctx->pc = 0x1AC29Cu;
    // 0x1ac29c: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1ac29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
label_1ac2a0:
    // 0x1ac2a0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ac2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2a4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ac2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ac2a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1ac2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ac2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ac2b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ac2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2b4: 0xafac0018  sw          $t4, 0x18($sp)
    ctx->pc = 0x1ac2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    // 0x1ac2b8: 0xc04bab6  jal         func_12EAD8
    ctx->pc = 0x1AC2B8u;
    SET_GPR_U32(ctx, 31, 0x1AC2C0u);
    ctx->pc = 0x1AC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2B8u;
    // 0x1ac2bc: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EAD8u, 0x1AC2B8u, 0x1AC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2C0u;
label_1ac2c0:
    // 0x1ac2c0: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1ac2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2c8: 0x3c014046  lui         $at, 0x4046
    ctx->pc = 0x1ac2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16454 << 16));
    // 0x1ac2cc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ac2ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ac2d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ac2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ac2d4: 0x34630188  ori         $v1, $v1, 0x188
    ctx->pc = 0x1ac2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)392);
    // 0x1ac2d8: 0xc06b69c  jal         func_1ADA70
    ctx->pc = 0x1AC2D8u;
    SET_GPR_U32(ctx, 31, 0x1AC2E0u);
    ctx->pc = 0x1AC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2D8u;
    // 0x1ac2dc: 0xae2305b8  sw          $v1, 0x5B8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA70u, 0x1AC2D8u, 0x1AC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2E0u;
label_1ac2e0:
    // 0x1ac2e0: 0xc06b6ba  jal         func_1ADAE8
    ctx->pc = 0x1AC2E0u;
    SET_GPR_U32(ctx, 31, 0x1AC2E8u);
    ctx->pc = 0x1AC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC2E0u;
    // 0x1ac2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADAE8u, 0x1AC2E0u, 0x1AC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC2E8u;
label_1ac2e8:
    // 0x1ac2e8: 0x8e2205e0  lw          $v0, 0x5E0($s1)
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1504)));
    // 0x1ac2ec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC2ECu;
    {
        const bool branch_taken_0x1ac2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac2ec) {
            ctx->pc = 0x1AC2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC2ECu;
            // 0x1ac2f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC32Cu;
            goto label_1ac32c;
        }
    }
    ctx->pc = 0x1AC2F4u;
    // 0x1ac2f4: 0x9043002c  lbu         $v1, 0x2C($v0)
    ctx->pc = 0x1ac2f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1ac2f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC2F8u;
    {
        const bool branch_taken_0x1ac2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC2F8u;
        // 0x1ac2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2f8) {
            ctx->pc = 0x1AC308u;
            goto label_1ac308;
        }
    }
    ctx->pc = 0x1AC300u;
    // 0x1ac300: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC300u;
    {
        const bool branch_taken_0x1ac300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC300u;
        // 0x1ac304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac300) {
            ctx->pc = 0x1AC31Cu;
            goto label_1ac31c;
        }
    }
    ctx->pc = 0x1AC308u;
label_1ac308:
    // 0x1ac308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ac308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac30c: 0xc06b6a2  jal         func_1ADA88
    ctx->pc = 0x1AC30Cu;
    SET_GPR_U32(ctx, 31, 0x1AC314u);
    ctx->pc = 0x1AC310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC30Cu;
    // 0x1ac310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA88u, 0x1AC30Cu, 0x1AC314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC314u;
label_1ac314:
    // 0x1ac314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC314u;
    {
        const bool branch_taken_0x1ac314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC314u;
        // 0x1ac318: 0x8e2305a0  lw          $v1, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac314) {
            ctx->pc = 0x1AC338u;
            goto label_1ac338;
        }
    }
    ctx->pc = 0x1AC31Cu;
label_1ac31c:
    // 0x1ac31c: 0xc06b6a2  jal         func_1ADA88
    ctx->pc = 0x1AC31Cu;
    SET_GPR_U32(ctx, 31, 0x1AC324u);
    ctx->pc = 0x1AC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC31Cu;
    // 0x1ac320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA88u, 0x1AC31Cu, 0x1AC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC324u;
label_1ac324:
    // 0x1ac324: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC324u;
    {
        const bool branch_taken_0x1ac324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC324u;
        // 0x1ac328: 0x8e2305a0  lw          $v1, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac324) {
            ctx->pc = 0x1AC338u;
            goto label_1ac338;
        }
    }
    ctx->pc = 0x1AC32Cu;
label_1ac32c:
    // 0x1ac32c: 0xc06b6a2  jal         func_1ADA88
    ctx->pc = 0x1AC32Cu;
    SET_GPR_U32(ctx, 31, 0x1AC334u);
    ctx->pc = 0x1AC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC32Cu;
    // 0x1ac330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA88u, 0x1AC32Cu, 0x1AC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC334u;
label_1ac334:
    // 0x1ac334: 0x8e2305a0  lw          $v1, 0x5A0($s1)
    ctx->pc = 0x1ac334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_1ac338:
    // 0x1ac338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac33c: 0xa220060e  sb          $zero, 0x60E($s1)
    ctx->pc = 0x1ac33cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac340: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1ac340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1ac344: 0xa6200610  sh          $zero, 0x610($s1)
    ctx->pc = 0x1ac344u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1552), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ac348: 0xae2305a0  sw          $v1, 0x5A0($s1)
    ctx->pc = 0x1ac348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 3));
    // 0x1ac34c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1ac34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1ac350: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1ac350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ac354: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1ac354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ac358: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1ac358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ac35c: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x1ac35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ac360: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1ac360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ac364: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC364u;
        // 0x1ac368: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC36Cu;
    // 0x1ac36c: 0x0  nop
    ctx->pc = 0x1ac36cu;
    // NOP
    ctx->pc = 0x1ac370u;
}
